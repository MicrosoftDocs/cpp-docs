---
title: "Compiler Error C2655"
description: "Learn more about: Compiler Error C2655"
ms.date: 11/04/2016
f1_keywords: ["C2655"]
helpviewer_keywords: ["C2655"]
---
# Compiler Error C2655

> 'identifier' : definition or redeclaration illegal in current scope

## Remarks

An identifier can be redeclared only at global scope.

## Example

The following example generates C2655:

```cpp
// C2655.cpp
class A {};
class B {
public:
   static int i;
};

int B::i;  // OK

int main() {
   A B::i;  // C2655
}
```
