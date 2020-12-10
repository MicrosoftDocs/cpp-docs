---
description: "Learn more about: Relationships Among MFC Objects"
title: "Relationships Among MFC Objects"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, relationships between key objects", "objects [MFC], relationships", "relationships, MFC objects", "MFC object relationships"]
ms.assetid: 6e8f3b51-e80f-4d88-94c8-4c1e4ee163ad
---
# Relationships Among MFC Objects

To help put the document/view creation process in perspective, consider a running program: a document, the frame window used to contain the view, and the view associated with the document.

- A document keeps a list of the views of that document and a pointer to the document template that created the document.

- A view keeps a pointer to its document and is a child of its parent frame window.

- A document frame window keeps a pointer to its current active view.

- A document template keeps a list of its open documents.

- The application keeps a list of its document templates.

- Windows keeps track of all open windows so it can send messages to them.

These relationships are established during document/view creation. The following table shows how objects in a running program can access other objects. Any object can obtain a pointer to the application object by calling the global function [AfxGetApp](../mfc/reference/application-information-and-management.md#afxgetapp).

### Gaining Access to Other Objects in Your Application

|From object|How to access other objects|
|-----------------|---------------------------------|
|Document|Use [GetFirstViewPosition](../mfc/reference/cdocument-class.md#getfirstviewposition) and [GetNextView](../mfc/reference/cdocument-class.md#getnextview) to access the document's view list.<br /><br /> Call [GetDocTemplate](../mfc/reference/cdocument-class.md#getdoctemplate) to get the document template.|
|View|Call [GetDocument](../mfc/reference/cview-class.md#getdocument) to get the document.<br /><br /> Call [GetParentFrame](../mfc/reference/cwnd-class.md#getparentframe) to get the frame window.|
|Document frame window|Call [GetActiveView](../mfc/reference/cframewnd-class.md#getactiveview) to get the current view.<br /><br /> Call [GetActiveDocument](../mfc/reference/cframewnd-class.md#getactivedocument) to get the document attached to the current view.|
|MDI frame window|Call [MDIGetActive](../mfc/reference/cmdiframewnd-class.md#mdigetactive) to get the currently active [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).|

Typically, a frame window has one view, but sometimes, as in splitter windows, the same frame window contains multiple views. The frame window keeps a pointer to the currently active view; the pointer is updated any time another view is activated.

> [!NOTE]
> A pointer to the main frame window is stored in the [m_pMainWnd](../mfc/reference/cwinthread-class.md#m_pmainwnd) member variable of the application object. A call to `OnFileNew` in your override of the `InitInstance` member function of `CWinApp` sets *m_pMainWnd* for you. If you do not call `OnFileNew`, you must set the variable's value in `InitInstance` yourself. (SDI COM component (server) applications may not set the variable if /Embedding is on the command line.) Note that *m_pMainWnd* is now a member of class `CWinThread` rather than `CWinApp`.

## See also

[Document Templates and the Document/View Creation Process](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Document Template Creation](../mfc/document-template-creation.md)<br/>
[Document/View Creation](../mfc/document-view-creation.md)<br/>
[Creating New Documents, Windows, and Views](../mfc/creating-new-documents-windows-and-views.md)
