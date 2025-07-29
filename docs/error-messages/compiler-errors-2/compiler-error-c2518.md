---
title: "Compiler Error C2518"
description: "Learn more about: Compiler Error C2518"
ms.date: 11/04/2016
f1_keywords: ["C2518"]
helpviewer_keywords: ["C2518"]
---
# Compiler Error C2518

> keyword 'keyword' illegal in base class list; ignored

## Remarks

The keywords **`class`** and **`struct`** should not appear in a base class list.

## Example

The following example generates C2518:

```cpp
// C2518.cpp
// compile with: /c
class B {};
class C : public class B {};   // C2518
class D: public B {};   // OK
```
