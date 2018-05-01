---
title: "Dynamic Object Creation | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "object creation, dynamically at run time"
  - "CObject class, dynamic object creation"
  - "objects [C++], creating dynamically at run time"
  - "dynamic object creation"
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dynamic Object Creation
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Dynamic Object Creation](https://docs.microsoft.com/cpp/mfc/dynamic-object-creation).  
  
  
This article explains how to create an object dynamically at run time. The procedure uses run-time class information, as discussed in the article [Accessing Run-Time Class Information](../mfc/accessing-run-time-class-information.md).  
  
#### To dynamically create an object given its run-time class  
  
1.  Use the following code to dynamically create an object by using the `CreateObject` function of the `CRuntimeClass`. Note that on failure, `CreateObject` returns **NULL** instead of raising an exception:  
  
     [!code-cpp[NVC_MFCCObjectSample#6](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCCObjectSample/Cpp/MFCCObjectSample.cpp#6)]  
  
## See Also  
 [Using CObject](../mfc/using-cobject.md)





