---
title: "Do I Have to Derive New Classes from CObject?"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "derived classes, from CObject"
  - "CObject class, when to use"
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
caps.latest.revision: 8
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
# Do I Have to Derive New Classes from CObject?
No, you don't.  
  
 Derive a class from [CObject](../mfcref/cobject-class.md) when you need the facilities it provides, such as serialization or dynamic creatability. Many data classes need to be serialized to files, so it's often a good idea to derive them from `CObject`. For an example of a class derived from `CObject`, see the [Scribble sample](../top/visual-c---samples.md).  
  
## See Also  
 [CObject Class: Frequently Asked Questions](../mfc/cobject-class--frequently-asked-questions.md)