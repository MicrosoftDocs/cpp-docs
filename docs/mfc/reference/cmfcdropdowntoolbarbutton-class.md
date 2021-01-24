---
description: "Learn more about: CMFCDropDownToolbarButton Class"
title: "CMFCDropDownToolbarButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCDropDownToolbarButton", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::CMFCDropDownToolbarButton", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::CopyFrom", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::DropDownToolbar", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::ExportToMenuButton", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::GetDropDownToolBar", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::IsDropDown", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::IsExtraSize", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnCalculateSize", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnChangeParentWnd", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnClick", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnClickUp", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnContextHelp", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnCustomizeMenu", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnDraw", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnDrawOnCustomizeList", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::Serialize", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::SetDefaultCommand", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::m_uiShowBarDelay"]
helpviewer_keywords: ["CMFCDropDownToolbarButton [MFC], CMFCDropDownToolbarButton", "CMFCDropDownToolbarButton [MFC], CopyFrom", "CMFCDropDownToolbarButton [MFC], DropDownToolbar", "CMFCDropDownToolbarButton [MFC], ExportToMenuButton", "CMFCDropDownToolbarButton [MFC], GetDropDownToolBar", "CMFCDropDownToolbarButton [MFC], IsDropDown", "CMFCDropDownToolbarButton [MFC], IsExtraSize", "CMFCDropDownToolbarButton [MFC], OnCalculateSize", "CMFCDropDownToolbarButton [MFC], OnChangeParentWnd", "CMFCDropDownToolbarButton [MFC], OnClick", "CMFCDropDownToolbarButton [MFC], OnClickUp", "CMFCDropDownToolbarButton [MFC], OnContextHelp", "CMFCDropDownToolbarButton [MFC], OnCustomizeMenu", "CMFCDropDownToolbarButton [MFC], OnDraw", "CMFCDropDownToolbarButton [MFC], OnDrawOnCustomizeList", "CMFCDropDownToolbarButton [MFC], Serialize", "CMFCDropDownToolbarButton [MFC], SetDefaultCommand", "CMFCDropDownToolbarButton [MFC], m_uiShowBarDelay"]
ms.assetid: bc9d69e6-bd3e-4c15-9368-e80a504a0ba7
---
# CMFCDropDownToolbarButton Class

A type of toolbar button that behaves like a regular button when it is clicked. However, it opens a drop-down toolbar ( [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md) if the user presses and holds the toolbar button down.

## Syntax

```
class CMFCDropDownToolbarButton : public CMFCToolBarButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](#cmfcdropdowntoolbarbutton)|Constructs a `CMFCDropDownToolbarButton` object.|
|`CMFCDropDownToolbarButton::~CMFCDropDownToolbarButton`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCDropDownToolbarButton::CopyFrom](#copyfrom)|Copies the properties of another toolbar button to the current button. (Overrides [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|
|`CMFCDropDownToolbarButton::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar)|Opens a drop-down toolbar.|
|[CMFCDropDownToolbarButton::ExportToMenuButton](#exporttomenubutton)|Copies text from the toolbar button to a menu. (Overrides [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton).)|
|[CMFCDropDownToolbarButton::GetDropDownToolBar](#getdropdowntoolbar)|Retrieves the drop-down toolbar that is associated with the button.|
|`CMFCDropDownToolbarButton::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCDropDownToolbarButton::IsDropDown](#isdropdown)|Determines whether the drop-down toolbar is currently open.|
|[CMFCDropDownToolbarButton::IsExtraSize](#isextrasize)|Determines whether the button can be displayed with an extended border. (Overrides [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).)|
|[CMFCDropDownToolbarButton::OnCalculateSize](#oncalculatesize)|Called by the framework to calculate the size of the button for the specified device context and docking state. (Overrides [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|
|`CMFCDropDownToolbarButton::OnCancelMode`|Called by the framework to handle the [WM_CANCELMODE](/windows/win32/winmsg/wm-cancelmode) message. (Overrides `CMCToolBarButton::OnCancelMode`.)|
|[CMFCDropDownToolbarButton::OnChangeParentWnd](#onchangeparentwnd)|Called by the framework when the button is inserted into a new toolbar. (Overrides [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|
|[CMFCDropDownToolbarButton::OnClick](#onclick)|Called by the framework when the user clicks the mouse button. (Overrides [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|
|[CMFCDropDownToolbarButton::OnClickUp](#onclickup)|Called by the framework when the user releases the mouse button. (Overrides [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup).)|
|[CMFCDropDownToolbarButton::OnContextHelp](#oncontexthelp)|Called by the framework when the parent toolbar handles a WM_HELPHITTEST message. (Overrides [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp).)|
|[CMFCDropDownToolbarButton::OnCustomizeMenu](#oncustomizemenu)|Modifies the provided menu when the application displays a shortcut menu on the parent toolbar. (Overrides [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu).)|
|[CMFCDropDownToolbarButton::OnDraw](#ondraw)|Called by the framework to draw the button by using the specified styles and options. (Overrides [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|
|[CMFCDropDownToolbarButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box. (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|
|[CMFCDropDownToolbarButton::Serialize](#serialize)|Reads this object from an archive or writes it to an archive. (Overrides [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|
|[CMFCDropDownToolbarButton::SetDefaultCommand](#setdefaultcommand)|Sets the default command that the framework uses when a user clicks the button.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay)|Specifies the length of time that a user must hold the mouse button down before the drop-down toolbar appears.|

## Remarks

A `CMFCDropDownToolBarButton` differs from an ordinary button in that it has a small arrow in the lower-right corner of the button. After the user selects a button from the drop-down toolbar, the framework displays its icon on the top-level toolbar button (the button with the small arrow in the lower-right corner).

For information about how to implement a drop-down toolbar, see [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md).

The `CMFCDropDownToolBarButton` object can be exported to a [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) object and displayed as a menu button with a pop-up menu.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)

## Requirements

**Header:** afxdropdowntoolbar.h

## <a name="copyfrom"></a> CMFCDropDownToolbarButton::CopyFrom

Copies the properties of another toolbar button to the current button.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### Parameters

*src*<br/>
[in] A reference to the source button from which to copy.

### Remarks

Call this method to copy another toolbar button to this toolbar button. *src* must be of type `CMFCDropDownToolbarButton`.

## <a name="cmfcdropdowntoolbarbutton"></a> CMFCDropDownToolbarButton::CMFCDropDownToolbarButton

Constructs a `CMFCDropDownToolbarButton` object.

```
CMFCDropDownToolbarButton();

CMFCDropDownToolbarButton(
    LPCTSTR lpszName,
    CMFCDropDownToolBar* pToolBar);
```

### Parameters

*lpszName*<br/>
[in] The default text of the button.

*pToolBar*<br/>
[in] A pointer to the `CMFCDropDownToolBar` object that is displayed when the user presses the button.

### Remarks

The second overload of the constructor copies to the drop-down button the first button from the toolbar that *pToolBar* specifies.

Typically, a drop-down toolbar button uses the text from the most recently used button in the toolbar that *pToolBar* specifies. It uses the text specified by *lpszName* when the button is converted to a menu button or is displayed in the **Commands** tab of the **Customize** dialog box. For more information about the **Customize** dialog box, see [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).

### Example

The following example demonstrates how to construct an object of the `CMFCDropDownToolbarButton` class. This code snippet is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#31](../../mfc/codesnippet/cpp/cmfcdropdowntoolbarbutton-class_1.cpp)]

## <a name="dropdowntoolbar"></a> CMFCDropDownToolbarButton::DropDownToolbar

Opens a drop-down toolbar.

```
BOOL DropDownToolbar(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
[in] The parent window of the drop-down frame, or NULL to use the parent window of the drop-down toolbar button.

### Return Value

Nonzero if the method is successful; otherwise 0.

### Remarks

The [CMFCDropDownToolbarButton::OnClick](#onclick) method calls this method to open the drop-down toolbar when the user presses and holds the toolbar button down.

This methods creates the drop-down toolbar by using the [CMFCDropDownFrame::Create](../../mfc/reference/cmfcdropdownframe-class.md#create) method. If the parent toolbar is docked vertically, this method positions the drop-down toolbar either to the left-hand or right-hand side of the parent toolbar, depending on the fit. Otherwise, this method positions the drop-down toolbar underneath the parent toolbar.

This method fails if *pWnd* is NULL and the drop-down toolbar button does not have a parent window.

## <a name="exporttomenubutton"></a> CMFCDropDownToolbarButton::ExportToMenuButton

Copies text from the toolbar button to a menu.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### Parameters

*menuButton*<br/>
[in] A reference to the target menu button.

### Return Value

Nonzero if the method succeeds; otherwise 0.

### Remarks

This method calls the base class implementation ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) and then appends to the target menu button a pop-up menu that contains each toolbar menu item in this button. This method does not append sub-menus to the pop-up menu.

This method fails if the parent toolbar, `m_pToolBar`, is NULL or the base class implementation returns FALSE.

## <a name="getdropdowntoolbar"></a> CMFCDropDownToolbarButton::GetDropDownToolBar

Retrieves the drop-down toolbar that is associated with the button.

```
CMFCToolBar* GetDropDownToolBar() const;
```

### Return Value

The drop-down toolbar that is associated with the button.

### Remarks

This method returns the `m_pToolBar` data member.

## <a name="isdropdown"></a> CMFCDropDownToolbarButton::IsDropDown

Determines whether the drop-down toolbar is currently open.

```
BOOL IsDropDown() const;
```

### Return Value

Nonzero if the drop-down toolbar is currently open; otherwise 0.

### Remarks

The framework opens the drop-down toolbar by using the [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) method. The framework closes the drop-down toolbar when the user presses the left-mouse button in the non-client area of the drop-down toolbar.

## <a name="isextrasize"></a> CMFCDropDownToolbarButton::IsExtraSize

Determines whether the button can be displayed with an extended border.

```
virtual BOOL IsExtraSize() const;
```

### Return Value

Nonzero if the toolbar button can be displayed with an extended border; otherwise 0.

### Remarks

For more information about extended borders, see [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).

## <a name="m_uishowbardelay"></a> CMFCDropDownToolbarButton::m_uiShowBarDelay

Specifies the length of time that a user must hold the mouse button down before the drop-down toolbar appears.

```
static UINT m_uiShowBarDelay;
```

### Remarks

The delay time is measured in milliseconds. The default value is 500. You can set another delay by changing the value of this shared data member.

## <a name="oncalculatesize"></a> CMFCDropDownToolbarButton::OnCalculateSize

Called by the framework to calculate the size of the button for the specified device context and docking state.

```
virtual SIZE OnCalculateSize(
    CDC* pDC,
    const CSize& sizeDefault,
    BOOL bHorz);
```

### Parameters

*pDC*<br/>
[in] The device context that displays the button.

*sizeDefault*<br/>
[in] The default size of the button.

*bHorz*<br/>
[in] The dock state of the parent toolbar. This parameter is TRUE if the toolbar is docked horizontally or is floating, or FALSE if the toolbar is docked vertically.

### Return Value

A `SIZE` structure that contains the dimensions of the button, in pixels.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize)) by adding the width of the drop-down arrow to the horizontal dimension of the button size.

## <a name="onchangeparentwnd"></a> CMFCDropDownToolbarButton::OnChangeParentWnd

Called by the framework when the button is inserted into a new toolbar.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### Parameters

*pWndParent*<br/>
[in] The new parent window.

### Remarks

This method overrides the base class implementation ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) by clearing the text label ( [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext)) and setting the [CMFCToolBarButton::m_bText](../../mfc/reference/cmfctoolbarbutton-class.md#m_btext) and [CMFCToolBarButton::m_bUserButton](../../mfc/reference/cmfctoolbarbutton-class.md#m_buserbutton) data members to FALSE.

## <a name="onclick"></a> CMFCDropDownToolbarButton::OnClick

Called by the framework when the user clicks the mouse button.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### Parameters

*pWnd*<br/>
[in] The parent window of the toolbar button.

*bDelay*<br/>
[in] TRUE if the message should be handled with a delay.

### Return Value

Nonzero if the button processes the click message; otherwise 0.

### Remarks

This method extends the base class implementation, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), by updating the state of the drop-down toolbar.

When a user clicks the toolbar button, this method creates a timer that waits the length of time specified by the [CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay) data member and then opens the drop-down toolbar by using the [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) method. This method closes the drop-down toolbar the second time the user clicks the toolbar button.

## <a name="onclickup"></a> CMFCDropDownToolbarButton::OnClickUp

Called by the framework when the user releases the mouse button.

```
virtual BOOL OnClickUp();
```

### Return Value

Nonzero if the button processes the click message; otherwise 0.

### Remarks

This method extends the base class implementation, [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup), by updating the state of the drop-down toolbar.

This method stops the drop-down toolbar timer if it is active. It closes the drop-down toolbar if it is open.

For more information about the drop-down toolbar and drop-down toolbar timer, see [CMFCDropDownToolbarButton::OnClick](#onclick).

## <a name="oncontexthelp"></a> CMFCDropDownToolbarButton::OnContextHelp

Called by the framework when the parent toolbar handles a WM_HELPHITTEST message.

```
virtual BOOL OnContextHelp(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
[in] The parent window of the toolbar button.

### Return Value

Nonzero if the button processes the help message; otherwise 0.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp)) by calling the [CMFCDropDownToolbarButton::OnClick](#onclick) method with *bDelay* set to FALSE. This method returns the value that is returned by [CMFCDropDownToolbarButton::OnClick](#onclick).

For more information about the WM_HELPHITTEST message, see [TN028: Context-Sensitive Help Support](../../mfc/tn028-context-sensitive-help-support.md).

## <a name="oncustomizemenu"></a> CMFCDropDownToolbarButton::OnCustomizeMenu

Modifies the provided menu when the application displays a shortcut menu on the parent toolbar.

```
virtual BOOL OnCustomizeMenu(CMenu* pMenu);
```

### Parameters

*pMenu*<br/>
[in] The menu to customize.

### Return Value

This method returns TRUE.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu)) by disabling the following menu items:

- **Copy Button Image**

- **Button Appearance**

- **Image**

- **Text**

- **Image and Text**

Override this method to modify the shortcut menu that the framework displays in customization mode.

## <a name="ondraw"></a> CMFCDropDownToolbarButton::OnDraw

Called by the framework to draw the button by using the specified styles and options.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    CMFCToolBarImages* pImages,
    BOOL bHorz = TRUE,
    BOOL bCustomizeMode = FALSE,
    BOOL bHighlight = FALSE,
    BOOL bDrawBorder = TRUE,
    BOOL bGrayDisabledButtons = TRUE);
```

### Parameters

*pDC*<br/>
[in] The device context that displays the button.

*rect*<br/>
[in] The bounding rectangle of the button.

*pImages*<br/>
[in] The collection of toolbar images that is associated with the button.

*bHorz*<br/>
[in] The dock state of the parent toolbar. This parameter is TRUE when the button is docked horizontally and FALSE when the button is docked vertically.

*bCustomizeMode*<br/>
[in] Specifies whether the toolbar is in customization mode. This parameter is TRUE when the toolbar is in customization mode and FALSE when the toolbar is not in customization mode.

*bHighlight*<br/>
[in] Specifies whether the button is highlighted. This parameter is TRUE when the button is highlighted and FALSE when the button is not highlighted.

*bDrawBorder*<br/>
[in] Specifies whether the button should display its border. This parameter is TRUE when the button should display its border and FALSE when the button should not display its border.

*bGrayDisabledButtons*<br/>
[in] Specifies whether to shade disabled buttons or use the disabled images collection. This parameter is TRUE when disabled buttons should be shaded and FALSE when this method should use the disabled images collection.

### Remarks

Override this method to customize toolbar button drawing.

## <a name="ondrawoncustomizelist"></a> CMFCDropDownToolbarButton::OnDrawOnCustomizeList

Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box.

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### Parameters

*pDC*<br/>
[in] The device context that displays the button.

*rect*<br/>
[in] The bounding rectangle of the button.

*bSelected*<br/>
[in] Whether the button is selected. If this parameter is TRUE, the button is selected. If this parameter is FALSE, the button is not selected.

### Return Value

The width, in pixels, of the button on the specified device context.

### Remarks

This method is called by the customization dialog box ( **Commands** tab) when the button is required to display itself on the owner-draw list box.

This method extends the base class implementation ( [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist)) by changing the text label of the button to the name of the button (that is,to the value of the *lpszName* parameter that you passed to the constructor).

## <a name="serialize"></a> CMFCDropDownToolbarButton::Serialize

Reads this object from an archive or writes it to an archive.

```
virtual void Serialize(CArchive& ar);
```

### Parameters

*ar*<br/>
[in] The `CArchive` object from which or to which to serialize.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize)) by serializing the resource ID of the parent toolbar. When the archive is loading ( [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) returns a nonzero value), this method sets the `m_pToolBar` data member to the toolbar that contains the serialized resource ID.

## <a name="setdefaultcommand"></a> CMFCDropDownToolbarButton::SetDefaultCommand

Sets the default command that the framework uses when a user clicks the button.

```cpp
void SetDefaultCommand(UINT uiCmd);
```

### Parameters

*uiCmd*<br/>
[in] The ID of the default command.

### Remarks

Call this method to specify a default command that the framework executes when the user clicks the button. An item with the command ID specified by *uiCmd* must be located in the parent drop-down toolbar.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)<br/>
[CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md)<br/>
[Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)
