---
title: "Compiler Warning (level 1) C4068 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4068"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4068"
ms.assetid: 96a7397a-4eab-44ab-b3bb-36747503f7e5
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
# Compiler Warning (level 1) C4068
unknown pragma  
  
 The compiler ignored an unrecognized [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md). Be sure the **pragma** is allowed by the compiler you are using. The following sample generates C4068:  
  
```  
// C4068.cpp  
// compile with: /W1  
#pragma NotAValidPragmaName   // C4068, use valid name to resolve  
int main()  
{  
}  
```