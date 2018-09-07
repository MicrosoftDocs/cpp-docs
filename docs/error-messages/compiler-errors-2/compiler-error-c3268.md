---
title: "Compiler Error C3268 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3268"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3268"]
ms.assetid: d74a630c-daea-4e29-9759-83efef7fb184
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3268

> '*function*' : a generic function or a member-function of a generic class cannot have a variable parameter list

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

See [Generics](../../windows/generics-cpp-component-extensions.md) for more information.

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