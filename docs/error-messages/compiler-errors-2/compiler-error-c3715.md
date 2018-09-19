---
title: "Compiler Error C3715 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3715"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3715"]
ms.assetid: ee5dce88-ddc4-4bdb-9464-47467ce1674f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3715

'pointer': must be a pointer to 'class'

You specified a pointer in [__hook](../../cpp/hook.md) or [__unhook](../../cpp/unhook.md) that did not point to a valid class. To fix this error, ensure that your `__hook` and `__unhook` calls specify pointers to valid classes.