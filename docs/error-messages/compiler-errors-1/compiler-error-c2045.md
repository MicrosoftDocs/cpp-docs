---
description: "Learn more about: Compiler Error C2045"
title: "Compiler Error C2045"
ms.date: "11/04/2016"
f1_keywords: ["C2045"]
helpviewer_keywords: ["C2045"]
ms.assetid: 2fca668e-9b20-4933-987a-18c0fd0187df
---
# Compiler Error C2045

'identifier' : label redefined

The label appears before multiple statements in the same function.

The following sample generates C2045:

```cpp
// C2045.cpp
int main() {
   label: {
   }
   goto label;
   label: {}   // C2045
}
```
