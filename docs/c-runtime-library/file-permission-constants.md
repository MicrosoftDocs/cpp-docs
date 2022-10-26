---
description: "Learn more about: File Permission Constants"
title: "File Permission Constants"
ms.date: "11/04/2016"
helpviewer_keywords: ["S_IWRITE constant", "constants [C++], file attributes", "S_IREAD constant", "file permissions [C++]", "_S_IWRITE constant", "_S_IREAD constant"]
ms.assetid: 593cad33-31d1-44d2-8941-8af7d210c88c
---
# File permission constants

## Syntax

```C
#include <sys/stat.h>
```

## Remarks

One of these constants is required when `_O_CREAT` (`_open`, `_sopen`) is specified.

The `pmode` argument specifies the file's permission settings as follows.

| Constant | Meaning |
|---|---|
| `_S_IREAD` | Reading permitted |
| `_S_IWRITE` | Writing permitted |
| `_S_IREAD | _S_IWRITE` | Reading and writing permitted |

When used as the `pmode` argument for `_umask`, the manifest constant sets the permission setting, as follows.

| Constant | Meaning |
|---|---|
| `_S_IREAD` | Writing not permitted (file is read-only) |
| `_S_IWRITE` | Reading not permitted (file is write-only) |
| `_S_IREAD | _S_IWRITE` | Both reading and writing not permitted |

## See also

[`_open`, `_wopen`](./reference/open-wopen.md)\
[`_sopen`, `_wsopen`](./reference/sopen-wsopen.md)\
[`_umask`](./reference/umask.md)\
[Standard types](./standard-types.md)\
[Global constants](./global-constants.md)
