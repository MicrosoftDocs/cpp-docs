---
title: "Compiler Error C2117"
description: "Learn more about: Compiler Error C2117"
ms.date: 11/04/2016
f1_keywords: ["C2117"]
helpviewer_keywords: ["C2117"]
---
# Compiler Error C2117

> 'identifier' : array bounds overflow

## Remarks

An array has too many initializers:

- Array elements and initializers do not match in size and quantity.

- No space for the null terminator in a string.

## Example

The following example generates C2117:

```cpp
// C2117.cpp
int main() {
   char abc[4] = "abcd";   // C2117
   char def[4] = "abd";   // OK
}
```
