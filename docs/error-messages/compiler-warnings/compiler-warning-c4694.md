---
title: "Compiler Warning C4694 | Microsoft Docs"
ms.date: "10/25/2017"
ms.technology: ["cpp-tools"]
ms.topic: "article"
f1_keywords: ["C4694"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4694"]
ms.assetid: 5ca122bb-34f3-43ee-a21f-95802cd515f7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Warning C4694

> '*class*': a sealed abstract class cannot have a base-class '*base_class*'

An abstract and sealed class cannot inherit from a reference type; a sealed and abstract class can neither implement the base class functions nor allow itself to be used as a base class.

For more information, see [abstract](../../windows/abstract-cpp-component-extensions.md), [sealed](../../windows/sealed-cpp-component-extensions.md), and [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md).

## Example

The following sample generates C4694.

```cpp
// C4694.cpp
// compile with: /c /clr
ref struct A {};
ref struct B sealed abstract : A {};   // C4694
```