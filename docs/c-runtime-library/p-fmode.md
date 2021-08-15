---
description: "Learn more about: __p__fmode"
title: "__p__fmode"
ms.date: "4/2/2020"
api_name: ["__p__fmode", "_o___p__fmode"]
api_location: ["msvcr80.dll", "msvcr120.dll", "msvcr90.dll", "msvcrt.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__p__fmode"]
helpviewer_keywords: ["__p__fmode"]
ms.assetid: 1daa1394-81eb-43aa-a71b-4cc6acf3207b
---
# __p__fmode

Points to the `_fmode` global variable, which specifies the default *file translation mode* for file I/O operations.

## Syntax

```cpp
int* __p__fmode(
   );
```

## Return Value

Pointer to the `_fmode` global variable.

## Remarks

The `__p__fmode` function is for internal use only, and should not be called from user code.

File translation mode specifies either `binary` or `text` translation for [_open](../c-runtime-library/reference/open-wopen.md) and [_pipe](../c-runtime-library/reference/pipe.md) I/O operations. For more information, see [_fmode](../c-runtime-library/fmode.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|__p\__fmode|stdlib.h|
