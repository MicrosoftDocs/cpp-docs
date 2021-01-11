---
description: "Learn more about: Compiler Error C3892"
title: "Compiler Error C3892"
ms.date: "11/04/2016"
f1_keywords: ["C3892"]
helpviewer_keywords: ["C3892"]
ms.assetid: 83fff42c-ea48-442f-bc2e-b33a6b99d890
---
# Compiler Error C3892

'var' : you cannot assign to a variable that is const

A const variable cannot be changed after it is declared and initialized.

The following sample generates C3892:

```cpp
// C3892.cpp
// compile with: /clr
ref struct Y1 {
   static const int staticConst = 9;
};

int main() {
   Y1::staticConst = 0;   // C3892
}
```
