---
title: "abort Function (C) | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "abort function"
ms.assetid: caa62d67-ffc4-4481-87a4-0c1e2b0f537c
caps.latest.revision: 6
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
# abort Function (C)
**ANSI 4.10.4.1** The behavior of the **abort** function with regard to open and temporary files  
  
 The **abort** function does not close files that are open or temporary. It does not flush stream buffers.  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)