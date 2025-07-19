---
title: "Compiler Error C2208"
description: "Learn more about: Compiler Error C2208"
ms.date: 11/04/2016
f1_keywords: ["C2208"]
helpviewer_keywords: ["C2208"]
---
# Compiler Error C2208

> 'type' : no members defined using this type

## Remarks

An identifier resolving to a type name is in an aggregate declaration, but the compiler cannot declare a member.

## Example

The following example generates C2208:

```cpp
// C2208.cpp
class C {
   C;   // C2208
   C(){}   // OK
};
```
