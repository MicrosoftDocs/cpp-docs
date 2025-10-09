---
title: "Compiler Error C3809"
description: "Learn more about: Compiler Error C3809"
ms.date: 11/04/2016
f1_keywords: ["C3809"]
helpviewer_keywords: ["C3809"]
---
# Compiler Error C3809

> 'class' : a managed or WinRT type cannot have any friend functions/classes/interfaces

## Remarks

Managed types and Windows Runtime types do not allow friends. To fix this error, do not declare friends inside managed or Windows Runtime types.

## Example

The following example generates C3809:

```cpp
// C3809a.cpp
// compile with: /clr
ref class A {};

ref class B
{
public:
   friend ref class A;   // C3809
};

int main()
{
}
```
