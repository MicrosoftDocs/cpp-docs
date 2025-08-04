---
title: "Compiler Error C2692"
description: "Learn more about: Compiler Error C2692"
ms.date: 11/04/2016
f1_keywords: ["C2692"]
helpviewer_keywords: ["C2692"]
---
# Compiler Error C2692

> 'function_name' : fully prototyped functions required in C compiler with the '/clr' option

## Remarks

When compiling for .NET managed code, the C compiler requires ANSI function declarations. In addition, if a function takes no parameters, it must explicitly declare **`void`** as the parameter type.
