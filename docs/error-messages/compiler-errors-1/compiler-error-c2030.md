---
description: "Learn more about: Compiler Error C2030"
title: "Compiler Error C2030"
ms.date: "11/04/2016"
f1_keywords: ["C2030"]
helpviewer_keywords: ["C2030"]
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
---
# Compiler Error C2030

a destructor with 'protected private' accessibility cannot be a member of a class declared 'sealed'

A Windows Runtime class declared as **`sealed`** cannot have a protected private destructor. Only public virtual and private non-virtual destructors are allowed on sealed types. For more information, see [Ref classes and structs](../../cppcx/ref-classes-and-structs-c-cx.md).

To fix this error, change the accessibility of the destructor.
