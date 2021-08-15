---
description: "Learn more about: Compiler Error C2238"
title: "Compiler Error C2238"
ms.date: "11/04/2016"
f1_keywords: ["C2238"]
helpviewer_keywords: ["C2238"]
ms.assetid: 3d53060c-d6b7-4603-b9cf-d7c65eb64cd2
---
# Compiler Error C2238

unexpected token(s) preceding 'token'

An incorrect token was found.

The following sample generates C2238:

```cpp
// C2238.cpp
// compile with: /c
class v {
virtual: int vvv;   // C2238
};
```
