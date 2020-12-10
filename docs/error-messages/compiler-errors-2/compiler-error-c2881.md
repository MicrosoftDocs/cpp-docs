---
description: "Learn more about: Compiler Error C2881"
title: "Compiler Error C2881"
ms.date: "11/04/2016"
f1_keywords: ["C2881"]
helpviewer_keywords: ["C2881"]
ms.assetid: b49c63c2-b064-4d4b-a75e-ddd2af947522
---
# Compiler Error C2881

'namespace1' : is already used as an alias for 'namespace2'

You cannot use the same name as an alias for two namespaces.

The following sample generates C2881:

```cpp
// C2881.cpp
// compile with: /c
namespace A {
   int k;
}

namespace B {
   int i;
}

namespace C = A;
namespace C = B;   // C2881 C is already an alias for A
```
