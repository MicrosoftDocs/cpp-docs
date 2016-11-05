---
title: "What Is the ATL Control-Hosting API? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "APIs [C++], hosting"
  - "control-hosting API"
  - "controls [ATL], hosting APIs"
ms.assetid: 75b27e45-cfba-4950-aa35-96cc7d8da753
caps.latest.revision: 15
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
# What Is the ATL Control-Hosting API?
ATL's control-hosting API is the set of functions that allows any window to act as an ActiveX control container. These functions can be statically or dynamically linked into your project since they are available as source code and exposed by ATL90.dll. The control-hosting functions are listed in the table below.  
  
|Function|Description|  
|--------------|-----------------|  
|[AtlAxAttachControl](../Topic/AtlAxAttachControl.md)|Creates a host object, connects it to the supplied window, then attaches an existing control.|  
|[AtlAxCreateControl](../Topic/AtlAxCreateControl.md)|Creates a host object, connects it to the supplied window, then loads a control.|  
|[AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControl](../Topic/AtlAxCreateControl.md).|  
|[AtlAxCreateControlEx](../Topic/AtlAxCreateControlEx.md)|Creates a host object, connects it to the supplied window, then loads a control (also allows event sinks to be set up).|  
|[AtlAxCreateControlLicEx](../Topic/AtlAxCreateControlLicEx.md)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md).|  
|[AtlAxCreateDialog](../Topic/AtlAxCreateDialog.md)|Creates a modeless dialog box from a dialog resource and returns the window handle.|  
|[AtlAxDialogBox](../Topic/AtlAxDialogBox.md)|Creates a modal dialog box from a dialog resource.|  
|[AtlAxGetControl](../Topic/AtlAxGetControl.md)|Returns the **IUnknown** interface pointer of the control hosted in a window.|  
|[AtlAxGetHost](../Topic/AtlAxGetHost.md)|Returns the **IUnknown** interface pointer of the host object connected to a window.|  
|[AtlAxWinInit](../Topic/AtlAxWinInit.md)|Initializes the control-hosting code.|  
|[AtlAxWinTerm](../Topic/AtlAxWinTerm.md)|Uninitializes the control-hosting code.|  
  
 The `HWND` parameters in the first three functions must be an existing window of (almost) any type. If you call any of these three functions explicitly (typically, you won't have to), do not pass a handle to a window that's already acting as a host (if you do, the existing host object won't be freed).  
  
 The first seven functions call [AtlAxWinInit](../Topic/AtlAxWinInit.md) implicitly.  
  
> [!NOTE]
>  The control-hosting API forms the foundation of ATL's support for ActiveX control containment. However, there is usually little need to call these functions directly if you take advantage of or make full use of ATL's wrapper classes. For more information, see [Which ATL Classes Facilitate ActiveX Control Containment] $$brokenlink$$(../Topic/Which%20ATL%20Classes%20Facilitate%20ActiveX%20Control%20Containment.md).  
  
## See Also  
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)
f
