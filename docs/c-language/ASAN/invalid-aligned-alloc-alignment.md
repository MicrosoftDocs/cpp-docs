# Allocation size too big

The `_aligned_malloc()` function requires a power of 2 for expressing the alignment. We simulate the "external" calculation of some alignment factor using an un-optimized global variable.

## Example
```cpp
#include <Windows.h>
int ExternalAlign = 5;

int main(){
    // Should return null and set errno to EINVAL
    // since this externally calculated alignment of 5 is not valid.
    void* ptr = _aligned_malloc(8,ExternalAlign); 
    return (ptr == nullptr && errno == EINVAL) ? 0 : -1;
}

```

## Resulting error
```
=================================================================
==65744==ERROR: AddressSanitizer: invalid allocation alignment: 5, alignment must be a power of two (thread T0)
    #0 0x7ffd84e3b06e in _aligned_malloc C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:216
    #1 0x7ff60dac102f in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\Windows\aligned_malloc_failure.cc:9
    #2 0x7ff60dac17ff in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

==65744==HINT: if you don't care about these errors you may set allocator_may_return_null=1
SUMMARY: AddressSanitizer: invalid-allocation-alignment C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:216 in _aligned_malloc
==65744==ABORTING
```