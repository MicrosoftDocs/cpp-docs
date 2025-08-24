---
title: "Compiler Warning (level 3) C4023"
description: "Learn more about: Compiler Warning (level 3) C4023"
ms.date: 11/04/2016
f1_keywords: ["C4023"]
helpviewer_keywords: ["C4023"]
---
# Compiler Warning (level 3) C4023

> 'symbol' : based pointer passed to unprototyped function : parameter number

## Remarks

Passing a based pointer to an unprototyped function causes the pointer to be normalized, with unpredictable results.

This warning may be fixed if you use prototype functions that are passed based pointers.
