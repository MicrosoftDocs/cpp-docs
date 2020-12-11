---
description: "Learn more about: Compiler Error C3087"
title: "Compiler Error C3087"
ms.date: "11/04/2016"
f1_keywords: ["C3087"]
helpviewer_keywords: ["C3087"]
ms.assetid: 4f5bdd52-a853-4f02-b160-6868e9190b9d
---
# Compiler Error C3087

'named_argument': call of 'attribute' already initializes this member

A named argument was specified in the same attribute block as an unnamed argument for the same value. Specify only a named or unnamed argument.

## Example

The following sample generates C3087.

```cpp
// C3087.cpp
// compile with: /c
[idl_quote("quote1", text="quote2")];   // C3087
[idl_quote(text="quote3")];   // OK
[idl_quote("quote4")];   // OK
```
