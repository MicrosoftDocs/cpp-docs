---
title: "Walkthrough: Use Address Sanitizer Continue On Error to find memory safety issues"
description: "Learn how to use Address Sanitizer continue on error to to find memory safety errors in your app."
ms.date: 07/10/2023
f1_keywords: ["AddressSanitizer", "Continue On Error"]
helpviewer_keywords: ["ASan", "AddressSanitizer", "Address Sanitizer", "compiling for AddressSanitizer", "Continue On Error", "ASAN continue on error", "Address Sanitizer continue on error"]
---

# Walkthrough: Use Address Sanitizer Continue On Error to find memory safety issues

Memory safety errors--such as out-of-bounds memory reads and writes, using memory after it has been freed, `NULL` pointer dereferences, and so on--are a top concern for C/C++ code. Address Sanitizer (ASAN) is a compiler and runtime technology that exposes many hard-to-find bugs of this kind with zero false positives. For an overview of ASAN, see [AddressSanitizer](asan.md)

Continue On Error (COE) is a new ASAN feature that allows you to create a checked build for your C and C++ programs that automatically diagnoses and reports unique memory safety errors as your app runs. When your program exits, a summary of unique memory safety errors is output to stdout, stderr, or the log file of your choice.

A significant advantage of COE is that, unlike the previous ASAN behavior, your program doesn't stop running and report the error when the first memory error is encountered. Instead, it notes the error and continues to run. When your app exits, a summary is provided of all the memory issues that were encountered as it ran. This means you can run an ASAN checked build of your app in your normal test harness to exercise its code paths without interfering with the tests. Afterwards you can examine the summary of memory issues encountered. You can consider using this feature as a way to create a new shipping gate by deciding not to ship any code that encounters memory safety errors during your test passes.

This walkthrough shows how to create a checked build that has COE enabled and what the output looks like for code that has memory safety errors.

## Prerequisites

To complete this walkthrough, you must have installed either Visual Studio 2022 17.6 or later and the optional Desktop development with C++ workload, or the command-line Build Tools for Visual Studio.

## Out of bounds memory access example

When you create a standard C++ checked build of your app with `-fsanitizer=address`, calls to allocators, deallocators, `memcpy`, `memset`, and so on are forwarded to the ASAN runtime. The ASAN runtime provides the same semantics for these functions, but then monitors what happens with the memory to diagnose and report hidden memory safety errors--with zero false positives--as your app runs.

In this example, you'll create a checked build and set an environment variable to output the address sanitizer information to stdout.

### Build a checked build with ASAN enabled

1. Open a developer command prompt: for example, open the **Start** menu, type *Developer*, and select **Developer Command Prompt for VS 2022** from the list of matches.
1. Create a directory on your machine to run this example in. For example, `%USERPROFILE%\Desktop\COE`.
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

1. Compile the code using the `-fsanitize=address` and `-Zi` switches: `cl -fsanitize=address -Zi coe.cpp`
1. Set the `ASAN_OPTIONS` environment variable to have ASAN output to stdout: `set ASAN_OPTIONS=Continue On Error=1`
1. Run the test code: `coe.exe`

The output indicates that there were two memory buffer overflow errors and a call stack for where they happened, for example:

```dos
==9776==ERROR: AddressSanitizer: global-buffer-overflow on address 0x0047b08a at pc 0x003c121b bp 0x012ffaec sp 0x012ffae0
READ of size 1 at 0x0047b08a thread T0
	 #0  func                           C:\Users\xxx\Desktop\COE\coe.cpp(8)
	 #1  main                           C:\Users\xxx\Desktop\COE\coe.cpp(18)
	 #2  __scrt_common_main_seh         D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288)
	 #3  BaseThreadInitThunk            Windows
	 #4  RtlInitializeExceptionChain    Windows
```

Then there is information about the shadow bytes in the vicinity of the buffer overflow. For more information about shadow bytes, see [shadowbytes]().

Then there is the summary report of source files where the memory errors happened. It is sorted in  order of the unique call stacks there are for memory errors in that file. The reason for this sorting is that 5 unique call stacks leading to different memory safety errors in the same file is potentially even more worrisome than one error that hits many times. It looks like this:

```dos
=== Files in priority order ===

File: C:\Users\xxx\Desktop\COE\coe.cpp Unique call stacks: 2
```

Finally, the report contains a summary of where the memory errors occurred. It'll look something like this:

```dos
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

Finally, there is a 

There are different options for where the output from ASAN can go. They are:

- Output to stdout: `set ASAN_OPTIONS=Continue On Error=1`
- Output to stderr: `set ASAN_OPTIONS=Continue On Error=2`
- Output to a log file of your choice: `set COE_LOG_FILE=yourfile.log`
 
### Set an environment variable to output to stdout

To stream unique memory safety errors to stdout(1) or stderr(2):

- set ASAN_OPTIONS=Continue On Error=1
- set ASAN_OPTIONS=Continue On Error=2

To stream to a log file of your choice:

- set COE_LOG_FILE=your.file.log


### Run the test and examine the output

When you opt into the new continue on error (COE) feature, your application automatically diagnoses and reports unique memory safety errors as it runs. At program exit, the runtime produces a [final summary](#_Example) that follows the detailed reports normally produced by the Address Sanitizer.

The compiler instruments your binaries to work with the address sanitizer runtime diagnose hidden memory safety errors. You can add the -fsanitize=address -Zi compiler flags and set the ASAN_OPTIONS or COE_LOG_FILE environment variable with values shown previously. You can then build and run your existing tests to exercise your code to find hidden memory-safety errors.

This new COE functionality provides a "checked build" for C and C++ that finds hidden memory safety errors with zero false positives.

# Hidden memory safety errors

The following example creates a buffer overflow due to the loop exit test. When the example runs, it is *secure by coincidence*. That's because of the over-allocation and alignment done by most C++ runtime implementations. When `sz % 16 == 0`, the final write to `local[ii]` corrupts memory. Other cases only read/write to the "malloc slop" which is due to the C Runtime (CRT) padding allocations out to a 0 mod 16 aggregate boundary.

Errors are only observable if the following page is unmapped, or upon some subsequent use of corrupted data. All other cases are silent in the following example.

```cpp
#include<stdlib.h>

char* func(char* buf, size_tsz)
{
    char* local = (char*)malloc(sz);
    for (auto ii = 0; ii **<=** sz; ii++) // bad loop exit test
    {
        local[ii] = ~buf[ii];
    }
    return local;
}

char original[10] = { 0,1,2,3,4,5,6,7,8,9 };

void main()
{
    char* inverted_buf= func(original,10);
}
```

In this example, where the parameter `sz` is 10 and the original buffer is 10-bytes, there are two memory safety errors: one is a load and the other is a store on the `for` loop. With Continue On Error, you will see both errors in the summary and the program will run to completion. The summary will look something like this:

![](RackMultipart20230703-1-hvjsrt_html_b744b1efcbe3ccc2.png) JTW get picture

_ **Figure 2** _

Note that Continue On Error reports two distinct errors that occur on the same source line. The first error reads memory at a global address in the .data section, and the other writes to memory allocated from the heap.

# Description

The default Address Sanitizer runtime behavior terminates your application after reporting the first error it encounters while running your program. It doesn't allow the "bad" machine instruction to execute. The new Address Sanitizer runtime diagnoses and reports errors, but then executes subsequent instructions.

The new COE functionality allows an application to **continue running while reporting** unique memory safety errors to a log file or to the command line. When enabled, COE tries to automatically return control back to the application after reporting each memory safety error, except for an access violation (AV) or failed memory allocation. With COE, you can compile and deploy an existing application into limited production to find memory safety issues while running for days (albeit slower).

By adding compiler flags and setting an environment variable, you can immediately improve correctness and security. Your existing tests still pass but also uncover hidden memory safety errors. The compiler option (`-fsanitizer=address`) and runtime environment flag can be used to introduce a new "shipping gate." Subsequently, COE can then be used with all your existing tests. The developer gets a simple, well-defined, pass/fail for shipping any C or C++ app on Windows.

Internally we have found that using this technology significantly reduces memory safety errors. If all your existing tests pass, _ **but** _ this new feature reports a memory safety error or a leak, don't ship your new code or integrate it into a parent branch.

# **Example**

```cpp
#include <cstdio>
#include <string>

struct Base
{
    //virtual ~Base() = default;
};

struct Derived : public Base
{
    std::wstring Value = L"Leaked if Base destructor is not virtual!";
};

constexpr size_t PointDims = 3;
double pointsInGlobalData[PointDims] = { 1.0, 2.0, 3.0 };

int main()
{
    pointsInGlobalData[3] = 3.0;
    for (int i = 0; i < 2; i++)
    {
        double pointOnStack[PointDims] = { 1.0, 2.0, 3.0 };
        pointOnStack[-1] = 3.0;
        pointOnStack[PointDims] = 0.0;

        double* pointOnHeap = new double[PointDims + 100000];
        pointOnHeap[-1] = 4.0;
        delete[] pointOnHeap;

        double* pointDoubleFree = new double[PointDims] { 1.0, 2.0, 3.0 };
        pointDoubleFree[PointDims] = 4.0;
        delete[] pointDoubleFree;
        Base* base = new Derived();
        delete base; // missing virtual destrucor
        constexpr size_t buff_size = 128;
        char* buffer = new char[buff_size];
        std::memset(buffer, '\0', buff_size);
        std::memset(&buffer[buff_size - 28], '=', 30);
    }
    wprintf_s(L"Loop completed!\r\n");
}

_ **Figure 3** _

With Continue On Error, the program in Figure 3 above, produces the summary in Figure 4. That summary is printed _ **after** _ streaming all unique detailed error reports which are produced using the existing default mode of the Address Sanitizer. The existing default mode is "one-n-done". The previous Address Sanitizer only prints one detailed error report, and then exits your process. With Continue On Error, we continue to execute after various memory safety errors. This summary illustrates continuing after many memory safety errors:

![](RackMultipart20230703-1-hvjsrt_html_d751003cd5ba2429.png)

_ **Figure 4** _

Beneath the first red box at the top of Figure 4, there are three files sorted by error. This is followed by the file, function, and line displayed beneath the second box. The third box calls out eight unique errors--where unique is defined in terms of a hash function which uses call stacks and error descriptions. Use of the term [unique](#_Unique) is discussed in the next section.

The detailed error reports (omitted in the screen capture in Figure 4) are printed before this summary and contain shadow bytes with all the details for each error in the summary.

# Unique

The uniqueness of an error (to limit streaming duplicates) is determined by an internal **hash function** that uses the type of error and the call stack(s) at the time of error. A detailed individual error report includes stack trace(s). Here are the two detailed errors in the "secure by coincidence" example in Figure 1. The call stacks and types of errors are used to internally create an internal C++ error object, which is then hashed to a unique integer. The global-buffer-overflow in Figure 5 only has one call stack and is a different type of error object from the heap-buffer-overflow in Figure 6, which has two call stacks.

![](RackMultipart20230703-1-hvjsrt_html_f8328130dd6458f.png)

_ **Figure 5** _

![](RackMultipart20230703-1-hvjsrt_html_814ba706fac2d9d1.png)

_ **Figure 6** _

The runtime will hash each occurrence of an error at runtime in order to prevent duplication. Consider a [memory-safety](https://learn.microsoft.com/en-us/cpp/sanitizers/asan?view=msvc-170#error-types) error that's executed 10000 times in a loop. The detailed error will be reported once, but its "hit count" of 1000 will be reported in the summary.

# Not continuing.

Two examples where the continue on error feature _ **cannot continue** _ are:

- Malloc is given an undefined argument, such as a negative number.
- There's an AV while trying to read or write to memory that hasn't been allocated, or to which it doesn't have access.

Consider the following program which has an AV because it tries to read from location 0x13:

```cpp
#include <stdio.h>

void main()
{
    unsigned int* local_ptr = (unsigned int*) 0x13;
    printf("use of undefined address %p [%x]\n", local_ptr, *local_ptr);
}
```

_ **Figure 7** _

On Windows 11, when the example in Figure 7 above, is compiled with -fsanitize=address -Zi, you'll see the following error message in Figure 8, below.

![](RackMultipart20230703-1-hvjsrt_html_d1427cf52a5c06fe.png)

_ **Figure 8** _

We choose to "gracefully cancel" the attempt to continue from AV's that are **not** caught with a user's structured exception handling.

# Matching undefined behavior

We haven't been able to do a complete audit that would allow us to "match" undefined behaviors for C and C++. The following example in Figure 9, makes this tangible. At the commentedline in the following code example, code generation from the compiler and the runtime implementation are both different for **_alloca** when compiling with -fsanitize=address -Zi:

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
    ]
    else
    {
        printf("fail\n");
    }
}
_ **Figure 9** _

The previous example, in Figure 9, prints **pass** without -fsanitize=address. That's because **cnt==1** due to an exception. It will fail when compiled with that flag and run with the Address Sanitizer runtime. In main() we pass a large number to foo_redundant, which is passed to _alloca().

With the Address Sanitizer in Continue On Error (COE) mode, this program runs to completion, but prints **fail**. The code generation from the compiler must match the ABI for the Address Sanitizer runtime. For the Address Sanitizer runtime, the compiler grows the allocation size and aligns it 0 mod 32 (a cache line). That math will cause an integer overflow (i.e., wrap around) creating a reasonable, small positive number as the parameter to _alloca.

**There will be no stack overflow exception to process the __except handler.`**

We have not had time to document or clearly define the subtle differences when a program has undefined behavior. This was a reason for releasing Continue On Error as experimental at first.

**NOTE: The frequency with which this concern has become visible, has been rare with our testing infrastructure.**

# Top Concern – don't ship without it.

There were six categories of C++ [memory safety](https://learn.microsoft.com/en-us/cpp/sanitizers/asan?view=msvc-170#error-types) errors in the 2021 Common Weakness Enumeration (CWE) [Top 25 Most Dangerous Software Weaknesses](https://nam06.safelinks.protection.outlook.com/?url=https%3A%2F%2Fcwe.mitre.org%2Ftop25%2Farchive%2F2021%2F2021_cwe_top25.html&data=05%7C01%7Cjradigan%40microsoft.com%7C9962b611c58546f2df3308db4add742b%7C72f988bf86f141af91ab2d7cd011db47%7C1%7C0%7C638186087241566753%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C3000%7C%7C%7C&sdata=ZWphesh6v9f2PKasnd2qxKrq26EebWpv8Tb6JK1RFXg%3D&reserved=0). The best [Remote Code Execution Bug](https://nam06.safelinks.protection.outlook.com/?url=https%3A%2F%2Fpwnies.com%2Fwinners%2F&data=05%7C01%7Cjradigan%40microsoft.com%7C9962b611c58546f2df3308db4add742b%7C72f988bf86f141af91ab2d7cd011db47%7C1%7C0%7C638186087241566753%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C3000%7C%7C%7C&sdata=%2BbYI%2FqxTAHAPZzkmdmnFgpaQ%2Bb4%2B1a953XrBDUVZ9OI%3D&reserved=0) was a 20 year old heap-buffer-overflow. This award in 2022 went to BugHunter010 at Cyber KunLun Lab. This engineer discovered a heap-buffer-overflow vulnerability in the RPC protocol with CVSS score 9.8. This bug has existed in the Windows system for more than 20 years. There are new C++ memory safety bugs introduced daily because traditional testing can't expose these types of bugs without compiler and runtime support.

This new feature is designed to enable developers to implement a simple new gate for shipping C++ on Windows. Using this technology will significantly reduce memory safety errors. If your tests pass but Continue On Error reports any hidden memory safety errors, you should not ship or integrate new code into the development branch.

**We intend that Continue On Error be used as pass/fail gate, for all CI/CD pipelines using C and C++.**

## See also

[top concern](#_Top_Concern_%E2%80%93)
[Memory safety errors](https://learn.microsoft.com/en-us/cpp/sanitizers/asan?view=msvc-170#error-types)


SPARE PARTS

Visual Studio 17.6 introduced an experimental Address Sanitizer (ASAN) feature called Continue On Error (COE). You compile as before but with the the compiler flag `-fsanitizer=address.` With Visual Studio 17.6, you enable Continue On Error by setting environment variables from the command line.

If you are familiar with earlier versions of ASAN, you know that you needed the `llvm_symbolzer.exe` binary. With the new ASAN runtime, this is no longer necessary. Which makes it even easier to use ASAN with your normal test harness because you don't have to accomodate extra binaries.

In the Visual Studio development environment, set the compiler switch [/fsanitizer=address](../build/reference/fsanitize.md):

1. Open your project's **Property Pages** dialog box.
1. Select the **Configuration Properties** > **C/C++** > **General** property page.
1. Modify the **Enable Address Sanitizer** property. To enable it, choose Yes (/fsanitize=address).
1. Choose OK to save your changes.

Build the app from the main menu with **Build** > **Build Solution**.

