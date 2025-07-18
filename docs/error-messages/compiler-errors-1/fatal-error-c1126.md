---
title: "Fatal Error C1126"
description: "Learn more about: Fatal Error C1126"
ms.date: 11/04/2016
f1_keywords: ["C1126"]
helpviewer_keywords: ["C1126"]
---
# Fatal Error C1126

> 'identifier' : automatic allocation exceeds size

## Remarks

Space allocated for local variables of a function (plus a limited amount of space used by the compiler, such as an extra 20 bytes for swappable functions) exceeds the limit.

To correct this error, use `malloc` or **`new`** to allocate large amounts of data.
