---
description: "Learn more about: _initterm, _initterm_e"
title: "_initterm, _initterm_e"
ms.date: "11/04/2016"
api_name: ["_initterm_e", "_initterm"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_initterm_e", "initterm", "_initterm", "initterm_e"]
helpviewer_keywords: ["initterm function", "initterm_e function", "_initterm function", "_initterm_e function"]
ms.assetid: 85131efe-c747-429a-8897-bcdedb000172
---
# _initterm, _initterm_e

Internal methods that walk a table of function pointers and initialize them.

The first pointer is the starting location in the table and the second pointer is the ending location.

## Syntax

```C
void __cdecl _initterm(
   PVFV *,
   PVFV *
);

int __cdecl _initterm_e(
   PVFV *,
   PVFV *
);
```

## Return Value

A non-zero error code if an initialization fails and throws an error; 0 if no error occurs.

## Remarks

These methods are only called internally during the initialization of a C++ program. Do not call these methods in a program.

When these methods walk a table of function entries, they skip **NULL** entries and continue.

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
