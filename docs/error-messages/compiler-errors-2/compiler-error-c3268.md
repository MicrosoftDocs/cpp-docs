---
description: "Learn more about: Compiler Error C3268"
title: "Compiler Error C3268"
ms.date: "11/04/2016"
f1_keywords: ["C3268"]
helpviewer_keywords: ["C3268"]
ms.assetid: d74a630c-daea-4e29-9759-83efef7fb184
---
# Compiler Error C3268

> '*function*' : a generic function or a member-function of a generic class cannot have a variable parameter list

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

See [Generics](../../extensions/generics-cpp-component-extensions.md) for more information.

## Example

The following sample generates C3268.

```cpp
// C3268.cpp
// compile with: /clr:pure /c
generic <class ItemType>
void Test(ItemType item, ...) {}   // C3268
// try the following line instead
// void Test(ItemType item) {}

generic <class ItemType2>
ref struct MyStruct { void Test(...){} };   // C3268
// try the following line instead
// ref struct MyStruct { void Test2(){} };   // OK
```
