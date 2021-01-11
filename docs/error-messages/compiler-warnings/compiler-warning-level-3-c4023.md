---
description: "Learn more about: Compiler Warning (level 3) C4023"
title: "Compiler Warning (level 3) C4023"
ms.date: "11/04/2016"
f1_keywords: ["C4023"]
helpviewer_keywords: ["C4023"]
ms.assetid: 615d5374-d7c1-42eb-acfd-917c053270c8
---
# Compiler Warning (level 3) C4023

'symbol' : based pointer passed to unprototyped function : parameter number

Passing a based pointer to an unprototyped function causes the pointer to be normalized, with unpredictable results.

This warning may be fixed if you use prototype functions that are passed based pointers.
