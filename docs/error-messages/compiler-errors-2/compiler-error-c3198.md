---
title: "Compiler Error C3198 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3198"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3198"]
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3198
invalid use of floating-point pragmas: fenv_access pragma operates only in precise mode  
  
 [fenv_access](../../preprocessor/fenv-access.md) pragma was used under an [/fp](../../build/reference/fp-specify-floating-point-behavior.md) setting other than **/fp:precise**.  
  
 The following sample generates C3198:  
  
```  
// C3198.cpp  
// compile with: /fp:fast  
#pragma fenv_access(on)   // C3198  
```