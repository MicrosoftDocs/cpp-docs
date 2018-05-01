---
title: "CMFCBaseToolBar Class | Microsoft Docs"
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
  - "CMFCBaseToolBar::CreateObject"
  - "~CMFCBaseToolBar"
  - "CMFCBaseToolBar"
  - "CMFCBaseToolBar::CMFCBaseToolBar"
  - "CMFCBaseToolBar::~CMFCBaseToolBar"
  - "CMFCBaseToolBar.~CMFCBaseToolBar"
  - "CreateObject"
  - "CMFCBaseToolBar.CMFCBaseToolBar"
  - "CMFCBaseToolBar.CreateObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCBaseToolBar class, constructor"
  - "CMFCBaseToolBar class, destructor"
  - "~CMFCBaseToolBar destructor"
  - "CreateObject method"
  - "CMFCBaseToolBar class"
ms.assetid: 5d79206d-55e4-46f8-b1b8-042e34d7f9da
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCBaseToolBar Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CMFCBaseToolBar Class](https://docs.microsoft.com/cpp/mfc/reference/cmfcbasetoolbar-class).  
  
  
Base class for toolbars.  
  
## Syntax  
  
```  
class CMFCBaseToolBar : public CPane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCBaseToolBar::CMFCBaseToolBar`|Default constructor.|  
|`CMFCBaseToolBar::~CMFCBaseToolBar`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCBaseToolBar::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCBaseToolBar::GetDockingMode](#cmfcbasetoolbar__getdockingmode)|Returns the docking mode. (Overrides [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#cbasepane__getdockingmode).)|  
|[CMFCBaseToolBar::GetMinSize](#cmfcbasetoolbar__getminsize)|Returns the minimum size of a toolbar. (Overrides [CPane::GetMinSize](../../mfc/reference/cpane-class.md#cpane__getminsize).)|  
|[CMFCBaseToolBar::OnAfterChangeParent](#cmfcbasetoolbar__onafterchangeparent)|Called by the framework after the pane's parent changes. (Overrides [CBasePane::OnAfterChangeParent](../../mfc/reference/cbasepane-class.md#cbasepane__onafterchangeparent).)|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
## Requirements  
 **Header:** afxbasetoolbar.h  
  
##  <a name="cmfcbasetoolbar__getdockingmode"></a>  CMFCBaseToolBar::GetDockingMode  
 Returns the docking mode.  
  
```  
virtual AFX_DOCK_TYPE GetDockingMode() const;  
```  
  
### Return Value  
 The docking mode.  
  
##  <a name="cmfcbasetoolbar__getminsize"></a>  CMFCBaseToolBar::GetMinSize  
 Returns the minimum size of a toolbar.  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### Parameters  
 [out] `size`  
 The minimum size of a toolbar.  
  
##  <a name="cmfcbasetoolbar__onafterchangeparent"></a>  CMFCBaseToolBar::OnAfterChangeParent  
 Called by the framework after the pane's parent changes.  
  
```  
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```  
  
### Parameters  
 [in] `pWndOldParent`  
 A pointer to the previous parent window.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)






