---
title: "Compiler Warning (level 4) C4343 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4343"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4343"]
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4343
\#pragma optimize("g",off) overrides /Og option  
  
 This warning, only valid in the Itanium Processor Family (IPF) compiler, reports that a pragma [optimize](../../preprocessor/optimize.md) overrode a [/Og](../../build/reference/og-global-optimizations.md) compiler option.  
  
 The following sample generates C4343:  
  
```  
// C4343.cpp  
// compile with: /Og /W4 /LD  
// processor: IPF  
#pragma optimize ("g", off)   // C4343  
```