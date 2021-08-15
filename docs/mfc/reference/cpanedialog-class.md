---
description: "Learn more about: CPaneDialog Class"
title: "CPaneDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CPaneDialog", "AFXPANEDIALOG/CPaneDialog", "AFXPANEDIALOG/CPaneDialog::Create", "AFXPANEDIALOG/CPaneDialog::HandleInitDialog", "AFXPANEDIALOG/CPaneDialog::SetOccDialogInfo"]
helpviewer_keywords: ["CPaneDialog [MFC], Create", "CPaneDialog [MFC], HandleInitDialog", "CPaneDialog [MFC], SetOccDialogInfo"]
ms.assetid: 48a6bb91-4b92-40f5-8907-b3270b146cf6
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
|[CPaneDialog::Create](#create)|Creates a dockable dialog box and attaches it to a `CPaneDialog` object.|
|`CPaneDialog::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CPaneDialog::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CPaneDialog::HandleInitDialog](#handleinitdialog)|Handles the [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) message. (Redefines `CBasePane::HandleInitDialog`.)|
|`CPaneDialog::OnEraseBkgnd`|Handles the [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd) message. (Redefines [CWnd::OnEraseBkgnd](../../mfc/reference/cwnd-class.md#onerasebkgnd).)|
|`CPaneDialog::OnLButtonDblClk`|Handles the [WM_LBUTTONDBLCLK](/windows/win32/inputdev/wm-lbuttondblclk) message. (Redefines [CWnd::OnLButtonDblClk](../../mfc/reference/cwnd-class.md#onlbuttondblclk).)|
|`CPaneDialog::OnLButtonDown`|Handles the [WM_LBUTTONDOWN](/windows/win32/inputdev/wm-lbuttondown) message. (Redefines [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown).)|
|`CPaneDialog::OnUpdateCmdUI`|Called by the framework to update the dialog box window. (Overrides [CDockablePane::OnUpdateCmdUI](cdockablepane-class.md).)|
|`CPaneDialog::OnWindowPosChanging`|Handles the [WM_WINDOWPOSCHANGING](/windows/win32/winmsg/wm-windowposchanging) message. (Redefines [CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging).)|
|[CPaneDialog::SetOccDialogInfo](#setoccdialoginfo)|Specifies the template for a dialog box that is an OLE control container.|

## Remarks

Construct a `CPaneDialog` object in two steps. First, construct the object in your code. Second, call [CPaneDialog::Create](#create). You must specify a valid resource template name or template ID and pass a pointer to the parent window. Otherwise, the creation process fails. The dialog box must specify the WS_CHILD and WS_VISIBLE style. We recommend that you also specify the WS_CLIPCHILDREN and WS_CLIPSIBLINGS styles. For more information, see [Window Styles](styles-used-by-mfc.md#window-styles).

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

## <a name="create"></a> CPaneDialog::Create

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

*lpszWindowName*<br/>
[in] The name of the docking dialog box.

*pParentWnd*<br/>
[in] Points to the parent window.

*bHasGripper*<br/>
[in] TRUE to create the docking dialog box with a caption (gripper); otherwise, FALSE.

*lpszTemplateName*<br/>
[in] The name of the resource dialog template.

*nStyle*<br/>
[in] The Windows style.

*nID*<br/>
[in] The control ID.

*nIDTemplate*<br/>
[in] The resource ID of the dialog template.

*dwTabbedStyle*<br/>
[in] The style of the tabbed window that results when the user drags another control pane onto the caption of this control pane. The default value is AFX_CBRS_REGULAR_TABS. For more information, see the Remarks section of the [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex) method.

*dwControlBarStyle*<br/>
[in] Additional style attributes. The default value is AFX_DEFAULT_DOCKING_PANE_STYLE. For more information, see the Remarks section of the [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex) method.

### Return Value

TRUE if this method succeeds; otherwise, FALSE.

### Remarks

### Example

The following example demonstrates how to use the `Create` method in the `CPaneDialog` class. This example is part of the [Set Pane Size sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/cpp/cpanedialog-class_1.h)]
[!code-cpp[NVC_MFC_SetPaneSize#3](../../mfc/reference/codesnippet/cpp/cpanedialog-class_2.cpp)]

## <a name="handleinitdialog"></a> CPaneDialog::HandleInitDialog

Handles the [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) message.

```
afx_msg LRESULT HandleInitDialog(
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*wParam*<br/>
[in] Handle to the control that is to receive the default keyboard focus.

*lParam*<br/>
[in] Specifies additional initialization data.

### Return Value

TRUE if this method is successful; otherwise, FALSE. In addition, TRUE sets the keyboard focus to the control specified by the *wParam* parameter; FALSE prevents setting the default keyboard focus.

### Remarks

The framework uses this method to initialize controls and the appearance of a dialog box. The framework calls this method before it displays the dialog box.

## <a name="setoccdialoginfo"></a> CPaneDialog::SetOccDialogInfo

Specifies the template for a dialog box that is an OLE control container.

```
virtual BOOL SetOccDialogInfo(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```

### Parameters

*pOccDialogInfo*<br/>
[in] Pointer to a dialog box template that is used to create the dialog box object. The value of this parameter is subsequently passed into the [COccManager::CreateDlgControls](../../mfc/reference/coccmanager-class.md#createdlgcontrols) method.

### Return Value

Always TRUE.

### Remarks

This method supports the [COccManager](../../mfc/reference/coccmanager-class.md) class, which manages OLE control sites and ActiveX controls. The _AFX_OCC_DIALOG_INFO structure is defined in the afxocc.h header file.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)<br/>
[Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles)
