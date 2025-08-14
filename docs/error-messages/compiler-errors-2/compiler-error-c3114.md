---
title: "Compiler Error C3114"
description: "Learn more about: Compiler Error C3114"
ms.date: 11/04/2016
f1_keywords: ["C3114"]
helpviewer_keywords: ["C3114"]
---
# Compiler Error C3114

> 'argument': not a valid named attribute argument

## Remarks

In order for an attribute class data member to be a valid named argument, it must not be marked **`static`**, **`const`**, or **`literal`**. If a property, the property must not be **`static`** and must have get and set accessors.

For more information, see [property](../../extensions/property-cpp-component-extensions.md) and [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following example generates C3114.

```cpp
// C3114.cpp
// compile with: /clr /c
public ref class A : System::Attribute {
public:
   static property int StaticProp {
      int get();
   }

   property int Prop2 {
      int get();
      void set(int i);
   }
};

[A(StaticProp=123)]   // C3114
public ref class R {};

[A(Prop2=123)]   // OK
public ref class S {};
```
