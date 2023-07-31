---
title: "Walkthrough: Use Address Sanitizer Continue On Error to find memory safety issues"
description: "Learn how to use Address Sanitizer continue on error to find memory safety errors in your app."
ms.date: 07/31/2023
f1_keywords: ["AddressSanitizer", "Continue On Error"]
helpviewer_keywords: ["ASan", "AddressSanitizer", "Address Sanitizer", "compiling for AddressSanitizer", "Continue On Error", "ASAN continue on error", "Address Sanitizer continue on error"]
---

# Walkthrough: Use Address Sanitizer Continue On Error to find memory safety issues

In this walkthrough, create checked builds that find and report memory safety errors.

Memory safety errors like out-of-bounds memory reads and writes, using memory after it has been freed, `NULL` pointer dereferences, and so on, are a top concern for C/C++ code. Address Sanitizer (ASAN) is a compiler and runtime technology that exposes these kinds of hard-to-find bugs, and does it with zero false positives. For an overview of ASAN, see [AddressSanitizer](asan.md).

Continue On Error (COE) is a new ASAN feature that automatically diagnoses and reports memory safety errors as your app runs. When your program exits, a summary of unique memory safety errors is output to `stdout`, `stderr`, or to a log file of your choice. When you create a standard C++ checked build with `-fsanitizer=address`, calls to allocators, deallocators such as `free`, `memcpy`, `memset`, and so on, are forwarded to the ASAN runtime. The ASAN runtime provides the same semantics for these functions, but monitors what happens with the memory. ASAN diagnoses and reports hidden memory safety errors, with zero false positives, as your app runs.

A significant advantage of COE is that, unlike the previous ASAN behavior, your program doesn't stop running when the first memory error is found. Instead, ASAN notes the error, and your app continues to run. After your app exits, a summary of all the memory issues is output.

It's a good practice to create a checked build of your C or C++ app with ASAN turned on, and then run your app in your test harness. As your tests exercise the code paths in your app looking for bugs, you'll also find out if those code paths harbor memory safety issues without interfering with the tests.

When your app finishes, you get a summary of the memory issues. With COE, you can compile and deploy an existing application into limited production to find memory safety issues. You can run the checked build for days to fully exercise the code, although the app will run slower due to the ASAN instrumentation.

You can use this feature to create a new shipping gate. If all your existing tests pass, but COE reports a memory safety error or a leak, don’t ship the new code or integrate it into a parent branch.

Don't deploy a build with COE enabled into production! COE is intended to be used in testing and development environments only. You shouldn't use an ASAN enabled build in production because of the performance impact of the instrumentation added to detect memory errors, the risk of exposing the internal implementation if errors are reported, and to avoid increasing the surface area of possible security exploits by shipping the library functions that ASAN substitutes for memory allocation, freeing, and so on.

In the following examples, you create checked builds and set an environment variable to output the address sanitizer information to `stdout` to see the memory safety errors that ASAN reports.

## Prerequisites

To complete this walkthrough, you need Visual Studio 2022 17.6 or later with the *Desktop development with C++ workload* installed.

## Double free example

In this example, you create a build with ASAN enabled to test what happens when memory is double freed. ASAN detects this error and reports it. In this example, the program continues to run after the error is detected, which leads to a second error--using memory that's been freed. A summary of the errors is output to `stdout` when the program exits.

Create the example:

1. Open a developer command prompt: Open the **Start** menu, type *Developer*, and select the latest command prompt such as **Developer Command Prompt for VS 2022** from the list of matches.
1. Create a directory on your machine to run this example. For example, `%USERPROFILE%\Desktop\COE`.
1. In that directory, create an empty source file. For example, `doublefree.cpp`
1. Paste the following code into the file:

    ```cpp
    #include <stdio.h>
    #include <stdlib.h>
    
    void BadFunction(int *pointer)
    {
        free(pointer);
        free(pointer); // double-free!
    }
    
    int main(int argc, const char *argv[])
    {
        int *pointer = static_cast<int *>(malloc(4));
        BadFunction(pointer);
    
        // Normally we'd crash before this, but with COE we can see heap-use-after-free error as well
        printf("\n\n******* Pointer value: %d\n", *pointer);
    
        return 1;
    }
    ```

In the preceding code, `pointer` is freed twice. This is a contrived example, but double frees are an easy mistake to make in more complex C++ code.

Create a build of the preceding code with COE turned on with the following steps:

1. Compile the code in the developer command prompt you opened earlier: `cl -fsanitize=address -Zi doublefree.cpp`. The `-fsanitize=address` switch turns on ASAN, and `-Zi` creates a separate PDB file that address sanitizer uses to display memory error location information.
1. Send ASAN output to `stdout` by setting the `ASAN_OPTIONS` environment variable in the developer command prompt as follows: `set ASAN_OPTIONS=continue_on_error=1`
1. Run the test code with: `doublefree.exe`

The output shows that there was a double free error and the call stack where it happened. The report starts out with a call stack that shows the error happened in `BadFunction`:

```cmd
==22976==ERROR: AddressSanitizer: attempting double-free on 0x01e03550 in thread T0:
    #0  free                           D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp(69)
    #1  BadFunction                    C:\Users\xxx\Desktop\COE\doublefree.cpp(8)
    #2  main                           C:\Users\xxx\Desktop\COE\doublefree.cpp(14)
    #3  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
    #4  BaseThreadInitThunk            Windows
    #5  RtlInitializeExceptionChain    Windows
```

Next, there's information about the freed memory and a call stack for where the memory was allocated:

```cmd
0x01e03550 is located 0 bytes inside of 4-byte region [0x01e03550,0x01e03554)
freed by thread T0 here:
    #0  free                           D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp(69)
    #1  BadFunction                    C:\Users\xxx\Desktop\COE\doublefree.cpp(7)
    #2  main                           C:\Users\xxx\Desktop\COE\doublefree.cpp(14)
    #3  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
    #4  BaseThreadInitThunk            Windows
    #5  RtlInitializeExceptionChain    Windows

previously allocated by thread T0 here:
    #0  malloc                         D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp(85)
    #1  main                           C:\Users\xxx\Desktop\COE\doublefree.cpp(13)
    #2  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
    #3  BaseThreadInitThunk            Windows
    #4  RtlInitializeExceptionChain    Windows
```

Then there's information about the heap-use-after-free error. This refers to using `*pointer` in the `printf()` call because the memory `pointer` refers to was freed earlier. The call stack where the error occurs is listed, as are the call stacks where this memory was allocated and freed:

```cmd
==35680==ERROR: AddressSanitizer: heap-use-after-free on address 0x02a03550 at pc 0x00e91097 bp 0x012ffc64 sp 0x012ffc58READ of size 4 at 0x02a03550 thread T0
         #0  main                           C:\Users\xxx\Desktop\Projects\ASAN\doublefree.cpp(18)
         #1  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
         #2  BaseThreadInitThunk            Windows
         #3  RtlInitializeExceptionChain    Windows

0x02a03550 is located 0 bytes inside of 4-byte region [0x02a03550,0x02a03554)
freed by thread T0 here:
         #0  free                           D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp(69)
         #1  BadFunction                    C:\Users\xxx\Desktop\Projects\ASAN\doublefree.cpp(7)
         #2  main                           C:\Users\xxx\Desktop\Projects\ASAN\doublefree.cpp(14)
         #3  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
         #4  BaseThreadInitThunk            Windows
         #5  RtlInitializeExceptionChain    Windows

previously allocated by thread T0 here:
         #0  malloc                         D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp(85)
         #1  main                           C:\Users\xxx\Desktop\Projects\ASAN\doublefree.cpp(13)
         #2  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
         #3  BaseThreadInitThunk            Windows
         #4  RtlInitializeExceptionChain    Windows
```

Next, there's information about the shadow bytes in the vicinity of the buffer overflow. For more information about shadow bytes, see [AddressSanitizer shadow bytes](asan-shadow-bytes.md).

Following the shadow byte information, you'll see the output from the program, which indicates that it continued running after ASAN detected the error:

```cmd
******* Pointer value: xxx
```

Then there's a summary of the source files where the memory error happened. It's sorted by the unique call stacks for the memory errors in that file. A unique call stack is determined by the type of error and the call stack where the error occurred.

This sorting prioritizes memory safety issues that may be the most concerning. For example, five unique call stacks leading to different memory safety errors in the same file is potentially more worrisome than one error that hits many times. The summary looks like this:

```cmd
=== Files in priority order ===

File: D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp Unique call stacks: 1
File: C:\Users\xxx\Desktop\COE\doublefree.cpp Unique call stacks: 1
``````

Finally, the report contains a summary of where the memory errors occurred:

```cmd
=== Source Code Details: Unique errors caught at instruction offset from source line number, in functions, in the same file. ===

File: D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp
        Func: free()
                Line: 69 Unique call stacks (paths) leading to error at line 69 : 1
                        Bug: double-free at instr 19 bytes from start of line
File: C:\Users\xxx\Desktop\COE\doublefree.cpp
        Func: main()
                Line: 18 Unique call stacks (paths) leading to error at line 18 : 1
                        Bug: heap-use-after-free at instr 55 bytes from start of line

>>>Total: 2 Unique Memory Safety Issues (based on call stacks not source position) <<<

#0 C:\Users\xxx\Desktop\COE\doublefree.cpp Function: main(Line:18)
        Raw HitCnt: 1  On Reference: 4-byte-read-heap-use-after-free
#1 D:\a\_work\1\s\src\vctools\asan\llvm\compiler-rt\lib\asan\asan_malloc_win_thunk.cpp Function: free(Line:69)
        Raw HitCnt: 1
```

## Out of bounds memory access example

In this example, you create a build with ASAN enabled to test what happens when an app access memory that is out-of-bounds. ASAN detects this error and reports a summary of the errors to `stdout` when the program exits.

Create the example:

1. Open a developer command prompt: open the **Start** menu, type *Developer*, and select the latest command prompt such as **Developer Command Prompt for VS 2022** from the list of matches.
1. Create a directory on your machine to run this example. For example, `%USERPROFILE%\Desktop\COE`.
1. In that directory, create a source file, for example, `coe.cpp`, and paste the following code:

    ```cpp
    #include <stdlib.h> 
    
    char* func(char* buf, size_t sz)
    { 
        char* local = (char*)malloc(sz); 
        for (auto ii = 0; ii <= sz; ii++) // bad loop exit test 
        {
            local[ii] = ~buf[ii]; // Two memory safety errors 
        }
     
        return local; 
    } 
    
    char buffer[10] = {0,1,2,3,4,5,6,7,8,9}; 
    
    void main()
    {   
        char* inverted_buf= func(buffer, 10); 
    }
    ```

In the preceding code, the parameter `sz` is 10 and the original buffer is 10 bytes. There are two memory safety errors:

- an out-of-bounds load from `buf` in the `for` loop
- an out-of-bounds store to `local` in the `for` loop

The buffer overflow is due to the loop exit test `<=sz`. When this example runs, it's *secure by coincidence*. That's because of the over-allocation and alignment done by most C++ runtime implementations. When `sz % 16 == 0`, the final write to `local[ii]` corrupts memory. Other cases only read/write to the "malloc slop," which is extra memory allocated due to the way the C Runtime (CRT) pads allocations to a 0 mod 16 boundary.

Errors are only observable if the page following the allocation is unmapped, or upon use of corrupted data. All other cases are silent in this example. With Continue On Error, the errors are made visible in the summary after the program runs to completion.

Create a build of the preceding code with COE turned on:

1. Compile the code with `cl -fsanitize=address -Zi coe.cpp`. The `-fsanitize=address` switch turns on ASAN, and `-Zi` creates a separate PDB file that address sanitizer uses to display memory error location information.
1. Send ASAN output to `stdout` by setting the `ASAN_OPTIONS` environment variable in the developer command prompt as follows: `set ASAN_OPTIONS=continue_on_error=1`
1. Run the test code with: `coe.exe`

The output shows that there were two memory buffer overflow errors and provides the call stack for where they happened. The report starts out like this:

```cmd
==9776==ERROR: AddressSanitizer: global-buffer-overflow on address 0x0047b08a at pc 0x003c121b bp 0x012ffaec sp 0x012ffae0
READ of size 1 at 0x0047b08a thread T0
	 #0  func                           C:\Users\xxx\Desktop\COE\coe.cpp(8)
	 #1  main                           C:\Users\xxx\Desktop\COE\coe.cpp(18)
	 #2  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
	 #3  BaseThreadInitThunk            Windows
	 #4  RtlInitializeExceptionChain    Windows
```

Next, there's information about the shadow bytes in the vicinity of the buffer overflow. For more information about shadow bytes, see [AddressSanitizer shadow bytes](asan-shadow-bytes.md).

Following the shadow byte report, there's a summary of the source files where the memory errors happened. It's sorted by the unique call stacks for the memory errors in that file. A unique call stack is determined by the type of error and the call stack where the error occurred.

This sorting prioritizes memory safety issues that may be the most concerning. For example, five unique call stacks leading to different memory safety errors in the same file is potentially more worrisome than one error that hits many times.

The summary looks like this:

```cmd
=== Files in priority order ===

File: C:\Users\xxx\Desktop\COE\coe.cpp Unique call stacks: 2
```

Finally, the report contains a summary of where the memory errors occurred. Continue On Error reports two distinct errors that occur on the same source line. The first error reads memory at a global address in the `.data` section, and the other writes to memory allocated from the heap.

The report looks like this:

```cmd
=== Source Code Details: Unique errors caught at instruction offset from source line number, in functions, in the same file. === 

File: C:\Users\xxx\Desktop\COE\coe.cpp 
	Func: func()
		Line: 8 Unique call stacks (paths) leading to error at line 8 : 2
			Bug: heap-buffer-overflow at instr 124 bytes from start of line

>>>Total: 2 Unique Memory Safety Issues (based on call stacks not source position) <<<

#0 C:\Users\xxx\Desktop\COE\coe.cpp Function: func(Line:8) 
	Raw HitCnt: 1  On Reference: 1-byte-read-global-buffer-overflow 
#1 C:\Users\xxx\Desktop\COE\coe.cpp Function: func(Line:8) 
	Raw HitCnt: 1  On Reference: 1-byte-write-heap-buffer-overflow 
```

The default Address Sanitizer runtime behavior terminates the app after reporting the first error it finds. It doesn't allow the "bad" machine instruction to execute. The new Address Sanitizer runtime diagnoses and reports errors, but then executes subsequent instructions.

COE tries to automatically return control back to the application after reporting each memory safety error. There are situations when it can't, such as when there's a memory access violation (AV) or a failed memory allocation. COE doesn't continue after access violations that the program's structured exception handling doesn't catch. If COE can't return execution to the app, a `CONTINUE CANCELLED - Deadly Signal. Shutting down.` message is output.

## Select where to send ASAN output

Use the `ASAN_OPTIONS` environment variable to determine where to send ASAN output as follows:

- Output to stdout: `set ASAN_OPTIONS=continue_on_error=1`
- Output to stderr: `set ASAN_OPTIONS=continue_on_error=2`
- Output to a log file of your choice: `set COE_LOG_FILE=yourfile.log`

## Handling undefined behavior

The ASAN runtime doesn't mimic all of the undefined behaviors of the C and C++ allocation/deallocation functions. The following example demonstrates how the ASAN version of **_alloca** differs from the C runtime version:

```cpp
#include <cstdio>
#include <cstring>
#include <malloc.h>
#include <excpt.h>
#include <windows.h>

#define RET_FINISH 0
#define RET_STACK_EXCEPTION 1
#define RET_OTHER_EXCEPTION 2

int foo_redundant(unsigned long arg_var)
{
    char *a;
    int ret = -1;

    __try
    {
        if ((arg_var+3) > arg_var)
        {
            // Call to _alloca using parameter from main
            a = (char *) _alloca(arg_var);
            memset(a, 0, 10);
        }
        ret = RET_FINISH;
    }
    __except(1)
    {
        ret = RET_OTHER_EXCEPTION;
        int i = GetExceptionCode();
        if (i == EXCEPTION_STACK_OVERFLOW)
        {
            ret = RET_STACK_EXCEPTION;
        }
    }
    return ret;
}

void main()
{
    int cnt = 0;

    if (foo_redundant(0xfffffff0) == RET_STACK_EXCEPTION)
    {
        cnt++;
    }

    if (cnt == 1)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
}
```

In `main()` a large number is passed to `foo_redundant`, which is ultimately passed to `_alloca()`, which causes `_alloca()` to fail.

This example outputs `pass` when compiled without ASAN (that is, no `-fsanitize=address` switch) but outputs `fail` when compiled with ASAN turned on (that is, with the `-fsanitize=address` switch). That's because without ASAN, the exception code matches `RET_STACK_EXCEPTION` so `cnt` is set to 1. It behaves differently when compiled with ASAN on because the thrown exception is an Address Sanitizer error instead: dynamic-stack-buffer-overflow. That means the code returns `RET_OTHER_EXCEPTION` instead of `RET_STACK_EXCEPTION` so `cnt` isn't set to 1.

## Other benefits

With the new ASAN runtime, no extra binaries need to be deployed with your app. This makes it even easier to use ASAN with your normal test harness because you don't have to manage extra binaries.

## See also

[AddressSanitizer Continue on Error blog post](https://devblogs.microsoft.com/cppblog/addresssanitizer-continue_on_error)\
[Example memory safety errors](asan.md#error-types)\
[-Zi compiler flag](../build/reference/z7-zi-zi-debug-information-format.md#zi)\
[-fsanitize=address compiler flag](../build/reference/fsanitize.md)\
[Top 25 most dangerous software weaknesses](https://cwe.mitre.org/top25/archive/2021/2021_cwe_top25.html)