---
title: "CTreeView Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTreeView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "directory lists"
  - "tree view controls"
  - "file lists [C++]"
  - "CTreeView class, common controls"
  - "CTreeView class"
ms.assetid: 5df583a6-d69f-42ca-9d8d-57e04558afff
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTreeView Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CTreeView Class](https://docs.microsoft.com/cpp/mfc/reference/ctreeview-class).  
  
  
Simplifies use of the tree control and of [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), the class that encapsulates tree-control functionality, with MFC's document-view architecture.  
  
## Syntax  
  
```  
class CTreeView : public CCtrlView  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CTreeView::CTreeView](#ctreeview__ctreeview)|Constructs a `CTreeView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTreeView::GetTreeCtrl](#ctreeview__gettreectrl)|Returns the tree control associated with the view.|  
  
## Remarks  
 For more information on this architecture, see the overview for the [CView](../../mfc/reference/cview-class.md) class and the cross-references cited there.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CTreeView`  
  
## Requirements  
 **Header:** afxcview.h  
  
##  <a name="ctreeview__ctreeview"></a>  CTreeView::CTreeView  
 Constructs a `CTreeView` object.  
  
```  
CTreeView();
```  
  
##  <a name="ctreeview__gettreectrl"></a>  CTreeView::GetTreeCtrl  
 Returns a reference to the tree control associated with the view.  
  
```  
CTreeCtrl& GetTreeCtrl() const;  
```  
  
## See Also  
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)








