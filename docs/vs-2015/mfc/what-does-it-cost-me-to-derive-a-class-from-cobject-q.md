---
title: "What Does it Cost me to Derive a Class from CObject? | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# What Does it Cost me to Derive a Class from CObject?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [What Does it Cost me to Derive a Class from CObject?](https://docs.microsoft.com/cpp/mfc/what-does-it-cost-me-to-derive-a-class-from-cobject-q).  
  
  
The overhead in deriving from class [CObject](../mfc/reference/cobject-class.md) is minimal. Your derived class inherits only four virtual functions and a single [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) object.  
  
## See Also  
 [CObject Class: Frequently Asked Questions](../mfc/cobject-class-frequently-asked-questions.md)




