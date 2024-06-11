#ifndef MOS6502
#define MOS6502

#include <array>
#include <cstdint>
#include <memory>

#include "constants.hpp"
#include "flags.hpp"
#include "registers.hpp"

namespace mos6502
{

// https://www.nesdev.org/obelisk-6502-guide/architecture.html
class mos6502
{
  std::unique_ptr<flags> flags_ptr = std::make_unique<flags> ();
  std::unique_ptr<registers> registers_ptr = std::make_unique<registers> ();
  std::unique_ptr<std::array<std::uint8_t, MOS6502_MEMORY_SIZE> > memory_ptr
      = std::make_unique<std::array<std::uint8_t, MOS6502_MEMORY_SIZE> > ();
};

}

#endif // !MOS6502
