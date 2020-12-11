---
description: "Learn more about: Compiler Warning (level 3) C4306"
title: "Compiler Warning (level 3) C4306"
ms.date: "08/27/2018"
f1_keywords: ["C4306"]
helpviewer_keywords: ["C4306"]
ms.assetid: 5b2192d7-402d-4b6d-8619-08105e7dcac7
---
# Compiler Warning (level 3) C4306

> '*identifier*' : conversion from '*type1*' to '*type2*' of greater size

The identifier is type cast to a larger pointer. The unfilled high bits of the new type will be zero-filled.

This warning may indicate an unwanted conversion. The resulting pointer may not be valid.
