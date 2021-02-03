# Alloc dealloc mismatch

This is not on by default for Windows. So you will have to `set ASAN_OPTIONS=alloc_dealloc_mismatch=0`. This flag will report errors on malloc/delete, new/free, new/delete[] etc.


## Example
```cpp
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[] ) {

  if (argc != 2) return -1;

  switch (atoi(argv[1])) {

  case 1: 
    delete [] (new int[10]);
    break;
  case 2: 
    delete (new int[10]);      // Boom!
    break;
  default: 
    printf("arguments: 1: no error 2: runtime error\n");
    return -1;
  }

  return 0;
}
```

## Resulting error

```
=================================================================
==23376==ERROR: AddressSanitizer: alloc-dealloc-mismatch (operator new [] vs operator delete) on 0x11ef0ad80090
    #0 0x7ffd84c1b718 in operator delete(void *,unsigned __int64) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:172
    #1 0x7ff6f1091b4f in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\scariness_score_test.cc:179
    #2 0x7ff6f10946eb in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

0x11ef0ad80090 is located 0 bytes inside of 40-byte region [0x11ef0ad80090,0x11ef0ad800b8)
allocated by thread T0 here:
    #0 0x7ffd84c1ba02 in operator new[](unsigned __int64) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:102
    #1 0x7ff6f1091b25 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\scariness_score_test.cc:179
    #2 0x7ff6f10946eb in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

SUMMARY: AddressSanitizer: alloc-dealloc-mismatch C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:172 in operator delete(void *,unsigned __int64)
==23376==HINT: if you don't care about these errors you may set ASAN_OPTIONS=alloc_dealloc_mismatch=0
==23376==ABORTING
```
