---
description: "Learn more about: Creating an Active Document Container Application"
title: "Creating an Active Document Container Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["active documents [MFC], containers", "containers [MFC], active document", "active document containers [MFC], creating", "MFC COM, active document containment", "applications [MFC], active document container"]
ms.assetid: 14e2d022-a6c5-4249-8712-706b0f4433f7
---
# Creating an Active Document Container Application

The simplest and most recommended way to create an active document container application is to create an MFC EXE container application using the MFC Application Wizard, then modify the application to support active document containment.

#### To create an active document container application

1. From the **File** menu, click **Project**from the **New** submenu.

1. From the left pane, click **Visual C++** project type.

1. Select **MFC Application** from the right pane.

1. Name the project *MyProj*, click **OK**.

1. Select the **Compound Document Support** page.

1. Select the **Container** or **Container/Full-server** option.

1. Select the **Active document container** check box.

1. Click **Finish**.

1. When the MFC Application Wizard finishes generating the application, open the following files using Solution Explorer:

   - *MyProjview.cpp*

1. In *MyProjview.cpp*, make the following changes:

   - In `CMyProjView::OnPreparePrinting`, replace the function contents with the following code:

     [!code-cpp[NVC_MFCDocView#56](codesnippet/cpp/creating-an-active-document-container-application_1.cpp)]

   `OnPreparePrinting` provides printing support. This code replaces `DoPreparePrinting`, which is the default print preparation.

   Active document containment provides an improved printing scheme:

   - You can first call the active document through its `IPrint` interface and tell it to print itself. This is different from previous OLE containment, in which the container had to render an image of the contained item onto the printer `CDC` object.

   - If that fails, tell the contained item to print itself through its `IOleCommandTarget` interface

   - If that fails, make your own rendering of the item.

   The static member functions `COleDocObjectItem::OnPrint` and `COleDocObjectItem::OnPreparePrinting`, as implemented in the previous code, handle this improved printing scheme.

1. Add any implementation of your own and build the application.

## See also

[Active Document Containment](active-document-containment.md)
