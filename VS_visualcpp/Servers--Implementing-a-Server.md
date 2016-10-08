---
title: "Servers: Implementing a Server"
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
ms.assetid: 5bd57e8e-3b23-4f23-9597-496fac2d24b5
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
# Servers: Implementing a Server
This article explains the code the MFC Application Wizard creates for a visual editing server application. If you are not using the application wizard, this article lists the areas where you must write code to implement a server application.  
  
 If you are using the application wizard to create a new server application, it provides a significant amount of server-specific code for you. If you are adding visual editing server functionality to an existing application, you must duplicate the code that the application wizard would have provided before adding the rest of the necessary server code.  
  
 The server code that the application wizard provides falls into several categories:  
  
-   Defining server resources:  
  
    -   The menu resource used when the server is editing an embedded item in its own window.  
  
    -   The menu and toolbar resources used when the server is active in place.  
  
     For more information on these resources, see [Menus and Resources: Server Additions](../VS_visualcpp/Menus-and-Resources--Server-Additions.md).  
  
-   Defining an item class derived from `COleServerItem`. For further details on server items, see [Servers: Server Items](../VS_visualcpp/Servers--Server-Items.md).  
  
-   Changing the base class of the document class to `COleServerDoc`. For further details, see [Servers: Implementing Server Documents](../VS_visualcpp/Servers--Implementing-Server-Documents.md).  
  
-   Defining a frame-window class derived from `COleIPFrameWnd`. For further details, see [Servers: Implementing In-Place Frame Windows](../VS_visualcpp/Servers--Implementing-In-Place-Frame-Windows.md).  
  
-   Creating an entry for the server application in the Windows registration database and registering the new instance of the server with the OLE system. For information on this topic, see [Registration](../VS_visualcpp/Registration.md).  
  
-   Initializing and launching the server application. For information on this topic, see [Registration](../VS_visualcpp/Registration.md).  
  
 For more information, see [COleServerItem](../VS_visualcpp/COleServerItem-Class.md), [COleServerDoc](../VS_visualcpp/COleServerDoc-Class.md), and [COleIPFrameWnd](../VS_visualcpp/COleIPFrameWnd-Class.md) in the *Class Library Reference*.  
  
## See Also  
 [Servers](../VS_visualcpp/Servers.md)   
 [Containers](../VS_visualcpp/Containers.md)   
 [Menus and Resources (OLE)](../VS_visualcpp/Menus-and-Resources--OLE-.md)   
 [Registration](../VS_visualcpp/Registration.md)