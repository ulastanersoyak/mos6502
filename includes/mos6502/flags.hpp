#ifndef FLAGS_HPP
#define FLAGS_HPP

namespace mos6502
{

// represents structure of a mos6502 8bit processor's flags
//
// for details:
// https://www.nesdev.org/obelisk-6502-guide/registers.html
struct flags
{
  // clang-format off
  bool carry{ false };             // set if the last operation caused an overflow from bit 7 of the result or an underflow from bit 0
  bool zero{ false };              // set if the result of the last operation as was zero
  bool overflow{ false };          // set during arithmetic operations if the result has yielded an invalid 2's complement result
  bool negative{ false };          // set if the result of the last operation had bit 7 set to a one
  bool interrupt_disable{ false }; // set if the program has executed set interrupt disable(SEI) instruction
                                   // while this flag is set the processor will not respond to interrupts from devices
                                   
  bool decimal_mode{ false };      // set using set decimal flag(SED)
                                   // while the decimal mode flag is set the processor will obey the rules of binary coded decimal(BCD) arithmetic
  bool break_command{ false };     //set when a BRK instruction has been executed

  // clang-format on
};

}

#endif // !FLAGS_HPP
