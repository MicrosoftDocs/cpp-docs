---
title: "Compiler Error C3830"
description: "Learn more about: Compiler Error C3830"
ms.date: 11/04/2016
f1_keywords: ["C3830"]
helpviewer_keywords: ["C3830"]
---
# Compiler Error C3830

> 'type1': cannot inherit from 'type2', value types can only inherit from interface classes

## Remarks

A value type cannot inherit a base class.  For more information, see [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md).

## Example

The following example generates C3830:

```cpp
// C3830a.cpp
// compile with: /clr /c
public value struct MyStruct4 {
   int i;
};

public value class MyClass : public MyStruct4 {};   // C3830

// OK
public interface struct MyInterface4 {
   void i();
};

public value class MyClass2 : public MyInterface4 {
public:
   virtual void i(){}
};
```
