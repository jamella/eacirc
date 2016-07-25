#pragma once

#include "interface.h"
#include <memory>

namespace ea {
namespace sha3 {

enum class algorithm {
    ABACUS,
    ARIRANG,
    AURORA,
    BLAKE,
    BLENDER,
    BMW,
    BOOLE,
    CHEETAH,
    CHI,
    CRUNCH,
    CUBEHASH,
    DCH,
    DYNAMICSHA,
    DYNAMICSHA2,
    ECHO,
    ECOH,
    EDON,
    ENRUPT,
    ESSENCE,
    FUGUE,
    GROSTL,
    HAMSI,
    JH,
    KECCAK,
    KHICHIDI,
    LANE,
    LESAMNTA,
    LUFFA,
    LUX,
    MSCSHA3,
    MD6,
    MESHHASH,
    NASHA,
    SANDSTORM,
    SARMAL,
    SHABAL,
    SHAMATA,
    SHAVITE3,
    SIMD,
    SKEIN,
    SPECTRALHASH,
    STREAMHASH,
    SWIFFTX,
    TANGLE,
    TIB3,
    TWISTER,
    VORTEX,
    WAMM,
    WATERFALL,
    TANGLE2,
};

std::string to_string(algorithm);

struct factory {
    static std::unique_ptr<interface> create(algorithm alg, unsigned rounds);
};

} // namespace sha3
} // namespace ea
