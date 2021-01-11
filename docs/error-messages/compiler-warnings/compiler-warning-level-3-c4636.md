---
description: "Learn more about: Compiler Warning (level 3) C4636"
title: "Compiler Warning (level 3) C4636"
ms.date: "11/04/2016"
f1_keywords: ["C4636"]
helpviewer_keywords: ["C4636"]
ms.assetid: 59112a0f-850f-41c6-bd84-8ae8dc84706a
---
# Compiler Warning (level 3) C4636

XML document comment applied to 'construct': tag requires non-empty '' attribute.

A tag, such as `cref`, did not have a value.

## Example

The following sample generates C4636.

```cpp
// C4636.cpp
// compile with: /clr /doc /W3 /c
/// <see cref=''/>
// /// <see cref='System::Exception'/>
ref struct A {   // C4636
   void f(int);
};

// OK
/// <see cref='System::Exception'/>
ref struct B {
   void f(int);
};
```
