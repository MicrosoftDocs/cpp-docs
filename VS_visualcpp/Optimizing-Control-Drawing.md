---
title: "Optimizing Control Drawing"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 29ff985d-9bf5-4678-b62d-aad12def75fb
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Optimizing Control Drawing
When a control is instructed to draw itself into a container-supplied device context, it typically selects GDI objects (such as pens, brushes, and fonts) into the device context, performs its drawing operations, and restores the previous GDI objects. If the container has multiple controls that are to be drawn into the same device context, and each control selects the GDI objects it requires, time can be saved if the controls do not individually restore previously selected objects. After all the controls have been drawn, the container can automatically restore the original objects.  
  
 To detect whether a container supports this technique, a control can call the [COleControl::IsOptimizedDraw](../Topic/COleControl::IsOptimizedDraw.md) member function. If this function returns **TRUE**, the control can skip the normal step of restoring the previously selected objects.  
  
 Consider a control that has the following (unoptimized) `OnDraw` function:  
  
 [!CODE [NVC_MFC_AxOpt#15](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#15)]  
  
 The pen and brush in this example are local variables, meaning their destructors will be called when they go out of scope (when the `OnDraw` function ends). The destructors will attempt to delete the corresponding GDI objects. But they should not be deleted if you plan to leave them selected into the device context upon returning from `OnDraw`.  
  
 To prevent the [CPen](../VS_visualcpp/CPen-Class.md) and [CBrush](../VS_visualcpp/CBrush-Class.md) objects from being destroyed when `OnDraw` finishes, store them in member variables instead of local variables. In the control's class declaration, add declarations for two new member variables:  
  
 [!CODE [NVC_MFC_AxOpt#16](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#16)]  
[!CODE [NVC_MFC_AxOpt#17](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#17)]  
  
 Then, the `OnDraw` function can be rewritten as follows:  
  
 [!CODE [NVC_MFC_AxOpt#18](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#18)]  
  
 This approach avoids creation of the pen and brush every time `OnDraw` is called. The speed improvement comes at the cost of maintaining additional instance data.  
  
 If the ForeColor or BackColor property changes, the pen or brush needs to be created again. To do this, override the [OnForeColorChanged](../Topic/COleControl::OnForeColorChanged.md) and [OnBackColorChanged](../Topic/COleControl::OnBackColorChanged.md) member functions:  
  
 [!CODE [NVC_MFC_AxOpt#19](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#19)]  
  
 Finally, to eliminate unnecessary `SelectObject` calls, modify `OnDraw` as follows:  
  
 [!CODE [NVC_MFC_AxOpt#20](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#20)]  
  
## See Also  
 [MFC ActiveX Controls: Optimization](../VS_visualcpp/MFC-ActiveX-Controls--Optimization.md)   
 [COleControl Class](../VS_visualcpp/COleControl-Class.md)   
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)   
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)   
 [MFC ActiveX Control Wizard](../VS_visualcpp/MFC-ActiveX-Control-Wizard.md)   
 [MFC ActiveX Controls: Painting an ActiveX Control](../VS_visualcpp/MFC-ActiveX-Controls--Painting-an-ActiveX-Control.md)