---
title: "What Is the ATL Control-Hosting API? | Microsoft Docs"
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
|[AtlAxAttachControl](http://msdn.microsoft.com/library/80b5b2e8-dc67-4b22-ba95-632a089dbe47)|Creates a host object, connects it to the supplied window, then attaches an existing control.|  
|[AtlAxCreateControl](http://msdn.microsoft.com/library/582a883e-2050-4af0-bf27-e89a0948f41d)|Creates a host object, connects it to the supplied window, then loads a control.|  
|[AtlAxCreateControlLic](http://msdn.microsoft.com/library/b409bd0e-28c9-4d9a-80a4-8df77a3aff88)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControl](http://msdn.microsoft.com/library/582a883e-2050-4af0-bf27-e89a0948f41d).|  
|[AtlAxCreateControlEx](http://msdn.microsoft.com/library/8b21d43b-7c3e-4ff1-9419-e0bd695d34df)|Creates a host object, connects it to the supplied window, then loads a control (also allows event sinks to be set up).|  
|[AtlAxCreateControlLicEx](http://msdn.microsoft.com/library/abcbef3f-fcb0-4c87-8524-bff31e31e1b2)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControlLic](http://msdn.microsoft.com/library/b409bd0e-28c9-4d9a-80a4-8df77a3aff88).|  
|[AtlAxCreateDialog](http://msdn.microsoft.com/library/ffde4deb-f681-461f-9732-b1bdb4084370)|Creates a modeless dialog box from a dialog resource and returns the window handle.|  
|[AtlAxDialogBox](http://msdn.microsoft.com/library/fd1effa3-ccc2-4384-b474-95903ea3082f)|Creates a modal dialog box from a dialog resource.|  
|[AtlAxGetControl](http://msdn.microsoft.com/library/40ac5fe9-3e04-41c2-b1ef-a17832fbaaad)|Returns the **IUnknown** interface pointer of the control hosted in a window.|  
|[AtlAxGetHost](http://msdn.microsoft.com/library/ad1f4f16-608d-4e96-8d30-04d4ca906a7b)|Returns the **IUnknown** interface pointer of the host object connected to a window.|  
|[AtlAxWinInit](http://msdn.microsoft.com/library/fe1b3bd1-3fc9-42e5-ba03-66cae7dd5b7e)|Initializes the control-hosting code.|  
|[AtlAxWinTerm](http://msdn.microsoft.com/library/3aba9ffb-4f66-43b0-85eb-db219a8d4bd7)|Uninitializes the control-hosting code.|  
  
 The `HWND` parameters in the first three functions must be an existing window of (almost) any type. If you call any of these three functions explicitly (typically, you won't have to), do not pass a handle to a window that's already acting as a host (if you do, the existing host object won't be freed).  
  
 The first seven functions call [AtlAxWinInit](http://msdn.microsoft.com/library/fe1b3bd1-3fc9-42e5-ba03-66cae7dd5b7e) implicitly.  
  
> [!NOTE]
>  The control-hosting API forms the foundation of ATL's support for ActiveX control containment. However, there is usually little need to call these functions directly if you take advantage of or make full use of ATL's wrapper classes. For more information, see [Which ATL Classes Facilitate ActiveX Control Containment](which-atl-classes-facilitate-activex-control-containment-q.md).  
  
## See Also  
 [Control Containment FAQ](which-atl-classes-facilitate-activex-control-containment-q.md)
