---
description: "Learn more about: Compiler Error C2161"
title: "Compiler Error C2161"
ms.date: "11/04/2016"
f1_keywords: ["C2161"]
helpviewer_keywords: ["C2161"]
ms.assetid: d6798821-13bb-4e60-924f-85f7bf955387
---
# Compiler Error C2161

'##' cannot occur at the end of a macro definition

A macro definition ended with a token-pasting operator (##).

The following sample generates C2161:

```cpp
// C2161.cpp
// compile with: /c
#define mac(a,b) a   // OK
#define mac(a,b) a##   // C2161
```
