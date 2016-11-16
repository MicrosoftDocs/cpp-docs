---
title: "2.2 Conditional Compilation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 8f9c914d-736c-48cf-899d-c8029dbe1e32
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
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
# 2.2 Conditional Compilation
The _**OPENMP** macro name is defined by OpenMP-compliant implementations as the decimal constant *yyyymm*, which will be the year and month of the approved specification. This macro must not be the subject of a **#define** or a **#undef** preprocessing directive.  
  
```  
#ifdef _OPENMP  
iam = omp_get_thread_num() + index;  
#endif  
```  
  
 If vendors define extensions to OpenMP, they may specify additional predefined macros.