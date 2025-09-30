---
title: "Compiler Error C2834"
description: "Learn more about: Compiler Error C2834"
ms.date: 06/01/2022
f1_keywords: ["C2834"]
helpviewer_keywords: ["C2834"]
---
# Compiler Error C2834

> 'operator *operator-name*' must be globally qualified

## Remarks

The `new` and `delete` operators are tied to the class where they reside. Scope resolution cannot be used to select a version of `new` or `delete` from a different class. To implement multiple forms of the `new` or `delete` operator, create a version of the operator with extra formal parameters.

This error is obsolete in Visual Studio 2022 and later versions.
