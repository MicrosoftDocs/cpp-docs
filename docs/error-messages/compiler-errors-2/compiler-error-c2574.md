---
description: "Learn more about: Compiler Error C2574"
title: "Compiler Error C2574"
ms.date: "11/04/2016"
f1_keywords: ["C2574"]
helpviewer_keywords: ["C2574"]
ms.assetid: 3e1c5c18-ee8b-4dbb-bfc0-d3b8991af71b
---
# Compiler Error C2574

'destructor' : cannot be declared static

Neither destructors nor constructors can be declared **`static`**.

The following sample generates C2574:

```cpp
// C2574.cpp
// compile with: /c
class A {
   virtual static ~A();   // C2574
   //  try the following line instead
   // virtual ~A();
};
```
