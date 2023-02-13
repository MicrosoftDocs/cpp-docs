---
description: "Learn more about: signal Action Constants"
title: "signal Action Constants"
ms.date: "11/04/2016"
f1_keywords: ["SIGNAL/SIG_IGN", "SIGNAL/SIG_DFL", "SIGNAL/SIG_GET", "SIGNAL/SIG_SGE", "SIGNAL/SIG_ACK", "SIGNAL/SIG_ERR", "SIG_IGN", "SIG_DFL", "SIG_GET", "SIG_SGE", "SIG_ACK", "SIG_ERR"]
helpviewer_keywords: ["signal action constants", "SIG_IGN constant", "SIG_DFL constant"]
ms.assetid: c3cb4f15-d39e-4d9d-84f9-0d33e3eb5993
---
# `signal` action constants

The action taken when the interrupt signal is received depends on the value of `func`.

## Syntax

```C
#include <signal.h>
```

## Remarks

The `func` argument must be either a function address or one of the manifest constants listed below and defined in SIGNAL.H.

| Constant | Description |
|---|---|
| `SIG_DFL` | Uses system-default response. If the calling program uses stream I/O, buffers created by the run-time library aren't flushed. |
| `SIG_IGN` | Ignores interrupt signal. This value should never be given for `SIGFPE`, since the floating-point state of the process is left undefined. |
| `SIG_GET` | Returns the current value of the signal. |
| `SIG_SGE` | Indicates an error occurred in the signal. |
| `SIG_ACK` | Indicates an acknowledgment was received. |
| `SIG_ERR` | A return type from a signal indicating an error has occurred. |

## See also

[`signal`](./reference/signal.md)\
[Global constants](./global-constants.md)
