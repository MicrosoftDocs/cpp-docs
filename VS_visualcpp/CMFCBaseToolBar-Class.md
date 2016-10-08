---
title: "CMFCBaseToolBar Class"
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
ms.assetid: 5d79206d-55e4-46f8-b1b8-042e34d7f9da
caps.latest.revision: 15
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
# CMFCBaseToolBar Class
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
|[CMFCBaseToolBar::GetDockingMode](#cmfcbasetoolbar__getdockingmode)|Returns the docking mode. (Overrides [CBasePane::GetDockingMode](../VS_visualcpp/CBasePane-Class.md#cbasepane__getdockingmode).)|  
|[CMFCBaseToolBar::GetMinSize](#cmfcbasetoolbar__getminsize)|Returns the minimum size of a toolbar. (Overrides [CPane::GetMinSize](../VS_visualcpp/CPane-Class.md#cpane__getminsize).)|  
|[CMFCBaseToolBar::OnAfterChangeParent](#cmfcbasetoolbar__onafterchangeparent)|Called by the framework after the pane's parent changes. (Overrides [CBasePane::OnAfterChangeParent](../VS_visualcpp/CBasePane-Class.md#cbasepane__onafterchangeparent).)|  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CBasePane](../VS_visualcpp/CBasePane-Class.md)  
  
 [CPane](../VS_visualcpp/CPane-Class.md)  
  
 [CMFCBaseToolBar](../VS_visualcpp/CMFCBaseToolBar-Class.md)  
  
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
virtual void GetMinSize( CSize& size ) const;  
```  
  
### Parameters  
 [out] `size`  
 The minimum size of a toolbar.  
  
##  <a name="cmfcbasetoolbar__onafterchangeparent"></a>  CMFCBaseToolBar::OnAfterChangeParent  
 Called by the framework after the pane's parent changes.  
  
```  
virtual void OnAfterChangeParent( CWnd* pWndOldParent );  
```  
  
### Parameters  
 [in] `pWndOldParent`  
 A pointer to the previous parent window.  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)