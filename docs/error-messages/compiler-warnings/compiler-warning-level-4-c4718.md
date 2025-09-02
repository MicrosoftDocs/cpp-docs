---
title: "Compiler Warning (level 4) C4718"
description: "Learn more about: Compiler Warning (level 4) C4718"
ms.date: 11/04/2016
f1_keywords: ["C4718"]
helpviewer_keywords: ["C4718"]
---
# Compiler Warning (level 4) C4718

> 'function call' : recursive call has no side effects, deleting

## Remarks

A function contains a recursive call, but otherwise has no side effects. A call to this function is being deleted. The correctness of the program is not affected, but the behavior is. Whereas leaving the call in could result in a runtime stack overflow exception, deleting the call removes that possibility.
