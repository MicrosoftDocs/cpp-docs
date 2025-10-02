---
title: "Compiler Warning (level 1) C4935"
description: "Learn more about: Compiler Warning (level 1) C4935"
ms.date: 11/04/2016
f1_keywords: ["C4935"]
helpviewer_keywords: ["C4935"]
---
# Compiler Warning (level 1) C4935

> assembly access specifier modified from 'access'

## Remarks

The assembly visibility of a type was modified. The compiler uses the last specifier that it encounters. For example, the assembly visibility of a forward declaration may be different from the assembly visibility of the class definition.

C4935 is only reachable using the obsolete compiler option **/clr:oldSyntax**.
