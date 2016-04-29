#pragma once

#include "solver.h"
#include <algorithm>
#include <core/base.h>
#include <fstream>
#include <functional>
#include <random>

template <
        class Genotype, class Initializer, class Mutator, class Evaluator,
        class Generator = std::mt19937>
struct LocalSearch : Solver {
private:
    Mutator _mutator;
    Evaluator _evaluator;
    Initializer _initializer;

    Generator _generator;
    Solution<Genotype, double> _solution;

    ////////////////// statistics START
    std::vector<double> _best_scores;
    std::array<u64, 13> _histogram_epoch; // we have 13 functions
    ////////////////// statistics END

public:
    LocalSearch(Initializer&& inititalizer, Mutator&& mutator, Evaluator&& evaluator, u64 seed)
        : _mutator(std::move(mutator))
        , _evaluator(std::move(evaluator))
        , _initializer(std::move(inititalizer))
        , _generator(seed) {}

    ~LocalSearch() {
        ////////////////// statistics START
        std::ofstream best_scores_file("best_scores.csv");
        for (double score : _best_scores)
            best_scores_file << score << std::endl;
        ////////////////// statistics END

        ////////////////// statistics START
        std::ofstream histogram_epoch_file("histogram_epoch.csv");
        for (auto function_count : _histogram_epoch)
            histogram_epoch_file << function_count << std::endl;
        ////////////////// statistics END


        ////////////////// statistics START
        std::ofstream histogram_last_file("histogram_last.csv");
        auto counts_last = _solution.genotype.get_function_count();
        for (auto function_count : counts_last)
            histogram_last_file << function_count << std::endl;
        ////////////////// statistics END
    }

    void init() override { _initializer(_solution.genotype, _generator); }

    void run(const size_t iterations) override {
        for (size_t i = 0; i != iterations; ++i) {
            auto neighbour = _solution;

            _mutator(neighbour.genotype, _generator);
            neighbour.score = _evaluator(neighbour.genotype);

            if (_solution.score <= neighbour.score)
                _solution = std::move(neighbour);

            ////////////////// statistics START
            _best_scores.emplace_back(_solution.score);
            ////////////////// statistics END
        }
    }

    double reevaluate() override {
        _solution.score = _evaluator(_solution.genotype);

        ////////////////// statistics START
        _best_scores.emplace_back(_solution.score);

        auto epoch = _solution.genotype.get_function_count();
        std::transform(
                epoch.begin(), epoch.end(), _histogram_epoch.begin(), _histogram_epoch.begin(),
                std::plus<u64>{});
        ////////////////// statistics END

        return _solution.score;
    }

    void replace_datasets(Dataset const& a, Dataset const& b) override {
        _evaluator.replace_datasets(a, b);
    }
};
