---
title: "CDockablePaneAdapter Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CDockablePaneAdapter", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::GetWrappedWnd", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::LoadState", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SaveState", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SetWrappedWnd"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDockablePaneAdapter [MFC], GetWrappedWnd", "CDockablePaneAdapter [MFC], LoadState", "CDockablePaneAdapter [MFC], SaveState", "CDockablePaneAdapter [MFC], SetWrappedWnd"]
ms.assetid: 6ed6cf82-f39c-4d0c-bf7c-8641495cf8f3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CDockablePaneAdapter::GetWrappedWnd](#getwrappedwnd)|Returns the wrapped window.|  
|[CDockablePaneAdapter::LoadState](#loadstate)|(Overrides [CDockablePane::LoadState](http://msdn.microsoft.com/96110136-4f46-4764-8a76-3b4abaf77917).)|  
|[CDockablePaneAdapter::SaveState](#savestate)|(Overrides [CDockablePane::SaveState](http://msdn.microsoft.com/c5c24249-8d0d-46cb-96d9-9f5c6dc191db).)|  
|[CDockablePaneAdapter::SetWrappedWnd](#setwrappedwnd)||  
  
## Remarks  
 Usually, the framework instantiates objects of this class when you use the [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) or [CMFCBaseTabCtrl::InsertTab](../../mfc/reference/cmfcbasetabctrl-class.md#inserttab) methods.  
  
 If you want to customize the `CDockablePaneAdapter` behavior, just derive a new class from it and set the runtime class information to a tabbed window by using [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](../../mfc/reference/cmfcbasetabctrl-class.md#setdockingbarwrapperrtc).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md)  
  
## Requirements  
 **Header:** afxDockablePaneAdapter.h  
  
##  <a name="getwrappedwnd"></a>  CDockablePaneAdapter::GetWrappedWnd  
 Returns the underlying window for the dockable pane adapter.  
  
```  
virtual CWnd* GetWrappedWnd() const;  
```  
  
### Return Value  
 A pointer to the wrapped window.  
  
### Remarks  
 Use this function to access the wrapped window.  
  
##  <a name="loadstate"></a>  CDockablePaneAdapter::LoadState  
 Loads the state of the pane from the registry.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] *lpszProfileName*  
 The profile name.  
  
 [in] *nIndex*  
 The profile index.  
  
 [in] *uiID*  
 The pane ID.  
  
### Return Value  
  
### Remarks  
  
##  <a name="savestate"></a>  CDockablePaneAdapter::SaveState  
 Saves the state of the pane to the registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] *lpszProfileName*  
 The profile name.  
  
 [in] *nIndex*  
 The profile index (defaults to the control ID of the window).  
  
 [in] *uiID*  
 The pane ID.  
  
### Return Value  
  
### Remarks  
  
##  <a name="setwrappedwnd"></a>  CDockablePaneAdapter::SetWrappedWnd  
 Sets the underlying window for the dockable pane adapter.  
  
```  
virtual BOOL SetWrappedWnd(CWnd* pWnd);
```  
  
### Parameters  
 [in] *pWnd*  
 A pointer to the window for the pane adapter to wrap.  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
