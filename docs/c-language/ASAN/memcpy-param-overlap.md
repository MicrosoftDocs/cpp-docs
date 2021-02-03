# Memcpy - parameter overlap

The CRT's function `memcpy()` doesn't support overlapping memory. This allows for optimizations that won't work if the buffers do overlap. There's not much to really look into, however, because C provides an alternative that does support overlapping memory: `memmove()`. 

The common error is to treat `memmove()`identical to `memcpy()`.

## Example

This will only be found on x86

```cpp
#include "defines.h"
#include <string.h>

__declspec(noinline) void bad_function() {
    char buffer[] = "hello";

    memcpy(buffer, buffer + 1, 5); // BOOM!
}

int main(int argc, char **argv) {
    bad_function();
    return 0;
}
```

## Resulting error
```
=================================================================
==40360==ERROR: AddressSanitizer: memcpy-param-overlap: memory ranges [0x012ff788,0x012ff78c) and [0x012ff78a, 0x012ff78e) overlap
    #0 0x78241daf in __asan_wrap_memcpy C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\sanitizer_common\sanitizer_common_interceptors.inc:801
    #1 0x6210a0 in bad_function(void) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\jims2.cpp:8
    #2 0x6210ea in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\jims2.cpp:12
    #3 0x621770 in _scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #4 0x75fafa28  (C:\WINDOWS\System32\KERNEL32.DLL+0x6b81fa28)
    #5 0x777875f3  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x4b2e75f3)
    #6 0x777875c3  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x4b2e75c3)

Address 0x012ff788 is located in stack of thread T0 at offset 16 in frame
    #0 0x62101f in bad_function(void) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\jims2.cpp:4

  This frame has 1 object(s):
    [16, 22) 'buffer' <== Memory access at offset 16 is inside this variable
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp, SEH and C++ exceptions *are* supported)
Address 0x012ff78a is located in stack of thread T0 at offset 18 in frame
    #0 0x62101f in bad_function(void) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\jims2.cpp:4

  This frame has 1 object(s):
    [16, 22) 'buffer' <== Memory access at offset 18 is inside this variable
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp, SEH and C++ exceptions *are* supported)
SUMMARY: AddressSanitizer: memcpy-param-overlap C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\sanitizer_common\sanitizer_common_interceptors.inc:801 in __asan_wrap_memcpy
==40360==ABORTING
```