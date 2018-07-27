---
title: "Hosting ActiveX Controls Using ATL AXHost | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["CAxWindow2T class", "Calendar control (ActiveX), hosting with ATL AXHost", "Calendar control (ActiveX)", "ActiveX controls [C++], hosting", "hosting ActiveX controls", "AXHost method"]
ms.assetid: 2c1200ec-effb-4814-820a-509519699468
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Hosting ActiveX Controls Using ATL AXHost
The sample in this topic shows how to create AXHost and how to host an ActiveX control using various ATL functions. It also shows how to access the control and sink events (using [IDispEventImpl](../atl/reference/idispeventimpl-class.md)) from the control that is hosted. The sample hosts the Calendar control in a main window or in a child window.  
  
 Notice the definition of the USE_METHOD symbol. You can change the value of this symbol to vary between 1 and 8. The value of the symbol determines how the control will be created:  
  
-   For even-numbered values of USE_METHOD, the call to create the host subclasses a window and converts it into a control host. For odd-numbered values, the code creates a child window that acts as a host.  
  
-   For values of USE_METHOD between 1 and 4, access to the control and sinking of events are accomplished in the call that also creates the host. Values between 5 and 8 query the host for interfaces and hook the sink.  
  
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
 [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)   
 [AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)   
 [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)   
 [AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)   
 [CAxWindow2T Class](../atl/reference/caxwindow2t-class.md)   
 [IAxWinHostWindowLic Interface](../atl/reference/iaxwinhostwindowlic-interface.md)

