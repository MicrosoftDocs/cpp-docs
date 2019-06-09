---
title: "MFC Application Architecture Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.mfc"]
helpviewer_keywords: ["MFC, classes", "MFC, application development", "classes [MFC], MFC", "application architecture classes [MFC]"]
ms.assetid: 71b2de54-b44d-407e-9c71-9baf954e18d9
---
# MFC Application Architecture Classes

Classes in this category contribute to the architecture of a framework application. They supply functionality common to most applications. You fill in the framework to add application-specific functionality. Typically, you do so by deriving new classes from the architecture classes, and then adding new members or overriding existing member functions.

[Application wizards](../mfc/reference/mfc-application-wizard.md) generate several types of applications, all of which use the application framework in differing ways. SDI (single document interface) and MDI (multiple document interface) applications make full use of a part of the framework called document/view architecture. Other types of applications, such as dialog-based applications, form-based applications, and DLLs, use only some of document/view architecture features.

Document/view applications contain one or more sets of documents, views, and frame windows. A document-template object associates the classes for each document/view/frame set.

Although you do not have to use document/view architecture in your MFC application, there are a number of advantages to doing so. The MFC OLE container and server support is based on document/view architecture, as is support for printing and print preview.

All MFC applications have at least two objects: an application object derived from [CWinApp](../mfc/reference/cwinapp-class.md), and some sort of main window object, derived (often indirectly) from [CWnd](../mfc/reference/cwnd-class.md). (Most often, the main window is derived from [CFrameWnd](../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), or [CDialog](../mfc/reference/cdialog-class.md), all of which are derived from `CWnd`.)

Applications that use document/view architecture contain additional objects. The principal objects are:

- An application object derived from class [CWinApp](../mfc/reference/cwinapp-class.md), as mentioned before.

- One or more document class objects derived from class [CDocument](../mfc/reference/cdocument-class.md). Document class objects are responsible for the internal representation of the data manipulated in the view. They may be associated with a data file.

- One or more view objects derived from class [CView](../mfc/reference/cview-class.md). Each view is a window that is attached to a document and associated with a frame window. Views display and manipulate the data contained in a document class object.

Document/view applications also contain frame windows (derived from [CFrameWnd](../mfc/reference/cframewnd-class.md)) and document templates (derived from [CDocTemplate](../mfc/reference/cdoctemplate-class.md)).

## See also

[Class Overview](../mfc/class-library-overview.md)
