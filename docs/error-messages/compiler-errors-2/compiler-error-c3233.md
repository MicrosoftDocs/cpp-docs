---
title: "Compiler Error C3233"
description: "Learn more about: Compiler Error C3233"
ms.date: 11/04/2016
f1_keywords: ["C3233"]
helpviewer_keywords: ["C3233"]
---
# Compiler Error C3233

> 'type' : generic type parameter already constrained

## Remarks

It is not valid to constrain a generic parameter in more than one `where` clause.

## Example

The following example generates C3233:

```cpp
// C3233.cpp
// compile with: /clr /LD

interface struct C {};
interface struct D {};

generic <class T>
where T : C
where T : D
ref class E {};   // C3233
```
