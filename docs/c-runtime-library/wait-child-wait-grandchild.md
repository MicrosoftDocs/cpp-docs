---
description: "Learn more about: _WAIT_CHILD, _WAIT_GRANDCHILD"
title: "_WAIT_CHILD, _WAIT_GRANDCHILD"
ms.date: "11/04/2016"
f1_keywords: ["PROCESS/_WAIT_CHILD", "PROCESS/_WAIT_GRANDCHILD", "_WAIT_CHILD", "_WAIT_GRANDCHILD"]
helpviewer_keywords: ["WAIT_CHILD constant", "WAIT_GRANDCHILD constant", "_WAIT_CHILD constant", "_WAIT_GRANDCHILD constant"]
ms.assetid: 7acd96fa-d118-4339-bb00-e5afaf286945
---
# `_WAIT_CHILD`, `_WAIT_GRANDCHILD`

## Syntax

```C
#include <process.h>
```

## Remarks

The `_cwait` function can be used by any process to wait for any other process (if the process ID is known). The action argument can be one of the following values:

| Constant | Meaning |
|---|---|
| `_WAIT_CHILD` | Calling process waits until specified new process terminates. |
| `_WAIT_GRANDCHILD` | Calling process waits until specified new process, and all processes created by that new process, terminate. |

## See also

[`_cwait`](./reference/cwait.md)\
[Global constants](./global-constants.md)
