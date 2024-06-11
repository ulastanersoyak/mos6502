#ifndef REGISTERS_HPP
#define REGISTERS_HPP

#include <cstdint>

namespace mos6502
{

// represents structure of a mos6502 8bit processor's registers
//
// for details:
// https://www.nesdev.org/obelisk-6502-guide/registers.html
struct registers
{
  // clang-format off
  std::uint16_t inst_ptr{0};     // points to the next instruction to be executed.
  std::uint8_t stack_ptr{0};     // 256 byte stack located between $0100 and $01FF
  std::uint8_t accumulator{ 0 }; // used in arithmetic and logical operations
  std::uint8_t X{ 0 };           // used to hold counters or offsets for accessing memory
  std::uint8_t Y{ 0 };           // similar to the X register
};

}
#endif // !REGISTERS_HPP
