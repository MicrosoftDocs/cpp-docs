---
description: "Learn more about: Compiler Error C2491"
title: "Compiler Error C2491"
ms.date: "11/04/2016"
f1_keywords: ["C2491"]
helpviewer_keywords: ["C2491"]
ms.assetid: 4e5a8f81-124e-402c-a5ec-d35a89b5469e
---
# Compiler Error C2491

'identifier' : definition of dllimport function not allowed

Data, static data members, and functions can be declared as `dllimport`s but not defined as `dllimport`s.

To fix this issue, remove the `__declspec(dllimport)` specifier from the definition of the function.

The following sample generates C2491:

```cpp
// C2491.cpp
// compile with: /c
// function definition
void __declspec(dllimport) funcB() {}   // C2491

// function declaration
void __declspec(dllimport) funcB();   // OK
```
