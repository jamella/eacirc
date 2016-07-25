#include "sha3.h"

using namespace ea::sha3;

sha3::sha3(const json &settings) {}

void sha3::read(dataset &data) {
    switch (_mode) {
    case mode::COUNTER:
        _mode_counter(data);
        break;
    }
}

void sha3::_hash(std::size_t plaintext_bitsize, const std::uint8_t *plaintext,
                 std::size_t cyphertext_bitsize, std::uint8_t *cyphertext) {
    int status = 0;

    status = _hasher->Init(cyphertext_bitsize);
    if (status != 0)
        throw stream_error("Can't initialize hash (status: "
                           + std::to_string(status) + ").");

    status = _hasher->Update(plaintext, plaintext_bitsize);
    if (status != 0)
        throw stream_error("Can't update hash (status: "
                           + std::to_string(status) + ")");

    status = _hasher->Final(cyphertext);
    if (status != 0)
        throw stream_error("Can't finalize hash (status: "
                           + std::to_string(status) + ")");
}

void sha3::_mode_counter(dataset &data) {
    auto plaintext_bitsize = 8 * sizeof(_counter);
    auto plaintext = reinterpret_cast<const std::uint8_t *>(&_counter);

    _hash(plaintext_bitsize, plaintext, cyphertext_bitsize, cyphertext);
    ++_counter;
}
