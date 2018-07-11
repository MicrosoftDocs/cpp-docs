---
title: "COleResizeBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["COleResizeBar", "AFXOLE/COleResizeBar", "AFXOLE/COleResizeBar::COleResizeBar", "AFXOLE/COleResizeBar::Create"]
dev_langs: ["C++"]
helpviewer_keywords: ["COleResizeBar [MFC], COleResizeBar", "COleResizeBar [MFC], Create"]
ms.assetid: 56a708d9-28c5-4eb0-9404-77b688d91c63
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# COleResizeBar Class
A type of control bar that supports resizing of in-place OLE items.  
  
## Syntax  
  
```  
class COleResizeBar : public CControlBar  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleResizeBar::COleResizeBar](#coleresizebar)|Constructs a `COleResizeBar` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleResizeBar::Create](#create)|Creates and initializes a Windows child window and associates it to the `COleResizeBar` object.|  
  
## Remarks  
 `COleResizeBar` objects appear as a [CRectTracker](../../mfc/reference/crecttracker-class.md) with a hatched border and outer resize handles.  
  
 `COleResizeBar` objects are usually embedded members of frame-window objects derived from the [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md) class.  
  
 For more information, see the article [Activation](../../mfc/activation-cpp.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `COleResizeBar`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="coleresizebar"></a>  COleResizeBar::COleResizeBar  
 Constructs a `COleResizeBar` object.  
  
```  
COleResizeBar();
```  
  
### Remarks  
 Call `Create` to create the resize bar object.  
  
##  <a name="create"></a>  COleResizeBar::Create  
 Creates a child window and associates it with the `COleResizeBar` object.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,  
    UINT nID = AFX_IDW_RESIZE_BAR);
```  
  
### Parameters  
 *pParentWnd*  
 Pointer to the parent window of the resize bar.  
  
 *dwStyle*  
 Specifies the [window style](../../mfc/reference/styles-used-by-mfc.md#window-styles) attributes.  
  
 *nID*  
 The resize bar's child window ID.  
  
### Return Value  
 Nonzero if the resize bar was created; otherwise 0.  
  
## See Also  
 [MFC Sample SUPERPAD](../../visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleServerDoc Class](../../mfc/reference/coleserverdoc-class.md)
