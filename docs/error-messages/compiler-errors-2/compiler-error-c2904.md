---
title: "Compiler Error C2904"
description: "Learn more about: Compiler Error C2904"
ms.date: 11/04/2016
f1_keywords: ["C2904"]
helpviewer_keywords: ["C2904"]
---
# Compiler Error C2904

> 'identifier' : name already used for a template in the current scope

## Remarks

Check the code for duplicate names.

## Example

The following example generates C2904:

```cpp
// C2904.cpp
// compile with: /c
void X();  // X is declared as a function
template<class T> class X{};  // C2904
```
