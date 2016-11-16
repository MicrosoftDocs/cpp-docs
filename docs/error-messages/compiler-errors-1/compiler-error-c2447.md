---
title: "Compiler Error C2447 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2447"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2447"
ms.assetid: d1bd6e9a-ee42-4510-ae5e-6b0378f7b931
caps.latest.revision: 10
author: "corob-msft"
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
# Compiler Error C2447
'{' : missing function header (old-style formal list?)  
  
 The compiler encountered an unexpected open brace at global scope. In most cases, this is caused by a badly-formed function header, a misplaced declaration, or a stray semi-colon. To resolve this issue, verify that the open brace follows a correctly-formed function header, and is not preceded by a declaration or a stray semi-colon.  
  
 This error can also be caused by an old-style C-language formal argument list. To resolve this issue, refactor the argument list to use modern style—that is, enclosed in parentheses.  
  
 The following sample generates C2447:  
  
```  
// C2447.cpp  
int c;  
{}       // C2447  
```