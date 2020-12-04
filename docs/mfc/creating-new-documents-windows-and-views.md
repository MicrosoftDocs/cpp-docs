---
description: "Learn more about: Creating New Documents, Windows, and Views"
title: "Creating New Documents, Windows, and Views"
ms.date: "11/19/2018"
helpviewer_keywords: ["MDI [MFC], creating windows", "window objects [MFC], creating", "objects [MFC], creating document objects", "MFC default objects", "frame windows [MFC], creating", "windows [MFC], MDI", "MFC, documents", "view objects [MFC], creating", "windows [MFC], creating", "overriding, default view behavior", "views [MFC], initializing", "customizing MFC default objects", "MFC, frame windows", "MFC, views", "MDI [MFC], frame windows", "child windows [MFC], creating MDI", "view objects [MFC]", "document objects [MFC], creating", "MFC default objects [MFC], customizing", "views [MFC], overriding default behavior", "initializing views [MFC]"]
ms.assetid: 88aa1f5f-2078-4603-b16b-a2b4c7b4a2a3
---
# Creating New Documents, Windows, and Views

The following figures give an overview of the creation process for documents, views, and frame windows. Other articles that focus on the participating objects provide further details.

Upon completion of this process, the cooperating objects exist and store pointers to each other. The following figures show the sequence in which objects are created. You can follow the sequence from figure to figure.

![Sequence for creating a document](../mfc/media/vc387l1.gif "Sequence for creating a document") <br/>
Sequence in Creating a Document

![Frame Window Creation Sequence](../mfc/media/vc387l2.png "Frame Window Creation Sequence") <br/>
Sequence in Creating a Frame Window

![Sequence for creating a view](../mfc/media/vc387l3.gif "Sequence for creating a view") <br/>
Sequence in Creating a View

For information about how the framework initializes the new document, view, and frame-window objects, see classes [CDocument](reference/cdocument-class.md), [CView](reference/cview-class.md), [CFrameWnd](reference/cframewnd-class.md), [CMDIFrameWnd](reference/cmdiframewnd-class.md), and [CMDIChildWnd](reference/cmdichildwnd-class.md) in the MFC Library Reference. Also see [Technical Note 22](tn022-standard-commands-implementation.md), which explains the creation and initialization processes further under its discussion of the framework's standard commands for the **New** and **Open** items on the **File** menu.

## <a name="_core_initializing_your_own_additions_to_these_classes"></a> Initializing Your Own Additions to These Classes

The preceding figures also suggest the points at which you can override member functions to initialize your application's objects. An override of `OnInitialUpdate` in your view class is the best place to initialize the view. The `OnInitialUpdate` call occurs immediately after the frame window is created and the view within the frame window is attached to its document. For example, if your view is a scroll view (derived from `CScrollView` rather than `CView`), you should set the view size based on the document size in your `OnInitialUpdate` override. (This process is described in the description of class [CScrollView](reference/cscrollview-class.md).) You can override the `CDocument` member functions `OnNewDocument` and `OnOpenDocument` to provide application-specific initialization of the document. Typically, you must override both since a document can be created in two ways.

In most cases, your override should call the base class version. For more information, see the named member functions of classes [CDocument](reference/cdocument-class.md), [CView](reference/cview-class.md), [CFrameWnd](reference/cframewnd-class.md), and [CWinApp](reference/cwinapp-class.md) in the MFC Library Reference.

## See also

[Document Templates and the Document/View Creation Process](document-templates-and-the-document-view-creation-process.md)<br/>
[Document Template Creation](document-template-creation.md)<br/>
[Document/View Creation](document-view-creation.md)<br/>
[Relationships Among MFC Objects](relationships-among-mfc-objects.md)
