---
title: "Compiler Error C3722"
description: "Learn more about: Compiler Error C3722"
ms.date: 11/04/2016
f1_keywords: ["C3722"]
helpviewer_keywords: ["C3722"]
---
# Compiler Error C3722

> a generic event is not allowed

## Remarks

The compiler only allows generic classes, structs, and functions.  For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following example generates C3722:

```cpp
// C3722.cpp
// compile with: /clr
generic <typename T>
public delegate void MyEventHandler(System::Object^ sender, System::EventArgs^ e, T optional);

generic <class T>
public ref struct MyButton {
   generic<typename U>
   event MyEventHandler<U>^ Click;   // C3722
};
```
