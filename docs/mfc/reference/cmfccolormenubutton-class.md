---
description: "Learn more about: CMFCColorMenuButton Class"
title: "CMFCColorMenuButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCColorMenuButton", "AFXCOLORMENUBUTTON/CMFCColorMenuButton", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::CMFCColorMenuButton", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableAutomaticButton", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableDocumentColors", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableOtherButton", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableTearOff", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetAutomaticColor", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetColor", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetColorByCmdID", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnChangeParentWnd", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::OpenColorDialog", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColor", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColorByCmdID", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColorName", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColumnsNumber", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::CopyFrom", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::CreatePopupMenu", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::IsEmptyMenuAllowed", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnDraw", "AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnDrawOnCustomizeList"]
helpviewer_keywords: ["CMFCColorMenuButton [MFC], CMFCColorMenuButton", "CMFCColorMenuButton [MFC], EnableAutomaticButton", "CMFCColorMenuButton [MFC], EnableDocumentColors", "CMFCColorMenuButton [MFC], EnableOtherButton", "CMFCColorMenuButton [MFC], EnableTearOff", "CMFCColorMenuButton [MFC], GetAutomaticColor", "CMFCColorMenuButton [MFC], GetColor", "CMFCColorMenuButton [MFC], GetColorByCmdID", "CMFCColorMenuButton [MFC], OnChangeParentWnd", "CMFCColorMenuButton [MFC], OpenColorDialog", "CMFCColorMenuButton [MFC], SetColor", "CMFCColorMenuButton [MFC], SetColorByCmdID", "CMFCColorMenuButton [MFC], SetColorName", "CMFCColorMenuButton [MFC], SetColumnsNumber", "CMFCColorMenuButton [MFC], CopyFrom", "CMFCColorMenuButton [MFC], CreatePopupMenu", "CMFCColorMenuButton [MFC], IsEmptyMenuAllowed", "CMFCColorMenuButton [MFC], OnDraw", "CMFCColorMenuButton [MFC], OnDrawOnCustomizeList"]
ms.assetid: 42685704-e994-4f7b-9553-62283c27b754
---
# CMFCColorMenuButton Class

The `CMFCColorMenuButton` class supports a menu command or a toolbar button that starts a color picker dialog box.

## Syntax

```
class CMFCColorMenuButton : public CMFCToolBarMenuButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCColorMenuButton::CMFCColorMenuButton](#cmfccolormenubutton)|Constructs a `CMFCColorMenuButton` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton)|Enables and disables an "automatic" button that is positioned above the regular color buttons. (The standard system automatic button is labeled **Automatic**.)|
|[CMFCColorMenuButton::EnableDocumentColors](#enabledocumentcolors)|Enables the display of document-specific colors instead of system colors.|
|[CMFCColorMenuButton::EnableOtherButton](#enableotherbutton)|Enables and disables an "other" button that is positioned below the regular color buttons. (The standard system "other" button is labeled **More Colors**.)|
|[CMFCColorMenuButton::EnableTearOff](#enabletearoff)|Enables the ability to tear off a color pane.|
|[CMFCColorMenuButton::GetAutomaticColor](#getautomaticcolor)|Retrieves the current automatic color.|
|[CMFCColorMenuButton::GetColor](#getcolor)|Retrieves the current button's color.|
|[CMFCColorMenuButton::GetColorByCmdID](#getcolorbycmdid)|Retrieves the color that corresponds to a specified command ID.|
|[CMFCColorMenuButton::OnChangeParentWnd](#onchangeparentwnd)|Called by the framework when the parent window changes.|
|[CMFCColorMenuButton::OpenColorDialog](#opencolordialog)|Opens a color selection dialog box.|
|[CMFCColorMenuButton::SetColor](#setcolor)|Sets the color of the current color button.|
|[CMFCColorMenuButton::SetColorByCmdID](#setcolorbycmdid)|Sets the color of the specified color menu button.|
|[CMFCColorMenuButton::SetColorName](#setcolorname)|Sets a new name for the specified color.|
|[CMFCColorMenuButton::SetColumnsNumber](#setcolumnsnumber)|Sets the number of columns that are displayed by a `CMFCColorBar` object.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCColorMenuButton::CopyFrom](#copyfrom)|Copies another toolbar button to the current button.|
|[CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu)|Creates a color picker dialog box.|
|[CMFCColorMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|Indicates whether empty menus are supported.|
|[CMFCColorMenuButton::OnDraw](#ondraw)|Called by the framework to display an image on a button.|
|[CMFCColorMenuButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Called by the framework before a `CMFCColorMenuButton` object is displayed in the list of a toolbar customization dialog box.|

## Remarks

To replace the original menu command or toolbar button with a `CMFCColorMenuButton` object, create the `CMFCColorMenuButton` object, set any appropriate [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) styles, and then call the `ReplaceButton` method of the [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) class. If you customize a toolbar, call the [CMFCToolBarsCustomizeDialog::ReplaceButton](../../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) method.

The color picker dialog box is created during the processing of the [CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu) event handler. The event handler notifies the parent frame with a WM_COMMAND message. The `CMFCColorMenuButton` object sends the control ID that is assigned to the original menu command or toolbar button.

## Example

The following example demonstrates how to create and configure a color menu button by using various methods in the `CMFCColorMenuButton` class. In the example, a `CPalette` object is first created and then used to construct an object of the `CMFCColorMenuButton` class. The `CMFCColorMenuButton` object is then configured by enabling its automatic and other buttons, and setting its color and the number of columns. This code is part of the [Word Pad sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#5](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_1.h)]
[!code-cpp[NVC_MFC_WordPad#6](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)

[CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md)

## Requirements

**Header:** afxcolormenubutton.h

## <a name="cmfccolormenubutton"></a> CMFCColorMenuButton::CMFCColorMenuButton

Constructs a `CMFCColorMenuButton` object.

```
CMFCColorMenuButton();

CMFCColorMenuButton(
    UINT uiCmdID,
    LPCTSTR lpszText,
    CPalette* pPalette=NULL);
```

### Parameters

*uiCmdID*<br/>
[in] A button command ID.

*lpszText*<br/>
[in] The button text.

*pPalette*<br/>
[in] A pointer to the button's color palette.

### Return Value

### Remarks

The first constructor is the default constructor. The object's current color and automatic color are initialized to black (RGB(0, 0, 0)).

The second constructor initializes the button to the color that corresponds to the specified command ID.

## <a name="copyfrom"></a> CMFCColorMenuButton::CopyFrom

Copies one [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md)-derived object to another.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### Parameters

*src*<br/>
[in] Source button to copy.

### Remarks

Override this method to copy objects that are derived from the `CMFCColorMenuButton` object.

## <a name="createpopupmenu"></a> CMFCColorMenuButton::CreatePopupMenu

Creates a color picker dialog box.

```
virtual CMFCPopupMenu* CreatePopupMenu();
```

### Return Value

An object that represents a color picker dialog box.

### Remarks

This method is called by the framework when the user presses a color menu button.

## <a name="enableautomaticbutton"></a> CMFCColorMenuButton::EnableAutomaticButton

Enables and disables an "automatic" button that is positioned above the regular color buttons. (The standard system automatic button is labeled **Automatic**.)

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### Parameters

*lpszLabel*<br/>
[in] Specifies the button text that is displayed when the button becomes automatic.

*colorAutomatic*<br/>
[in] Specifies a new automatic color.

*bEnable*<br/>
[in] Specifies whether the button is automatic or not.

### Remarks

The automatic button applies the current default color.

## <a name="enabledocumentcolors"></a> CMFCColorMenuButton::EnableDocumentColors

Enables the display of document-specific colors instead of system colors.

```cpp
void EnableDocumentColors(
    LPCTSTR lpszLabel,
    BOOL bEnable=TRUE);
```

### Parameters

*lpszLabel*<br/>
[in] Specifies the button text.

*bEnable*<br/>
[in] TRUE to display document-specific colors or FALSE to display system colors.

### Remarks

Use this method to display the current document colors or the system palette colors when the user clicks a color menu button.

## <a name="enableotherbutton"></a> CMFCColorMenuButton::EnableOtherButton

Enables and disables an "other" button that is positioned below the regular color buttons. (The standard system "other" button is labeled **More Colors**.)

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg=TRUE,
    BOOL bEnable=TRUE);
```

### Parameters

*lpszLabel*<br/>
[in] Specifies the button text.

*bAltColorDlg*<br/>
[in] Specify TRUE to display the `CMFCColorDialog` dialog box, or FALSE to display the standard system color dialog box.

*bEnable*<br/>
[in] Specify TRUE to display the "other" button; otherwise, FALSE. The default is TRUE.

### Remarks

## <a name="enabletearoff"></a> CMFCColorMenuButton::EnableTearOff

Enables the ability to tear off a color pane.

```cpp
void EnableTearOff(
    UINT uiID,
    int nVertDockColumns=-1,
    int nHorzDockRows=-1);
```

### Parameters

*uiID*<br/>
[in] Specifies the ID for the tear-off pane.

*nVertDockColumns*<br/>
[in] Specifies the number of columns in the vertically docked color pane while in tear-off state.

*nHorzDockRows*<br/>
[in] Specifies the number of rows for the horizontally docked color pane while in tear-off state.

### Remarks

Call this method to enable the "tear-off" feature for the color pane that pops up when the `CMFCColorMenuButton` button is pressed.

## <a name="getautomaticcolor"></a> CMFCColorMenuButton::GetAutomaticColor

Retrieves the current automatic color.

```
COLORREF GetAutomaticColor() const;
```

### Return Value

An RGB color value that represents the current automatic color.

### Remarks

Call this method to obtain the automatic color that is set by [CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton).

## <a name="getcolor"></a> CMFCColorMenuButton::GetColor

Retrieves the current button's color.

```
COLORREF GetColor() const;
```

### Return Value

The color of the button.

### Remarks

## <a name="getcolorbycmdid"></a> CMFCColorMenuButton::GetColorByCmdID

Retrieves the color that corresponds to a specified command ID.

```
static COLORREF GetColorByCmdID(UINT uiCmdID);
```

### Parameters

*uiCmdID*<br/>
[in] A command ID.

### Return Value

The color that corresponds to the specified command ID.

### Remarks

Use this method when you have several color buttons in an application. When the user clicks a color button, the button sends its command ID in a WM_COMMAND message to its parent. The `GetColorByCmdID` method uses the command ID to retrieve the corresponding color.

## <a name="isemptymenuallowed"></a> CMFCColorMenuButton::IsEmptyMenuAllowed

Indicates whether empty menus are supported.

```
virtual BOOL IsEmptyMenuAllowed() const;
```

### Return Value

Nonzero if empty menus are allowed; otherwise, zero.

### Remarks

Empty menus are supported by default. Override this method to change this behavior in derived class.

## <a name="onchangeparentwnd"></a> CMFCColorMenuButton::OnChangeParentWnd

Called by the framework when the parent window changes.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### Parameters

*pWndParent*<br/>
[in] A pointer to the new parent window.

### Remarks

## <a name="ondraw"></a> CMFCColorMenuButton::OnDraw

Called by the framework to display an image on a button.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    CMFCToolBarImages* pImages,
    BOOL bHorz=TRUE,
    BOOL bCustomizeMode=FALSE,
    BOOL bHighlight=FALSE,
    BOOL bDrawBorder=TRUE,
    BOOL bGrayDisabledButtons=TRUE);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] A rectangle that bounds the area to be redrawn.

*pImages*<br/>
[in] Points to a list of toolbar images.

*bHorz*<br/>
[in] TRUE to specify that the toolbar is in a horizontal docked state; otherwise, FALSE. The default is TRUE.

*bCustomizeMode*<br/>
[in] TRUE to specify that the application is in customization mode; otherwise, FALSE. The default is FALSE.

*bHighlight*<br/>
[in] TRUE to specify that the button is highlighted; otherwise, FALSE. The default is FALSE.

*bDrawBorder*<br/>
[in] TRUE to specify that the button's border is displayed; otherwise, FALSE. The default is TRUE.

*bGrayDisabledButtons*<br/>
[in] TRUE to specify that disabled buttons are grayed (dimmed) out; otherwise, FALSE. The default is TRUE.

### Remarks

## <a name="ondrawoncustomizelist"></a> CMFCColorMenuButton::OnDrawOnCustomizeList

Called by the framework before a `CMFCColorMenuButton` object is displayed in the list of a toolbar customization dialog box.

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] A rectangle that bounds the button to be drawn.

*bSelected*<br/>
[in] TRUE specifies that the button is in selected state; otherwise, FALSE.

### Return Value

The width of the button.

### Remarks

This method is called by the framework when a `CMFCColorMenuButton` object is displayed in the list box during the toolbar customization process.

## <a name="opencolordialog"></a> CMFCColorMenuButton::OpenColorDialog

Opens a color selection dialog box.

```
virtual BOOL OpenColorDialog(
    const COLORREF colorDefault,
    COLORREF& colorRes);
```

### Parameters

*colorDefault*<br/>
[in] The default color that is selected in the color dialog box.

*colorRes*<br/>
[out] Returns the color that the user selects from the color dialog box.

### Return Value

Nonzero if the user selects a new color; otherwise, zero.

### Remarks

When the menu button is clicked, call this method to open a color dialog box. If the return value is nonzero, the color that the user selects is stored in the *colorRes* parameter. Use the [CMFCColorMenuButton::EnableOtherButton](#enableotherbutton) method to switch between the standard color dialog box and the [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md) dialog box.

## <a name="setcolor"></a> CMFCColorMenuButton::SetColor

Sets the color of the current color button.

```
virtual void SetColor(
    COLORREF clr,
    BOOL bNotify=TRUE);
```

### Parameters

*clr*<br/>
[in] An RGB color value.

*bNotify*<br/>
[in] TRUE to apply the *clr* parameter color to any associated menu button or toolbar button; otherwise, FALSE.

### Remarks

Call this method to change the color of the current color button. If the *bNotify* parameter is nonzero, the color of the corresponding button on any associated popup menu or toolbar is changed to the color specified by the *clr* parameter.

## <a name="setcolorbycmdid"></a> CMFCColorMenuButton::SetColorByCmdID

Sets the color of the specified color menu button.

```
static void SetColorByCmdID(
    UINT uiCmdID,
    COLORREF color);
```

### Parameters

*uiCmdID*<br/>
[in] The resource ID of a color menu button.

*color*<br/>
[in] An RGB color value.

## <a name="setcolorname"></a> CMFCColorMenuButton::SetColorName

Sets a new name for the specified color.

```
static void SetColorName(
    COLORREF color,
    const CString& strName);
```

### Parameters

*color*<br/>
[in] The RGB value of the color whose name changes.

*strName*<br/>
[in] The new name of the color.

### Remarks

## <a name="setcolumnsnumber"></a> CMFCColorMenuButton::SetColumnsNumber

Sets the number of columns to display in a color selection control ( [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) object).

```cpp
void SetColumnsNumber(int nColumns);
```

### Parameters

*nColumns*<br/>
[in] The number of columns to display.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)<br/>
[CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)<br/>
[CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md)
