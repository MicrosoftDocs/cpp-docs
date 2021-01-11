---
description: "Learn more about: CMFCToolBarEditBoxButton Class"
title: "CMFCToolBarEditBoxButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolBarEditBoxButton", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CanBeStretched", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CopyFrom", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetByCmd", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetContentsAll", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetContextMenuID", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetEditBorder", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetHwnd", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetInvalidateRect", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::HaveHotBorder", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::IsFlatMode", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::NotifyCommand", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnAddToCustomizePage", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnChangeParentWnd", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnClick", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnCtlColor", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnGlobalFontsChanged", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnMove", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnShow", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnSize", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnUpdateToolTip", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::SetContextMenuID", "AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::SetFlatMode"]
helpviewer_keywords: ["CMFCToolBarEditBoxButton [MFC], CMFCToolBarEditBoxButton", "CMFCToolBarEditBoxButton [MFC], CanBeStretched", "CMFCToolBarEditBoxButton [MFC], CopyFrom", "CMFCToolBarEditBoxButton [MFC], GetByCmd", "CMFCToolBarEditBoxButton [MFC], GetContentsAll", "CMFCToolBarEditBoxButton [MFC], GetContextMenuID", "CMFCToolBarEditBoxButton [MFC], GetEditBorder", "CMFCToolBarEditBoxButton [MFC], GetHwnd", "CMFCToolBarEditBoxButton [MFC], GetInvalidateRect", "CMFCToolBarEditBoxButton [MFC], HaveHotBorder", "CMFCToolBarEditBoxButton [MFC], IsFlatMode", "CMFCToolBarEditBoxButton [MFC], NotifyCommand", "CMFCToolBarEditBoxButton [MFC], OnAddToCustomizePage", "CMFCToolBarEditBoxButton [MFC], OnChangeParentWnd", "CMFCToolBarEditBoxButton [MFC], OnClick", "CMFCToolBarEditBoxButton [MFC], OnCtlColor", "CMFCToolBarEditBoxButton [MFC], OnGlobalFontsChanged", "CMFCToolBarEditBoxButton [MFC], OnMove", "CMFCToolBarEditBoxButton [MFC], OnShow", "CMFCToolBarEditBoxButton [MFC], OnSize", "CMFCToolBarEditBoxButton [MFC], OnUpdateToolTip", "CMFCToolBarEditBoxButton [MFC], SetContextMenuID", "CMFCToolBarEditBoxButton [MFC], SetFlatMode"]
ms.assetid: b21d9b67-6bf7-4ca9-bd62-b237756e0ab3
---
# CMFCToolBarEditBoxButton Class

A toolbar button that contains an edit control ( [CEdit Class](../../mfc/reference/cedit-class.md)).

## Syntax

```
class CMFCToolBarEditBoxButton : public CMFCToolBarButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton](#cmfctoolbareditboxbutton)|Constructs a `CMFCToolBarEditBoxButton` object.|
|`CMFCToolBarEditBoxButton::~CMFCToolBarEditBoxButton`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCToolBarEditBoxButton::CanBeStretched](#canbestretched)|Specifies whether a user can stretch the button during customization. (Overrides [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).)|
|[CMFCToolBarEditBoxButton::CopyFrom](#copyfrom)|Copies the properties of another toolbar button to the current button. (Overrides [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::CreateEdit](#createedit)|Creates a new edit control in the button.|
|`CMFCToolBarEditBoxButton::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCToolBarEditBoxButton::GetByCmd](#getbycmd)|Retrieves the first `CMFCToolBarEditBoxButton` object in the application that has the specified command ID.|
|[CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall)|Retrieves the text of the first edit box toolbar control that has the specified command ID.|
|[CMFCToolBarEditBoxButton::GetContextMenuID](#getcontextmenuid)|Retrieves the resource ID of the shortcut menu that is associated with the button.|
|[CMFCToolBarEditBoxButton::GetEditBorder](#geteditborder)|Retrieves the bounding rectangle of the edit part of the edit box button.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::GetEditBox](#geteditbox)|Returns a pointer to the edit control that is embedded in the button.|
|[CMFCToolBarEditBoxButton::GetHwnd](#gethwnd)|Retrieves the window handle that is associated with the toolbar button. (Overrides [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).)|
|[CMFCToolBarEditBoxButton::GetInvalidateRect](#getinvalidaterect)|Retrieves the region of the client area of the button that must be redrawn. (Overrides [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect).)|
|`CMFCToolBarEditBoxButton::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCToolBarEditBoxButton::HaveHotBorder](#havehotborder)|Determines whether a border of the button is displayed when a user clicks the button. (Overrides [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|
|[CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode)|Determines whether edit box buttons have a flat style.|
|[CMFCToolBarEditBoxButton::NotifyCommand](#notifycommand)|Specifies whether the button processes the [WM_COMMAND](/windows/win32/menurc/wm-command) message. (Overrides [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand).)|
|[CMFCToolBarEditBoxButton::OnAddToCustomizePage](#onaddtocustomizepage)|Called by the framework when the button is added to a **Customize** dialog box. (Overrides [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).)|
|`CMFCToolBarEditBoxButton::OnCalculateSize`|Called by the framework to calculate the size of the button for the specified device context and docking state. (Overrides [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|
|[CMFCToolBarEditBoxButton::OnChangeParentWnd](#onchangeparentwnd)|Called by the framework when the button is inserted into a new toolbar. (Overrides [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|
|[CMFCToolBarEditBoxButton::OnClick](#onclick)|Called by the framework when the user clicks the mouse button. (Overrides [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|
|[CMFCToolBarEditBoxButton::OnCtlColor](#onctlcolor)|Called by the framework when the parent toolbar handles a WM_CTLCOLOR message. (Overrides [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor).)|
|`CMFCToolBarEditBoxButton::OnDraw`|Called by the framework to draw the button by using the specified styles and options. (Overrides [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|
|`CMFCToolBarEditBoxButton::OnDrawOnCustomizeList`|Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box. (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|
|[CMFCToolBarEditBoxButton::OnGlobalFontsChanged](#onglobalfontschanged)|Called by the framework when the global font has changed. (Overrides [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).)|
|[CMFCToolBarEditBoxButton::OnMove](#onmove)|Called by the framework when the parent toolbar moves. (Overrides [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).)|
|[CMFCToolBarEditBoxButton::OnShow](#onshow)|Called by the framework when the button becomes visible or invisible. (Overrides [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).)|
|[CMFCToolBarEditBoxButton::OnSize](#onsize)|Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size. (Overrides [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).)|
|[CMFCToolBarEditBoxButton::OnUpdateToolTip](#onupdatetooltip)|Called by the framework when the parent toolbar updates its tooltip text. (Overrides [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip).)|
|`CMFCToolBarEditBoxButton::Serialize`|Reads this object from an archive or writes it to an archive. (Overrides [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|
|`CMFCToolBarEditBoxButton::SetACCData`|Populates the provided `CAccessibilityData` object with accessibility data from the toolbar button. (Overrides [CMFCToolBarButton::SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#setaccdata).)|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContents](#setcontents)|Sets the text in the edit control of the button.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall)|Finds the edit control button that has a specified command ID, and sets the text in the edit control of that button.|
|[CMFCToolBarEditBoxButton::SetContextMenuID](#setcontextmenuid)|Specifies the resource ID of the shortcut menu that is associated with the button.|
|[CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode)|Specifies the flat style appearance of edit box buttons in the application.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetStyle](#setstyle)|Specifies the style of the button. (Overrides [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle).)|

## Remarks

To add an edit box button to a toolbar, follow these steps:

1. Reserve a dummy resource ID for the button in the parent toolbar resource.

2. Construct a `CMFCToolBarEditBoxButton` object.

3. In the message handler that processes the AFX_WM_RESETTOOLBAR message, replace the dummy button with the new combo box button by using [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

For more information, see [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md).

## Example

The following example demonstrates how to use various methods in the `CMFCToolBarEditBoxButton` class. The example shows how to specify that a user can stretch the button during customization, specify that a border of the button is displayed when a user clicks the button, set the text in the text box control, specify the flat style appearance of edit box buttons in the application, and specify the style of a toolbar edit box control.

[!code-cpp[NVC_MFC_RibbonApp#40](../../mfc/reference/codesnippet/cpp/cmfctoolbareditboxbutton-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

`CMFCToolBarEditBoxButton`

## Requirements

**Header:** afxtoolbareditboxbutton.h

## <a name="canbestretched"></a> CMFCToolBarEditBoxButton::CanBeStretched

Specifies whether a user can stretch the button during customization.

```
virtual BOOL CanBeStretched() const;
```

### Return Value

This method returns TRUE.

### Remarks

By default, the framework does not allow the user to stretch a toolbar button during customization. This method extends the base class implementation ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) by allowing the user to stretch an edit box toolbar button during customization.

## <a name="cmfctoolbareditboxbutton"></a> CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton

Constructs a [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) object.

```
CMFCToolBarEditBoxButton(
    UINT uiID,
    int iImage,
    DWORD dwStyle=ES_AUTOHSCROLL,
    int iWidth=0);
```

### Parameters

*uiID*<br/>
[in] Specifies the control ID.

*iImage*<br/>
[in] Specifies the zero-based index of a toolbar image. The image is located in the [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md) object that [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) class maintains.

*dwStyle*<br/>
[in] Specifies the edit control style.

*iWidth*<br/>
[in] Specifies the width in pixels of the edit control.

### Remarks

The default constructor sets the edit control style to the following combination:

WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL

The default width of the control is 150 pixels.

## <a name="copyfrom"></a> CMFCToolBarEditBoxButton::CopyFrom

Copies the properties of another toolbar button to the current button.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### Parameters

*src*<br/>
[in] A reference to the source button from which to copy.

### Remarks

Call this method to copy another toolbar button to this toolbar button. *src* must be of type `CMFCToolBarEditBoxButton`.

## <a name="createedit"></a> CMFCToolBarEditBoxButton::CreateEdit

Creates a new edit control in the button.

```
virtual CEdit* CreateEdit(
    CWnd* pWndParent,
    const CRect& rect);
```

### Parameters

*pWndParent*<br/>
[in] Specifies the parent window of the edit control. It must not be NULL.

*rect*<br/>
[in] Specifies the edit control's size and position.

### Return Value

A pointer to the newly created edit control; it is NULL if the control's creation and attachment fail.

### Remarks

You construct a `CMFCToolBarEditBoxButton` object in two steps. First call the constructor, and then call `CreateEdit`, which creates the Windows edit control and attaches it to the `CMFCToolBarEditBoxButton` object.

## <a name="getbycmd"></a> CMFCToolBarEditBoxButton::GetByCmd

Retrieves the first `CMFCToolBarEditBoxButton` object in the application that has the specified command ID.

```
static CMFCToolBarEditBoxButton* __stdcall GetByCmd(UINT uiCmd);
```

### Parameters

*uiCmd*<br/>
[in] The command ID of the button to retrieve.

### Return Value

The first `CMFCToolBarEditBoxButton` object in the application that has the specified command ID, or NULL if no such object exists.

### Remarks

This shared utility method is used by methods such as [CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall) and [CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall) to set or get the text of the first edit box toolbar control that has the specified command ID.

## <a name="getcontentsall"></a> CMFCToolBarEditBoxButton::GetContentsAll

Retrieves the text of the first edit box toolbar control that has the specified command ID.

```
static CString __stdcall GetContentsAll(UINT uiCmd);
```

### Parameters

*uiCmd*<br/>
[in] The command ID of the button from which to retrieve contents.

### Return Value

A `CString` object that contains the text of the first edit box toolbar control that has the specified command ID.

### Remarks

This method returns the empty string if no `CMFCToolBarEditBoxButton` objects have the specified command ID.

## <a name="getcontextmenuid"></a> CMFCToolBarEditBoxButton::GetContextMenuID

Retrieves the resource ID of the shortcut menu that is associated with the button.

```
UINT GetContextMenuID();
```

### Return Value

The resource ID of the shortcut menu that is associated with the button or 0 if the button has no associated shortcut menu.

### Remarks

The framework uses the resource ID to create the shortcut menu when the user right-clicks on the button.

## <a name="geteditborder"></a> CMFCToolBarEditBoxButton::GetEditBorder

Retrieves the bounding rectangle of the edit part of the edit box button.

```
virtual void GetEditBorder(CRect& rectBorder);
```

### Parameters

*rectBorder*<br/>
[out] A reference to the `CRect` object that receives the bounding rectangle.

### Remarks

This method retrieves the bounding rectangle of the edit control in client coordinates. It expands the size of the rectangle in each direction by one pixel.

The [CMFCVisualManager::OnDrawEditBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondraweditborder) method calls this method when it draws the border around a `CMFCToolBarEditBoxButton` object.

## <a name="geteditbox"></a> CMFCToolBarEditBoxButton::GetEditBox

Returns a pointer to the [CEdit Class](../../mfc/reference/cedit-class.md) control that is embedded in the button.

```
CEdit* GetEditBox() const;
```

### Return Value

A pointer to the [CEdit Class](../../mfc/reference/cedit-class.md) control that the button contains. It is NULL if the `CEdit` control has not been created yet.

### Remarks

You create the `CEdit` control by calling [CMFCToolBarEditBoxButton::CreateEdit](#createedit).

## <a name="gethwnd"></a> CMFCToolBarEditBoxButton::GetHwnd

Retrieves the window handle that is associated with the toolbar button.

```
virtual HWND GetHwnd();
```

### Return Value

The window handle that is associated with the button.

### Remarks

This method overrides the [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) method by returning the window handle of the edit control part of the edit box button.

## <a name="getinvalidaterect"></a> CMFCToolBarEditBoxButton::GetInvalidateRect

Retrieves the region of the client area of the button that must be redrawn.

```
virtual const CRect GetInvalidateRect() const;
```

### Return Value

A `CRect` object that specifies the region that must be redrawn.

### Remarks

This method extends the base class implementation, [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect), by including in the region the area of the text label.

## <a name="havehotborder"></a> CMFCToolBarEditBoxButton::HaveHotBorder

Determines whether a border of the button is displayed when a user clicks the button.

```
virtual BOOL HaveHotBorder() const;
```

### Return Value

Nonzero if a button displays its border when selected; otherwise 0.

### Remarks

This method extends the base class implementation, [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder), by returning a nonzero value if the control is visible.

## <a name="isflatmode"></a> CMFCToolBarEditBoxButton::IsFlatMode

Determines whether edit box buttons have a flat style.

```
static BOOL __stdcall IsFlatMode();
```

### Return Value

Nonzero if the buttons have a flat style; otherwise, 0.

### Remarks

By default, edit box buttons have a flat style. Use the [CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode) method to change the flat style appearance for your application.

## <a name="notifycommand"></a> CMFCToolBarEditBoxButton::NotifyCommand

Specifies whether the button processes the [WM_COMMAND](/windows/win32/menurc/wm-command) message.

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### Parameters

*iNotifyCode*<br/>
[in] The notification message that is associated with the command.

### Return Value

TRUE if the button processes the WM_COMMAND message, or FALSE to indicate that the message must be handled by the parent toolbar.

### Remarks

The framework calls this method when it is about to send a [WM_COMMAND](/windows/win32/menurc/wm-command) message to the parent window.

This method extends the base class implementation ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) by processing the [EN_UPDATE](/windows/win32/Controls/en-update) notification. For each edit box with the same command ID as this object, it sets its text label to the text label of this object.

## <a name="onaddtocustomizepage"></a> CMFCToolBarEditBoxButton::OnAddToCustomizePage

Called by the framework when the button is added to a **Customize** dialog box.

```
virtual void OnAddToCustomizePage();
```

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage)) by copying the properties from the edit box control in any toolbar that has the same command ID as this object. This method does nothing if no toolbar has an edit box control that has the same command ID as this object.

For more information about the **Customize** dialog box, see [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).

## <a name="onchangeparentwnd"></a> CMFCToolBarEditBoxButton::OnChangeParentWnd

Called by the framework when the button is inserted into a new toolbar.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### Parameters

*pWndParent*<br/>
[in] A pointer to the new parent window.

### Remarks

This method overrides the base class implementation ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) by recreating the internal `CEdit` object.

## <a name="onclick"></a> CMFCToolBarEditBoxButton::OnClick

Called by the framework when the user clicks the mouse button.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### Parameters

*pWnd*<br/>
[in] Unused.

*bDelay*<br/>
[in] Unused.

### Return Value

Nonzero if the button processes the click message; otherwise 0.

### Remarks

This method overrides the base class implementation ( [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)) by returning a nonzero value if the internal `CEdit` object is visible.

## <a name="onctlcolor"></a> CMFCToolBarEditBoxButton::OnCtlColor

Called by the framework when the parent toolbar handles a WM_CTLCOLOR message.

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### Parameters

*pDC*<br/>
[in] The device context that displays the button.

*nCtlColor*<br/>
[in] Unused.

### Return Value

A handle to the global window brush.

### Remarks

This method overrides the base class implementation ( [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor)) by setting the text and background colors of the provided device context to the global text and background colors, respectively.

For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).

## <a name="onglobalfontschanged"></a> CMFCToolBarEditBoxButton::OnGlobalFontsChanged

Called by the framework when the global font has changed.

```
virtual void OnGlobalFontsChanged();
```

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) by changing the font of the control to that of the global font.

For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).

## <a name="onmove"></a> CMFCToolBarEditBoxButton::OnMove

Called by the framework when the parent toolbar moves.

```
virtual void OnMove();
```

### Remarks

This method overrides the default class implementation ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)) by updating the position of the internal `CEdit` object

## <a name="onshow"></a> CMFCToolBarEditBoxButton::OnShow

Called by the framework when the button becomes visible or invisible.

```
virtual void OnShow(BOOL bShow);
```

### Parameters

*bShow*<br/>
[in] Specifies whether the button is visible. If this parameter is TRUE, the button is visible. Otherwise, the button is not visible.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) by displaying the button if *bShow* is TRUE. Otherwise, this method hides the button.

## <a name="onsize"></a> CMFCToolBarEditBoxButton::OnSize

Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size.

```
virtual void OnSize(int iSize);
```

### Parameters

*iSize*<br/>
[in] The new width of the button, in pixels.

### Remarks

This method overrides the default class implementation, [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize), by updating the size and position of the internal `CEdit` object.

## <a name="onupdatetooltip"></a> CMFCToolBarEditBoxButton::OnUpdateToolTip

Called by the framework when the parent toolbar updates its tooltip text.

```
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,
    int iButtonIndex,
    CToolTipCtrl& wndToolTip,
    CString& str);
```

### Parameters

*pWndParent*<br/>
[in] Unused.

*iButtonIndex*<br/>
[in] Unused.

*wndToolTip*<br/>
[in] The control that displays the tooltip text.

*str*<br/>
[out] A `CString` object that receives the updated tooltip text.

### Return Value

Nonzero if the method updates the tooltip text; otherwise 0.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) by displaying the tooltip text that is associated with the edit part of the button. If the internal `CEdit` object is NULL or the window handle of the `CEdit` object does not identify an existing window, this method does nothing and returns FALSE.

## <a name="setcontents"></a> CMFCToolBarEditBoxButton::SetContents

Sets the text in the text box control.

```
virtual void SetContents(const CString& sContents);
```

### Parameters

*sContents*<br/>
[in] Specifies the new text to set.

## <a name="setcontentsall"></a> CMFCToolBarEditBoxButton::SetContentsAll

Finds a [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) object that has a specified command ID and sets the specified text within its text box.

```
static BOOL SetContentsAll(
    UINT uiCmd,
    const CString& strContents);
```

### Parameters

*uiCmd*<br/>
[in] Specifies the command ID of the control for which the text will be changed.

*strContents*<br/>
[in] Specifies the new text to set.

### Return Value

Nonzero if the text was set; 0 if the `CMFCToolBarEditBoxButton` control with the specified command ID does not exist.

## <a name="setcontextmenuid"></a> CMFCToolBarEditBoxButton::SetContextMenuID

Specifies the resource ID of the shortcut menu that is associated with the button.

```cpp
void SetContextMenuID(UINT uiResID);
```

### Parameters

*uiCmd*<br/>
[in] The resource ID of the shortcut menu.

### Remarks

The framework uses the resource ID to create the shortcut menu when the user right-clicks the toolbar button.

## <a name="setflatmode"></a> CMFCToolBarEditBoxButton::SetFlatMode

Specifies the flat style appearance of edit box buttons in the application.

```
static void __stdcall SetFlatMode(BOOL bFlat = TRUE);
```

### Parameters

*bFlat*<br/>
[in] The flat style for edit box buttons. If this parameter is TRUE, the flat style appearance is enabled; otherwise the flat style appearance is disabled.

### Remarks

The default flat style for edit box buttons is TRUE. Use the [CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode) method to retrieve the flat style appearance for your application.

## <a name="setstyle"></a> CMFCToolBarEditBoxButton::SetStyle

Specifies the style of a toolbar edit box control.

```
virtual void SetStyle(UINT nStyle);
```

### Parameters

*nStyle*<br/>
[in] A new style to set.

### Remarks

This method sets [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle) to *nStyle* It also disables the text box when the application is in Customize mode, and enables it when the application is not in Customize mode (see [CMFCToolBar::SetCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#setcustomizemode) and [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)). See [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md) for a list of valid style flags.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)
