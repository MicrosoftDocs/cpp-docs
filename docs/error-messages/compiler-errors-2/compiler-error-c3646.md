---
title: "Compiler Error C3646 | Microsoft Docs"
ms.custom: ""
ms.date: "06/14/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3646"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3646"]
ms.assetid: 4391ead2-9637-4ca3-aeda-5a991b18d66d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3646

> 'specifier' : unknown override specifier

## Remarks

The compiler found a token in the position where it expected to find an override specifier, but the token was not recognized by the compiler.

For example, if the unrecognized *specifier* is **_NOEXCEPT**, replace it with the keyword **noexcept**.

For more information, see [Override Specifiers](../../windows/override-specifiers-cpp-component-extensions.md).

## Example

The following sample generates C3646 and shows a way to fix it:

```cpp
// C3646.cpp
// compile with: /clr /c
ref class C {
   void f() unknown;   // C3646
   // try the following line instead
   // virtual void f() abstract;
};
```