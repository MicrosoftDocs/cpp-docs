---
title: "Compiler Error C3235"
description: "Learn more about: Compiler Error C3235"
ms.date: 11/04/2016
f1_keywords: ["C3235"]
helpviewer_keywords: ["C3235"]
---
# Compiler Error C3235

> 'specialization' : explicit or partial specialization of a generic class is not allowed

## Remarks

Generic classes cannot be used for explicit or partial specializations.

## Example

The following example generates C3235.

```cpp
// C3235.cpp
// compile with: /clr
generic<class T>
public ref class C {};

generic<>
public ref class C<int> {};   // C3235 Remove this specialization to resolve this error.
```
