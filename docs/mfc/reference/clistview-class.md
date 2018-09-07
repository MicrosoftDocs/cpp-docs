---
title: "CListView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CListView", "AFXCVIEW/CListView", "AFXCVIEW/CListView::CListView", "AFXCVIEW/CListView::GetListCtrl", "AFXCVIEW/CListView::RemoveImageList"]
dev_langs: ["C++"]
helpviewer_keywords: ["CListView [MFC], CListView", "CListView [MFC], GetListCtrl", "CListView [MFC], RemoveImageList"]
ms.assetid: 7626bdb2-a1b8-4eab-b631-6743710a8432
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CListView Class
Simplifies use of the list control and of [CListCtrl](../../mfc/reference/clistctrl-class.md), the class that encapsulates list-control functionality, with MFC's document-view architecture.  
  
## Syntax  
  
```  
class CListView : public CCtrlView  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::CListView](#clistview)|Constructs a `CListView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::GetListCtrl](#getlistctrl)|Returns the list control associated with the view.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::RemoveImageList](#removeimagelist)|Removes the specified image list from the list view.|  
  
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
  
##  <a name="clistview"></a>  CListView::CListView  
 Constructs a `CListView` object.  
  
```  
CListView();
```  
  
##  <a name="getlistctrl"></a>  CListView::GetListCtrl  
 Call this member function to get a reference to the list control associated with the view.  
  
```  
CListCtrl& GetListCtrl() const;  
```  
  
### Return Value  
 A reference to the list control associated with the view.  
  
### Example  
 [!code-cpp[NVC_MFCListView#7](../../atl/reference/codesnippet/cpp/clistview-class_1.cpp)]  
  
##  <a name="removeimagelist"></a>  CListView::RemoveImageList  
 Removes the specified image list from the list view.  
  
```  
void RemoveImageList(int nImageList);
```  
  
### Parameters  
 *nImageList*  
 The zero-based index of the image to remove.  
  
## See Also  
 [MFC Sample ROWLIST](../../visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)
