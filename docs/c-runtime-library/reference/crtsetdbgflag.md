---
description: "Learn more about: _CrtSetDbgFlag"
title: "_CrtSetDbgFlag"
ms.date: "11/04/2016"
api_name: ["_CrtSetDbgFlag"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CRTDBG_REPORT_FLAG", "_CRTDBG_CHECK_EVERY_16_DF", "_CRTDBG_CHECK_DEFAULT_DF", "CRTDBG_CHECK_DEFAULT_DF", "CRTDBG_CHECK_EVERY_128_DF", "CRTDBG_CHECK_EVERY_1024_DF", "_CRTDBG_CHECK_EVERY_128_DF", "CrtSetDbgFlag", "CRTDBG_CHECK_EVERY_16_DF", "_CRTDBG_CHECK_EVERY_1024_DF", "_CrtSetDbgFlag", "CRTDBG_REPORT_FLAG"]
helpviewer_keywords: ["_CRTDBG_CHECK_EVERY_16_DF macro", "CRTDBG_CHECK_EVERY_16_DF macro", "_CRTDBG_CHECK_ALWAYS_DF macro", "_CRTDBG_CHECK_DEFAULT_DF macro", "CRTDBG_ALLOC_MEM_DF macro", "CRTDBG_CHECK_ALWAYS_DF macro", "_CRTDBG_ALLOC_MEM_DF macro", "_CRTDBG_REPORT_FLAG macro", "_CRTDBG_CHECK_EVERY_128_DF macro", "CRTDBG_REPORT_FLAG macro", "_CRTDBG_CHECK_EVERY_1024_DF macro", "CRTDBG_CHECK_DEFAULT_DF macro", "CRTDBG_CHECK_EVERY_1024_DF macro", "_CrtSetDbgFlag function", "CrtSetDbgFlag function", "_CRTDBG_DELAY_FREE_MEM_DF macro", "CRTDBG_CHECK_EVERY_128_DF macro", "CRTDBG_DELAY_FREE_MEM_DF macro", "CRTDBG_CHECK_CRT_DF macro", "_CRTDBG_CHECK_CRT_DF macro"]
ms.assetid: b5657ffb-6178-4cbf-9886-1af904ede94c
---
# _CrtSetDbgFlag

Retrieves or modifies the state of the **_crtDbgFlag** flag to control the allocation behavior of the debug heap manager (debug version only).

## Syntax

```C
int _CrtSetDbgFlag(
   int newFlag
);
```

### Parameters

*newFlag*<br/>
New state for **_crtDbgFlag**.

## Return Value

Returns the previous state of **_crtDbgFlag**.

## Remarks

The **_CrtSetDbgFlag** function allows the application to control how the debug heap manager tracks memory allocations by modifying the bit fields of the **_crtDbgFlag** flag. By setting the bits (turning on), the application can instruct the debug heap manager to perform special debugging operations, including checking for memory leaks when the application exits and reporting if any are found, simulating low-memory conditions by specifying that freed memory blocks should remain in the heap's linked list, and verifying the integrity of the heap by inspecting each memory block at every allocation request. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtSetDbgFlag** are removed during preprocessing.

The following table lists the bit fields for **_crtDbgFlag** and describes their behavior. Because setting the bits results in increased diagnostic output and reduced program execution speed, these bits are not set (turned off) by default. For more information about these bit fields, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details).

|Bit field|Default|Description|
|---------------|-------------|-----------------|
|**_CRTDBG_ALLOC_MEM_DF**|ON|ON: Enable debug heap allocations and use of memory block type identifiers, such as **_CLIENT_BLOCK**. OFF: Add new allocations to heap's linked list, but set block type to **_IGNORE_BLOCK**.<br /><br /> Can also be combined with any of the heap-frequency check macros.|
|**_CRTDBG_CHECK_ALWAYS_DF**|OFF|ON: Call [_CrtCheckMemory](crtcheckmemory.md) at every allocation and deallocation request. OFF: **_CrtCheckMemory** must be called explicitly.<br /><br /> Heap-frequency check macros have no effect when this flag is set.|
|**_CRTDBG_CHECK_CRT_DF**|OFF|ON: Include **_CRT_BLOCK** types in leak detection and memory state difference operations. OFF: Memory used internally by the run-time library is ignored by these operations.<br /><br /> Can also be combined with any of the heap-frequency check macros.|
|**_CRTDBG_DELAY_FREE_MEM_DF**|OFF|ON: Keep freed memory blocks in the heap's linked list, assign them the **_FREE_BLOCK** type, and fill them with the byte value 0xDD. OFF: Do not keep freed blocks in the heap's linked list.<br /><br /> Can also be combined with any of the heap-frequency check macros.|
|**_CRTDBG_LEAK_CHECK_DF**|OFF|ON: Perform automatic leak checking at program exit through a call to [_CrtDumpMemoryLeaks](crtdumpmemoryleaks.md) and generate an error report if the application failed to free all the memory it allocated. OFF: Do not automatically perform leak checking at program exit.<br /><br /> Can also be combined with any of the heap-frequency check macros.|

**Heap-Check Frequency Macros**

You can specify how often the C run-time library performs validation of the debug heap (**_CrtCheckMemory**) based on the number of calls to **malloc**, **realloc**, **free**, and **_msize**.

**_CrtSetDbgFlag** then inspects the upper 16 bits of the *newFlag* parameter for a value. The value specified is the number of **malloc**, **realloc**, **free**, and **_msize** calls between **_CrtCheckMemory** calls. Four predefined macros are provided for this purpose.

|Macro|Number of malloc, realloc, free, and _msize calls between calls to _CrtCheckMemory|
|-----------|------------------------------------------------------------------------------------------|
|_CRTDBG_CHECK_EVERY_16_DF|16|
|_CRTDBG_CHECK_EVERY_128_DF|128|
|_CRTDBG_CHECK_EVERY_1024_DF|1024|
|_CRTDBG_CHECK_DEFAULT_DF|0 (by default, no heap checks)|

By default, **_CrtCheckMemory** is called once every 1,024 times you call **malloc**, **realloc**, **free**, and **_msize**.

For example, you could specify a heap check every 16 **malloc**, **realloc**, **free**, and **_msize** operations with the following code:

```C
#include <crtdbg.h>
int main( )
{
    int tmp;

    // Get the current bits
    tmp = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);

    // Clear the upper 16 bits and OR in the desired frequency
    tmp = (tmp & 0x0000FFFF) | _CRTDBG_CHECK_EVERY_16_DF;

    // Set the new bits
    _CrtSetDbgFlag(tmp);
}
```

The upper 16 bits of the *newFlag* parameter are ignored when _CRTDBG_CHECK_ALWAYS_DF is specified. In this case, **_CrtCheckMemory** is called each time you call **malloc**, **realloc**, **free**, and **_msize**.

*newFlag* is the new state to apply to the **_crtDbgFlag** and is a combination of the values for each of the bit fields.

### To change one or more of these bit fields and create a new state for the flag

1. Call **_CrtSetDbgFlag** with *newFlag* equal to **_CRTDBG_REPORT_FLAG** to obtain the current **_crtDbgFlag** state and store the returned value in a temporary variable.

1. Turn on any bits by a bitwise **OR** of the temporary variable with the corresponding bitmasks (represented in the application code by manifest constants).

1. Turn off the other bits by **AND**-ing the variable with a bitwise **NOT** of the appropriate bitmasks.

1. Call **_CrtSetDbgFlag** with *newFlag* equal to the value stored in the temporary variable to set the new state for **_crtDbgFlag**.

The following code demonstrates how to simulate low-memory conditions by keeping freed memory blocks in the heap's linked list and prevent **_CrtCheckMemory** from being called at every allocation request:

```C
// Get the current state of the flag
// and store it in a temporary variable
int tmpFlag = _CrtSetDbgFlag( _CRTDBG_REPORT_FLAG );

// Turn On (OR) - Keep freed memory blocks in the
// heap's linked list and mark them as freed
tmpFlag |= _CRTDBG_DELAY_FREE_MEM_DF;

// Turn Off (AND) - prevent _CrtCheckMemory from
// being called at every allocation request
tmpFlag &= ~_CRTDBG_CHECK_ALWAYS_DF;

// Set the new state for the flag
_CrtSetDbgFlag( tmpFlag );
```

For an overview of memory management and the debug heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

To disable a flag with the **_CrtSetDbgFlag** function, you should **AND** the variable with the bitwise **NOT** of the bitmask.

If *newFlag* is not a valid value, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns the previous state of **_crtDbgFlag**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtSetDbgFlag**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

```C
// crt_crtsetdflag.c
// compile with: /c -D_DEBUG /MTd -Od -Zi -W3 /link -verbose:lib /debug

// This program concentrates on allocating and freeing memory
// blocks to test the functionality of the _crtDbgFlag flag.

#include <string.h>
#include <malloc.h>
#include <crtdbg.h>

int main( )
{
    char *p1, *p2;
    int tmpDbgFlag;

    _CrtSetReportMode( _CRT_ERROR, _CRTDBG_MODE_FILE );
    _CrtSetReportFile( _CRT_ERROR, _CRTDBG_FILE_STDERR );

    // Set the debug-heap flag to keep freed blocks in the
    // heap's linked list - This will allow us to catch any
    // inadvertent use of freed memory
    tmpDbgFlag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
    tmpDbgFlag |= _CRTDBG_DELAY_FREE_MEM_DF;
    tmpDbgFlag |= _CRTDBG_LEAK_CHECK_DF;
    _CrtSetDbgFlag(tmpDbgFlag);

    // Allocate 2 memory blocks and store a string in each
    p1 = malloc( 34 );
    p2 = malloc( 38 );
    strcpy_s( p1, 34, "p1 points to a Normal allocation block" );
    strcpy_s( p2, 38, "p2 points to a Client allocation block" );

    // Free both memory blocks
    free( p2 );
    free( p1 );

    // Set the debug-heap flag to no longer keep freed blocks in the
    // heap's linked list and turn on Debug type allocations (CLIENT)
    tmpDbgFlag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
    tmpDbgFlag |= _CRTDBG_ALLOC_MEM_DF;
    tmpDbgFlag &= ~_CRTDBG_DELAY_FREE_MEM_DF;
    _CrtSetDbgFlag(tmpDbgFlag);

    // Explicitly call _malloc_dbg to obtain the filename and
    // line number of our allocation request and also so we can
    // allocate CLIENT type blocks specifically for tracking
    p1 = _malloc_dbg( 40, _NORMAL_BLOCK, __FILE__, __LINE__ );
    p2 = _malloc_dbg( 40, _CLIENT_BLOCK, __FILE__, __LINE__ );
    strcpy_s( p1, 40, "p1 points to a Normal allocation block" );
    strcpy_s( p2, 40, "p2 points to a Client allocation block" );

    // _free_dbg must be called to free the CLIENT block
    _free_dbg( p2, _CLIENT_BLOCK );
    free( p1 );

    // Allocate p1 again and then exit - this will leave unfreed
    // memory on the heap
    p1 = malloc( 10 );
}
```

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>
[_CrtCheckMemory](crtcheckmemory.md)<br/>
