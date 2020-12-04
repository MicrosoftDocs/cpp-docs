---
description: "Learn more about: Compiler Error C2160"
title: "Compiler Error C2160"
ms.date: "11/04/2016"
f1_keywords: ["C2160"]
helpviewer_keywords: ["C2160"]
ms.assetid: a1f694a7-fb16-4437-b7f5-a1af6da94bc5
---
# Compiler Error C2160

'##' cannot occur at the beginning of a macro definition

A macro definition began with a token-pasting operator (##).

The following sample generates C2160:

```cpp
// C2160.cpp
// compile with: /c
#define mac(a,b) #a   // OK
#define mac(a,b) ##a   // C2160
```
