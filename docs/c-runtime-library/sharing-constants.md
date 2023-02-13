---
description: "Learn more about: Sharing Constants"
title: "Sharing Constants"
ms.date: "11/04/2016"
f1_keywords: ["CORECRT_SHARE/_SH_DENYNO", "CORECRT_SHARE/_SH_DENYRD", "CORECRT_SHARE/_SH_DENYRW", "CORECRT_SHARE/_SH_DENYWR", "CORECRT_SHARE/_SH_SECURE", "_SH_DENYNO", "_SH_DENYRD", "_SH_DENYRW", "_SH_DENYWR", "_SH_SECURE"]
helpviewer_keywords: ["_SH_DENYRW constant", "SH_DENYRD constant", "_SH_SECURE constant", "_SH_DENYRD constant", "SH_DENYRW constant", "sharing constants", "SH_DENYNO constant", "_SH_DENYWR constant", "SH_DENYWR constant", "_SH_DENYNO constant", "SH_SECURE constant"]
ms.assetid: 95fadc3a-55dc-473d-98b5-e8211900465d
---
# Sharing constants

Constants for file-sharing modes.

## Syntax

```C
#include <share.h>
```

## Remarks

The *`shflag`* argument determines the sharing mode, which consists of one or more manifest constants. These constants can be combined with the *`oflag`* arguments (see [File constants](./file-constants.md)).

The following table lists the constants and their meanings:

| Constant | Meaning |
|---|---|
| `_SH_DENYRW` | Denies read and write access to file |
| `_SH_DENYWR` | Denies write access to file |
| `_SH_DENYRD` | Denies read access to file |
| `_SH_DENYNO` | Permits read and write access |
| `_SH_SECURE` | Sets secure mode (shared read, exclusive write access). |

## See also

[`_sopen`, `_wsopen`](./reference/sopen-wsopen.md)\
[`_fsopen`, `_wfsopen`](./reference/fsopen-wfsopen.md)\
[Global constants](./global-constants.md)
