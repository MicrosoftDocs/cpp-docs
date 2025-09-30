---
title: "Compiler Error C2696"
description: "Learn more about: Compiler Error C2696"
ms.date: 11/04/2016
f1_keywords: ["C2696"]
helpviewer_keywords: ["C2696"]
---
# Compiler Error C2696

> Cannot create a temporary object of a managed type 'type'

## Remarks

References to **`const`** in an unmanaged program cause the compiler to call the constructor and create a temporary object on the stack. However, a managed class can never be created on the stack.

C2696 is only reachable using the obsolete compiler option **/clr:oldSyntax**.
