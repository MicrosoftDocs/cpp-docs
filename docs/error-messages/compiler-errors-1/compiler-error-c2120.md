---
description: "Learn more about: Compiler Error C2120"
title: "Compiler Error C2120"
ms.date: "11/04/2016"
f1_keywords: ["C2120"]
helpviewer_keywords: ["C2120"]
ms.assetid: b0f3f66c-6cd2-4f48-9ea3-c270b53c2b8c
---
# Compiler Error C2120

> 'void' illegal with all types

## Remarks

The **`void`** type is used in a declaration with another type.

## Example

The following example generates C2120:

```cpp
// C2120.cpp
int main() {
   void int i;   // C2120
   int j;   // OK
}
```
