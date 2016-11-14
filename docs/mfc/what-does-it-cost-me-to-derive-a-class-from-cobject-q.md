---
title: "What Does it Cost me to Derive a Class from CObject? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CObject class, overhead of derived classes"
ms.assetid: 9b92c98b-b3dd-48a7-9d24-c3b8554edf90
caps.latest.revision: 9
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
# What Does it Cost me to Derive a Class from CObject?
The overhead in deriving from class [CObject](../mfc/reference/cobject-class.md) is minimal. Your derived class inherits only four virtual functions and a single [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) object.  
  
## See Also  
 [CObject Class: Frequently Asked Questions](../mfc/cobject-class-frequently-asked-questions.md)
