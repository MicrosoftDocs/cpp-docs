---
title: "Compiler Error C3002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3002"
ms.assetid: 2d4241a7-c8eb-4d43-a128-dca255d137bc
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
# Compiler Error C3002
'name1 name2' : multiple OpenMP directive names  
  
 Multiple directive names are not allowed.  
  
 The following sample generates C3002:  
  
```  
// C3002.c  
// compile with: /openmp  
int main()  
{  
   #pragma omp parallel single   // C3002  
}  
```