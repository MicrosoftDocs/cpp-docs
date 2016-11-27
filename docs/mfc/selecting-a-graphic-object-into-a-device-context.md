---
title: "Selecting a Graphic Object into a Device Context | Microsoft Docs"
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
helpviewer_keywords: 
  - "graphic objects, selecting into device context"
  - "SelectObject method"
  - "GDI objects [C++], device contexts"
  - "lifetime, graphic objects"
  - "device contexts, selecting graphic objects into"
  - "device contexts, graphic objects"
ms.assetid: cf54a330-63ef-421f-83eb-90ec7bd82eef
caps.latest.revision: 10
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
# Selecting a Graphic Object into a Device Context
This topic applies to using graphic objects in a window's device context. After you [create a drawing object](../mfc/one-stage-and-two-stage-construction-of-objects.md), you must select it into the device context in place of the default object stored there:  
  
 [!code-cpp[NVC_MFCDocViewSDI#7](../mfc/codesnippet/cpp/selecting-a-graphic-object-into-a-device-context_1.cpp)]  
  
## Lifetime of Graphic Objects  
 The graphic object returned by [SelectObject](../mfc/reference/cdc-class.md#cdc__selectobject) is "temporary." That is, it will be deleted by the [OnIdle](../mfc/reference/cwinapp-class.md#cwinapp__onidle) member function of class `CWinApp` the next time the program gets idle time. As long as you use the object returned by `SelectObject` in a single function without returning control to the main message loop, you will have no problem.  
  
### What do you want to know more about  
  
-   [Graphic objects](../mfc/graphic-objects.md)  
  
-   [One-stage and two-stage construction of graphic objects](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Device contexts](../mfc/device-contexts.md)  
  
-   [Drawing in a View](../mfc/drawing-in-a-view.md)  
  
## See Also  
 [Graphic Objects](../mfc/graphic-objects.md)

