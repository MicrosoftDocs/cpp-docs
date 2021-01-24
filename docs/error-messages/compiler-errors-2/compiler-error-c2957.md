---
description: "Learn more about: Compiler Error C2957"
title: "Compiler Error C2957"
ms.date: "11/04/2016"
f1_keywords: ["C2957"]
helpviewer_keywords: ["C2957"]
ms.assetid: 9cb4526f-4af8-47e9-b786-56192627ca72
---
# Compiler Error C2957

'delim' : invalid left delimiter : expected '<'

A generic class was ill formed.

The following sample generates C2957:

```cpp
// C2957.cpp
// compile with: /clr /LD
generic << class T>   // C2957
// try the following line instead
// generic < class T>
gc class C {};
```
