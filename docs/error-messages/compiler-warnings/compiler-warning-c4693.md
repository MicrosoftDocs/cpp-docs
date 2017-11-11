---
title: "Compiler Warning C4693 | Microsoft Docs"
ms.date: "10/25/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C4693"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4693"]
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning C4693

> 'class': a sealed abstract class cannot have any instance members 'Test'

If a type is marked [sealed](../../windows/sealed-cpp-component-extensions.md) and [abstract](../../windows/abstract-cpp-component-extensions.md), it can only have static members.

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md).

## Example

The following sample generates C4693.

```cpp
// C4693.cpp
// compile with: /clr /c
public ref class Public_Ref_Class sealed abstract {
public:
   void Test() {}   // C4693
   static void Test2() {}   // OK
};
```