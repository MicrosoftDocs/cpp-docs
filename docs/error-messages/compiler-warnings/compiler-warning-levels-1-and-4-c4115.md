---
title: "Compiler Warning (levels 1 and 4) C4115 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4115"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4115"
ms.assetid: f3f94e72-fc49-4d09-b3e7-23d68e61152f
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
# Compiler Warning (levels 1 and 4) C4115
'type' : named type definition in parentheses  
  
 The given symbol is used to define a structure, union, or enumerated type inside a parenthetical expression. The scope of the definition may be unexpected.  
  
 In a C function call, the definition has global scope. In a C++ call, the definition has the same scope as the function being called.  
  
 This warning can also be caused by declarators within parentheses (such as prototypes) that are not parenthetical expressions.  
  
 This is a level-1 warning with C++ programs and C programs compiled under ANSI compatibility (/Za). Otherwise, it is level 3.