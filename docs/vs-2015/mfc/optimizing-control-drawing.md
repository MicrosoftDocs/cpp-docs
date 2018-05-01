---
title: "Optimizing Control Drawing | Microsoft Docs"
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
  - "MFC ActiveX controls, optimizing"
ms.assetid: 29ff985d-9bf5-4678-b62d-aad12def75fb
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Optimizing Control Drawing
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Optimizing Control Drawing](https://docs.microsoft.com/cpp/mfc/optimizing-control-drawing).  
  
  
When a control is instructed to draw itself into a container-supplied device context, it typically selects GDI objects (such as pens, brushes, and fonts) into the device context, performs its drawing operations, and restores the previous GDI objects. If the container has multiple controls that are to be drawn into the same device context, and each control selects the GDI objects it requires, time can be saved if the controls do not individually restore previously selected objects. After all the controls have been drawn, the container can automatically restore the original objects.  
  
 To detect whether a container supports this technique, a control can call the [COleControl::IsOptimizedDraw](../mfc/reference/colecontrol-class.md#colecontrol__isoptimizeddraw) member function. If this function returns **TRUE**, the control can skip the normal step of restoring the previously selected objects.  
  
 Consider a control that has the following (unoptimized) `OnDraw` function:  
  
 [!code-cpp[NVC_MFC_AxOpt#15](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.cpp#15)]  
  
 The pen and brush in this example are local variables, meaning their destructors will be called when they go out of scope (when the `OnDraw` function ends). The destructors will attempt to delete the corresponding GDI objects. But they should not be deleted if you plan to leave them selected into the device context upon returning from `OnDraw`.  
  
 To prevent the [CPen](../mfc/reference/cpen-class.md) and [CBrush](../mfc/reference/cbrush-class.md) objects from being destroyed when `OnDraw` finishes, store them in member variables instead of local variables. In the control's class declaration, add declarations for two new member variables:  
  
 [!code-cpp[NVC_MFC_AxOpt#16](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.h#16)]  
[!code-cpp[NVC_MFC_AxOpt#17](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.h#17)]  
  
 Then, the `OnDraw` function can be rewritten as follows:  
  
 [!code-cpp[NVC_MFC_AxOpt#18](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.cpp#18)]  
  
 This approach avoids creation of the pen and brush every time `OnDraw` is called. The speed improvement comes at the cost of maintaining additional instance data.  
  
 If the ForeColor or BackColor property changes, the pen or brush needs to be created again. To do this, override the [OnForeColorChanged](../mfc/reference/colecontrol-class.md#onforecolorchanged) and [OnBackColorChanged](../mfc/reference/colecontrol-class.md#onbackcolorchanged) member functions:  
  
 [!code-cpp[NVC_MFC_AxOpt#19](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.cpp#19)]  
  
 Finally, to eliminate unnecessary `SelectObject` calls, modify `OnDraw` as follows:  
  
 [!code-cpp[NVC_MFC_AxOpt#20](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.cpp#20)]  
  
## See Also  
 [MFC ActiveX Controls: Optimization](../mfc/mfc-activex-controls-optimization.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)   
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [MFC ActiveX Control Wizard](../mfc/reference/mfc-activex-control-wizard.md)   
 [MFC ActiveX Controls: Painting an ActiveX Control](../mfc/mfc-activex-controls-painting-an-activex-control.md)





