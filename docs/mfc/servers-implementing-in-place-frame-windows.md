---
title: "Servers: Implementing In-Place Frame Windows | Microsoft Docs"
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
  - "frame windows, implementing"
  - "OLE server applications, frame windows"
  - "servers, in-place frame windows"
  - "frame windows, in-place"
  - "in-place frame windows"
ms.assetid: 09bde4d8-15e2-4fba-8d14-9b954d926b92
caps.latest.revision: 10
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
# Servers: Implementing In-Place Frame Windows
This article explains what you must do to implement in-place frame windows in your visual editing server application if you do not use the application wizard to create your server application. In place of following the procedure outlined in this article, you could use an existing in-place frame-window class from either an application wizard–generated application or a sample provided with Visual C++.  
  
#### To declare an in-place frame-window class  
  
1.  Derive an in-place frame-window class from `COleIPFrameWnd`.  
  
    -   Use the `DECLARE_DYNCREATE` macro in your class header file.  
  
    -   Use the `IMPLEMENT_DYNCREATE` macro in your class implementation (.cpp) file. This allows objects of this class to be created by the framework.  
  
2.  Declare a `COleResizeBar` member in the frame-window class. This is needed if you want to support in-place resizing in server applications.  
  
     Declare an `OnCreate` message handler (using the **Properties** window), and call **Create** for your `COleResizeBar` member, if you've defined it.  
  
3.  If you have a toolbar, declare a `CToolBar` member in the frame-window class.  
  
     Override the `OnCreateControlBars` member function to create a toolbar when the server is active in place. For example:  
  
     [!code-cpp[NVC_MFCOleServer#1](../mfc/codesnippet/cpp/servers-implementing-in-place-frame-windows_1.cpp)]  
  
     See the discussion of this code following step 5.  
  
4.  Include the header file for this in-place frame-window class in your main .cpp file.  
  
5.  In `InitInstance` for your application class, call the `SetServerInfo` function of the document template object to specify the resources and in-place frame window to be used in open and in-place editing.  
  
 The series of function calls in the **if** statement creates the toolbar from the resources the server provided. At this point, the toolbar is part of the container's window hierarchy. Because this toolbar is derived from `CToolBar`, it will pass its messages to its owner, the container application's frame window, unless you change the owner. That is why the call to `SetOwner` is necessary. This call changes the window where commands are sent to be the server's in-place frame window, causing the messages to be passed to the server. This allows the server to react to operations on the toolbar that it provides.  
  
 The ID for the toolbar bitmap should be the same as the other in-place resources defined in your server application. See [Menus and Resources: Server Additions](../mfc/menus-and-resources-server-additions.md) for details.  
  
 For more information, see [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md), [COleResizeBar](../mfc/reference/coleresizebar-class.md), and [CDocTemplate::SetServerInfo](../mfc/reference/cdoctemplate-class.md#cdoctemplate__setserverinfo) in the *Class Library Reference*.  
  
## See Also  
 [Servers](../mfc/servers.md)   
 [Servers: Implementing a Server](../mfc/servers-implementing-a-server.md)   
 [Servers: Implementing Server Documents](../mfc/servers-implementing-server-documents.md)   
 [Servers: Server Items](../mfc/servers-server-items.md)

