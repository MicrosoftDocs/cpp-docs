---
title: "Compiler Error C2818"
description: "Learn more about: Compiler Error C2818"
ms.date: 11/04/2016
f1_keywords: ["C2818"]
helpviewer_keywords: ["C2818"]
---
# Compiler Error C2818

> application of overloaded 'operator ->' is recursive through type 'type'

## Remarks

A redefinition of the class member access operator contains a recursive **`return`** statement. To redefine the `->` operator with recursion, you must move the recursive routine to a separate function called from the operator override function.
