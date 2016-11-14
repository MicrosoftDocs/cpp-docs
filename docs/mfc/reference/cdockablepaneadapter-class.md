---
title: "CDockablePaneAdapter Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockablePaneAdapter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockablePaneAdapter class"
ms.assetid: 6ed6cf82-f39c-4d0c-bf7c-8641495cf8f3
caps.latest.revision: 22
author: "mikeblome"
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
# CDockablePaneAdapter Class
Provides docking support for `CWnd`-derived panes.  
  
## Syntax  
  
```  
class CDockablePaneAdapter : public CDockablePane  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDockablePaneAdapter::GetWrappedWnd](#cdockablepaneadapter__getwrappedwnd)|Returns the wrapped window.|  
|[CDockablePaneAdapter::LoadState](#cdockablepaneadapter__loadstate)|(Overrides [CDockablePane::LoadState](http://msdn.microsoft.com/en-us/96110136-4f46-4764-8a76-3b4abaf77917).)|  
|[CDockablePaneAdapter::SaveState](#cdockablepaneadapter__savestate)|(Overrides [CDockablePane::SaveState](http://msdn.microsoft.com/en-us/c5c24249-8d0d-46cb-96d9-9f5c6dc191db).)|  
|[CDockablePaneAdapter::SetWrappedWnd](#cdockablepaneadapter__setwrappedwnd)||  
  
## Remarks  
 Usually, the framework instantiates objects of this class when you use the [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__addtab) or [CMFCBaseTabCtrl::InsertTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__inserttab) methods.  
  
 If you want to customize the `CDockablePaneAdapter` behavior, just derive a new class from it and set the runtime class information to a tabbed window by using [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__setdockingbarwrapperrtc).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md)  
  
## Requirements  
 **Header:** afxDockablePaneAdapter.h  
  
##  <a name="cdockablepaneadapter__getwrappedwnd"></a>  CDockablePaneAdapter::GetWrappedWnd  
 Returns the underlying window for the dockable pane adapter.  
  
```  
virtual CWnd* GetWrappedWnd() const;

 
```  
  
### Return Value  
 A pointer to the wrapped window.  
  
### Remarks  
 Use this function to access the wrapped window.  
  
##  <a name="cdockablepaneadapter__loadstate"></a>  CDockablePaneAdapter::LoadState  
 Loads the state of the pane from the registry.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 The profile name.  
  
 [in] `nIndex`  
 The profile index.  
  
 [in] `uiID`  
 The pane ID.  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockablepaneadapter__savestate"></a>  CDockablePaneAdapter::SaveState  
 Saves the state of the pane to the registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 The profile name.  
  
 [in] `nIndex`  
 The profile index (defaults to the control ID of the window).  
  
 [in] `uiID`  
 The pane ID.  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockablepaneadapter__setwrappedwnd"></a>  CDockablePaneAdapter::SetWrappedWnd  
 Sets the underlying window for the dockable pane adapter.  
  
```  
virtual BOOL SetWrappedWnd(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to the window for the pane adapter to wrap.  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
