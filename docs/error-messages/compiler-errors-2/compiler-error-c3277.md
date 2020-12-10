---
description: "Learn more about: Compiler Error C3277"
title: "Compiler Error C3277"
ms.date: "11/04/2016"
f1_keywords: ["C3277"]
helpviewer_keywords: ["C3277"]
ms.assetid: 8ac5f476-e30c-4879-92c6-f03cdbd74045
---
# Compiler Error C3277

cannot define an unmanaged enum 'enum' inside managed 'type'

An enumeration was defined incorrectly inside a managed type.

The following sample generates C3277:

```cpp
// C3277a.cpp
// compile with: /clr
ref class A
{
   enum E {e1,e2};   // C3277
   // try the following line instead
   // enum class E {e1,e2};
};

int main()
{
}
```
