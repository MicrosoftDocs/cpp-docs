---
title: "Hosting ActiveX Controls Using ATL AXHost | Microsoft Docs"
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
  
 [!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/cpp/hosting-activex-controls-using-atl-axhost_1.cpp)]  
  
## See Also  
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)   
 [AtlAxCreateControl](http://msdn.microsoft.com/library/582a883e-2050-4af0-bf27-e89a0948f41d)   
 [AtlAxCreateControlEx](http://msdn.microsoft.com/library/8b21d43b-7c3e-4ff1-9419-e0bd695d34df)   
 [AtlAxCreateControlLic](http://msdn.microsoft.com/library/b409bd0e-28c9-4d9a-80a4-8df77a3aff88)   
 [AtlAxCreateControlLicEx](http://msdn.microsoft.com/library/abcbef3f-fcb0-4c87-8524-bff31e31e1b2)   
 [CAxWindow2T Class](../atl/reference/caxwindow2t-class.md)   
 [IAxWinHostWindowLic Interface](../atl/reference/iaxwinhostwindowlic-interface.md)

