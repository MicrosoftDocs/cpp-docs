---
title: "Compiler Error C3839"
description: "Learn more about: Compiler Error C3839"
ms.date: 11/04/2016
f1_keywords: ["C3839"]
helpviewer_keywords: ["C3839"]
---
# Compiler Error C3839

> cannot change alignment in a managed or WinRT type

## Remarks

Alignment of variables in managed or Windows Runtime types is controlled by the CLR or Windows Runtime and cannot be modified with [align](../../cpp/align-cpp.md).

## Example

The following example generates C3839:

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
