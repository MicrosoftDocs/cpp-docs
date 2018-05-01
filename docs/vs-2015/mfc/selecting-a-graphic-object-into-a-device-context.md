---
title: "Selecting a Graphic Object into a Device Context | Microsoft Docs"
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
  - "graphic objects, selecting into device context"
  - "SelectObject method"
  - "GDI objects [C++], device contexts"
  - "lifetime, graphic objects"
  - "device contexts, selecting graphic objects into"
  - "device contexts, graphic objects"
ms.assetid: cf54a330-63ef-421f-83eb-90ec7bd82eef
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Selecting a Graphic Object into a Device Context
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Selecting a Graphic Object into a Device Context](https://docs.microsoft.com/cpp/mfc/selecting-a-graphic-object-into-a-device-context).  
  
  
This topic applies to using graphic objects in a window's device context. After you [create a drawing object](../mfc/one-stage-and-two-stage-construction-of-objects.md), you must select it into the device context in place of the default object stored there:  
  
 [!code-cpp[NVC_MFCDocViewSDI#7](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDocViewSDI/Cpp/NewView.cpp#7)]  
  
## Lifetime of Graphic Objects  
 The graphic object returned by [SelectObject](../mfc/reference/cdc-class.md#selectobject) is "temporary." That is, it will be deleted by the [OnIdle](../mfc/reference/cwinapp-class.md#onidle) member function of class `CWinApp` the next time the program gets idle time. As long as you use the object returned by `SelectObject` in a single function without returning control to the main message loop, you will have no problem.  
  
### What do you want to know more about  
  
-   [Graphic objects](../mfc/graphic-objects.md)  
  
-   [One-stage and two-stage construction of graphic objects](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Device contexts](../mfc/device-contexts.md)  
  
-   [Drawing in a View](../mfc/drawing-in-a-view.md)  
  
## See Also  
 [Graphic Objects](../mfc/graphic-objects.md)





