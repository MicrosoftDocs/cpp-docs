---
title: "Compiler Warning (level 4) C4343 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4343"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4343"
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4343
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4343](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4343).  
  
  
pragma optimize("g",off) overrides /Og option  
  
 This warning, only valid in the Itanium Processor Family (IPF) compiler, reports that a pragma [optimize](../../preprocessor/optimize.md) overrode a [/Og](../../build/reference/og-global-optimizations.md) compiler option.  
  
 The following sample generates C4343:  
  
```  
// C4343.cpp  
// compile with: /Og /W4 /LD  
// processor: IPF  
#pragma optimize ("g", off)   // C4343  
```

