---
title: "Compiler Warning (level 1) C4076"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C4076"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4076"
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
caps.latest.revision: 7
ms.author: "corob"
manager: "douge"
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
# Compiler Warning (level 1) C4076
'typemod' : can not be used with type 'typename'  
  
 A type modifier, whether it is **signed** or `unsigned`, cannot be used with a noninteger type. ***typemod*** is ignored.  
  
## Example  
 The following sample generates C4076:  
  
```  
// C4076.cpp  
// compile with: /W1 /LD  
unsigned double x;   // C4076  
```