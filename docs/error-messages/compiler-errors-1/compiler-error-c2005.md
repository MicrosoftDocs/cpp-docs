---
description: "Learn more about: Compiler Error C2005"
title: "Compiler Error C2005"
ms.date: "11/04/2016"
f1_keywords: ["C2005"]
helpviewer_keywords: ["C2005"]
ms.assetid: 090530ed-e0ec-4358-833a-ca24260e7ffe
---
# Compiler Error C2005

\#line expected a line number, found 'token'

The `#line` directive must be followed by a line number.

The following sample generates C2005:

```cpp
// C2005.cpp
int main() {
   int i = 0;
   #line i   // C2005
}
```

Possible resolution:

```cpp
// C2005b.cpp
int main() {
   int i = 0;
   #line 0
}
```
