---
description: "Learn more about: __uncaught_exception"
title: "__uncaught_exception"
ms.date: "11/04/2016"
api_name: ["__uncaught_exception"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__uncaught_exception"]
helpviewer_keywords: ["__uncaught_exception"]
ms.assetid: 4d9b75c6-c9c7-4876-b761-ea9ab1925e96
---
# __uncaught_exception

Indicates whether one or more exceptions have been thrown, but have not yet been handled by the corresponding **`catch`** block of a [try-catch](../../cpp/try-throw-and-catch-statements-cpp.md) statement.

## Syntax

```cpp
bool __uncaught_exception(
   );
```

## Return Value

**`true`** from the time an exception is thrown in a **`try`** block until the matching **`catch`** block is initialized; otherwise, **`false`**.

## Remarks

## Requirements

|Routine|Required header|
|-------------|---------------------|
|__uncaught_exception|eh.h|

## See also

[try, throw, and catch Statements (C++)](../../cpp/try-throw-and-catch-statements-cpp.md)<br/>
