#pragma once

#include "Chunk.hpp"

void disassembleChunk(const Chunk& chunk ,  const char* name);
int disassembleInstruction(const Chunk& chunk , int offset);