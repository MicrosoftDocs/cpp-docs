---
title: "Compiler Error C2464"
description: "Learn more about: Compiler Error C2464"
ms.date: 11/04/2016
f1_keywords: ["C2464"]
helpviewer_keywords: ["C2464"]
---
# Compiler Error C2464

> 'identifier' : cannot use 'new' to allocate a reference

## Remarks

A reference identifier was allocated with the **`new`** operator. References are not memory objects, so **`new`** cannot return a pointer to them. Use the standard variable declaration syntax to declare a reference.

## Example

The following example generates C2464:

```cpp
// C2464.cpp
int main() {
   new ( int& ir );   // C2464
}
```
