# Use after poison

A developer can manually poison memory and produce the following error. You might want to compile without -fsanitize=address and manually link the runtime libraries to facilitate a custom debugging process.

## Example

```cpp
#include <stdlib.h>

extern "C" void __asan_poison_memory_region(void *, size_t);

int main(int argc, char **argv) {
  char *x = new char[16];
  x[10] = 0;
  __asan_poison_memory_region(x, 16);

  int res = x[argc * 10];              // Boom!
 
  delete [] x;
  return res;
}
```

## Resulting error
```azurepowershell-interactive
=================================================================
==52380==ERROR: AddressSanitizer: use-after-poison on address 0x1141cfb0003a at pc 0x7ff65fd11102 bp 0x0034e7aff7f0 sp 0x0034e7aff7f8
READ of size 1 at 0x1141cfb0003a thread T0
    #0 0x7ff65fd11101 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\use-after-poison.cc:15
    #1 0x7ff65fd11897 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #2 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #3 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

0x1141cfb0003a is located 10 bytes inside of 16-byte region [0x1141cfb00030,0x1141cfb00040)
allocated by thread T0 here:
    #0 0x7ffd84e4ba02 in operator new[](unsigned __int64) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:102
    #1 0x7ff65fd11032 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\use-after-poison.cc:12
    #2 0x7ff65fd11897 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

SUMMARY: AddressSanitizer: use-after-poison C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\use-after-poison.cc:15 in main
Shadow bytes around the buggy address:
  0x036609a5ffb0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x036609a5ffc0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x036609a5ffd0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x036609a5ffe0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x036609a5fff0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x036609a60000: fa fa fd fd fa fa f7[f7]fa fa 00 00 fa fa fa fa
  0x036609a60010: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x036609a60020: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x036609a60030: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x036609a60040: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x036609a60050: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
  Shadow gap:              cc
==52380==ABORTING
```
