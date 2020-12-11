---
description: "Learn more about: Compiler Error C2087"
title: "Compiler Error C2087"
ms.date: "11/04/2016"
f1_keywords: ["C2087"]
helpviewer_keywords: ["C2087"]
ms.assetid: 89761e83-415a-4468-a4c6-b6dedfd1dd6a
---
# Compiler Error C2087

'identifier' : missing subscript

The definition of an array with multiple subscripts is missing a subscript value for a dimension higher than one.

The following sample generates C2087:

```cpp
// C2087.cpp
int main() {
   char a[10][];   // C2087
}
```

Possible resolution:

```cpp
// C2087b.cpp
int main() {
   char b[4][5];
}
```
