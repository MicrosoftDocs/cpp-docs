---
title: "Compiler Warning (level 1) C4182 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4182"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4182"
ms.assetid: 8970f3c6-e2dd-407e-b2ec-964360eb8b43
caps.latest.revision: 7
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
# Compiler Warning (level 1) C4182
\#include nesting level is 'number' deep; possible infinite recursion  
  
 The compiler ran out of space on the heap because of the number of nested include files. An include file is nested when it is included from another include file.  
  
 This message is informational and precedes error [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).