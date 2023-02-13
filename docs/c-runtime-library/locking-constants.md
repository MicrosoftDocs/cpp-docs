---
description: "Learn more about: _locking Constants"
title: "_locking Constants"
ms.date: "11/04/2016"
f1_keywords: ["LOCKING/_LK_RLCK", "LOCKING/_LK_NBLCK", "LOCKING/_LK_LOCK", "LOCKING/_LK_NBRLCK", "LOCKING/_LK_UNLCK", "LOCKING/LK_RLCK", "LOCKING/LK_NBLCK", "LOCKING/LK_LOCK", "LOCKING/LK_NBRLCK", "LOCKING/LK_UNLCK", "_LK_RLCK", "_LK_NBLCK", "_LK_LOCK", "_LK_NBRLCK", "_LK_UNLCK", "LK_RLCK", "LK_NBLCK", "LK_LOCK", "LK_NBRLCK", "LK_UNLCK"]
helpviewer_keywords: ["LK_UNLCK constant", "LK_NBRLCK constant", "_LK_NBRLCK constant", "_LK_NBLCK constant", "_LK_LOCK constant", "LK_NBLCK constant", "_LK_UNLCK constant", "LK_RLCK constant", "_LK_RLCK constant", "LK_LOCK constant"]
ms.assetid: c3dc92c8-60e3-4d29-9f50-5d217627c8ad
---
# `_locking` constants

## Syntax

```C
#include <sys/locking.h>
```

## Remarks

The *`mode`* argument in the call to the `_locking` function specifies the locking action to be performed.

The *`mode`* argument must be one of the following manifest constants.

| Value | Description |
|---|---|
| `_LK_LOCK` | Locks the specified bytes. If the bytes can't be locked, the function tries again after 1 second. If the bytes can't be locked after 10 attempts, the function returns an error. |
| `_LK_RLCK` | Same as `_LK_LOCK`. |
| `_LK_NBLCK` | Locks the specified bytes. If bytes can't be locked, the function returns an error. |
| `_LK_NBRLCK` | Same as `_LK_NBLCK`. |
| `_LK_UNLCK` | Unlocks the specified bytes. (The bytes must have been previously locked.) |

## See also

[`_locking`](./reference/locking.md)\
[Global constants](./global-constants.md)
