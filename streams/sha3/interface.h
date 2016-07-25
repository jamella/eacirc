#pragma once

#include <cstddef>
#include <cstdint>

namespace ea {
namespace sha3 {

struct interface {
    virtual ~interface() = default;

    virtual int Init(std::size_t hash_bitsize) = 0;
    virtual int Update(const std::uint8_t *data, std::size_t data_bitsize) = 0;
    virtual int Final(std::uint8_t *hash) = 0;
};

} // namespace sha3
} // namespace ea
