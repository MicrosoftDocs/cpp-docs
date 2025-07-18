---
title: "Compiler Error C2160"
description: "Learn more about: Compiler Error C2160"
ms.date: 11/04/2016
f1_keywords: ["C2160"]
helpviewer_keywords: ["C2160"]
---
# Compiler Error C2160

> '##' cannot occur at the beginning of a macro definition

## Remarks

A macro definition began with a token-pasting operator (##).

## Example

The following example generates C2160:

```cpp
// C2160.cpp
// compile with: /c
#define mac(a,b) #a   // OK
#define mac(a,b) ##a   // C2160
```
