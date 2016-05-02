#pragma once

#include <array>
#include <core/base.h>
#include <core/bitset.h>
#include <core/compiletime.h>

namespace circuit {
enum class Fn : u8 {
    NOP,
    CONS,
    AND,
    NAND,
    OR,
    XOR,
    NOR,
    NOT,
    SHIL,
    SHIR,
    ROTL,
    ROTR,
    MASK,
    _Size // this must be the last item of this enum
};

template <class IO, class Shape> using Connectors = Bitset<Max<IO::in, Shape::x>::value>;

template <class IO, class Shape> struct Node {
    Fn function = Fn::NOP;
    u8 argument = 0u;
    Connectors<IO, Shape> connectors = 0u;
};

template <class IO, class Shape> struct Genotype {
private:
    using Layer = std::array<Node<IO, Shape>, Shape::x>;
    using Storage = std::array<Layer, Shape::y>;

    Storage _layers;

public:
    const static unsigned num_of_nodes = Shape::x * (Shape::y - 1) + IO::out - 1;

    auto begin() -> typename Storage::iterator { return _layers.begin(); }
    auto begin() const -> typename Storage::const_iterator { return _layers.begin(); }

    auto end() -> typename Storage::iterator { return _layers.end(); }
    auto end() const -> typename Storage::const_iterator { return _layers.end(); }

    auto operator[](size_t i) -> Layer& { return _layers[i]; }
    auto operator[](size_t i) const -> Layer const& { return _layers[i]; }

    auto node(size_t i) -> Node<IO, Shape>& { return _layers.front()[i]; }
    auto node(size_t i) const -> Node<IO, Shape> const& { return _layers.front()[i]; }

    ////////////////// statistics START
    std::array<u64, 13> get_function_count() const;
    ////////////////// statistics END
};
} // namespace circuit

#include <cassert>

namespace circuit {
template <class IO, class Shape> struct Prunner {
    std::array<u64, 13> _counts = {};
    std::array<std::array<bool, Shape::x>, Shape::y> _visited = {};

public:
    std::array<u64, 13> prune(Genotype<IO, Shape> const& circuit) {
        _counts = {};
        _visited = {};

        for (size_t x = 0; x != IO::out; ++x)
            dfs(circuit, static_cast<int>(Shape::y) - 1, x);
        return _counts;
    }

    void dfs(Genotype<IO, Shape> const& circuit, const int y, const int x) {
        if (y < 0)
            return;
        if (_visited[y][x] == true)
            return;
        _visited[y][x] = true;

        auto& node = circuit[y][x];
        _counts[static_cast<size_t>(node.function)]++;

        auto con = node.connectors.begin();
        const auto end = node.connectors.end();

        switch (node.function) {
        case Fn::CONS:
            break;
        case Fn::AND:
        case Fn::NAND:
        case Fn::OR:
        case Fn::XOR:
        case Fn::NOR:
            for (; con != end; ++con)
                dfs(circuit, y - 1, *con);
            break;
        case Fn::NOP:
        case Fn::NOT:
        case Fn::SHIL:
        case Fn::SHIR:
        case Fn::ROTL:
        case Fn::ROTR:
        case Fn::MASK:
            if (con != end)
                dfs(circuit, y - 1, *con);
            break;
        case Fn::_Size:
            assert(false);
            break;
        }
    }
};

template <class IO, class Shape>
std::array<u64, 13> Genotype<IO, Shape>::get_function_count() const {
    return Prunner<IO, Shape>().prune(*this);
}
} // namespace circuit
