---
description: "Learn more about: TN025: Document, View, and Frame Creation"
title: "TN025: Document, View, and Frame Creation"
ms.date: "11/04/2016"
f1_keywords: ["vc.creation"]
helpviewer_keywords: ["documents [MFC], view and frame creation", "TN025"]
ms.assetid: 09254d72-6e1d-43db-80e9-693887dbeda2
---
# TN025: Document, View, and Frame Creation

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes the creation and ownership issues for WinApps, DocTemplates, Documents, Frames and Views.

## WinApp

There is one `CWinApp` object in the system.

It is statically constructed and initialized by the framework's internal implementation of `WinMain`. You must derive from `CWinApp` to do anything useful (exception: MFC extension DLLs should not have a `CWinApp` instance — initialization is done in `DllMain` instead).

The one `CWinApp` object owns a list of document templates (a `CPtrList`). There is one or more document template per application. DocTemplates are usually loaded from the resource file (that is, a string array) in `CWinApp::InitInstance`.

```
pTemplate = new CDocTemplate(IDR_MYDOCUMENT, ...);

AddDocTemplate(pTemplate);
```

The one `CWinApp` object owns all frame windows in the application. The main frame window for the application should be stored in `CWinApp::m_pMainWnd`; usually you set *m_pMainWnd* in the `InitInstance` implementation if you have not let AppWizard do it for you. For single document interface (SDI) this is one `CFrameWnd` that serves as the main application frame window as well as the only document frame window. For multiple document interface (MDI) this is an MDI-Frame (class `CMDIFrameWnd`) that serves as the main application frame window that contains all the child `CFrameWnd`s. Each child window is of class `CMDIChildWnd` (derived from `CFrameWnd`) and serves as one of potentially many document frame windows.

## DocTemplates

The `CDocTemplate` is the creator and manager of documents. It owns the documents that it creates. If your application uses the resource-based approach described below, it will not need to derive from `CDocTemplate`.

For an SDI application, the class `CSingleDocTemplate` keeps track of one open document. For an MDI application, the class `CMultiDocTemplate` keeps a list (a `CPtrList`) of all the currently open documents created from that template. `CDocTemplate::AddDocument` and `CDocTemplate::RemoveDocument` provide the virtual member functions for adding or removing a document from the template. `CDocTemplate` is a friend of `CDocument` so we can set the protected `CDocument::m_pDocTemplate` back pointer to point back to the doc template that created the document.

`CWinApp` handles the default `OnFileOpen` implementation, which will in turn query all the doc templates. The implementation includes looking for already open documents and deciding what format to open new documents in.

`CDocTemplate` manages the UI binding for documents and frames.

`CDocTemplate` keeps a count of the number of unnamed documents.

## CDocument

A `CDocument` is owned by a `CDocTemplate`.

Documents have a list of currently open views (derived from `CView`) that are viewing the document (a `CPtrList`).

Documents do not create/destroy the views, but they are attached to each other after they are created. When a document is closed (that is, through File/Close), all attached views will be closed. When the last view on a document is closed (that is, Window/Close) the document will be closed.

The `CDocument::AddView`, `RemoveView` interface is used to maintain the view list. `CDocument` is a friend of `CView` so we can set the `CView::m_pDocument` back pointer.

## CFrameWnd

A `CFrameWnd` (also known as a frame) plays the same role as in MFC 1.0, but now the `CFrameWnd` class is designed to be used in many cases without deriving a new class. The derived classes `CMDIFrameWnd` and `CMDIChildWnd` are also enhanced so many standard commands are already implemented.

The `CFrameWnd` is responsible for creating windows in the client area of the frame. Normally there is one main window filling the client area of the frame.

For an MDI-Frame window, the client area is filled with the MDICLIENT control which is in turn the parent of all the MDI-Child frame windows. For an SDI-Frame window or an MDI-Child frame window, the client area is usually filled with a `CView`-derived window object. In the case of `CSplitterWnd`, the client area of the view is filled with the `CSplitterWnd` window object, and the `CView`-derived window objects (one per split pane) are created as child windows of the `CSplitterWnd`.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
