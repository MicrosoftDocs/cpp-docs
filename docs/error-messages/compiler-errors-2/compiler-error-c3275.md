---
title: "Compiler Error C3275"
description: "Learn more about: Compiler Error C3275"
ms.date: 06/01/2022
f1_keywords: ["C3275"]
helpviewer_keywords: ["C3275"]
---
# Compiler Error C3275

> 'enum member' : cannot use this symbol without qualifier

## Remarks

When using managed code and when two or more enumerations contain an identifier with the same name, you must explicitly qualify references to the identifier.

C3275 is only reachable using the obsolete compiler option **`/clr:oldSyntax`**. It's not generated in Visual Studio 2022 or later versions.
