---
title: "Using CObject"
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
  - "examples [MFC], CObject"
  - "root base class for MFC"
  - "derived classes, from CObject"
  - "MFC, base class"
  - "CObject class"
ms.assetid: d0cd19bb-2856-4b41-abbc-620fd64cb223
caps.latest.revision: 7
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
# Using CObject
[CObject](../mfcref/cobject-class.md) is the root base class for most of the Microsoft Foundation Class Library (MFC). The `CObject` class contains many useful features that you may want to incorporate into your own program objects, including serialization support, run-time class information, and object diagnostic output. If you derive your class from `CObject`, your class can exploit these `CObject` features.  
  
## What do you want to do?  
  
-   [Derive a class from CObject](../mfc/deriving-a-class-from-cobject.md)  
  
-   [Add support for run-time class information, dynamic creation, and serialization to my derived class](../mfc/specifying-levels-of-functionality.md)  
  
-   [Access run-time class information](../mfc/accessing-run-time-class-information.md)  
  
-   [Create objects dynamically](../mfc/dynamic-object-creation.md)  
  
-   [Dump the object's data for diagnostic purposes](assetId:///727855b1-5a83-44bd-9fe3-f1d535584b59)  
  
-   Validate the object's internal state (see [MFC ASSERT_VALID and CObject::AssertValid](assetId:///7654fb75-9e9a-499a-8165-0a96faf2d5e6))  
  
-   [Have the class serialize itself to persistent storage](../mfc/serialization-in-mfc.md)  
  
-   See a list of [CObject Frequently Asked Questions](../mfc/cobject-class--frequently-asked-questions.md)  
  
## See Also  
 [Concepts](../mfc/mfc-concepts.md)   
 [General MFC Topics](../mfc/general-mfc-topics.md)   
 [CRuntimeClass Structure](../mfcref/cruntimeclass-structure.md)   
 [Files](../mfc/files-in-mfc.md)   
 [Serialization](../mfc/serialization-in-mfc.md)