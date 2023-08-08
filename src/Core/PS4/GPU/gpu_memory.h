#pragma once

#include <types.h>

namespace GPU {
enum class MemoryMode : u32 { NoAccess = 0, Read = 1, Write = 2, ReadWrite = 3 };

void MemorySetAllocArea(u64 virtual_addr, u64 size);
}