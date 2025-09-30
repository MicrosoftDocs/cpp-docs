---
title: "_CrtReportBlockType"
description: "Learn more about: _CrtReportBlockType"
ms.date: 11/04/2016
api_name: ["_CrtReportBlockType"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CrtReportBlockType", "CrtReportBlockType"]
helpviewer_keywords: ["CrtReportBlockType function", "BLOCK_SUBTYPE macro", "_CrtReportBlockType function", "_BLOCK_TYPE macro", "_BLOCK_SUBTYPE macro", "BLOCK_TYPE macro"]
---
# `_CrtReportBlockType`

Returns the block type/subtype associated with a given debug heap block pointer.

## Syntax

```C
int _CrtReportBlockType(
   const void * pBlock
);
```

### Parameters

*`pBlock`*\
Pointer to a valid debug heap block.

## Return value

When passed a valid debug heap pointer, the **`_CrtReportBlockType`** function returns the block type and subtype in the form of an **`int`**. When passed an invalid pointer, the function returns -1.

## Remarks

To extract the type and subtype returned by **`_CrtReportBlockType`**, use the macros `_BLOCK_TYPE` and `_BLOCK_SUBTYPE` (both defined in Crtdbg.h) on the return value.

For information about the allocation block types and how they're used, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap).

## Requirements

| Routine | Required header |
|---|---|
| **`_CrtReportBlockType`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## Example

```cpp
// crt_crtreportblocktype.cpp
// compile with: /MDd

#include <malloc.h>
#include <stdio.h>
#include <crtdbg.h>

void __cdecl Dumper(void *ptr, void *)
{
    int block = _CrtReportBlockType(ptr);
    _RPT3(_CRT_WARN, "Dumper found block at %p: type %d, subtype %d\n", ptr,
          _BLOCK_TYPE(block), _BLOCK_SUBTYPE(block));
}

void __cdecl LeakDumper(void *ptr, size_t sz)
{
    int block = _CrtReportBlockType(ptr);
    _RPT4(_CRT_WARN, "LeakDumper found block at %p:"
                     " type %d, subtype %d, size %d\n", ptr,
          _BLOCK_TYPE(block), _BLOCK_SUBTYPE(block), sz);
}

int main(void)
{
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) |
    _CRTDBG_LEAK_CHECK_DF);
    _CrtSetReportMode( _CRT_WARN, _CRTDBG_MODE_FILE );
    _CrtSetReportFile( _CRT_WARN, _CRTDBG_FILE_STDOUT );
    _malloc_dbg(10, _NORMAL_BLOCK , __FILE__, __LINE__);
    _malloc_dbg(10, _CLIENT_BLOCK | (1 << 16), __FILE__, __LINE__);
    _malloc_dbg(20, _CLIENT_BLOCK | (2 << 16), __FILE__, __LINE__);
    _malloc_dbg(30, _CLIENT_BLOCK | (3 << 16), __FILE__, __LINE__);
    _CrtDoForAllClientObjects(Dumper, NULL);
    _CrtSetDumpClient(LeakDumper);
}
```

### Sample output

```Output
Dumper found block at 00314F78: type 4, subtype 3
Dumper found block at 00314F38: type 4, subtype 2
Dumper found block at 00314F00: type 4, subtype 1
Detected memory leaks!
Dumping objects ->
crt_crtreportblocktype.cpp(30) : {55} client block at 0x00314F78, subtype 3, 30 bytes long.
Data: <                > CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD
crt_crtreportblocktype.cpp(29) : {54} client block at 0x00314F38, subtype 2, 20 bytes long.
Data: <                > CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD
crt_crtreportblocktype.cpp(28) : {53} client block at 0x00314F00, subtype 1, 10 bytes long.
Data: <          > CD CD CD CD CD CD CD CD CD CD
crt_crtreportblocktype.cpp(27) : {52} normal block at 0x00314EC8, 10 bytes long.
Data: <          > CD CD CD CD CD CD CD CD CD CD
Object dump complete.
```

## See also

[`_CrtDoForAllClientObjects`](crtdoforallclientobjects.md)\
[`_CrtSetDumpClient`](crtsetdumpclient.md)\
[`_CrtMemDumpAllObjectsSince`](crtmemdumpallobjectssince.md)\
[`_CrtDumpMemoryLeaks`](crtdumpmemoryleaks.md)
