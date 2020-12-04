---
description: "Learn more about: Compiler Error C3623"
title: "Compiler Error C3623"
ms.date: "11/04/2016"
f1_keywords: ["C3623"]
helpviewer_keywords: ["C3623"]
ms.assetid: a0341b45-062a-4f67-beb9-ba74201ed1ed
---
# Compiler Error C3623

'variable': bit fields are not supported in managed or WinRT types

The use of bit fields is not permitted on variables in a managed or WinRT class.

The following sample generates C3623:

```cpp
// C3623.cpp
// compile with: /clr
using namespace System;
ref class CMyClass {
public:
   int i : 1;   // C3623
};

int main() {
   CMyClass^ pMyClass = gcnew CMyClass();
   pMyClass->i = 3;
   Console::Out->WriteLine(pMyClass->i);
}
```
