---
title: "CPaneDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPaneDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPaneDialog::OnLButtonDblClk method"
  - "CPaneDialog::OnLButtonDown method"
  - "CPaneDialog::CreateObject method"
  - "CPaneDialog::OnUpdateCmdUI method"
  - "CPaneDialog constructor"
  - "CPaneDialog::OnEraseBkgnd method"
  - "CPaneDialog class"
  - "CPaneDialog::OnWindowPosChanging method"
ms.assetid: 48a6bb91-4b92-40f5-8907-b3270b146cf6
caps.latest.revision: 27
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
# CPaneDialog Class
The `CPaneDialog` class supports a modeless, dockable dialog box.  
  
## Syntax  
  
```  
class CPaneDialog : public CDockablePane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CPaneDialog::CPaneDialog`|Default constructor.|  
|`CPaneDialog::~CPaneDialog`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDialog::Create](#cpanedialog__create)|Creates a dockable dialog box and attaches it to a `CPaneDialog` object.|  
|`CPaneDialog::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CPaneDialog::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CPaneDialog::HandleInitDialog](#cpanedialog__handleinitdialog)|Handles the [WM_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428) message. (Redefines `CBasePane::HandleInitDialog`.)|  
|`CPaneDialog::OnEraseBkgnd`|Handles the [WM_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055) message. (Redefines [CWnd::OnEraseBkgnd](../../mfc/reference/cwnd-class.md#cwnd__onerasebkgnd).)|  
|`CPaneDialog::OnLButtonDblClk`|Handles the [WM_LBUTTONDBLCLK](http://msdn.microsoft.com/library/windows/desktop/ms645606) message. (Redefines [CWnd::OnLButtonDblClk](../../mfc/reference/cwnd-class.md#cwnd__onlbuttondblclk).)|  
|`CPaneDialog::OnLButtonDown`|Handles the [WM_LBUTTONDOWN](http://msdn.microsoft.com/library/windows/desktop/ms645607) message. (Redefines [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#cwnd__onlbuttondown).)|  
|`CPaneDialog::OnUpdateCmdUI`|Called by the framework to update the dialog box window. (Overrides [CDockablePane::OnUpdateCmdUI](http://msdn.microsoft.com/en-us/5dd61606-1c12-40d4-b024-f3839aa5e2e0).)|  
|`CPaneDialog::OnWindowPosChanging`|Handles the [WM_WINDOWPOSCHANGING](http://msdn.microsoft.com/library/windows/desktop/ms632653) message. (Redefines [CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#cwnd__onwindowposchanging).)|  
|[CPaneDialog::SetOccDialogInfo](#cpanedialog__setoccdialoginfo)|Specifies the template for a dialog box that is an OLE control container.|  
  
## Remarks  
 Construct a `CPaneDialog` object in two steps. First, construct the object in your code. Second, call [CPaneDialog::Create](#cpanedialog__create). You must specify a valid resource template name or template ID and pass a pointer to the parent window. Otherwise, the creation process fails. The dialog box must specify the WS_CHILD and WS_VISIBLE style. We recommend that you also specify the WS_CLIPCHILDREN and WS_CLIPSIBLINGS styles. For more information, see [Window Styles](window-styles.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CPaneDialog](../../mfc/reference/cpanedialog-class.md)  
  
## Requirements  
 **Header:** afxpanedialog.h  
  
##  <a name="cpanedialog__create"></a>  CPaneDialog::Create  
 Creates a docking dialog box and attaches it to a `CPaneDialog` object.  
  
```  
BOOL Create(
    LPCTSTR lpszWindowName,  
    CWnd* pParentWnd,  
    BOOL bHasGripper,  
    LPCTSTR lpszTemplateName,  
    UINT nStyle,  
    UINT nID,  
    DWORD dwTabbedStyle= AFX_CBRS_REGULAR_TABS,  
    DWORD dwControlBarStyle=AFX_DEFAULT_DOCKING_PANE_STYLE);

 
BOOL Create(
    LPCTSTR lpszWindowName,  
    CWnd* pParentWnd,  
    BOOL bHasGripper,  
    UINT nIDTemplate,  
    UINT nStyle,  
    UINT nID);

 
BOOL Create(
    CWnd* pParentWnd,  
    LPCTSTR lpszTemplateName,  
    UINT nStyle,  
    UINT nID);

 
BOOL Create(
    CWnd* pParentWnd,  
    UINT nIDTemplate,  
    UINT nStyle,  
    UINT nID);
```  
  
### Parameters  
 [in] `lpszWindowName`  
 The name of the docking dialog box.  
  
 [in] `pParentWnd`  
 Points to the parent window.  
  
 [in] `bHasGripper`  
 `TRUE` to create the docking dialog box with a caption (gripper); otherwise, `FALSE`.  
  
 [in] `lpszTemplateName`  
 The name of the resource dialog template.  
  
 [in] `nStyle`  
 The Windows style.  
  
 [in] `nID`  
 The control ID.  
  
 [in] `nIDTemplate`  
 The resource ID of the dialog template.  
  
 [in] `dwTabbedStyle`  
 The style of the tabbed window that results when the user drags another control pane onto the caption of this control pane. The default value is `AFX_CBRS_REGULAR_TABS`. For more information, see the Remarks section of the [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex) method.  
  
 [in] `dwControlBarStyle`  
 Additional style attributes. The default value is `AFX_DEFAULT_DOCKING_PANE_STYLE`. For more information, see the Remarks section of the [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex) method.  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`.  
  
### Remarks  
  
### Example  
 The following example demonstrates how to use the `Create` method in the `CPaneDialog` class. This example is part of the [Set Pane Size sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/cpp/cpanedialog-class_1.h)]  
[!code-cpp[NVC_MFC_SetPaneSize#3](../../mfc/reference/codesnippet/cpp/cpanedialog-class_2.cpp)]  
  
##  <a name="cpanedialog__handleinitdialog"></a>  CPaneDialog::HandleInitDialog  
 Handles the [WM_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428) message.  
  
```  
afx_msg LRESULT HandleInitDialog(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 [in] `wParam`  
 Handle to the control that is to receive the default keyboard focus.  
  
 [in] `lParam`  
 Specifies additional initialization data.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`. In addition, `TRUE` sets the keyboard focus to the control specified by the `wParam` parameter; `FALSE` prevents setting the default keyboard focus.  
  
### Remarks  
 The framework uses this method to initialize controls and the appearance of a dialog box. The framework calls this method before it displays the dialog box.  
  
##  <a name="cpanedialog__setoccdialoginfo"></a>  CPaneDialog::SetOccDialogInfo  
 Specifies the template for a dialog box that is an OLE control container.  
  
```  
virtual BOOL SetOccDialogInfo(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```  
  
### Parameters  
 [in] `pOccDialogInfo`  
 Pointer to a dialog box template that is used to create the dialog box object. The value of this parameter is subsequently passed into the [COccManager::CreateDlgControls](../../mfc/reference/coccmanager-class.md#coccmanager__createdlgcontrols) method.  
  
### Return Value  
 Always `TRUE`.  
  
### Remarks  
 This method supports the [COccManager](../../mfc/reference/coccmanager-class.md) class, which manages OLE control sites and ActiveX controls. The _AFX_OCC_DIALOG_INFO structure is defined in the afxocc.h header file.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [Window Styles](../../mfc/reference/window-styles.md)



