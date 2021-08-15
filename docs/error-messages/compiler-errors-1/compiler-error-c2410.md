---
description: "Learn more about: Compiler Error C2410"
title: "Compiler Error C2410"
ms.date: "11/04/2016"
f1_keywords: ["C2410"]
helpviewer_keywords: ["C2410"]
ms.assetid: b69b2de1-56f3-4ebc-8913-04ac57ffe8a1
---
# Compiler Error C2410

'identifier' : ambiguous member name in 'context'

The identifier is a member of more than one structure or union in this context.

Use a structure or union specifier on the operand that caused the error. A structure or union specifier is an identifier of type **`struct`** or **`union`** (a **`typedef`** name or a variable of the same type as the structure or union being referenced). The specifier must be the left operand of the first member-selection operator (.) to use the operand.
