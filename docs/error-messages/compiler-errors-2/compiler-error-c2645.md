---
title: "Compiler Error C2645"
description: "Learn more about: Compiler Error C2645"
ms.date: 11/04/2016
f1_keywords: ["C2645"]
helpviewer_keywords: ["C2645"]
---
# Compiler Error C2645

> no qualified name for pointer to member (found ':: *')

## Remarks

The declaration of a pointer to a member does not specify a class.

## Example

The following example generates C2645:

```cpp
// C2645.cpp
class A {};
int main() {
   int B::* bp;   // C2645 B not defined
   int A::* ap;   // OK
}
```
