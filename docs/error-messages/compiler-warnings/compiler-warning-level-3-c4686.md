---
title: "Compiler Warning (level 3) C4686 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4686"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4686"]
ms.assetid: 767c83c2-9e4b-4f9e-88c8-02128ba563f4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4686

> '*user-defined type*' : possible change in behavior, change in UDT return calling convention

## Remarks

A class template specialization was not is defined before it was used in a return type. Anything that instantiates the class will resolve C4686; declaring an instance or accessing a member (C\<int>::anything) are also options.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

Try the following instead:

```cpp
// C4686.cpp
// compile with: /W3
#pragma warning (default : 4686)
template <class T>
class C;

template <class T>
C<T> f(T);

template <class T>
class C {};

int main() {
   f(1);   // C4686
}

template <class T>
C<T> f(T) {
   return C<int>();
}
```