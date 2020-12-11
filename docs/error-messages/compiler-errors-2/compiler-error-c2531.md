---
description: "Learn more about: Compiler Error C2531"
title: "Compiler Error C2531"
ms.date: "11/04/2016"
f1_keywords: ["C2531"]
helpviewer_keywords: ["C2531"]
ms.assetid: c49afe15-55f8-4dc8-ac01-bf653622a7db
---
# Compiler Error C2531

'identifier' : reference to a bit field illegal

References to bit fields are not allowed.

The following sample generates C2531:

```cpp
// C2531.cpp
// compile with: /c
class P {
   int &b1 : 10;   // C2531
   int b2 : 10;   // OK
};
```
