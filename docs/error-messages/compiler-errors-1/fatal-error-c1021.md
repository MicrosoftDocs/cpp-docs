---
description: "Learn more about: Fatal Error C1021"
title: "Fatal Error C1021"
ms.date: "11/04/2016"
f1_keywords: ["C1021"]
helpviewer_keywords: ["C1021"]
ms.assetid: e23171f4-ca6b-40c0-a913-a2edc6fa3766
---
# Fatal Error C1021

invalid preprocessor command 'string'

`string` is not a valid [preprocessor directive](../../preprocessor/preprocessor-directives.md). To resolve the error, use a valid preprocessor name for `string`.

The following sample generates C1021:

```cpp
// C1021.cpp
#BadPreProcName    // C1021 delete line
```
