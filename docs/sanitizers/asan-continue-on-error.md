---
title: "Walkthrough: Use Address Sanitizer Continue On Error to find memory safety issues"
description: "Learn how to use Address Sanitizer continue on error to find memory safety errors in your app."
ms.date: 07/13/2023
f1_keywords: ["AddressSanitizer", "Continue On Error"]
helpviewer_keywords: ["ASan", "AddressSanitizer", "Address Sanitizer", "compiling for AddressSanitizer", "Continue On Error", "ASAN continue on error", "Address Sanitizer continue on error"]
---

# Walkthrough: Use Address Sanitizer Continue On Error to find memory safety issues

Memory safety errors such as out-of-bounds memory reads and writes, using memory after it has been freed, `NULL` pointer dereferences, and so on, are a top concern for C/C++ code. Address Sanitizer (ASAN) is a compiler and runtime technology that exposes hard-to-find bugs of this kind, and with zero false positives. For an overview of ASAN, see [AddressSanitizer](asan.md)

Continue On Error (COE) is a new ASAN feature that automatically diagnoses and reports unique memory safety errors as your app runs. When your program exits, a summary of unique memory safety errors is output to `stdout`, `stderr`, or the log file of your choice.

A significant advantage of COE is that, unlike the previous ASAN behavior, your program doesn't stop running when the first memory error is encountered. Instead, ASAN notes the error and continues to run. After your app exits, a summary of all the memory issues is provided.

You can create a checked build for your C and C++ programs with ASAN turned on and run in your test harness. As your tests exercise the code paths in your app looking for bugs, you'll also find out if those code paths harbor memory safety issues. And without interfering with the tests.

Afterwards, you get a summary of the memory issues. With COE, you can compile and deploy an existing application into limited production to find memory safety issues. You can run the checked build for days to fully exercise the code, although the app will run slower due to the ASAN instrumentation.

You can use this feature to create a new shipping gate. That is, if all your existing tests pass, but this new feature reports a memory safety error or a leak, don’t ship the new code or integrate it into a parent branch.

This walkthrough shows how to create a checked build that has COE enabled, and what the output looks like for code with memory safety errors.

## Prerequisites

To complete this walkthrough, you need Visual Studio 2022 17.6 or later with the Desktop development with C++ workload installed.

## Out of bounds memory access example

When you create a standard C++ checked build of your app with `-fsanitizer=address`, calls to allocators, deallocators, `memcpy`, `memset`, and so on, are forwarded to the ASAN runtime. The ASAN runtime provides the same semantics for these functions, but also monitors what happens with the memory. ASAN diagnoses and reports hidden memory safety errors, with zero false positives, as your app runs.

In this example, create a checked build and set an environment variable to output the address sanitizer information to `stdout` to see the memory safety errors that ASAN reports.

### Create a checked build with ASAN enabled

1. Open a developer command prompt: open the **Start** menu, type *Developer*, and select the latest command prompt, such as **Developer Command Prompt for VS 2022**, from the list of matches.
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

The buffer overflow is due to the loop exit test `<=sz`. When this example runs, it's *secure by coincidence*. That's because of the over-allocation and alignment done by most C++ runtime implementations. When `sz % 16 == 0`, the final write to `local[ii]` corrupts memory. Other cases only read/write to the "malloc slop", which is due to the C Runtime (CRT) padding allocations out to a 0 mod 16 aggregate boundary.

Errors are only observable if the following page is unmapped, or upon use of corrupted data. All other cases are silent in this example. With Continue On Error, you see both errors in the summary after the program runs to completion.

Create a checked build of the preceding code with COE turned on:

1. Compile the code using the `-fsanitize=address` (turns on COE) and `-Zi` (creates a separate PDB file that address sanitizer uses to display memory error location information) switches: `cl -fsanitize=address -Zi coe.cpp`
1. Set the `ASAN_OPTIONS` environment variable to send ASAN output to stdout: `set ASAN_OPTIONS=Continue On Error=1`
1. Run the test code: `coe.exe`

The output shows that there were two memory buffer overflow errors and gives the call stack for where they happened. The report starts out like this:

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

Then there's a summary of the source files where the memory errors happened. It's sorted in order of the unique call stacks for the memory errors in that file. What determines a unique call stack is the type of error and the call stack where the error occurred.

The reason for this sorting is to prioritize memory safety issues that may be the most concerning. For example, five unique call stacks leading to different memory safety errors in the same file is potentially more worrisome than one error that hits many times. The summary looks like this:

```cmd
=== Files in priority order ===

File: C:\Users\xxx\Desktop\COE\coe.cpp Unique call stacks: 2
```

Finally, the report contains a summary of where the memory errors occurred. Continue On Error reports two distinct errors that occur on the same source line. The first error reads memory at a global address in the `.data` section, and the other writes to memory allocated from the heap. It looks like this:

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

The default Address Sanitizer runtime behavior terminates the app after reporting the first error it finds. It doesn't allow the "bad" machine instruction to execute. The new Address Sanitizer runtime diagnoses and reports errors, but then executes subsequent instructions. COE tries to automatically return control back to the application after reporting each memory safety error. There are situations when it can't, such as when there's a memory access violation (AV) or a failed memory allocation. COE doesn't continue after access violations that the program's structured exception handling doesn't catch. If COE can't return execution to the app, a `CONTINUE CANCELLED - Deadly Signal. Shutting down.` message is output.

### Set an environment variable to output to stdout

There are different options for where the output from ASAN goes. They are:

- Output to stdout: `set ASAN_OPTIONS=Continue On Error=1`
- Output to stderr: `set ASAN_OPTIONS=Continue On Error=2`
- Output to a log file of your choice: `set COE_LOG_FILE=yourfile.log`

## Handling undefined behavior

The ASAN runtime doesn't mimic all of the undefined behaviors for C and C++. The following example demonstrates an example where code generation from the compiler and the runtime implementation differs for **_alloca**:

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
            // Call to alloca using parameter from main
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

In `main()`, a large number is passed to `foo_redundant`, which is ultimately passed to `_alloca()`, which causes `_alloca()` to fail.

This example outputs `pass` when compiled without the `-fsanitize=address` switch because `cnt==1` because the exception code matches `RET_STACK_EXCEPTION`. However, it fails when compiled with `-fsanitize=address` because the thrown exception is an Address Sanitizer error: dynamic-stack-buffer-overflow. So the code returns `RET_OTHER_EXCEPTION` instead of `RET_STACK_EXCEPTION`.

## Other benefits

Earlier versions of ASAN required the `llvm_symbolizer.exe` binary. With the new ASAN runtime, this isn't necessary. This makes it even easier to use ASAN with your normal test harness because you don't have to manage extra binaries.

## See also

[AddressSanitizer Continue on Error blog post](https://devblogs.microsoft.com/cppblog/addresssanitizer-continue_on_error)\
[Example memory safety errors](asan.md#error-types)\
[Top 25 most dangerous software weaknesses](https://cwe.mitre.org/top25/archive/2021/2021_cwe_top25.html)\
[-Zi](../build/reference/z7-zi-zi-debug-information-format.md#zi)\
[-fsanitize=address](../build/reference/fsanitize.md)