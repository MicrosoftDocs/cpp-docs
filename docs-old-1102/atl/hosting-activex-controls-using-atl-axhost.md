---
title: "Hosting ActiveX Controls Using ATL AXHost"
ms.custom: ""
ms.date: "10/28/2016"
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
  - "CAxWindow2T class"
  - "Calendar control (ActiveX), hosting with ATL AXHost"
  - "Calendar control (ActiveX)"
  - "ActiveX controls [C++], hosting"
  - "hosting ActiveX controls"
  - "AXHost method"
ms.assetid: 2c1200ec-effb-4814-820a-509519699468
caps.latest.revision: 11
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
# Hosting ActiveX Controls Using ATL AXHost
The sample in this topic shows how to create AXHost and how to host an ActiveX control using various ATL functions. It also shows how to access the control and sink events (using [IDispEventImpl](../atl/reference/idispeventimpl-class.md)) from the control that is hosted. The sample hosts the Calendar control in a main window or in a child window.  
  
 Notice the definition of the `USE_METHOD` symbol. You can change the value of this symbol to vary between 1 and 8. The value of the symbol determines how the control will be created:  
  
-   For even-numbered values of `USE_METHOD`, the call to create the host subclasses a window and converts it into a control host. For odd-numbered values, the code creates a child window that acts as a host.  
  
-   For values of `USE_METHOD` between 1 and 4, access to the control and sinking of events are accomplished in the call that also creates the host. Values between 5 and 8 query the host for interfaces and hook the sink.  
  
 Here's a summary:  
  
|USE_METHOD|Host|Control access and event sinking|Function demonstrated|  
|-----------------|----------|--------------------------------------|---------------------------|  
|1|Child window|One step|CreateControlLicEx|  
|2|Main window|One step|AtlAxCreateControlLicEx|  
|3|Child window|One step|CreateControlEx|  
|4|Main window|One step|AtlAxCreateControlEx|  
|5|Child window|Multiple steps|CreateControlLic|  
|6|Main window|Multiple steps|AtlAxCreateControlLic|  
|7|Child window|Multiple steps|CreateControl|  
|8|Main window|Multiple steps|AtlAxCreateControl|  
  
 [!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/CPP/hosting-activex-controls-using-atl-axhost_1.cpp)]  
  
## See Also  
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)   
 [AtlAxCreateControl](../Topic/AtlAxCreateControl.md)   
 [AtlAxCreateControlEx](../Topic/AtlAxCreateControlEx.md)   
 [AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md)   
 [AtlAxCreateControlLicEx](../Topic/AtlAxCreateControlLicEx.md)   
 [CAxWindow2T Class](../atl/reference/caxwindow2t-class.md)   
 [IAxWinHostWindowLic Interface](../atl/reference/iaxwinhostwindowlic-interface.md)

