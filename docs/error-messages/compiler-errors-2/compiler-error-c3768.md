---
title: "Compiler Error C3768 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3768"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3768"]
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3768

> cannot take the address of a virtual vararg function in pure managed code

## Remarks

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

When compiling with **/clr:pure**, you cannot take the address of a virtual `vararg` function.

## Example

The following sample generates C3768:

```cpp
// C3768.cpp
// compile with: /clr:pure
struct A
{
   virtual void f(...);
};

int main()
{
   &(A::f);   // C3768
}
```