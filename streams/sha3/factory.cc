#include "factory.h"
#include <stdexcept>

using namespace ea::sha3;

void _check_rounds(algorithm alg, unsigned rounds) {
    if (rounds > 0)
        throw std::logic_error{to_string(alg)
                               + " cannot be limited in rounds!"};
}

// clang-format off
std::unique_ptr<interface> factory::create(algorithm alg, unsigned rounds) {
    switch (alg) {
    case algorithm::ABACUS:       return std::make_unique<Abacus>(rounds);
    case algorithm::ARIRANG:      return std::make_unique<Arirang>(rounds);
    case algorithm::AURORA:       return std::make_unique<Aurora>(rounds);
    case algorithm::BLAKE:        return std::make_unique<Blake>(rounds);
    case algorithm::BLENDER:      return std::make_unique<Blender>(rounds);
    case algorithm::BMW:          return std::make_unique<BMW>(rounds);
    case algorithm::BOOLE:        return std::make_unique<Boole>(rounds);
    case algorithm::CHEETAH:      return std::make_unique<Cheetah>(rounds);
    case algorithm::CHI:          return std::make_unique<Chi>(rounds);
    case algorithm::CRUNCH:       return std::make_unique<Crunch>(rounds);
    case algorithm::CUBEHASH:     return std::make_unique<Cubehash>(rounds);
    case algorithm::DCH:          return std::make_unique<DCH>(rounds);
    case algorithm::DYNAMICSHA:   return std::make_unique<DSHA>(rounds);
    case algorithm::DYNAMICSHA2:  return std::make_unique<DSHA2>(rounds);
    case algorithm::ECHO:         return std::make_unique<Echo>(rounds);
    // case algorithm::ECOH:        return std::make_unique<Ecoh>();
    case algorithm::EDON:         _check_rounds(algorithm, rounds);
                                       return std::make_unique<Edon>();
    // case algorithm::ENRUPT:      return std::make_unique<Enrupt>();
    case algorithm::ESSENCE:      return std::make_unique<Essence>(rounds);
    case algorithm::FUGUE:        return std::make_unique<Fugue>(rounds);
    case algorithm::GROSTL:       return std::make_unique<Grostl>(rounds);
    case algorithm::HAMSI:        return std::make_unique<Hamsi>(rounds);
    case algorithm::JH:           return std::make_unique<JH>(rounds);
    case algorithm::KECCAK:       _check_rounds(algorithm, rounds);
                                       return std::make_unique<Keccak>();
    case algorithm::KHICHIDI:     _check_rounds(algorithm, rounds);
                                       return std::make_unique<Khichidi>();
    case algorithm::LANE:         return std::make_unique<Lane>(rounds);
    case algorithm::LESAMNTA:     return std::make_unique<Lesamnta>(rounds);
    case algorithm::LUFFA:        return std::make_unique<Luffa>(rounds);
    // case algorithm::LUX:         return std::make_unique<Lux>(rounds);
    case algorithm::MSCSHA3:      _check_rounds(algorithm, rounds);
                                       return std::make_unique<Mscsha>();
    case algorithm::MD6:          return std::make_unique<MD6>(rounds);
    case algorithm::MESHHASH:     return std::make_unique<MeshHash>(rounds);
    case algorithm::NASHA:        _check_rounds(algorithm, rounds);
                                       return std::make_unique<Nasha>();
    // case algorithm::SANDSTORM:   return std::make_unique<SandStorm>(rounds);
    case algorithm::SARMAL:       return std::make_unique<Sarmal>(rounds);
    case algorithm::SHABAL:       _check_rounds(algorithm, rounds);
                                       return std::make_unique<Shabal>();
    case algorithm::SHAMATA:      _check_rounds(algorithm, rounds);
                                       return std::make_unique<Shamata>();
    case algorithm::SHAVITE3:     return std::make_unique<SHAvite>(rounds);
    case algorithm::SIMD:         return std::make_unique<Simd>(rounds);
    case algorithm::SKEIN:        _check_rounds(algorithm, rounds);
                                       return std::make_unique<Skein>();
    case algorithm::SPECTRALHASH: _check_rounds(algorithm, rounds);
                                       return std::make_unique<SpectralHash>();
    case algorithm::STREAMHASH:   _check_rounds(algorithm, rounds);
                                       return std::make_unique<StreamHash>();
    // case algorithm::SWIFFTX:     return std::make_unique<Swifftx>();
    case algorithm::TANGLE:       return std::make_unique<Tangle>(rounds);
    // case algorithm::TIB3:        return std::make_unique<Tib>(rounds);
    case algorithm::TWISTER:      return std::make_unique<Twister>(rounds);
    case algorithm::VORTEX:       return std::make_unique<Vortex>(rounds);
    case algorithm::WAMM:         return std::make_unique<WaMM>(rounds);
    case algorithm::WATERFALL:    return std::make_unique<Waterfall>(rounds);
    case algorithm::TANGLE2:      return std::make_unique<Tangle2>(rounds);
    }
}
// clang-format on

// clang-format off
std::string to_string(algorithm alg) {
    switch (alg) {
    case algorithm::ABACUS:           return "Abacus";
    case algorithm::ARIRANG:          return "ARIRANG";
    case algorithm::AURORA:           return "Aurora";
    case algorithm::BLAKE:            return "Blake";
    case algorithm::BLENDER:          return "Blender";
    case algorithm::BMW:              return "BMW";
    case algorithm::BOOLE:            return "Boole";
    case algorithm::CHEETAH:          return "Cheetah";
    case algorithm::CHI:              return "CHI";
    case algorithm::CRUNCH:           return "CRUNCH";
    case algorithm::CUBEHASH:         return "CubeHash";
    case algorithm::DCH:              return "DCH";
    case algorithm::DYNAMICSHA:       return "DynamicSHA";
    case algorithm::DYNAMICSHA2:      return "DynamicSHA2";
    case algorithm::ECHO:             return "ECHO";
    case algorithm::ECOH:             return "ECOH";
    case algorithm::EDON:             return "EDON";
    case algorithm::ENRUPT:           return "EnRUPT";
    case algorithm::ESSENCE:          return "ESSENCE";
    case algorithm::FUGUE:            return "Fugue";
    case algorithm::GROSTL:           return "Grostl";
    case algorithm::HAMSI:            return "Hamsi";
    case algorithm::JH:               return "JH";
    case algorithm::KECCAK:           return "Keccak";
    case algorithm::KHICHIDI:         return "Khichidi";
    case algorithm::LANE:             return "Lane";
    case algorithm::LESAMNTA:         return "Lesamnta";
    case algorithm::LUFFA:            return "Luffa";
    case algorithm::LUX:              return "LUX";
    case algorithm::MSCSHA3:          return "MCSSHA3";
    case algorithm::MD6:              return "MD6";
    case algorithm::MESHHASH:         return "MeshHash";
    case algorithm::NASHA:            return "NaSHA";
    case algorithm::SANDSTORM:        return "SANDstorm";
    case algorithm::SARMAL:           return "Sarmal";
    case algorithm::SHABAL:           return "Shabal";
    case algorithm::SHAMATA:          return "Shameta";
    case algorithm::SHAVITE3:         return "SHAvite3";
    case algorithm::SIMD:             return "SIMD";
    case algorithm::SKEIN:            return "Skein";
    case algorithm::SPECTRALHASH:     return "SpectralHash";
    case algorithm::STREAMHASH:       return "StreamHash";
    case algorithm::SWIFFTX:          return "SWIFFTX";
    case algorithm::TANGLE:           return "Tangle";
    case algorithm::TIB3:             return "TIB3";
    case algorithm::TWISTER:          return "Twister";
    case algorithm::VORTEX:           return "Vortex";
    case algorithm::WAMM:             return "WaMM";
    case algorithm::WATERFALL:        return "Waterfall";
    case algorithm::TANGLE2:          return "Tangle2";
    }
}
// clang-format on
