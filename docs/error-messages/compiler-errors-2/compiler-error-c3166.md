---
description: "Learn more about: Compiler Error C3166"
title: "Compiler Error C3166"
ms.date: "11/04/2016"
f1_keywords: ["C3166"]
helpviewer_keywords: ["C3166"]
ms.assetid: ec3e330d-c15d-4158-8268-09101486c566
---
# Compiler Error C3166

> 'pointer' : cannot declare a pointer to an interior __gc pointer as a member of 'type'

The compiler found an invalid pointer declaration (a **`__nogc`** pointer to a **`__gc`** pointer.).

C3166 is only reachable using the obsolete compiler option **`/clr:oldSyntax`**.
