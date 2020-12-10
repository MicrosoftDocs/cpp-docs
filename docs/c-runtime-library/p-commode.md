---
description: "Learn more about: __p__commode"
title: "__p__commode"
ms.date: "4/2/2020"
api_name: ["__p__commode", "_o___p__commode"]
api_location: ["msvcr110.dll", "msvcrt.dll", "msvcr120.dll", "msvcr90.dll", "msvcr100.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__p__commode"]
helpviewer_keywords: ["__p__commode"]
ms.assetid: 4380acb8-e3e4-409c-a60f-6205ac5189ce
---
# __p__commode

Points to the `_commode` global variable, which specifies the default *file commit mode* for file I/O operations.

## Syntax

```cpp
int * __p__commode(
   );
```

## Return Value

Pointer to the `_commode` global variable.

## Remarks

The `__p__commode` function is for internal use only, and should not be called from user code.

File commit mode specifies when critical data is written to disk. For more information, see [fflush](../c-runtime-library/reference/fflush.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|__p\__commode|internal.h|
