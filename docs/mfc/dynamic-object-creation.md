---
title: "Dynamic Object Creation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["object creation [MFC], dynamically at run time", "CObject class [MFC], dynamic object creation", "objects [MFC], creating dynamically at run time", "dynamic object creation [MFC]"]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Dynamic Object Creation
This article explains how to create an object dynamically at run time. The procedure uses run-time class information, as discussed in the article [Accessing Run-Time Class Information](../mfc/accessing-run-time-class-information.md).  
  
#### To dynamically create an object given its run-time class  
  
1.  Use the following code to dynamically create an object by using the `CreateObject` function of the `CRuntimeClass`. Note that on failure, `CreateObject` returns **NULL** instead of raising an exception:  
  
     [!code-cpp[NVC_MFCCObjectSample#6](../mfc/codesnippet/cpp/dynamic-object-creation_1.cpp)]  
  
## See Also  
 [Using CObject](../mfc/using-cobject.md)

