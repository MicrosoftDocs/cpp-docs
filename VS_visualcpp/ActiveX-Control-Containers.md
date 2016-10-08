---
title: "ActiveX Control Containers"
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
ms.assetid: 0eb1a713-e607-4c79-a0c7-67c5f1fd5fab
caps.latest.revision: 7
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
# ActiveX Control Containers
An ActiveX control container is a container that fully supports ActiveX controls and can incorporate them into its own windows or dialogs. An ActiveX control is a reusable software element that you can use in many development projects. Controls allow your application's user to access databases, monitor data, and make various selections within your applications. For more information on ActiveX controls, see the article [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md).  
  
 Control containers typically take two forms in a project:  
  
-   Dialogs and dialog-like windows such as form views, where an ActiveX control is used somewhere in the dialog box.  
  
-   Windows in an application, where an ActiveX control is used in a toolbar, or other location in the user window.  
  
 The ActiveX control container interacts with the control via exposed [methods](../VS_visualcpp/MFC-ActiveX-Controls--Methods.md) and [properties](../VS_visualcpp/MFC-ActiveX-Controls--Properties.md). These methods and properties, which can be accessed and modified by the control container, are accessed through a wrapper class in the ActiveX control container project. The embedded ActiveX control can also interact with the container by firing (sending) [events](../VS_visualcpp/MFC-ActiveX-Controls--Events.md) to notify the container that an action has occurred. The control container can choose to act upon these notifications or not.  
  
 Additional articles discuss several topics, from creating an ActiveX control container project to basic implementation issues related to ActiveX control containers built with Visual C++:  
  
-   [Creating an MFC ActiveX Control Container](../VS_visualcpp/Creating-an-MFC-ActiveX-Control-Container.md)  
  
-   [Containers for ActiveX Controls](../VS_visualcpp/Containers-for-ActiveX-Controls.md)  
  
-   [ActiveX Control Containers: Manually Enabling ActiveX Control Containment](../VS_visualcpp/ActiveX-Control-Containers--Manually-Enabling-ActiveX-Control-Containment.md)  
  
-   [ActiveX Control Containers: Inserting a Control into a Control Container Application](../VS_visualcpp/ActiveX-Control-Containers--Inserting-a-Control-into-a-Control-Container-Application.md)  
  
-   [ActiveX Control Containers: Connecting an ActiveX Control to a Member Variable](../VS_visualcpp/ActiveX-Control-Containers--Connecting-an-ActiveX-Control-to-a-Member-Variable.md)  
  
-   [ActiveX Control Containers: Handling Events from an ActiveX control](../VS_visualcpp/ActiveX-Control-Containers--Handling-Events-from-an-ActiveX-Control.md)  
  
-   [ActiveX Control Containers: Viewing and Modifying Control Properties](../VS_visualcpp/ActiveX-Control-Containers--Viewing-and-Modifying-Control-Properties.md)  
  
-   [ActiveX Control Containers: Programming ActiveX Controls in an ActiveX Control Container](../VS_visualcpp/ActiveX-Control-Containers--Programming-ActiveX-Controls-in-an-ActiveX-Control-Container.md)  
  
-   [ActiveX Control Containers: Using Controls in a Non-Dialog Container](../VS_visualcpp/ActiveX-Control-Containers--Using-Controls-in-a-Non-Dialog-Container.md)  
  
 For more information about using ActiveX controls in a dialog box, see the [Dialog Editor](../VS_visualcpp/Dialog-Editor.md) topics.  
  
 For a list of articles that explain the details of developing ActiveX controls using Visual C++ and the MFC ActiveX control classes, see [MFC ActiveX controls](../VS_visualcpp/MFC-ActiveX-Controls.md). The articles are grouped by functional categories.  
  
## See Also  
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)