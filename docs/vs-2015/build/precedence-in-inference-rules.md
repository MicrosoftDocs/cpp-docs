---
title: "Precedence in Inference Rules | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inference rules in NMAKE"
  - "rules, inference"
  - "precedence, inference rule"
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Precedence in Inference Rules
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Precedence in Inference Rules](https://docs.microsoft.com/cpp/build/precedence-in-inference-rules).  
  
  
If an inference rule is multiply defined, NMAKE uses the highest-precedence definition. The following list shows the order of precedence from highest to lowest:  
  
1.  An inference rule defined in a makefile; later definitions have precedence.  
  
2.  An inference rule defined in Tools.ini; later definitions have precedence.  
  
3.  A predefined inference rule.  
  
## See Also  
 [Inference Rules](../build/inference-rules.md)

