---
title: "Compiler Error C2541"
description: "Learn more about: Compiler Error C2541"
ms.date: 11/04/2016
f1_keywords: ["C2541"]
helpviewer_keywords: ["C2541"]
---
# Compiler Error C2541

> 'delete' : delete : cannot delete objects that are not pointers

## Remarks

The [delete](../../cpp/delete-operator-cpp.md) operator was used on an object that is not a pointer.

## Example

The following example generates C2541:

```cpp
// C2541.cpp
int main() {
   int i;
   delete i;   // C2541 i not a pointer

   // OK
   int *ip = new int;
   delete ip;
}
```
