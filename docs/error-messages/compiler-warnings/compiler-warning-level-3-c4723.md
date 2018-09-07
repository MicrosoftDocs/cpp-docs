---
title: "Compiler Warning (level 3) C4723 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4723"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4723"]
ms.assetid: 07669d14-3fd8-4a43-94bc-b61c50e58460
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4723
potential divide by 0  
  
 The second operand in a divide operation evaluated to zero at compile time, giving undefined results.  
  
 This warning is issued only when using [/Og](../../build/reference/og-global-optimizations.md) or an optimization option that implies /Og.  
  
 The compiler may have generated the zero operand.