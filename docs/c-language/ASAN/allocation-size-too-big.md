# Allocation size too big

## Example
```cpp
#include <stdio.h>
#include <malloc.h>

int x = 1000;
int y = 1000;

__declspec(noinline) void bad_function() {

  char* buffer = (char*)malloc((x * y * x * y); //Boom!

  memcpy(buffer, buffer + 8, 8); 
}

int main(int argc, char **argv) {
    bad_function();
    return 0;
}
```

## Resulting error
```azurepowershell-interactive
=================================================================
==63360==ERROR: AddressSanitizer: requested allocation size 0xffffffffd4a51000 (0xffffffffd4a52000 after adjustments for alignment, red zones etc.) exceeds maximum supported size of 0x10000000000 (thread T0)
    #0 0x7ffd7899b982 in malloc C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:118
    #1 0x7ff73d1f1039 in bad_function(void) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\jims2.cpp:11
    #2 0x7ff73d1f1081 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\jims2.cpp:19
    #3 0x7ff73d1f17d7 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #4 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #5 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

==63360==HINT: if you don't care about these errors you may set allocator_may_return_null=1
SUMMARY: AddressSanitizer: allocation-size-too-big C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:118 in malloc
==63360==ABORTING
```