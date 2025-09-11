---
title: "Compiler Error C2808"
description: "Learn more about: Compiler Error C2808"
ms.date: 11/04/2016
f1_keywords: ["C2808"]
helpviewer_keywords: ["C2808"]
---
# Compiler Error C2808

> unary 'operator operator' has too many formal parameters

## Remarks

The unary operator has a nonvoid parameter list.

## Example

The following example generates C2808:

```cpp
// C2808.cpp
// compile with: /c
class X {
public:
   X operator! ( X );   // C2808 nonvoid parameter list
   X operator! ( void );   // OK
};
```
