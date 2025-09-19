---
title: "Compiler Error C2838"
description: "Learn more about: Compiler Error C2838"
ms.date: 11/04/2016
f1_keywords: ["C2838"]
helpviewer_keywords: ["C2838"]
---
# Compiler Error C2838

> 'member' : illegal qualified name in member declaration

## Remarks

A class, structure, or union uses a fully qualified name to redeclare a member of another class, structure, or union.

## Example

The following example generates C2838:

```cpp
// C2838.cpp
// compile with: /c
class Bellini {
public:
    void Norma();
};

class Bottesini {
   Bellini::Norma();  // C2838
};
```
