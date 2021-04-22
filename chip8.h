#include <cstdint>
#include <iostream>
#ifndef CHIP8_H
#define CHIP8_H
using namespace std;
class Chip8
{

private:
//
public:
  uint8_t cpuRegs[16]{}; // 8 bit registers
  uint8_t mem[4096]; // chip-8 system has 4KB of memory
  uint16_t indexReg[16]; // use to store memory addresses(16 bit)
  uint16_t pc{}; // 16 bit program counter
  uint16_t progStack[16]; 
  uint8_t sp{};
  uint8_t delayClock{};
	uint8_t soundClock{};
	uint8_t keyboard[16]{};
	uint32_t screen[64 * 32]{};
	uint16_t opCode;

  void loadRom(const char*);

  Chip8();

};

#endif 
