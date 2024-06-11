#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <cstdint>

// 64kb address space
inline constexpr std::uint32_t MOS6502_MEMORY_SIZE{ sizeof (std::uint8_t)
                                                    * 1024 * 64 };

#endif // !CONSTANTS_HPP
