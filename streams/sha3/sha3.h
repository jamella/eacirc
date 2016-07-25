#pragma once

#include "interface.h"
#include <ea-json.h>
#include <ea-stream.h>

namespace ea {
namespace sha3 {

enum mode { COUNTER };

struct sha3 : stream {
    sha3(const json &settings);

    void read(dataset &set) override;

private:
    mode _mode;
    std::uint64_t _counter;
    std::unique_ptr<interface> _hasher;

    void _hash(std::size_t plaintext_bitsize, const std::uint8_t *plaintext,
               std::size_t cyphertext_bitsize, std::uint8_t *cyphertext);
    void _mode_counter(dataset &data);
};

} // namespace sha3
} // namespace ea
