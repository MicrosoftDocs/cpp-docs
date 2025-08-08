---
title: "Compiler Error C2807"
description: "Learn more about: Compiler Error C2807"
ms.date: 11/04/2016
f1_keywords: ["C2807"]
helpviewer_keywords: ["C2807"]
---
# Compiler Error C2807

> the second formal parameter to postfix 'operator operator' must be 'int'

## Remarks

The second parameter to a postfix operator has the wrong type.

## Example

The following example generates C2807:

```cpp
// C2807.cpp
// compile with: /c
class X {
public:
   X operator++ ( X );   // C2807 nonvoid parameter
   X operator++ ( int );   // OK, int parameter
};
```
