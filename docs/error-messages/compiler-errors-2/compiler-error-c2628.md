---
description: "Learn more about: Compiler Error C2628"
title: "Compiler Error C2628"
ms.date: "11/04/2016"
f1_keywords: ["C2628"]
helpviewer_keywords: ["C2628"]
ms.assetid: 19a25e77-d5be-4107-88d5-0745b6281f98
---
# Compiler Error C2628

'type1' followed by 'type2' is illegal (did you forget a ';'?)

A semicolon may be missing.

The following sample generates C2628:

```cpp
// C2628.cpp
class CMyClass {}
int main(){}   // C2628 error
```

Possible resolution:

```cpp
// C2628b.cpp
class CMyClass {};
int main(){}
```
