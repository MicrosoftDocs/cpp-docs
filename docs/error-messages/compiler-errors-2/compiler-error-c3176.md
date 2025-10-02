---
title: "Compiler Error C3176"
description: "Learn more about: Compiler Error C3176"
ms.date: 11/04/2016
f1_keywords: ["C3176"]
helpviewer_keywords: ["C3176"]
---
# Compiler Error C3176

> 'type' : cannot declare local value type

## Remarks

A class can only be declared as a value type at global scope.

## Example

The following example generates C3176.

```cpp
// C3176.cpp
// compile with: /clr
int main () {
   enum class C {};   // C3176
}
```
