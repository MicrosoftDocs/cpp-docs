
# Double free

In 'C' you can call free() erroneously and in 'C++' you can similarly call delete more than once.In the last example we also show and example at the Windows specific, HeapCreate(), level of abstraction.

## Example C++ - double operator delete

```cpp
int main() {
  int *x = new int[42];
  delete [] x;

  // ... some complex body of code

  delete [] x;
  return 0;
}
```
## Resulting error

```
=================================================================
==36628==ERROR: AddressSanitizer: attempting double-free on 0x1275a7780040 in thread T0:
    #0 0x7ffd7711c06e in operator delete[](void *) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:163
    #1 0x7ff6d9341054 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\Windows\double_operator_delete.cc:9
    #2 0x7ff6d93417b3 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

0x1275a7780040 is located 0 bytes inside of 168-byte region [0x1275a7780040,0x1275a77800e8)
freed by thread T0 here:
    #0 0x7ffd7711c054 in operator delete[](void *) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:163
    #1 0x7ff6d9341040 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\Windows\double_operator_delete.cc:8
    #2 0x7ff6d93417b3 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

previously allocated by thread T0 here:
    #0 0x7ffd7711ba02 in operator new[](unsigned __int64) C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:102
    #1 0x7ff6d934101d in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\Windows\double_operator_delete.cc:7
    #2 0x7ff6d93417b3 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

SUMMARY: AddressSanitizer: double-free C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_new_delete.cc:163 in operator delete[](void *)
==36628==ABORTING
```

## Example 'C' - double fre()
```cpp
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  char *x = (char*)malloc(10 * sizeof(char));
  memset(x, 0, 10);
  int res = x[argc];
  free(x);

  // ... some complex body of code

  free(x + argc - 1);  // Boom!
  return res;
}
```

## Resulting error

```
=================================================================
==69928==ERROR: AddressSanitizer: attempting double-free on 0x1257b5100030 in thread T0:
    #0 0x7ffd77a6b835 in free C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:110
    #1 0x7ff72e0a10c9 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\double-free.cc:19
    #2 0x7ff72e0a182f in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

0x1257b5100030 is located 0 bytes inside of 10-byte region [0x1257b5100030,0x1257b510003a)
freed by thread T0 here:
    #0 0x7ffd77a6b812 in free C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:109
    #1 0x7ff72e0a10b1 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\double-free.cc:18
    #2 0x7ff72e0a182f in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

previously allocated by thread T0 here:
    #0 0x7ffd77a6b982 in malloc C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:118
    #1 0x7ff72e0a1033 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\double-free.cc:15
    #2 0x7ff72e0a182f in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

SUMMARY: AddressSanitizer: double-free C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:110 in free
==69928==ABORTING

```

## Example - Windows HeapCreate() double free
```cpp
#include <Windows.h>
#include <stdio.h>
#include "sanitizer\allocator_interface.h"


int main() {
    void* newHeap = HeapCreate(0, 0, 0);
    void* newAlloc = HeapAlloc(newHeap, 0, 100);

    HeapFree(newHeap, 0, newAlloc);
    HeapFree(newHeap, 0, newAlloc);
    printf("failure\n");
    return 1;
}
```

## Resutling error
```
=================================================================
==50664==ERROR: AddressSanitizer: attempting double-free on 0x116ec9a00040 in thread T0:
    #0 0x7ffd84c0a207 in __asan_wrap_RtlFreeHeap C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:581
    #1 0x7ff7ddf91061 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\Windows\heapcreate_double_free.cc:13
    #2 0x7ff7ddf91887 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

0x116ec9a00040 is located 0 bytes inside of 100-byte region [0x116ec9a00040,0x116ec9a000a4)
freed by thread T0 here:
    #0 0x7ffd84c0a45f in __asan_wrap_RtlFreeHeap C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:636
    #1 0x7ff7ddf9104f in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\Windows\heapcreate_double_free.cc:12
    #2 0x7ff7ddf91887 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

previously allocated by thread T0 here:
    #0 0x7ffd84c09c48 in __asan_wrap_RtlAllocateHeap C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:542
    #1 0x7ff7ddf91038 in main C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\test\asan\TestCases\Windows\heapcreate_double_free.cc:10
    #2 0x7ff7ddf91887 in __scrt_common_main_seh C:\msvc\msvc\src\vctools\crt\vcstartup\src\startup\exe_common.inl:288
    #3 0x7ffe3cb87033  (C:\WINDOWS\System32\KERNEL32.DLL+0x180017033)
    #4 0x7ffe3e1dd0d0  (C:\WINDOWS\SYSTEM32\ntdll.dll+0x18004d0d0)

SUMMARY: AddressSanitizer: double-free C:\msvc\msvc\src\vctools\crt\asan\llvm\compiler-rt\lib\asan\asan_malloc_win.cc:581 in __asan_wrap_RtlFreeHeap
==50664==ABORTING

```
