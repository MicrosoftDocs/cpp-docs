---
title: "Compiler Warning (level 1) C4122 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4122"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4122"
ms.assetid: 9a83eb0d-8708-42f7-988a-b0b6f2f646a0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning (level 1) C4122
'function' : alloc_text applicable only to functions with C linkage  
  
 The **alloc_text** pragma applies only to functions declared with **extern c**. It cannot be used with external C++ functions.  
  
 The pragma is ignored.