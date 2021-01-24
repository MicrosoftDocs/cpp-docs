---
description: "Learn more about: Compiler Error C2041"
title: "Compiler Error C2041"
ms.date: "11/04/2016"
f1_keywords: ["C2041"]
helpviewer_keywords: ["C2041"]
ms.assetid: c9a33bb1-f9cf-47d6-bd21-7d867a8c37d5
---
# Compiler Error C2041

illegal digit 'character' for base 'number'

The specified character is not a valid digit for the base (such as octal or hex).

The following sample generates C2041:

```cpp
// C2041.cpp
int i = 081;   // C2041  8 is not a base 8 digit
```

Possible resolution:

```cpp
// C2041b.cpp
// compile with: /c
int j = 071;
```
