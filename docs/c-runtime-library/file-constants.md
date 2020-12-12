---
description: "Learn more about: File Constants"
title: "File Constants"
ms.date: "11/04/2016"
f1_keywords: ["_O_EXCL", "_O_RDWR", "_O_APPEND", "_O_RDONLY", "_O_TRUNC", "_O_CREAT", "_O_WRONLY"]
helpviewer_keywords: ["_O_RDWR constant", "O_EXCL constant", "O_RDWR constant", "O_WRONLY constant", "O_APPEND constant", "O_CREAT constant", "_O_CREAT constant", "_O_APPEND constant", "_O_EXCL constant", "O_TRUNC constant", "_O_RDONLY constant", "_O_TRUNC constant", "O_RDONLY constant", "_O_WRONLY constant"]
ms.assetid: c8fa5548-9ac2-4217-801d-eb45e86f2fa4
---
# File Constants

## Syntax

```
#include <fcntl.h>
```

## Remarks

The integer expression formed from one or more of these constants determines the type of reading or writing operations permitted. It is formed by combining one or more constants with a translation-mode constant.

The file constants are as follows:

|Constant|Description|
|-|-|
| `_O_APPEND`  | Repositions the file pointer to the end of the file before every write operation.  |
| `_O_CREAT`  | Creates and opens a new file for writing; this has no effect if the file specified by *filename* exists.  |
| `_O_EXCL`  | Returns an error value if the file specified by *filename* exists. Only applies when used with `_O_CREAT`.  |
| `_O_RDONLY`  | Opens file for reading only; if this flag is given, neither `_O_RDWR` nor `_O_WRONLY` can be given.  |
| `_O_RDWR`  | Opens file for both reading and writing; if this flag is given, neither `_O_RDONLY` nor `_O_WRONLY` can be given.  |
| `_O_TRUNC`  | Opens and truncates an existing file to zero length; the file must have write permission. The contents of the file are destroyed. If this flag is given, you cannot specify `_O_RDONLY`.  |
| `_O_WRONLY`  | Opens file for writing only; if this flag is given, neither `_O_RDONLY` nor `_O_RDWR` can be given.  |

## See also

[_open, _wopen](../c-runtime-library/reference/open-wopen.md)<br/>
[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
