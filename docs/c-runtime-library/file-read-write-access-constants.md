---
description: "Learn more about: File Read/Write Access Constants"
title: "File Read-Write Access Constants"
ms.date: "11/04/2016"
helpviewer_keywords: ["read/write access constants", "write access constants", "access constants for file read/write", "constants [C++], file attributes", "file read/write access constants"]
ms.assetid: 56cd1d22-39a5-4fcf-bea2-7046d249e8ee
---
# File read/write access constants

## Syntax

```C
#include <stdio.h>
```

## Remarks

These constants specify the access type ("a", "r", or "w") requested for the file. Both the [translation mode](./file-translation-constants.md) ("b" or "t") and the [commit-to-disk mode](./commit-to-disk-constants.md) ("c" or "n") can be specified with the type of access.

The access types are described in this table:

| Access type | Description |
|---|---|
| **"`r`"** | Opens for reading. If the file doesn't exist or can't be found, the call to open the file fails. |
| **"`w`"** | Opens an empty file for writing. If the given file exists, its contents are destroyed. |
| **"`a`"** | Opens for writing at the end of the file (appending); creates the file first if it doesn't exist. All write operations occur at the end of the file. Although the file pointer can be repositioned using `fseek` or `rewind`, it's always moved back to the end of the file before any write operation is carried out. |
| **"`r+`"** | Opens for both reading and writing. If the file doesn't exist or can't be found, the call to open the file fails. |
| **"`w+`"** | Opens an empty file for both reading and writing. If the given file exists, its contents are destroyed. |
| **"`a+`"** | The same as **"`a`"** but also allows reading. |

When the "r+", "w+", or "a+" type is specified, both reading and writing are allowed (the file is said to be open for "update"). However, when you switch between reading and writing, there must be an intervening `fflush`, `fsetpos`, `fseek`, or `rewind` operation. The current position can be specified for the `fsetpos` or `fseek` operation.

## See also

[`_fdopen`, `_wfdopen`](./reference/fdopen-wfdopen.md)\
[`fopen`, `_wfopen`](./reference/fopen-wfopen.md)\
[`freopen`, `_wfreopen`](./reference/freopen-wfreopen.md)\
[`_fsopen`, `_wfsopen`](./reference/fsopen-wfsopen.md)\
[`_popen`, `_wpopen`](./reference/popen-wpopen.md)\
[Global constants](./global-constants.md)
