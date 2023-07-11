---
description: "Learn more about: _iob"
title: "_iob"
ms.date: 07/10/2023
api_name: ["_iob"]
api_location: ["msvcrt.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_iob", "_IOB_ENTRIES", "STDIO/_IOB_ENTRIES"]
helpviewer_keywords: ["_iob global variable", "iob global variable"]
---
# `_iob`

The array of `stdio` control structures.

## Syntax

```C
FILE _iob[_IOB_ENTRIES];
```

## Remarks

Starting with Visual Studio 2015, `_IOB_ENTRIES` is defined as 3 with the introduction of the Universal CRT.
It was previously defined as 20.

Defined in `stdio.h`.

## See also

[Global variables](./global-variables.md)\
[Introducing the Universal CRT](https://devblogs.microsoft.com/cppblog/introducing-the-universal-crt/)
