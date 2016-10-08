---
title: "Hosting ActiveX Controls Using ATL AXHost"
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
ms.assetid: 2c1200ec-effb-4814-820a-509519699468
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
# Hosting ActiveX Controls Using ATL AXHost
The sample in this topic shows how to create AXHost and how to host an ActiveX control using various ATL functions. It also shows how to access the control and sink events (using [IDispEventImpl](../VS_visualcpp/IDispEventImpl-Class.md)) from the control that is hosted. The sample hosts the Calendar control in a main window or in a child window.  
  
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
  
 [!CODE [NVC_ATL_AxHost#1](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_AxHost#1)]  
  
## See Also  
 [Control Containment FAQ](../VS_visualcpp/ATL-Control-Containment-FAQ.md)   
 [AtlAxCreateControl](../Topic/AtlAxCreateControl.md)   
 [AtlAxCreateControlEx](../Topic/AtlAxCreateControlEx.md)   
 [AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md)   
 [AtlAxCreateControlLicEx](../Topic/AtlAxCreateControlLicEx.md)   
 [CAxWindow2T Class](../VS_visualcpp/CAxWindow2T-Class.md)   
 [IAxWinHostWindowLic Interface](../VS_visualcpp/IAxWinHostWindowLic-Interface.md)