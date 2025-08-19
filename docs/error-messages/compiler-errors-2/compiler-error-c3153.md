---
title: "Compiler Error C3153"
description: "Learn more about: Compiler Error C3153"
ms.date: 11/04/2016
f1_keywords: ["C3153"]
helpviewer_keywords: ["C3153"]
---
# Compiler Error C3153

> 'interface' : you cannot create an instance of an interface

## Remarks

An interface cannot be instantiated. To use the members of an interface, derive a class from the interface, implement the interface members, and then use the members.

## Example

The following example generates C3153:

```cpp
// C3153.cpp
// compile with: /clr
interface class A {
};

int main() {
   A^ a = gcnew A;   // C3153
}
```
