---
description: "Learn more about: Compiler Error C3715"
title: "Compiler Error C3715"
ms.date: "11/04/2016"
f1_keywords: ["C3715"]
helpviewer_keywords: ["C3715"]
ms.assetid: ee5dce88-ddc4-4bdb-9464-47467ce1674f
---
# Compiler Error C3715

'pointer': must be a pointer to 'class'

You specified a pointer in [`__hook`](../../cpp/hook.md) or [`__unhook`](../../cpp/unhook.md) that did not point to a valid class. To fix this error, ensure that your **`__hook`** and **`__unhook`** calls specify pointers to valid classes.
