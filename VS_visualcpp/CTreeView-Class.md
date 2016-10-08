---
title: "CTreeView Class"
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
ms.topic: reference
ms.assetid: 5df583a6-d69f-42ca-9d8d-57e04558afff
caps.latest.revision: 18
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
# CTreeView Class
Simplifies use of the tree control and of [CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md), the class that encapsulates tree-control functionality, with MFC's document-view architecture.  
  
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
 For more information on this architecture, see the overview for the [CView](../VS_visualcpp/CView-Class.md) class and the cross-references cited there.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CView](../VS_visualcpp/CView-Class.md)  
  
 [CCtrlView](../VS_visualcpp/CCtrlView-Class.md)  
  
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
 [CCtrlView Class](../VS_visualcpp/CCtrlView-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CView Class](../VS_visualcpp/CView-Class.md)   
 [CCtrlView Class](../VS_visualcpp/CCtrlView-Class.md)   
 [CTreeCtrl Class](../VS_visualcpp/CTreeCtrl-Class.md)