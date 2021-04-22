#include "chip8.h"
#include <iostream>
#include <fstream>

using namespace std;

const unsigned int START = 0x200;

void Chip8::loadRom(const char* file) {
  ifstream input(file, ios::binary);
  if(input.is_open()) {
    input.seekg(0, ios::end);
    int file_size = input.tellg();
    char* buffer = new char[file_size];
    input.seekg(0, ios::beg);
    input.read(buffer, file_size);

    for(int i = 0; i < file_size; i++) {
      mem[START + i ] = buffer [i];
    }

    delete[] buffer;
  }



  input.close();
}