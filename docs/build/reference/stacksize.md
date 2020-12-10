---
description: "Learn more about: STACKSIZE"
title: "STACKSIZE"
ms.date: "11/04/2016"
f1_keywords: ["STACKSIZE"]
helpviewer_keywords: ["STACKSIZE .def file statement"]
ms.assetid: 4d8c79bd-1cb4-4e4d-90f2-b5a7a4d20e7a
---
# STACKSIZE

Sets the size of the stack in bytes.

```
STACKSIZE reserve[,commit]
```

## Remarks

An equivalent way to set the stack is with the [Stack Allocations](stack-stack-allocations.md) (/STACK) option. See the documentation on that option for details about the *reserve* and `commit` arguments.

This option has no effect on DLLs.

## See also

[Rules for Module-Definition Statements](rules-for-module-definition-statements.md)
