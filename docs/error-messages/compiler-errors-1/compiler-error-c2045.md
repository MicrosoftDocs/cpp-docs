---
title: "Compiler Error C2045"
description: "Learn more about: Compiler Error C2045"
ms.date: 11/04/2016
f1_keywords: ["C2045"]
helpviewer_keywords: ["C2045"]
---
# Compiler Error C2045

> 'identifier' : label redefined

## Remarks

The label appears before multiple statements in the same function.

## Example

The following example generates C2045:

```cpp
// C2045.cpp
int main() {
   label: {
   }
   goto label;
   label: {}   // C2045
}
```
