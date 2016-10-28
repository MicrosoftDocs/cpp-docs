---
title: "CTreeView Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 18
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CTreeView Class
Simplifies use of the tree control and of [CTreeCtrl](../mfcref/ctreectrl-class.md), the class that encapsulates tree-control functionality, with MFC's document-view architecture.  
  
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
 For more information on this architecture, see the overview for the [CView](../mfcref/cview-class.md) class and the cross-references cited there.  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CView](../mfcref/cview-class.md)  
  
 [CCtrlView](../mfcref/cctrlview-class.md)  
  
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
 [CCtrlView Class](../mfcref/cctrlview-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [CView Class](../mfcref/cview-class.md)   
 [CCtrlView Class](../mfcref/cctrlview-class.md)   
 [CTreeCtrl Class](../mfcref/ctreectrl-class.md)