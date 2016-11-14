---
title: "Compiler Warning (level 4) C4960 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4960"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4960"
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
caps.latest.revision: 8
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
# Compiler Warning (level 4) C4960
'function' is too big to be profiled  
  
 When using [/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), the compiler detected an input module with a function larger than 65,535 instructions. Such a large function is not available for profile-guided optimizations.  
  
 To resolve this warning, reduce the size of the function.