---
title: "Relationships Among MFC Objects"
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
ms.assetid: 6e8f3b51-e80f-4d88-94c8-4c1e4ee163ad
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
# Relationships Among MFC Objects
To help put the document/view creation process in perspective, consider a running program: a document, the frame window used to contain the view, and the view associated with the document.  
  
-   A document keeps a list of the views of that document and a pointer to the document template that created the document.  
  
-   A view keeps a pointer to its document and is a child of its parent frame window.  
  
-   A document frame window keeps a pointer to its current active view.  
  
-   A document template keeps a list of its open documents.  
  
-   The application keeps a list of its document templates.  
  
-   Windows keeps track of all open windows so it can send messages to them.  
  
 These relationships are established during document/view creation. The following table shows how objects in a running program can access other objects. Any object can obtain a pointer to the application object by calling the global function [AfxGetApp](../Topic/AfxGetApp.md).  
  
### Gaining Access to Other Objects in Your Application  
  
|From object|How to access other objects|  
|-----------------|---------------------------------|  
|Document|Use [GetFirstViewPosition](../Topic/CDocument::GetFirstViewPosition.md) and [GetNextView](../Topic/CDocument::GetNextView.md) to access the document's view list.<br /><br /> Call [GetDocTemplate](../Topic/CDocument::GetDocTemplate.md) to get the document template.|  
|View|Call [GetDocument](../Topic/CView::GetDocument.md) to get the document.<br /><br /> Call [GetParentFrame](../Topic/CWnd::GetParentFrame.md) to get the frame window.|  
|Document frame window|Call [GetActiveView](../Topic/CFrameWnd::GetActiveView.md) to get the current view.<br /><br /> Call [GetActiveDocument](../Topic/CFrameWnd::GetActiveDocument.md) to get the document attached to the current view.|  
|MDI frame window|Call [MDIGetActive](../Topic/CMDIFrameWnd::MDIGetActive.md) to get the currently active [CMDIChildWnd](../VS_visualcpp/CMDIChildWnd-Class.md).|  
  
 Typically, a frame window has one view, but sometimes, as in splitter windows, the same frame window contains multiple views. The frame window keeps a pointer to the currently active view; the pointer is updated any time another view is activated.  
  
> [!NOTE]
>  A pointer to the main frame window is stored in the [m_pMainWnd](../Topic/CWinThread::m_pMainWnd.md) member variable of the application object. A call to `OnFileNew` in your override of the `InitInstance` member function of `CWinApp` sets `m_pMainWnd` for you. If you do not call `OnFileNew`, you must set the variable's value in `InitInstance` yourself. (SDI COM component (server) applications may not set the variable if /Embedding is on the command line.) Note that `m_pMainWnd` is now a member of class `CWinThread` rather than `CWinApp`.  
  
## See Also  
 [Document Templates and the Document/View Creation Process](../VS_visualcpp/Document-Templates-and-the-Document-View-Creation-Process.md)   
 [Document Template Creation](../VS_visualcpp/Document-Template-Creation.md)   
 [Document/View Creation](../VS_visualcpp/Document-View-Creation.md)   
 [Creating New Documents, Windows, and Views](../VS_visualcpp/Creating-New-Documents--Windows--and-Views.md)