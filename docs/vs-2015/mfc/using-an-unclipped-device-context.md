---
title: "Using an Unclipped Device Context | Microsoft Docs"
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
  - "MFC ActiveX controls, unclipped device context"
ms.assetid: 9c020063-73da-4803-bf7b-2e1fd950c9ed
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using an Unclipped Device Context
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using an Unclipped Device Context](https://docs.microsoft.com/cpp/mfc/using-an-unclipped-device-context).  
  
  
If you are absolutely certain that your control does not paint outside its client rectangle, you can realize a small but detectable speed gain by disabling the call to `IntersectClipRect` that is made by `COleControl`. To do this, remove the **clipPaintDC** flag from the set of flags returned by [COleControl::GetControlFlags](../mfc/reference/colecontrol-class.md#colecontrol__getcontrolflags). For example:  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.cpp#5)]  
[!code-cpp[NVC_MFC_AxOpt#14](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.cpp#14)]  
[!code-cpp[NVC_MFC_AxOpt#7](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxOpt/Cpp/MyAxOptCtrl.cpp#7)]  
  
 The code to remove this flag is automatically generated if you select the **Unclipped Device Context** option on the [Control Settings](../mfc/reference/control-settings-mfc-activex-control-wizard.md) page, when creating your control with the MFC ActiveX Control Wizard.  
  
 If you are using windowless activation, this optimization has no effect.  
  
## See Also  
 [MFC ActiveX Controls: Optimization](../mfc/mfc-activex-controls-optimization.md)





