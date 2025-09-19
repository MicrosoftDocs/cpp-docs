---
title: "Compiler Error C3087"
description: "Learn more about: Compiler Error C3087"
ms.date: 11/04/2016
f1_keywords: ["C3087"]
helpviewer_keywords: ["C3087"]
---
# Compiler Error C3087

> 'named_argument': call of 'attribute' already initializes this member

## Remarks

A named argument was specified in the same attribute block as an unnamed argument for the same value. Specify only a named or unnamed argument.

## Example

The following example generates C3087.

```cpp
// C3087.cpp
// compile with: /c
[idl_quote("quote1", text="quote2")];   // C3087
[idl_quote(text="quote3")];   // OK
[idl_quote("quote4")];   // OK
```
