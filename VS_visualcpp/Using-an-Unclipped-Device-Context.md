---
title: "Using an Unclipped Device Context"
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
ms.assetid: 9c020063-73da-4803-bf7b-2e1fd950c9ed
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
# Using an Unclipped Device Context
If you are absolutely certain that your control does not paint outside its client rectangle, you can realize a small but detectable speed gain by disabling the call to `IntersectClipRect` that is made by `COleControl`. To do this, remove the **clipPaintDC** flag from the set of flags returned by [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md). For example:  
  
 [!CODE [NVC_MFC_AxOpt#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#5)]  
[!CODE [NVC_MFC_AxOpt#14](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#14)]  
[!CODE [NVC_MFC_AxOpt#7](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#7)]  
  
 The code to remove this flag is automatically generated if you select the **Unclipped Device Context** option on the [Control Settings](../VS_visualcpp/Control-Settings--MFC-ActiveX-Control-Wizard.md) page, when creating your control with the MFC ActiveX Control Wizard.  
  
 If you are using windowless activation, this optimization has no effect.  
  
## See Also  
 [MFC ActiveX Controls: Optimization](../VS_visualcpp/MFC-ActiveX-Controls--Optimization.md)