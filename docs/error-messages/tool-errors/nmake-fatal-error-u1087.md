---
title: "NMAKE Fatal Error U1087"
description: "Learn more about: NMAKE Fatal Error U1087"
ms.date: 11/04/2016
f1_keywords: ["U1087"]
helpviewer_keywords: ["U1087"]
---
# NMAKE Fatal Error U1087

> cannot have : and :: dependents for same target

## Remarks

A target cannot be specified in both a single-colon (**:**) and a double-colon (`::`) dependency.

To specify a target in multiple description blocks, use `::` in each dependency line.
