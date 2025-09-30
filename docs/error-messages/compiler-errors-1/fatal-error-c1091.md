---
title: "Fatal Error C1091"
description: "Learn more about: Fatal Error C1091"
ms.date: 11/04/2016
f1_keywords: ["C1091"]
helpviewer_keywords: ["C1091"]
---
# Fatal Error C1091

> compiler limit: string exceeds 'length' bytes in length

## Remarks

A string constant exceeded the current limit on the length of strings.

You might want to split the static string into two (or more) variables and use [strcpy_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) to join the result as part of the declaration or during run time.
