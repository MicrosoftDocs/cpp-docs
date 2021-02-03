# calloc - overflow
The CRT function `calloc()` will allocate an array in memory with elements initialized to 0. The arguments can be calculated externally to create an impossible internal error that will lead to a NULL pointer.

## Example
```cpp
#include <stdio.h>
#include <stdlib.h>

int number = -1;
int element_size = 1000;

int main() {

  void *p = calloc(number, element_size);      // Boom!

  printf("calloc returned: %zu\n", (size_t)p);

  return 0;
}

```
## Resulting error
```
=================================================================
==20532==ERROR: AddressSanitizer: calloc parameters overflow: count * size (-1 * 1000) cannot be represented in type size_t (thread T0)
    #0 0x7ffd84c0b68e in calloc C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:127
    #1 0x7ff6835a1025 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\calloc-overflow.cc:11
    #2 0x7ff6835a1857 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

==20532==HINT: if you don't care about these errors you may set allocator_may_return_null=1
SUMMARY: AddressSanitizer: calloc-overflow C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:127 in calloc
==20532==ABORTING
```
