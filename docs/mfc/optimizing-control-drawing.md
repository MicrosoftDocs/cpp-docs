---
title: "Optimizing Control Drawing"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC ActiveX controls, optimizing"
ms.assetid: 29ff985d-9bf5-4678-b62d-aad12def75fb
caps.latest.revision: 9
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
# Optimizing Control Drawing
When a control is instructed to draw itself into a container-supplied device context, it typically selects GDI objects (such as pens, brushes, and fonts) into the device context, performs its drawing operations, and restores the previous GDI objects. If the container has multiple controls that are to be drawn into the same device context, and each control selects the GDI objects it requires, time can be saved if the controls do not individually restore previously selected objects. After all the controls have been drawn, the container can automatically restore the original objects.  
  
 To detect whether a container supports this technique, a control can call the [COleControl::IsOptimizedDraw](../Topic/COleControl::IsOptimizedDraw.md) member function. If this function returns **TRUE**, the control can skip the normal step of restoring the previously selected objects.  
  
 Consider a control that has the following (unoptimized) `OnDraw` function:  
  
 [!code[NVC_MFC_AxOpt#15](../mfc/codesnippet/CPP/optimizing-control-drawing_1.cpp)]  
  
 The pen and brush in this example are local variables, meaning their destructors will be called when they go out of scope (when the `OnDraw` function ends). The destructors will attempt to delete the corresponding GDI objects. But they should not be deleted if you plan to leave them selected into the device context upon returning from `OnDraw`.  
  
 To prevent the [CPen](../mfcref/cpen-class.md) and [CBrush](../mfcref/cbrush-class.md) objects from being destroyed when `OnDraw` finishes, store them in member variables instead of local variables. In the control's class declaration, add declarations for two new member variables:  
  
 [!code[NVC_MFC_AxOpt#16](../mfc/codesnippet/CPP/optimizing-control-drawing_2.h)]  
[!code[NVC_MFC_AxOpt#17](../mfc/codesnippet/CPP/optimizing-control-drawing_3.h)]  
  
 Then, the `OnDraw` function can be rewritten as follows:  
  
 [!code[NVC_MFC_AxOpt#18](../mfc/codesnippet/CPP/optimizing-control-drawing_4.cpp)]  
  
 This approach avoids creation of the pen and brush every time `OnDraw` is called. The speed improvement comes at the cost of maintaining additional instance data.  
  
 If the ForeColor or BackColor property changes, the pen or brush needs to be created again. To do this, override the [OnForeColorChanged](../Topic/COleControl::OnForeColorChanged.md) and [OnBackColorChanged](../Topic/COleControl::OnBackColorChanged.md) member functions:  
  
 [!code[NVC_MFC_AxOpt#19](../mfc/codesnippet/CPP/optimizing-control-drawing_5.cpp)]  
  
 Finally, to eliminate unnecessary `SelectObject` calls, modify `OnDraw` as follows:  
  
 [!code[NVC_MFC_AxOpt#20](../mfc/codesnippet/CPP/optimizing-control-drawing_6.cpp)]  
  
## See Also  
 [MFC ActiveX Controls: Optimization](../mfc/mfc-activex-controls--optimization.md)   
 [COleControl Class](../mfcref/colecontrol-class.md)   
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [MFC ActiveX Control Wizard](../mfcref/mfc-activex-control-wizard.md)   
 [MFC ActiveX Controls: Painting an ActiveX Control](../mfc/mfc-activex-controls--painting-an-activex-control.md)