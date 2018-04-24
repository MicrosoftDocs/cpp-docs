---
title: "CListView Class | Microsoft Docs"
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
  - "CListView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "views, and common controls"
  - "CListView class"
ms.assetid: 7626bdb2-a1b8-4eab-b631-6743710a8432
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CListView Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CListView Class](https://docs.microsoft.com/cpp/mfc/reference/clistview-class).  
  
  
Simplifies use of the list control and of [CListCtrl](../../mfc/reference/clistctrl-class.md), the class that encapsulates list-control functionality, with MFC's document-view architecture.  
  
## Syntax  
  
```  
class CListView : public CCtrlView  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::CListView](#clistview__clistview)|Constructs a `CListView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::GetListCtrl](#clistview__getlistctrl)|Returns the list control associated with the view.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::RemoveImageList](#clistview__removeimagelist)|Removes the specified image list from the list view.|  
  
## Remarks  
 For more information on this architecture, see the overview for the [CView](../../mfc/reference/cview-class.md) class and the cross-references cited there.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CListView`  
  
## Requirements  
 **Header:** afxcview.h  
  
##  <a name="clistview__clistview"></a>  CListView::CListView  
 Constructs a `CListView` object.  
  
```  
CListView();
```  
  
##  <a name="clistview__getlistctrl"></a>  CListView::GetListCtrl  
 Call this member function to get a reference to the list control associated with the view.  
  
```  
CListCtrl& GetListCtrl() const;  
```  
  
### Return Value  
 A reference to the list control associated with the view.  
  
### Example  
 [!code-cpp[NVC_MFCListView#7](../../snippets/cpp/VS_Snippets_Cpp/NVC_MFCListView/Cpp/MyListView.cpp#7)]  
  
##  <a name="clistview__removeimagelist"></a>  CListView::RemoveImageList  
 Removes the specified image list from the list view.  
  
```  
void RemoveImageList(int nImageList);
```  
  
### Parameters  
 `nImageList`  
 The zero-based index of the image to remove.  
  
## See Also  
 [MFC Sample ROWLIST](../../top/visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)








