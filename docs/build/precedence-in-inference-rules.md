---
title: "Precedence in Inference Rules"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inference rules in NMAKE"
  - "rules, inference"
  - "precedence, inference rule"
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Precedence in Inference Rules
If an inference rule is multiply defined, NMAKE uses the highest-precedence definition. The following list shows the order of precedence from highest to lowest:  
  
1.  An inference rule defined in a makefile; later definitions have precedence.  
  
2.  An inference rule defined in Tools.ini; later definitions have precedence.  
  
3.  A predefined inference rule.  
  
## See Also  
 [Inference Rules](../build/inference-rules.md)