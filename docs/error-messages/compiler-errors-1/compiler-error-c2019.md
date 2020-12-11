---
description: "Learn more about: Compiler Error C2019"
title: "Compiler Error C2019"
ms.date: "11/04/2016"
f1_keywords: ["C2019"]
helpviewer_keywords: ["C2019"]
ms.assetid: 4f37b1e1-9eca-418f-a4c3-141e8512d7b6
---
# Compiler Error C2019

expected preprocessor directive, found 'character'

The character followed a `#` sign but it is not the first letter of a preprocessor directive.

The following sample generates C2019:

```cpp
// C2019.cpp
#!define TRUE 1   // C2019
```

Possible resolution:

```cpp
// C2019b.cpp
// compile with: /c
#define TRUE 1
```
