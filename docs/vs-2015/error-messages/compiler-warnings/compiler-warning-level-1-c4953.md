---
title: "Compiler Warning (level 1) C4953 | Microsoft Docs"
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
  - "C4953"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4953"
ms.assetid: 3c4f6ac6-3976-41ab-8a27-3c41d7472ea7
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4953
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4953](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4953).  
  
  
Inlinee 'function' has been edited since profile data was collected, profile data not used  
  
 When using [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), the compiler detected an input module that was recompiled after `/LTCG:PGINSTRUMENT` and has a function (***function***) that was edited and where existing test runs identified the function as a candidate for inlining. However, as a result of recompiling the module, the function will no longer be a candidate for inlining.  
  
 This warning is informational. To resolve this warning, run `/LTCG:PGINSTRUMENT`, redo all test runs, and run `/LTCG:PGOPTIMIZE`.  
  
 This warning would be replaced with an error if `/LTCG:PGOPTIMIZE` had been used.

