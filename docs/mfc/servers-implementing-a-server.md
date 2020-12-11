---
description: "Learn more about: Servers: Implementing a Server"
title: "Servers: Implementing a Server"
ms.date: "11/04/2016"
helpviewer_keywords: ["servers, implementing", "OLE server applications [MFC], implementing OLE servers"]
ms.assetid: 5bd57e8e-3b23-4f23-9597-496fac2d24b5
---
# Servers: Implementing a Server

This article explains the code the MFC Application Wizard creates for a visual editing server application. If you are not using the application wizard, this article lists the areas where you must write code to implement a server application.

If you are using the application wizard to create a new server application, it provides a significant amount of server-specific code for you. If you are adding visual editing server functionality to an existing application, you must duplicate the code that the application wizard would have provided before adding the rest of the necessary server code.

The server code that the application wizard provides falls into several categories:

- Defining server resources:

  - The menu resource used when the server is editing an embedded item in its own window.

  - The menu and toolbar resources used when the server is active in place.

  For more information on these resources, see [Menus and Resources: Server Additions](../mfc/menus-and-resources-server-additions.md).

- Defining an item class derived from `COleServerItem`. For further details on server items, see [Servers: Server Items](../mfc/servers-server-items.md).

- Changing the base class of the document class to `COleServerDoc`. For further details, see [Servers: Implementing Server Documents](../mfc/servers-implementing-server-documents.md).

- Defining a frame-window class derived from `COleIPFrameWnd`. For further details, see [Servers: Implementing In-Place Frame Windows](../mfc/servers-implementing-in-place-frame-windows.md).

- Creating an entry for the server application in the Windows registration database and registering the new instance of the server with the OLE system. For information on this topic, see [Registration](../mfc/registration.md).

- Initializing and launching the server application. For information on this topic, see [Registration](../mfc/registration.md).

For more information, see [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerDoc](../mfc/reference/coleserverdoc-class.md), and [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md) in the *Class Library Reference*.

## See also

[Servers](../mfc/servers.md)<br/>
[Containers](../mfc/containers.md)<br/>
[Menus and Resources (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Registration](../mfc/registration.md)
