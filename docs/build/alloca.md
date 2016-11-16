---
title: "alloca | Microsoft Docs"
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
ms.assetid: 2b209335-e3a0-4934-93f0-3b5925d22918
caps.latest.revision: 9
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
# alloca
[_alloca](../c-runtime-library/reference/alloca.md) is required to be 16-byte aligned and additionally required to use a frame pointer.  
  
 The stack that is allocated needs to include space below it for parameters of subsequently called functions, as discussed in [Stack Allocation](../build/stack-allocation.md).  
  
## See Also  
 [Stack Usage](../build/stack-usage.md)