---
title: "Compiler Warning (levels 2 and 3) C4008 | Microsoft Docs"
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
  - "C4008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4008"
ms.assetid: fb45e535-cb68-4743-80e9-a6e34cfffeca
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (levels 2 and 3) C4008
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (levels 2 and 3) C4008](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-3-c4008).  
  
  
identifier' : 'attribute' attribute ignored  
  
 The compiler ignored the `__fastcall`, **static**, or **inline** attribute for a function (level 3 warning) or data (level 2 warning).  
  
### To fix by checking the following possible causes  
  
1.  `__fastcall` attribute with data.  
  
2.  **static** or **inline** attribute with **main** function.

