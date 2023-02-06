---
title: Find memory leaks with the CRT library
description: Learn how the C/C++ debugger and C Run-time Library (CRT) can help find memory leaks. The techniques include memory-leak reports and comparing memory snapshots.
ms.date: 02/03/2023
helpviewer_keywords: 
  - breakpoints, on memory allocation
  - _CrtMemState
  - _CrtMemCheckpoint
  - memory leaks
  - _CrtMemDifference
  - memory leaks, detecting and isolating
  - _CrtDumpMemoryLeaks
  - _CrtSetBreakAlloc
  - _crtBreakAlloc
  - _CrtSetReportMode
  - memory, debugging
  - _CrtMemDumpStatistics
  - debugging memory leaks
  - _CRTDBG_MAP_ALLOC
  - _CrtSetDbgFlag
---
# Find memory leaks with the CRT library

Memory leaks are among the most subtle and hard-to-detect bugs in C/C++ apps. Memory leaks result from the failure to correctly deallocate memory that was previously allocated. A small memory leak might not be noticed at first, but over time can cause symptoms ranging from poor performance to crashing when the app runs out of memory. A leaking app that uses up all available memory can cause other apps to crash, creating confusion as to which app is responsible. Even harmless memory leaks might indicate other problems that should be corrected.

The Visual Studio debugger and C Run-time Library (CRT) can help you detect and identify memory leaks.

## Enable memory leak detection

The primary tools for detecting memory leaks are the C/C++ debugger and the CRT debug heap functions.

To enable all the debug heap functions, include the following statements in your C++ program, in the following order:

```cpp
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
```

The `#define` statement maps a base version of the CRT heap functions to the corresponding debug version. If you leave out the `#define` statement, the memory leak dump will be [less detailed](#interpret-the-memory-leak-report).

Including *crtdbg.h* maps the `malloc` and `free` functions to their debug versions, [`_malloc_dbg`](./reference/malloc-dbg.md) and [`_free_dbg`](./reference/free-dbg.md), which track memory allocation and deallocation. This mapping occurs only in debug builds, which have `_DEBUG`. Release builds use the ordinary `malloc` and `free` functions.

After you've enabled the debug heap functions by using the preceding statements, place a call to [`_CrtDumpMemoryLeaks`](./reference/crtdumpmemoryleaks.md) before an app exit point to display a memory-leak report when the app exits.

```cpp
_CrtDumpMemoryLeaks();
```

If your app has several exits, you don't need to manually place `_CrtDumpMemoryLeaks` at every exit point. To cause an automatic call to `_CrtDumpMemoryLeaks` at each exit point, place a call to `_CrtSetDbgFlag` at the beginning of your app with the bit fields shown here:

```cpp
_CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
```

By default, `_CrtDumpMemoryLeaks` outputs the memory-leak report to the **Debug** pane of the **Output** window. If you use a library, the library might reset the output to another location.

You can use `_CrtSetReportMode` to redirect the report to another location, or back to the **Output** window as shown here:

```cpp
_CrtSetReportMode( _CRT_WARN, _CRTDBG_MODE_DEBUG );
```

The following example shows a simple memory leak and displays memory leak information using `_CrtDumpMemoryLeaks();`.

```cpp
// debug_malloc.cpp
// compile by using: cl /EHsc /W4 /D_DEBUG /MDd debug_malloc.cpp
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int* x = (int*)malloc(sizeof(int));

    *x = 7;

    printf("%d\n", *x);

    x = (int*)calloc(3, sizeof(int));
    x[0] = 7;
    x[1] = 77;
    x[2] = 777;

    printf("%d %d %d\n", x[0], x[1], x[2]);

    _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG); 
    _CrtDumpMemoryLeaks();
}
```

## Interpret the memory-leak report

If your app doesn't define `_CRTDBG_MAP_ALLOC`, [_CrtDumpMemoryLeaks](./reference/crtdumpmemoryleaks.md) displays a memory-leak report that looks like:

```cmd
Detected memory leaks!
Dumping objects ->
{18} normal block at 0x00780E80, 64 bytes long.
 Data: <                > CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD
Object dump complete.
```

If your app defines `_CRTDBG_MAP_ALLOC`, the memory-leak report looks like:

```cmd
Detected memory leaks!
Dumping objects ->
c:\users\username\documents\projects\leaktest\leaktest.cpp(20) : {18}
normal block at 0x00780E80, 64 bytes long.
 Data: <                > CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD
Object dump complete.
```

The second report shows the filename and line number where the leaked memory is first allocated.

Whether or not you define `_CRTDBG_MAP_ALLOC`, the memory-leak report displays:

- The memory allocation number, which is `18` in the example
- The block type, `normal` in the example.
- The hexadecimal memory location, `0x00780E80` in the example.
- The size of the block, `64 bytes` in the example.
- The first 16 bytes of data in the block, in hexadecimal form.

Memory block types are *normal*, *client*, or *CRT*. A *normal block* is ordinary memory allocated by your program. A *client block* is a special type of memory block used by MFC programs for objects that require a destructor. The MFC `new` operator creates either a normal block or a client block, as appropriate for the object being created.

A *CRT block* is allocated by the CRT library for its own use. The CRT library handles the deallocation for these blocks, so CRT blocks won't appear in the memory-leak report unless there are serious problems with the CRT library.

There are two other types of memory blocks that never appear in memory-leak reports. A *free block* is memory that has been released, so by definition isn't leaked. An *ignore block* is memory that you've explicitly marked to exclude from the memory-leak report.

The preceding techniques identify memory leaks for memory allocated using the standard CRT `malloc` function. If your program allocates memory using the C++ `new` operator, however, you may only see the filename and line number where `operator new` calls `_malloc_dbg` in the memory-leak report. To create a more useful memory-leak report, you can write a macro like the following to report the line that made the allocation:

```cpp
#ifdef _DEBUG
    #define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
    // Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
    // allocations to be of _CLIENT_BLOCK type
#else
    #define DBG_NEW new
#endif
```

Now you can replace the `new` operator by using the `DBG_NEW` macro in your code. In debug builds, `DBG_NEW` uses an overload of global `operator new` that takes extra parameters for the block type, file, and line number. The overload of `new` calls `_malloc_dbg` to record the extra information. The memory-leak reports show the filename and line number where the leaked objects were allocated. Release builds still use the default `new`. Here's an example of the technique:

```cpp
// debug_new.cpp
// compile by using: cl /EHsc /W4 /D_DEBUG /MDd debug_new.cpp
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
    #define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
    // Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
    // allocations to be of _CLIENT_BLOCK type
#else
    #define DBG_NEW new
#endif

struct Pod {
    int x;
};

void main() {
    Pod* pPod = DBG_NEW Pod;
    pPod = DBG_NEW Pod; // Oops, leaked the original pPod!
    delete pPod;

    _CrtDumpMemoryLeaks();
}
```

When you run this code in the Visual Studio debugger, the call to `_CrtDumpMemoryLeaks` generates a report in the **Output** window that looks similar to:

```Output
Detected memory leaks!
Dumping objects ->
c:\users\username\documents\projects\debug_new\debug_new.cpp(20) : {75}
 normal block at 0x0098B8C8, 4 bytes long.
 Data: <    > CD CD CD CD
Object dump complete.
```

This output reports that the leaked allocation was on line 20 of *debug_new.cpp*.

>[!NOTE]
>We don't recommend you create a preprocessor macro named `new`, or any other language keyword.

## Set breakpoints on a memory allocation number

The memory allocation number tells you when a leaked memory block was allocated. A block with a memory allocation number of 18, for example, is the 18th block of memory allocated during the run of the app. The CRT report counts all memory-block allocations during the run, including allocations by the CRT library and other libraries such as MFC. Therefore, memory allocation block number 18 probably isn't the 18th memory block allocated by your code.

You can use the allocation number to set a breakpoint on the memory allocation.

### To set a memory-allocation breakpoint using the Watch window

1. Set a breakpoint near the start of your app, and start debugging.

1. When the app pauses at the breakpoint, open a **Watch** window by selecting **Debug** > **Windows** > **Watch 1** (or **Watch 2**, **Watch 3**, or **Watch 4**).

1. In the **Watch** window, type `_crtBreakAlloc` in the **Name** column.

   If you're using the multithreaded DLL version of the CRT library (the /MD option), add the context operator: `{,,ucrtbased.dll}_crtBreakAlloc`

   Make sure that debug symbols are loaded. Otherwise, `_crtBreakAlloc` is reported as *unidentified*.

1. Press **Enter**.

   The debugger evaluates the call and places the result in the **Value** column. This value is **-1** if you haven't set any breakpoints on memory allocations.

1. In the **Value** column, replace the value with the allocation number of the memory allocation where you want the debugger to break.

After you set a breakpoint on a memory-allocation number, continue to debug. Make sure to run under the same conditions, so the memory-allocation number doesn't change. When your program breaks at the specified memory allocation, use the **Call Stack** window and other debugger windows to determine the conditions under which the memory was allocated. Then, you can continue execution to observe what happens to the object and determine why it isn't correctly deallocated.

Setting a data breakpoint on the object might also be helpful. For more information, see [Using breakpoints](/visualstudio/debugger/using-breakpoints.md).

You can also set memory-allocation breakpoints in code. You can set:

```cpp
_crtBreakAlloc = 18;
```

 or:

```cpp
_CrtSetBreakAlloc(18);
```

## Compare memory states

Another technique for locating memory leaks involves taking snapshots of the application's memory state at key points. To take a snapshot of the memory state at a given point in your application, create a `_CrtMemState` structure and pass it to the `_CrtMemCheckpoint` function.

```cpp
_CrtMemState s1;
_CrtMemCheckpoint( &s1 );
```

The `_CrtMemCheckpoint` function fills in the structure with a snapshot of the current memory state.

To output the contents of a `_CrtMemState` structure, pass the structure to the `_ CrtMemDumpStatistics` function:

```cpp
_CrtMemDumpStatistics( &s1 );
```

`_CrtMemDumpStatistics` outputs a dump of memory state that looks like:

```cmd
0 bytes in 0 Free Blocks.
0 bytes in 0 Normal Blocks.
3071 bytes in 16 CRT Blocks.
0 bytes in 0 Ignore Blocks.
0 bytes in 0 Client Blocks.
Largest number used: 3071 bytes.
Total allocations: 3764 bytes.
```

To determine whether a memory leak has occurred in a section of code, you can take snapshots of the memory state before and after the section, and then use `_CrtMemDifference` to compare the two states:

```cpp
_CrtMemCheckpoint( &s1 );
// memory allocations take place here
_CrtMemCheckpoint( &s2 );

if ( _CrtMemDifference( &s3, &s1, &s2) )
   _CrtMemDumpStatistics( &s3 );
```

`_CrtMemDifference` compares the memory states `s1` and `s2` and returns a result in (`s3`) that is the difference between `s1` and `s2`.

One technique for finding memory leaks begins by placing `_CrtMemCheckpoint` calls at the beginning and end of your app, then using `_CrtMemDifference` to compare the results. If `_CrtMemDifference` shows a memory leak, you can add more `_CrtMemCheckpoint` calls to divide your program using a binary search, until you've isolated the source of the leak.

## False positives

 `_CrtDumpMemoryLeaks` can give false indications of memory leaks if a library marks internal allocations as normal blocks instead of CRT blocks or client blocks. In that case, `_CrtDumpMemoryLeaks` is unable to tell the difference between user allocations and internal library allocations. If the global destructors for the library allocations run after the point where you call `_CrtDumpMemoryLeaks`, every internal library allocation is reported as a memory leak. Versions of the Standard Template Library earlier than Visual Studio .NET may cause `_CrtDumpMemoryLeaks` to report such false positives.

## See also

- [CRT debug heap details](./crt-debug-heap-details.md)
- [Debugger security](/visualstudio/debugger/debugger-security.md)
- [Debugging native code](/visualstudio/debugger/debugging-native-code.md)
