---
title: "Compiler Error C2739"
description: "Learn more about: Compiler Error C2739"
ms.date: 11/04/2016
f1_keywords: ["C2739"]
helpviewer_keywords: ["C2739"]
---
# Compiler Error C2739

> 'number' : explicit managed or WinRT array dimensions must be between 1 and 32

## Remarks

An array dimension was not between 1 and 32.

## Example

The following example generates C2739 and shows how to fix it:

```cpp
// C2739.cpp
// compile with: /clr
int main() {
   array<int, -1>^a;   // C2739
   // try the following line instead
   // array<int, 2>^a;
}
```
