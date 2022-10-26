---
description: "Learn more about: Commit-To-Disk Constants"
title: "Commit-To-Disk Constants"
ms.date: "11/04/2016"
f1_keywords: ["vc.constants"]
helpviewer_keywords: ["commit-to-disk constants"]
ms.assetid: 0b903b23-b4fa-431e-a937-51d95f695ecf
---
# Commit-to-disk constants

**Microsoft Specific**

## Syntax

```C
#include <stdio.h>
```

## Remarks

These Microsoft-specific constants specify whether the buffer associated with the open file is flushed to operating system buffers or to disk. The mode is included in the string specifying the type of read/write access (**"r"**, **"w"**, **"a"**, **"r+"**, **"w+"**, **"a+"**).

The commit-to-disk modes are as follows:

- **c**

   Writes the unwritten contents of the specified buffer to disk. This commit-to-disk functionality only occurs at explicit calls to either the [`fflush`](./reference/fflush.md) or the [`_flushall`](./reference/flushall.md) function. This mode is useful when dealing with sensitive data. For example, if your program terminates after a call to `fflush` or `_flushall`, you can be sure that your data reached the operating system's buffers. However, unless a file is opened with the **c** option, the data might never make it to disk if the operating system also terminates.

- **n**

   Writes the unwritten contents of the specified buffer to the operating system's buffers. The operating system can cache data and then determine an optimal time to write to disk. Under many conditions, this behavior makes for efficient program behavior. However, if the retention of data is critical (such as bank transactions or airline ticket information) consider using the **c** option. The **n** mode is the default.

> [!NOTE]
> The **c** and **n** options are not part of the ANSI standard for `fopen`, but are Microsoft extensions and should not be used where ANSI portability is desired.

## Using the commit-to-disk feature with existing code

By default, calls to the [`fflush`](./reference/fflush.md) or [`_flushall`](./reference/flushall.md) library functions write data to buffers maintained by the operating system. The operating system determines the optimal time to actually write the data to disk. The commit-to-disk feature of the run-time library lets you ensure that critical data is written directly to disk rather than to the operating system's buffers. You can give this capability to an existing program without rewriting it by linking its object files with COMMODE.OBJ.

In the resulting executable file, calls to `fflush` write the contents of the buffer directly to disk, and calls to `_flushall` write the contents of all buffers to disk. These two functions are the only ones affected by COMMODE.OBJ.

**END Microsoft Specific**

## See also

[Stream I/O](./stream-i-o.md)\
[`_fdopen`, `_wfdopen`](./reference/fdopen-wfdopen.md)\
[`fopen`, `_wfopen`](./reference/fopen-wfopen.md)\
[Global constants](./global-constants.md)
