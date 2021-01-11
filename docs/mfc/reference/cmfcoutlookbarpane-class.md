---
description: "Learn more about: CMFCOutlookBarPane Class"
title: "CMFCOutlookBarPane Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCOutlookBarPane", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::AddButton", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::CanBeAttached", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::ClearAll", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::Create", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::EnablePageScrollMode", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::GetRegularColor", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::IsBackgroundTexture", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::IsDrawShadedHighlight", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::RemoveButton", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetBackColor", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetBackImage", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetDefaultState", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetExtraSpace", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetTextColor", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetTransparentColor", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::EnableContextMenuItems", "AFXOUTLOOKBARPANE/CMFCOutlookBarPane::RemoveAllButtons"]
helpviewer_keywords: ["CMFCOutlookBarPane [MFC], AddButton", "CMFCOutlookBarPane [MFC], CanBeAttached", "CMFCOutlookBarPane [MFC], ClearAll", "CMFCOutlookBarPane [MFC], Create", "CMFCOutlookBarPane [MFC], EnablePageScrollMode", "CMFCOutlookBarPane [MFC], GetRegularColor", "CMFCOutlookBarPane [MFC], IsBackgroundTexture", "CMFCOutlookBarPane [MFC], IsDrawShadedHighlight", "CMFCOutlookBarPane [MFC], RemoveButton", "CMFCOutlookBarPane [MFC], SetBackColor", "CMFCOutlookBarPane [MFC], SetBackImage", "CMFCOutlookBarPane [MFC], SetDefaultState", "CMFCOutlookBarPane [MFC], SetExtraSpace", "CMFCOutlookBarPane [MFC], SetTextColor", "CMFCOutlookBarPane [MFC], SetTransparentColor", "CMFCOutlookBarPane [MFC], EnableContextMenuItems", "CMFCOutlookBarPane [MFC], RemoveAllButtons"]
ms.assetid: 094e2ef3-a118-487e-a4cc-27626108fe08
---
# CMFCOutlookBarPane Class

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

A control derived from [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) that can be inserted into an Outlook bar ( [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)). The Outlook bar pane contains a column of large buttons. The user can scroll up and down the list of buttons if it is larger than the pane. When the user detaches an Outlook bar pane from the Outlook bar, it can float or dock in the main frame window.

## Syntax

```
class CMFCOutlookBarPane : public CMFCToolBar
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCOutlookBarPane::CMFCOutlookBarPane`|Default constructor.|
|`CMFCOutlookBarPane::~CMFCOutlookBarPane`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCOutlookBarPane::AddButton](#addbutton)|Adds a button to the Outlook bar pane.|
|[CMFCOutlookBarPane::CanBeAttached](#canbeattached)|Determines whether the pane can be docked to another pane or frame window. (Overrides [CBasePane::CanBeAttached](../../mfc/reference/cbasepane-class.md#canbeattached).)|
|`CMFCOutlookBarPane::CanBeRestored`|Determines whether the system can restore a toolbar to its original state after customization. (Overrides [CMFCToolBar::CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).)|
|[CMFCOutlookBarPane::ClearAll](#clearall)|Frees the resources used by the images in the Outlook bar pane.|
|[CMFCOutlookBarPane::Create](#create)|Creates the Outlook bar pane.|
|`CMFCOutlookBarPane::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCOutlookBarPane::Dock`|Called by the framework to dock the Outlook bar pane. (Overrides `CPane::Dock`.)|
|[CMFCOutlookBarPane::EnablePageScrollMode](#enablepagescrollmode)|Specifies whether the scroll arrows on the Outlook bar pane advance the list of buttons by page, or by button.|
|[CMFCOutlookBarPane::GetRegularColor](#getregularcolor)|Returns the regular (non-selected) text color of the Outlook bar pane.|
|`CMFCOutlookBarPane::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCOutlookBarPane::IsBackgroundTexture](#isbackgroundtexture)|Determines whether there is a background image loaded for the Outlook bar pane.|
|`CMFCOutlookBarPane::IsChangeState`|Determines whether a floating pane may be docked. (Overrides `CPane::IsChangeState`.)|
|[CMFCOutlookBarPane::IsDrawShadedHighlight](#isdrawshadedhighlight)|Determines whether the button border is shaded when a button is highlighted and a background image is displayed.|
|`CMFCOutlookBarPane::OnBeforeFloat`|Called by the framework when a pane is about to float. (Overrides [CPane::OnBeforeFloat](../../mfc/reference/cpane-class.md#onbeforefloat).)|
|[CMFCOutlookBarPane::RemoveButton](#removebutton)|Removes the button that has a specified command ID.|
|`CMFCOutlookBarPane::RestoreOriginalstate`|Restores the original state of a toolbar. (Overrides [CMFCToolBar::RestoreOriginalState](../../mfc/reference/cmfctoolbar-class.md#restoreoriginalstate).)|
|[CMFCOutlookBarPane::SetBackColor](#setbackcolor)|Sets the background color.|
|[CMFCOutlookBarPane::SetBackImage](#setbackimage)|Sets the background image.|
|[CMFCOutlookBarPane::SetDefaultState](#setdefaultstate)|Resets the Outlook bar pane to the original set of buttons.|
|[CMFCOutlookBarPane::SetExtraSpace](#setextraspace)|Sets the number of pixels of padding used around buttons in the Outlook bar pane.|
|[CMFCOutlookBarPane::SetTextColor](#settextcolor)|Sets the colors of regular and highlighted text in the Outlook bar pane.|
|[CMFCOutlookBarPane::SetTransparentColor](#settransparentcolor)|Sets the transparent color for the Outlook bar pane.|
|`CMFCOutlookBarPane::SmartUpdate`|Used internally to update the Outlook bar. (Overrides `CMFCToolBar::SmartUpdate`.)|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCOutlookBarPane::EnableContextMenuItems](#enablecontextmenuitems)|Specifies which shortcut menu items are displayed in customization mode.|
|[CMFCOutlookBarPane::RemoveAllButtons](#removeallbuttons)|Removes all the buttons from the Outlook bar pane. (Overrides [CMFCToolBar::RemoveAllButtons](../../mfc/reference/cmfctoolbar-class.md#removeallbuttons).)|

## Remarks

For information about how to implement an Outlook bar, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).

For an example of an Outlook bar, see the OutlookDemo sample project.

## Example

The following example demonstrates how to use various methods of the `CMFCOutlookBarPane` class. The example shows how to create an Outlook bar pane, enable the page scroll mode, enable docking, and set the background color of the Outlook bar. This code snippet is part of the [Outlook Multi Views sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookMultiViews#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_1.h)]
[!code-cpp[NVC_MFC_OutlookMultiViews#4](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)

## Requirements

**Header:** afxoutlookbarpane.h

## <a name="addbutton"></a> CMFCOutlookBarPane::AddButton

Adds a button to the Outlook bar pane.

```
BOOL AddButton(
    UINT uiImage,
    LPCTSTR lpszLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    UINT uiImage,
    UINT uiLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    LPCTSTR szBmpFileName,
    LPCTSTR szLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    HBITMAP hBmp,
    LPCTSTR lpszLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    HICON hIcon,
    LPCTSTR lpszLabel,
    UINT iIdCommand,
    int iInsertAt=-1,
    BOOL bAlphaBlend=FALSE);
```

### Parameters

*uiImage*<br/>
[in] Specifies the resource identifier of a bitmap.

*lpszLabel*<br/>
[in] Specifies the button's text.

*iIdCommand*<br/>
[in] Specifies the button control's ID.

*iInsertAt*<br/>
[in] Specifies the zero-based index on the outlook bar's page at which to insert the button.

*uiLabel*<br/>
[in] A string resource ID.

*szBmpFileName*<br/>
[in] Specifies the name of the disk image file to load.

*szLabel*<br/>
[in] Specifies the button's text.

*hBmp*<br/>
[in] A handle to a button's bitmap.

*hIcon*<br/>
[in] A handle to a buttons' icon.

### Return Value

TRUE if a button was added successfully; otherwise FALSE.

### Remarks

Use this method to insert a new button into an Outlook bar's page. The button's image can be loaded either from the application resources or from a disk file.

If the page ID specified by *uiPageID* is -1, the button is inserted into the first page.

If the index specified by *iInsertAt* is -1, the button is added at the end of the page.

## <a name="canbeattached"></a> CMFCOutlookBarPane::CanBeAttached

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual BOOL CanBeAttached() const;
```

### Return Value

### Remarks

## <a name="clearall"></a> CMFCOutlookBarPane::ClearAll

Frees the resources used by the images on the Outlook bar pane.

```cpp
void ClearAll();
```

### Remarks

This method directly calls [CMFCToolBarImages::Clear](../../mfc/reference/cmfctoolbarimages-class.md#clear), which is called on the images that are used by the Outlook bar pane.

## <a name="create"></a> CMFCOutlookBarPane::Create

Creates the Outlook bar pane.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,
    UINT uiID=(UINT)-1,
    DWORD dwControlBarStyle=0);
```

### Parameters

*pParentWnd*<br/>
[in] Specifies the parent window of the Outlook bar pane control. Must not be NULL.

*dwStyle*<br/>
[in] The window style.  For a list of window styles, see [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*uiID*<br/>
[in] The control ID. Must be unique to enable saving of the control's state.

*dwControlBarStyle*<br/>
[in] Specifies special styles that define the behavior of the Outlook bar pane control when it is detached from the Outlook bar.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

To construct a `CMFCOutlookBarPane` object, first call the constructor, and then call `Create`, which creates the Outlook bar pane control and attaches it to the `CMFCOutlookBarPane` object.

For more information about `dwControlBarStyle` see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).

## <a name="enablecontextmenuitems"></a> CMFCOutlookBarPane::EnableContextMenuItems

Specifies which shortcut menu items are displayed in customization mode.

```
virtual BOOL EnableContextMenuItems(
    CMFCToolBarButton* pButton,
    CMenu* pPopup);
```

### Parameters

*pButton*<br/>
[in] A pointer to a toolbar button that a user clicked.

*pPopup*<br/>
[in] A pointer to the shortcut menu.

### Return Value

Returns TRUE if the shortcut menu should be displayed; otherwise FALSE.

### Remarks

Override this method to modify the framework standard shortcut menu that the framework displays in customization mode.

The default implementation checks the customization mode ( [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)) and if it is set to TRUE, disables all the shortcut menu items except **Delete**. Then, it just passes the input parameters to `CMFCToolBar::EnableContextMenuItems`.

> [!NOTE]
> *Context menu* is a synonym for shortcut menu.

## <a name="enablepagescrollmode"></a> CMFCOutlookBarPane::EnablePageScrollMode

Specifies whether the scroll arrows on the Outlook bar pane advance the list of buttons page by page, or button by button.

```cpp
void EnablePageScrollMode(BOOL bPageScroll=TRUE);
```

### Parameters

*bPageScroll*<br/>
[in] If TRUE, enable the page scroll mode. If FALSE, disable the page scroll mode.

## <a name="getregularcolor"></a> CMFCOutlookBarPane::GetRegularColor

Returns the regular (that is, non-selected) text color of the Outlook bar pane.

```
DECLARE_MESSAGE_MAPCOLORREF GetRegularColor() const;
```

### Return Value

The current text color as an RGB color value.

### Remarks

Use [CMFCOutlookBarPane::SetTextColor](#settextcolor) to set the current (regular and selected) text color of the Outlook bar. You can obtain the default text color by calling the [GetSysColor](/windows/win32/api/winuser/nf-winuser-getsyscolor) function with the COLOR_WINDOW index.

## <a name="isbackgroundtexture"></a> CMFCOutlookBarPane::IsBackgroundTexture

Determines whether there is a background image loaded for the Outlook bar pane.

```
BOOL IsBackgroundTexture() const;
```

### Return Value

TRUE if there is background image to display; otherwise FALSE.

### Remarks

You can add a background image by calling [CMFCOutlookBarPane::SetBackImage](#setbackimage) function.

If there is no background image, the background is painted with a color specified by using [CMFCOutlookBarPane::SetBackColor](#setbackcolor).

## <a name="isdrawshadedhighlight"></a> CMFCOutlookBarPane::IsDrawShadedHighlight

Determines whether the button border is shaded when a button is highlighted and a background image is displayed.

```
BOOL IsDrawShadedHighlight() const;
```

### Return Value

TRUE if button's borders are shaded; otherwise FALSE.

## <a name="removeallbuttons"></a> CMFCOutlookBarPane::RemoveAllButtons

Removes all the buttons from the Outlook bar pane.

```
virtual void RemoveAllButtons();
```

## <a name="removebutton"></a> CMFCOutlookBarPane::RemoveButton

Removes the button that has a specified command ID.

```
BOOL RemoveButton(UINT iIdCommand);
```

### Parameters

*iIdCommand*<br/>
[in] Specifies the command ID of a button to remove.

### Return Value

TRUE if the button was successfully removed; FALSE if the specified command ID is not valid.

## <a name="setbackcolor"></a> CMFCOutlookBarPane::SetBackColor

Sets the background color of the Outlook bar.

```cpp
void SetBackColor(COLORREF color);
```

### Parameters

*color*<br/>
[in] Specifies the new background color.

### Remarks

Call this function to set the current background color for the Outlook bar. The background color is used only if there is no background image.

## <a name="setbackimage"></a> CMFCOutlookBarPane::SetBackImage

Sets the background image.

```cpp
void SetBackImage(UINT uiImageID);
```

### Parameters

*uiImageID*<br/>
[in] Specifies the image resource ID.

### Remarks

Call this method to set the Outlook bar's background image. The list of background images is managed by the embedded [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md) object.

## <a name="setdefaultstate"></a> CMFCOutlookBarPane::SetDefaultState

Resets the Outlook bar pane to the original set of buttons.

```cpp
void SetDefaultState();
```

### Remarks

This method restores the Outlook bar buttons to the original set. This method is like `CMFCOutlookBarPane::RestoreOriginalstate`, except that it does not trigger a redraw of the Outlook bar pane.

## <a name="setextraspace"></a> CMFCOutlookBarPane::SetExtraSpace

Sets the number of pixels of padding used around buttons in the Outlook bar pane.

```cpp
void SetExtraSpace()
```

## <a name="settextcolor"></a> CMFCOutlookBarPane::SetTextColor

Sets the colors of regular and highlighted text in the Outlook bar pane.

```cpp
void SetTextColor(
    COLORREF clrRegText,
    COLORREF clrSelText=0);
```

### Parameters

*clrRegText*<br/>
[in] Specifies the new color for non-selected text.

*clrSelText*<br/>
[in] Specifies the new color for selected text.

## <a name="settransparentcolor"></a> CMFCOutlookBarPane::SetTransparentColor

Sets the transparent color for the Outlook bar pane.

```cpp
void SetTransparentColor(COLORREF color);
```

### Parameters

*color*<br/>
Specifies the new transparent color.

### Remarks

The transparent color is required to display transparent images. Any occurrence of this color in an image is painted with the background color instead.  There is no blending of background and foreground images.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)<br/>
[CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)
