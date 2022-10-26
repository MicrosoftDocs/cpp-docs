---
description: "Learn more about: File Constants"
title: "File Constants"
ms.date: "11/04/2016"
f1_keywords: ["_O_APPEND", "_O_CREAT", "_O_EXCL", "_O_RDONLY", "_O_RDWR", "_O_TRUNC", "_O_WRONLY", "FCNTL/_O_APPEND", "FCNTL/_O_CREAT", "FCNTL/_O_EXCL", "FCNTL/_O_RDONLY", "FCNTL/_O_RDWR", "FCNTL/_O_TRUNC", "FCNTL/_O_WRONLY"]
helpviewer_keywords: ["_O_RDWR constant", "O_EXCL constant", "O_RDWR constant", "O_WRONLY constant", "O_APPEND constant", "O_CREAT constant", "_O_CREAT constant", "_O_APPEND constant", "_O_EXCL constant", "O_TRUNC constant", "_O_RDONLY constant", "_O_TRUNC constant", "O_RDONLY constant", "_O_WRONLY constant"]
ms.assetid: c8fa5548-9ac2-4217-801d-eb45e86f2fa4
---
# File constants

## Syntax

```C
#include <fcntl.h>
```

## Remarks

The integer expression formed from one or more of these constants determines the type of reading or writing operations permitted. It's formed by combining one or more constants with a translation-mode constant.

The file constants are as follows:

| Constant | Description |
|---|---|
| `_O_APPEND` | Repositions the file pointer to the end of the file before every write operation. |
| `_O_CREAT` | Creates and opens a new file for writing; the constant has no effect if the file specified by *`filename`* exists. |
| `_O_EXCL` | Returns an error value if the file specified by *`filename`* exists. Only applies when used with `_O_CREAT`. |
| `_O_RDONLY` | Opens file for reading only; if this flag is given, `_O_RDWR` and `_O_WRONLY` can't be given. |
| `_O_RDWR` | Opens file for both reading and writing; if this flag is given, `_O_RDONLY` and `_O_WRONLY` can't be given. |
| `_O_TRUNC` | Opens and truncates an existing file to zero length; the file must have write permission. The contents of the file are destroyed. If this flag is given, you can't specify `_O_RDONLY`. |
| `_O_WRONLY` | Opens file for writing only; if this flag is given, `_O_RDONLY` and `_O_RDWR` can't be given. |

## See also

[`_open`, `_wopen`](./reference/open-wopen.md)\
[`_sopen`, `_wsopen`](./reference/sopen-wsopen.md)\
[Global constants](./global-constants.md)
