---
description: "Learn more about: Compiler Error C2931"
title: "Compiler Error C2931"
ms.date: "11/04/2016"
f1_keywords: ["C2931"]
helpviewer_keywords: ["C2931"]
ms.assetid: 33430407-b149-4ba3-baf8-b0dae1ea3a5d
---
# Compiler Error C2931

'class' : type-class-id redefined as a member function of 'identifier'

You cannot use a generic or template class as a member function of another class.

This error can be caused if braces are improperly matched.

The following sample generates C2931:

```cpp
// C2931.cpp
// compile with: /c
template<class T>
struct TC { };
struct MyStruct {
   void TC<int>();   // C2931
};

struct TC2 { };
struct MyStruct2 {
   void TC2();
};
```

C2931 can also occur when using generics:

```cpp
// C2931b.cpp
// compile with: /clr /c
generic<class T> ref struct GC {};
struct MyStruct {
   void GC<int>();   // C2931
   void GC2();   // OK
};
```
