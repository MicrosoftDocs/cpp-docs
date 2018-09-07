---
title: "NMAKE Fatal Error U1000 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U1000"]
dev_langs: ["C++"]
helpviewer_keywords: ["U1000"]
ms.assetid: 49b9bd9e-f1bc-4b55-a171-c748e40b195e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Fatal Error U1000

> syntax error : ')' missing in macro invocation

A left parenthesis, **(**, appeared without a matching right parenthesis, **)**, in a macro invocation. The correct form is **$(**<em>name</em>**)**; **$**<em>n</em> is allowed for one-character names.