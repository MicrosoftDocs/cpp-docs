---
title: "Compiler Error C2805"
description: "Learn more about: Compiler Error C2805"
ms.date: 11/04/2016
f1_keywords: ["C2805"]
helpviewer_keywords: ["C2805"]
---
# Compiler Error C2805

> binary 'operator operator' has too few parameters

## Remarks

The binary operator has no parameters.

## Example

The following example generates C2805:

```cpp
// C2805.cpp
// compile with: /c
class X {
public:
   X operator< ( void );   // C2805 must take one parameter
   X operator< ( X );   // OK
};
```
