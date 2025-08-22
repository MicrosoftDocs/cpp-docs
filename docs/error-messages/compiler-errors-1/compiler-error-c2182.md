---
title: "Compiler Error C2182"
description: "Learn more about: Compiler Error C2182"
ms.date: 11/04/2016
f1_keywords: ["C2182"]
helpviewer_keywords: ["C2182"]
---
# Compiler Error C2182

> '*identifier*': this use of 'void' is not valid

## Remarks

A variable is declared type **`void`**.

## Example

The following example generates C2182:

```cpp
// C2182.cpp
// compile with: /c
int main() {
   int i = 10;
   void &ir = i;   // C2182 cannot have a reference to type void
   int &ir = i;   // OK
}
```
