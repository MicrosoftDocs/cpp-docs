---
description: "Learn more about: Compiler Error C2692"
title: "Compiler Error C2692"
ms.date: "11/04/2016"
f1_keywords: ["C2692"]
helpviewer_keywords: ["C2692"]
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
---
# Compiler Error C2692

'function_name' : fully prototyped functions required in C compiler with the '/clr' option

When compiling for .NET managed code, the C compiler requires ANSI function declarations. In addition, if a function takes no parameters, it must explicitly declare **`void`** as the parameter type.
