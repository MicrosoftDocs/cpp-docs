---
title: "Compiler Error C3213"
description: "Learn more about: Compiler Error C3213"
ms.date: 11/04/2016
f1_keywords: ["C3213"]
helpviewer_keywords: ["C3213"]
---
# Compiler Error C3213

> base class 'base_type' is less accessible than 'derived_type'

## Remarks

A type that will be visible from an assembly must use publicly visible base classes.

## Example

The following example generates C3213:

```cpp
// C3213.cpp
// compile with: /clr
private ref struct privateG {
public:
   int i;
};

public ref struct publicG {
public:
   int i;
};

public ref struct V : public privateG {   // C3213
public:
   int j;
};

public ref struct W: public publicG {   // OK
public:
   int j;
};
```
