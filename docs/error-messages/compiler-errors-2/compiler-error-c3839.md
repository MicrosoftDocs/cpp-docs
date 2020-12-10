---
description: "Learn more about: Compiler Error C3839"
title: "Compiler Error C3839"
ms.date: "11/04/2016"
f1_keywords: ["C3839"]
helpviewer_keywords: ["C3839"]
ms.assetid: 0957faff-1e9f-439b-876b-85bd8d2c578d
---
# Compiler Error C3839

cannot change alignment in a managed or WinRT type

Alignment of variables in managed or Windows Runtime types is controlled by the CLR or Windows Runtime and cannot be modified with [align](../../cpp/align-cpp.md).

The following sample generates C3839:

```cpp
// C3839a.cpp
// compile with: /clr
ref class C
{
public:
   __declspec(align(32)) int m_j; // C3839
};

int main()
{
}
```
