---
title: "Compiler Error C2137"
description: "Learn more about: Compiler Error C2137"
ms.date: 11/04/2016
f1_keywords: ["C2137"]
helpviewer_keywords: ["C2137"]
---
# Compiler Error C2137

> empty character constant

## Remarks

The empty character constant ( ' ' ) is not permitted.

## Example

The following example generates C2137:

```cpp
// C2137.cpp
int main() {
   char c = '';   // C2137
   char d = ' ';   // OK
}
```
