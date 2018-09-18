---
title: "Compiler Warning (level 1) C4025 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4025"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4025"]
ms.assetid: c4f6a651-0641-4446-973e-8290065e49ad
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4025

'number' : based pointer passed to function with variable arguments: parameter number

Passing a based pointer to a function with variable arguments causes the pointer to be normalized, with unpredictable results. Do not pass based pointers to functions with variable arguments.