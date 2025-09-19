---
title: "Compiler Error C2931"
description: "Learn more about: Compiler Error C2931"
ms.date: 06/01/2022
f1_keywords: ["C2931"]
helpviewer_keywords: ["C2931"]
---
# Compiler Error C2931

> '*class*' : type-class-id redefined as a member function of '*identifier*'

## Remarks

You can't use a generic or template class as a member function of another class.

This error is obsolete in Visual Studio 2022 and later versions.

This error can be caused if braces are improperly matched.

## Examples

The following example generates C2931:

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
