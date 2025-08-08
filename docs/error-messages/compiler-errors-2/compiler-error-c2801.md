---
title: "Compiler Error C2801"
description: "Learn more about: Compiler Error C2801"
ms.date: 11/04/2016
f1_keywords: ["C2801"]
helpviewer_keywords: ["C2801"]
---
# Compiler Error C2801

> 'operator operator' must be a non-static member

## Remarks

The following operators can be overloaded only as nonstatic members:

- Assignment `=`

- Class member access `->`

- Subscripting `[]`

- Function call `()`

Possible C2801 causes:

- Overloaded operator is not a class, structure, or union member.

- Overloaded operator is declared **`static`**.

## Example

- The following example generates C2801:

```cpp
// C2801.cpp
// compile with: /c
operator[]();   // C2801 not a member
class A {
   static operator->();   // C2801 static
   operator()();   // OK
};
```
