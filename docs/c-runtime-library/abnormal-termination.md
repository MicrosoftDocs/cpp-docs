---
description: "Learn more about: _abnormal_termination"
title: "_abnormal_termination"
ms.date: "11/04/2016"
api_name: ["_abnormal_termination"]
api_location: ["msvcr110.dll", "msvcr110_clr0400.dll", "msvcr90.dll", "msvcr120.dll", "msvcrt.dll", "msvcr80.dll", "msvcr100.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_abnormal_termination"]
helpviewer_keywords: ["_abnormal_termination"]
ms.assetid: 952970a4-9586-4c3d-807a-db729448c91c
---
# _abnormal_termination

Indicates whether the **`__finally`** block of a [try-finally statement](../cpp/try-finally-statement.md) is entered while the system is executing an internal list of termination handlers.

## Syntax

```cpp
int   _abnormal_termination(
   );
```

## Return Value

**`true`** if the system is *unwinding* the stack; otherwise, **`false`**.

## Remarks

This is an internal function used to manage unwinding exceptions, and is not intended to be called from user code.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|_abnormal_termination|excpt.h|

## See also

[try-finally Statement](../cpp/try-finally-statement.md)
