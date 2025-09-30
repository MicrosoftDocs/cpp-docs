---
title: "Fatal Error C1021"
description: "Learn more about: Fatal Error C1021"
ms.date: 11/04/2016
f1_keywords: ["C1021"]
helpviewer_keywords: ["C1021"]
---
# Fatal Error C1021

> invalid preprocessor command 'string'

## Remarks

`string` is not a valid [preprocessor directive](../../preprocessor/preprocessor-directives.md). To resolve the error, use a valid preprocessor name for `string`.

## Example

The following example generates C1021:

```cpp
// C1021.cpp
#BadPreProcName    // C1021 delete line
```
