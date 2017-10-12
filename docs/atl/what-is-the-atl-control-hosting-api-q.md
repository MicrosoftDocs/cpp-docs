---
title: "What Is the ATL Control-Hosting API? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["APIs [C++], hosting", "control-hosting API", "controls [ATL], hosting APIs"]
ms.assetid: 75b27e45-cfba-4950-aa35-96cc7d8da753
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# What Is the ATL Control-Hosting API?
ATL's control-hosting API is the set of functions that allows any window to act as an ActiveX control container. These functions can be statically or dynamically linked into your project since they are available as source code and exposed by ATL90.dll. The control-hosting functions are listed in the table below.  
  
|Function|Description|  
|--------------|-----------------|  
|[AtlAxAttachControl](reference/composite-control-global-functions.md#atlaxattachcontrol)|Creates a host object, connects it to the supplied window, then attaches an existing control.|  
|[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)|Creates a host object, connects it to the supplied window, then loads a control.|  
|[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol).|  
|[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)|Creates a host object, connects it to the supplied window, then loads a control (also allows event sinks to be set up).|  
|[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrollicex)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic).|  
|[AtlAxCreateDialog](reference/composite-control-global-functions.md#atlaxcreatedialog)|Creates a modeless dialog box from a dialog resource and returns the window handle.|  
|[AtlAxDialogBox](reference/composite-control-global-functions.md#atlaxdialogbox)|Creates a modal dialog box from a dialog resource.|  
|[AtlAxGetControl](reference/composite-control-global-functions.md#atlaxgetcontrol)|Returns the **IUnknown** interface pointer of the control hosted in a window.|  
|[AtlAxGetHost](reference/composite-control-global-functions.md#atlaxgethost)|Returns the **IUnknown** interface pointer of the host object connected to a window.|  
|[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit)|Initializes the control-hosting code.|  
|[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm)|Uninitializes the control-hosting code.|  
  
 The `HWND` parameters in the first three functions must be an existing window of (almost) any type. If you call any of these three functions explicitly (typically, you won't have to), do not pass a handle to a window that's already acting as a host (if you do, the existing host object won't be freed).  
  
 The first seven functions call [AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) implicitly.  
  
> [!NOTE]
>  The control-hosting API forms the foundation of ATL's support for ActiveX control containment. However, there is usually little need to call these functions directly if you take advantage of or make full use of ATL's wrapper classes. For more information, see [Which ATL Classes Facilitate ActiveX Control Containment](which-atl-classes-facilitate-activex-control-containment-q.md).  
  
## See Also  
 [Control Containment FAQ](which-atl-classes-facilitate-activex-control-containment-q.md)
