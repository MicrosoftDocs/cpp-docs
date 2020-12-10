---
description: "Learn more about: Compiler Error C2779"
title: "Compiler Error C2779"
ms.date: "11/04/2016"
f1_keywords: ["C2779"]
helpviewer_keywords: ["C2779"]
ms.assetid: 4a00e492-855a-41f3-8a18-5f60ee20c2f2
---
# Compiler Error C2779

'declaration' : property methods can only be associated with non-static data members

The **`property`** extended attribute is incorrectly applied to a static data member.

The following sample generates C2779:

```cpp
// C2779.cpp
struct A {
   static __declspec(property(put=PutProp))
   // try the following line instead
   __declspec(property(put=PutProp))
      int prop;   // C2779
   int PutProp(void);
};
```
