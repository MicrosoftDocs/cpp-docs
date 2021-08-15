---
description: "Learn more about: Compiler Error C2518"
title: "Compiler Error C2518"
ms.date: "11/04/2016"
f1_keywords: ["C2518"]
helpviewer_keywords: ["C2518"]
ms.assetid: a7895b47-da90-4851-ac97-18e81479595a
---
# Compiler Error C2518

keyword 'keyword' illegal in base class list; ignored

The keywords **`class`** and **`struct`** should not appear in a base class list.

The following sample generates C2518:

```cpp
// C2518.cpp
// compile with: /c
class B {};
class C : public class B {};   // C2518
class D: public B {};   // OK
```
