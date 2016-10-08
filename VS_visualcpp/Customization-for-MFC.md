---
title: "Customization for MFC"
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
ms.assetid: 3b1b7532-8cc9-48dc-9bbe-7fd4060530b5
caps.latest.revision: 19
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
# Customization for MFC
This topic provides tips for customizing an MFC application.  
  
## General Customizations  
 You can save and load the state of your application to the registry. When you enable this option, your application will load its initial state from the registry. If you change the initial docking layout for your application, you will have to clear the registry data for your application. Otherwise, the data in the registry will override any changes that you made to the initial layout.  
  
## Class-Specific Customizations  
 Additional customization tips can be found in the following topics:  
  
-   [CBasePane Class](../VS_visualcpp/CBasePane-Class.md)  
  
-   [CDockablePane Class](../VS_visualcpp/CDockablePane-Class.md)  
  
-   [CDockingManager Class](../VS_visualcpp/CDockingManager-Class.md)  
  
-   [CMFCBaseTabCtrl Class](../VS_visualcpp/CMFCBaseTabCtrl-Class.md)  
  
## Additional Customization Tips  
 [Keyboard and Mouse Customization](../VS_visualcpp/Keyboard-and-Mouse-Customization.md)  
  
 [User-defined Tools](../VS_visualcpp/User-defined-Tools.md)  
  
## See Also  
 [MFC Desktop Applications](../VS_visualcpp/MFC-Desktop-Applications.md)   
 [Security Implications of Customization](../VS_visualcpp/Security-Implications-of-Customization.md)