---
description: "Learn more about: Resource Compiler Error RC2151"
title: "Resource Compiler Error RC2151"
ms.date: "11/04/2016"
f1_keywords: ["RC2151"]
helpviewer_keywords: ["RC2151"]
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
---
# Resource Compiler Error RC2151

cannot re-use string constants

You are using the same value twice in a **STRINGTABLE** statement. Make sure you are not mixing overlapping decimal and hexadecimal values.

Each ID in a **STRINGTABLE** must be unique. For maximum efficiency use contiguous constants that start on a multiple of 16.
