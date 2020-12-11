---
description: "Learn more about: Compiler Error C2904"
title: "Compiler Error C2904"
ms.date: "11/04/2016"
f1_keywords: ["C2904"]
helpviewer_keywords: ["C2904"]
ms.assetid: d5802f2e-d3fc-473d-aa04-36957b4eaca5
---
# Compiler Error C2904

'identifier' : name already used for a template in the current scope

Check the code for duplicate names.

The following sample generates C2904:

```cpp
// C2904.cpp
// compile with: /c
void X();  // X is declared as a function
template<class T> class X{};  // C2904
```
