---
description: "Learn more about: Servers: Implementing In-Place Frame Windows"
title: "Servers: Implementing In-Place Frame Windows"
ms.date: "09/09/2019"
helpviewer_keywords: ["frame windows [MFC], implementing", "OLE server applications [MFC], frame windows", "servers, in-place frame windows", "frame windows [MFC], in-place", "in-place frame windows"]
ms.assetid: 09bde4d8-15e2-4fba-8d14-9b954d926b92
---
# Servers: Implementing In-Place Frame Windows

This article explains what you must do to implement in-place frame windows in your visual editing server application if you do not use the application wizard to create your server application. In place of following the procedure outlined in this article, you could use an existing in-place frame-window class from either an application wizard-generated application or a sample provided with Visual C++.

#### To declare an in-place frame-window class

1. Derive an in-place frame-window class from `COleIPFrameWnd`.

   - Use the DECLARE_DYNCREATE macro in your class header file.

   - Use the IMPLEMENT_DYNCREATE macro in your class implementation (.cpp) file. This allows objects of this class to be created by the framework.

1. Declare a `COleResizeBar` member in the frame-window class. This is needed if you want to support in-place resizing in server applications.

   Declare an `OnCreate` message handler (using the [Class Wizard](reference/mfc-class-wizard.md)), and call `Create` for your `COleResizeBar` member, if you've defined it.

1. If you have a toolbar, declare a `CToolBar` member in the frame-window class.

   Override the `OnCreateControlBars` member function to create a toolbar when the server is active in place. For example:

   [!code-cpp[NVC_MFCOleServer#1](../mfc/codesnippet/cpp/servers-implementing-in-place-frame-windows_1.cpp)]

   See the discussion of this code following step 5.

1. Include the header file for this in-place frame-window class in your main .cpp file.

1. In `InitInstance` for your application class, call the `SetServerInfo` function of the document template object to specify the resources and in-place frame window to be used in open and in-place editing.

The series of function calls in the **`if`** statement creates the toolbar from the resources the server provided. At this point, the toolbar is part of the container's window hierarchy. Because this toolbar is derived from `CToolBar`, it will pass its messages to its owner, the container application's frame window, unless you change the owner. That is why the call to `SetOwner` is necessary. This call changes the window where commands are sent to be the server's in-place frame window, causing the messages to be passed to the server. This allows the server to react to operations on the toolbar that it provides.

The ID for the toolbar bitmap should be the same as the other in-place resources defined in your server application. See [Menus and Resources: Server Additions](../mfc/menus-and-resources-server-additions.md) for details.

For more information, see [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md), [COleResizeBar](../mfc/reference/coleresizebar-class.md), and [CDocTemplate::SetServerInfo](../mfc/reference/cdoctemplate-class.md#setserverinfo) in the *Class Library Reference*.

## See also

[Servers](../mfc/servers.md)<br/>
[Servers: Implementing a Server](../mfc/servers-implementing-a-server.md)<br/>
[Servers: Implementing Server Documents](../mfc/servers-implementing-server-documents.md)<br/>
[Servers: Server Items](../mfc/servers-server-items.md)
