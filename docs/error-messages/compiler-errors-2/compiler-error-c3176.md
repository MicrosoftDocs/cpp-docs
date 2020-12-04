---
description: "Learn more about: Compiler Error C3176"
title: "Compiler Error C3176"
ms.date: "11/04/2016"
f1_keywords: ["C3176"]
helpviewer_keywords: ["C3176"]
ms.assetid: 6cc8d602-8e15-47a7-b1b5-e93e5d50e271
---
# Compiler Error C3176

'type' : cannot declare local value type

A class can only be declared as a value type at global scope.

## Example

The following sample generates C3176.

```cpp
// C3176.cpp
// compile with: /clr
int main () {
   enum class C {};   // C3176
}
```
