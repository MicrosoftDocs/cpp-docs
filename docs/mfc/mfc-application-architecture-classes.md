---
title: "Microsoft Foundation Classes (MFC) application architecture classes"
description: "An overview of the Microsoft Foundation Class (MFC) library application architecture classes."
ms.date: "12/08/2020"
helpviewer_keywords: ["MFC, classes", "MFC, application development", "classes [MFC], MFC", "application architecture classes [MFC]"]
---
# MFC application architecture classes

The Microsoft Foundation Class library (MFC) classes in this category contribute to the architecture of an MFC application. They supply functionality common to most applications. You fill in the framework to add application-specific functionality. Typically, you do so by deriving new classes from the architecture classes, and then adding new members or overriding existing member functions.

[Application wizards](reference/mfc-application-wizard.md) generate several types of applications, all of which use the application framework in differing ways. SDI (single document interface) and MDI (multiple document interface) applications make full use of the document/view part of the framework. Other types of applications, such as dialog-based applications, form-based applications, and DLLs, use only some of document/view architecture features.

Document/view applications contain one or more sets of documents, views, and frame windows. A document-template object associates the classes for each document/view/frame set.

You don't have to use document/view architecture in your MFC application, but there are a number of advantages to doing so. The MFC OLE container and server support is based on document/view architecture, as is support for printing and print preview.

All MFC applications have at least two objects: an application object derived from [`CWinApp`](reference/cwinapp-class.md), and some sort of main window object, derived (often indirectly) from [`CWnd`](reference/cwnd-class.md). (Most often, the main window is derived from [`CFrameWnd`](reference/cframewnd-class.md), [`CMDIFrameWnd`](reference/cmdiframewnd-class.md), or [`CDialog`](reference/cdialog-class.md), all of which are derived from `CWnd`.)

Applications that use document/view architecture contain additional objects. The main objects are:

- An application object derived from class [`CWinApp`](reference/cwinapp-class.md), as mentioned before.
- One or more document class objects derived from class [`CDocument`](reference/cdocument-class.md). Document class objects are responsible for the internal representation of the data that is manipulated in the view. They may be associated with a data file.
- One or more view objects derived from class [`CView`](reference/cview-class.md). Each view is a window that is attached to a document and associated with a frame window. Views display and manipulate the data contained in a document class object.

Document/view applications also contain frame windows (derived from [`CFrameWnd`](reference/cframewnd-class.md)) and document templates (derived from [`CDocTemplate`](reference/cdoctemplate-class.md)).

## See also

[Class Overview](class-library-overview.md)