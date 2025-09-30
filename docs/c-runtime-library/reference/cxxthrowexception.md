---
title: "_CxxThrowException"
description: "Learn more about: _CxxThrowException"
ms.date: "11/04/2016"
api_name: ["_CxxThrowException"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CxxThrowException", "_CxxThrowException"]
helpviewer_keywords: ["_CxxThrowException function", "CxxThrowException function"]
---
# `_CxxThrowException`

Builds the exception record and calls the runtime environment to start processing the exception.

## Syntax

```C
extern "C" void __stdcall _CxxThrowException(
   void* pExceptionObject,
   _ThrowInfo* pThrowInfo
);
```

### Parameters

*`pExceptionObject`*\
The object that generated the exception.

*`pThrowInfo`*\
The information that is required to process the exception.

## Remarks

This method is included in a compiler-only file that the compiler uses to process exceptions. Don't call the method directly from your code.

## Requirements

**Source:** Throw.cpp

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)
