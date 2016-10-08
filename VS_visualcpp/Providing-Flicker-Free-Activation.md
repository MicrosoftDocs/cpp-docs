---
title: "Providing Flicker-Free Activation"
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
ms.assetid: bcb24b77-31d8-44a0-8c58-2ea6213b4c43
caps.latest.revision: 8
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
# Providing Flicker-Free Activation
If your control draws itself identically in the inactive and active states (and does not use windowless activation), you can eliminate the drawing operations and the accompanying visual flicker that normally occur when making the transition between the inactive and active states. To do this, include the **noFlickerActivate** flag in the set of flags returned by [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md). For example:  
  
 [!CODE [NVC_MFC_AxOpt#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#5)]  
[!CODE [NVC_MFC_AxOpt#13](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#13)]  
[!CODE [NVC_MFC_AxOpt#7](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#7)]  
  
 The code to include this flag is automatically generated if you select the **Flicker-Free activation** option on the [Control Settings](../VS_visualcpp/Control-Settings--MFC-ActiveX-Control-Wizard.md) page when creating your control with the MFC ActiveX Control Wizard.  
  
 If you are using windowless activation, this optimization has no effect.  
  
## See Also  
 [MFC ActiveX Controls: Optimization](../VS_visualcpp/MFC-ActiveX-Controls--Optimization.md)