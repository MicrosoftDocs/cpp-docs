---
title: "Compiler Error C3715"
description: "Learn more about: Compiler Error C3715"
ms.date: 11/04/2016
f1_keywords: ["C3715"]
helpviewer_keywords: ["C3715"]
---
# Compiler Error C3715

> 'pointer': must be a pointer to 'class'

## Remarks

You specified a pointer in [`__hook`](../../cpp/hook.md) or [`__unhook`](../../cpp/unhook.md) that did not point to a valid class. To fix this error, ensure that your **`__hook`** and **`__unhook`** calls specify pointers to valid classes.
