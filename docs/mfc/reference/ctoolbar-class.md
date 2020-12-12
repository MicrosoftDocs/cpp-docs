---
description: "Learn more about: CToolBar Class"
title: "CToolBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CToolBar", "AFXEXT/CToolBar", "AFXEXT/CToolBar::CToolBar", "AFXEXT/CToolBar::CommandToIndex", "AFXEXT/CToolBar::Create", "AFXEXT/CToolBar::CreateEx", "AFXEXT/CToolBar::GetButtonInfo", "AFXEXT/CToolBar::GetButtonStyle", "AFXEXT/CToolBar::GetButtonText", "AFXEXT/CToolBar::GetItemID", "AFXEXT/CToolBar::GetItemRect", "AFXEXT/CToolBar::GetToolBarCtrl", "AFXEXT/CToolBar::LoadBitmap", "AFXEXT/CToolBar::LoadToolBar", "AFXEXT/CToolBar::SetBitmap", "AFXEXT/CToolBar::SetButtonInfo", "AFXEXT/CToolBar::SetButtons", "AFXEXT/CToolBar::SetButtonStyle", "AFXEXT/CToolBar::SetButtonText", "AFXEXT/CToolBar::SetHeight", "AFXEXT/CToolBar::SetSizes"]
helpviewer_keywords: ["CToolBar [MFC], CToolBar", "CToolBar [MFC], CommandToIndex", "CToolBar [MFC], Create", "CToolBar [MFC], CreateEx", "CToolBar [MFC], GetButtonInfo", "CToolBar [MFC], GetButtonStyle", "CToolBar [MFC], GetButtonText", "CToolBar [MFC], GetItemID", "CToolBar [MFC], GetItemRect", "CToolBar [MFC], GetToolBarCtrl", "CToolBar [MFC], LoadBitmap", "CToolBar [MFC], LoadToolBar", "CToolBar [MFC], SetBitmap", "CToolBar [MFC], SetButtonInfo", "CToolBar [MFC], SetButtons", "CToolBar [MFC], SetButtonStyle", "CToolBar [MFC], SetButtonText", "CToolBar [MFC], SetHeight", "CToolBar [MFC], SetSizes"]
ms.assetid: e868da26-5e07-4607-9651-e2f863ad9059
---
# CToolBar Class

Control bars that have a row of bitmapped buttons and optional separators.

## Syntax

```
class CToolBar : public CControlBar
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CToolBar::CToolBar](#ctoolbar)|Constructs a `CToolBar` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CToolBar::CommandToIndex](#commandtoindex)|Returns the index of a button with the given command ID.|
|[CToolBar::Create](#create)|Creates the Windows toolbar and attaches it to the `CToolBar` object.|
|[CToolBar::CreateEx](#createex)|Creates a `CToolBar` object with additional styles for the embedded `CToolBarCtrl` object.|
|[CToolBar::GetButtonInfo](#getbuttoninfo)|Retrieves the ID, style, and image number of a button.|
|[CToolBar::GetButtonStyle](#getbuttonstyle)|Retrieves the style for a button.|
|[CToolBar::GetButtonText](#getbuttontext)|Retrieves the text that will appear on a button.|
|[CToolBar::GetItemID](#getitemid)|Returns the command ID of a button or separator at the given index.|
|[CToolBar::GetItemRect](#getitemrect)|Retrieves the display rectangle for the item at the given index.|
|[CToolBar::GetToolBarCtrl](#gettoolbarctrl)|Allows direct access to the underlying common control.|
|[CToolBar::LoadBitmap](#loadbitmap)|Loads the bitmap containing bitmap-button images.|
|[CToolBar::LoadToolBar](#loadtoolbar)|Loads a toolbar resource created with the resource editor.|
|[CToolBar::SetBitmap](#setbitmap)|Sets a bitmapped image.|
|[CToolBar::SetButtonInfo](#setbuttoninfo)|Sets the ID, style, and image number of a button.|
|[CToolBar::SetButtons](#setbuttons)|Sets button styles and an index of button images within the bitmap.|
|[CToolBar::SetButtonStyle](#setbuttonstyle)|Sets the style for a button.|
|[CToolBar::SetButtonText](#setbuttontext)|Sets the text that will appear on a button.|
|[CToolBar::SetHeight](#setheight)|Sets the height of the toolbar.|
|[CToolBar::SetSizes](#setsizes)|Sets the sizes of buttons and their bitmaps.|

## Remarks

The buttons can act like pushbuttons, check-box buttons, or radio buttons. `CToolBar` objects are usually embedded members of frame-window objects derived from the class [CFrameWnd](../../mfc/reference/cframewnd-class.md) or [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md).

[CToolBar::GetToolBarCtrl](#gettoolbarctrl), a member function new to MFC 4.0, allows you to take advantage of the Windows common control's support for toolbar customization and additional functionality. `CToolBar` member functions give you most of the functionality of the Windows common controls; however, when you call `GetToolBarCtrl`, you can give your toolbars even more of the characteristics of Windows 95/98 toolbars. When you call `GetToolBarCtrl`, it will return a reference to a `CToolBarCtrl` object. See [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) for more information about designing toolbars using Windows common controls. For more general information about common controls, see [Common Controls](/windows/win32/Controls/common-controls-intro) in the Windows SDK.

Visual C++ provides you with two methods to create a toolbar. To create a toolbar resource using the Resource Editor, follow these steps:

1. Create a toolbar resource.

1. Construct the `CToolBar` object.

1. Call the [Create](#create) (or [CreateEx](#createex)) function to create the Windows toolbar and attach it to the `CToolBar` object.

1. Call [LoadToolBar](#loadtoolbar) to load the toolbar resource.

Otherwise, follow these steps:

1. Construct the `CToolBar` object.

1. Call the [Create](#create) (or [CreateEx](#createex)) function to create the Windows toolbar and attach it to the `CToolBar` object.

1. Call [LoadBitmap](#loadbitmap) to load the bitmap that contains the toolbar button images.

1. Call [SetButtons](#setbuttons) to set the button style and associate each button with an image in the bitmap.

All the button images in the toolbar are taken from one bitmap, which must contain one image for each button. All images must be the same size; the default is 16 pixels wide and 15 pixels high. Images must be side by side in the bitmap.

The `SetButtons` function takes a pointer to an array of control IDs and an integer that specifies the number of elements in the array. The function sets each button's ID to the value of the corresponding element of the array and assigns each button an image index, which specifies the position of the button's image in the bitmap. If an array element has the value ID_SEPARATOR, no image index is assigned.

The order of the images in the bitmap is typically the order in which they are drawn on the screen, but you can use the [SetButtonInfo](#setbuttoninfo) function to change the relationship between image order and drawing order.

All buttons in a toolbar are the same size. The default is 24 x 22 pixels, in accordance with *Windows Interface Guidelines for Software Design*. Any additional space between the image and button dimensions is used to form a border around the image.

Each button has one image. The various button states and styles (pressed, up, down, disabled, disabled down, and indeterminate) are generated from that one image. Although bitmaps can be any color, you can achieve the best results with images in black and shades of gray.

> [!WARNING]
> `CToolBar` supports bitmaps with a maximum of 16 colors. When you load an image into a toolbar editor, Visual Studio automatically converts the image to a 16-color bitmap, if necessary, and displays a warning message if the image was converted. If you use an image with more than 16 colors (using an external editor to edit the image), the application might behave unexpectedly.

Toolbar buttons imitate pushbuttons by default. However, toolbar buttons can also imitate check-box buttons or radio buttons. Check-box buttons have three states: checked, cleared, and indeterminate. Radio buttons have only two states: checked and cleared.

To set an individual button or separator style without pointing to an array, call [GetButtonStyle](#getbuttonstyle) to retrieve the style, and then call [SetButtonStyle](#setbuttonstyle) instead of `SetButtons`. `SetButtonStyle` is most useful when you want to change a button's style at run time.

To assign text to appear on a button, call [GetButtonText](#getbuttontext) to retrieve the text to appear on the button, and then call [SetButtonText](#setbuttontext) to set the text.

To create a check-box button, assign it the style TBBS_CHECKBOX or use a `CCmdUI` object's `SetCheck` member function in an ON_UPDATE_COMMAND_UI handler. Calling `SetCheck` turns a pushbutton into a check-box button. Pass `SetCheck` an argument of 0 for unchecked, 1 for checked, or 2 for indeterminate.

To create a radio button, call a [CCmdUI](../../mfc/reference/ccmdui-class.md) object's [SetRadio](../../mfc/reference/ccmdui-class.md#setradio) member function from an ON_UPDATE_COMMAND_UI handler. Pass `SetRadio` an argument of 0 for unchecked or nonzero for checked. In order to provide a radio group's mutually exclusive behavior, you must have ON_UPDATE_COMMAND_UI handlers for all of the buttons in the group.

For more information on using `CToolBar`, see the article [MFC Toolbar Implementation](../../mfc/mfc-toolbar-implementation.md) and [Technical Note 31: Control Bars](../../mfc/tn031-control-bars.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CToolBar`

## Requirements

**Header:** afxext.h

## <a name="commandtoindex"></a> CToolBar::CommandToIndex

This member function returns the index of the first toolbar button, starting at position 0, whose command ID matches `nIDFind`.

```
int CommandToIndex(UINT nIDFind) const;
```

### Parameters

*nIDFind*<br/>
Command ID of a toolbar button.

### Return Value

The index of the button, or -1 if no button has the given command ID.

## <a name="create"></a> CToolBar::Create

This member function creates a Windows toolbar (a child window) and associates it with the `CToolBar` object.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,
    UINT nID = AFX_IDW_TOOLBAR);
```

### Parameters

*pParentWnd*<br/>
Pointer to the window that is the toolbar's parent.

*dwStyle*<br/>
The toolbar style. Additional toolbar styles supported are:

- CBRS_TOP Control bar is at top of the frame window.

- CBRS_BOTTOM Control bar is at bottom of the frame window.

- CBRS_NOALIGN Control bar is not repositioned when the parent is resized.

- CBRS_TOOLTIPS Control bar displays tool tips.

- CBRS_SIZE_DYNAMIC Control bar is dynamic.

- CBRS_SIZE_FIXED Control bar is fixed.

- CBRS_FLOATING Control bar is floating.

- CBRS_FLYBY Status bar displays information about the button.

- CBRS_HIDE_INPLACE Control bar is not displayed to the user.

*nID*<br/>
The toolbar's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

It also sets the toolbar height to a default value.

### Example

[!code-cpp[NVC_MFCDocView#179](../../mfc/codesnippet/cpp/ctoolbar-class_1.cpp)]

## <a name="createex"></a> CToolBar::CreateEx

Call this function to create a Windows toolbar (a child window) and associate it with the `CToolBar` object.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = TBSTYLE_FLAT,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_ALIGN_TOP,
    CRect rcBorders = CRect(
    0,
    0,
    0,
    0),
    UINT nID = AFX_IDW_TOOLBAR);
```

### Parameters

*pParentWnd*<br/>
Pointer to the window that is the toolbar's parent.

*dwCtrlStyle*<br/>
Additional styles for the creation of the embedded [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) object. By default, this value is set to TBSTYLE_FLAT. For a complete list of toolbar styles, see *dwStyle*.

*dwStyle*<br/>
The toolbar style. See [Toolbar Control and Button Styles](/windows/win32/Controls/toolbar-control-and-button-styles) in the Windows SDK for a list of appropriate styles.

*rcBorders*<br/>
A [CRect](../../atl-mfc-shared/reference/crect-class.md) object that defines the widths of the toolbar window borders. These borders are set to 0,0,0,0 by default, thereby resulting in a toolbar window with no borders.

*nID*<br/>
The toolbar's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

It also sets the toolbar height to a default value.

Use `CreateEx`, instead of [Create](#create), when certain styles need to be present during the creation of the embedded tool bar control. For example, set *dwCtrlStyle* to TBSTYLE_FLAT &#124; TBSTYLE_TRANSPARENT to create a toolbar that resembles the Internet Explorer 4 toolbars.

### Example

[!code-cpp[NVC_MFCDocView#180](../../mfc/codesnippet/cpp/ctoolbar-class_2.cpp)]

## <a name="ctoolbar"></a> CToolBar::CToolBar

This member function constructs a `CToolBar` object and sets the default sizes.

```
CToolBar();
```

### Remarks

Call the [Create](#create) member function to create the toolbar window.

## <a name="getbuttoninfo"></a> CToolBar::GetButtonInfo

This member function retrieves the control ID, style, and image index of the toolbar button or separator at the location specified by *nIndex.*

```cpp
void GetButtonInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& iImage) const;
```

### Parameters

*nIndex*<br/>
Index of the toolbar button or separator whose information is to be retrieved.

*nID*<br/>
Reference to a UINT that is set to the command ID of the button.

*nStyle*<br/>
Reference to a UINT that is set to the style of the button.

*iImage*<br/>
Reference to an integer that is set to the index of the button's image within the bitmap.

### Remarks

Those values are assigned to the variables referenced by *nID*, *nStyle*, and *iImage*. The image index is the position of the image within the bitmap that contains images for all the toolbar buttons. The first image is at position 0.

If *nIndex* specifies a separator, *iImage* is set to the separator width in pixels.

## <a name="getbuttonstyle"></a> CToolBar::GetButtonStyle

Call this member function to retrieve the style of a button or separator on the toolbar.

```
UINT GetButtonStyle(int nIndex) const;
```

### Parameters

*nIndex*<br/>
The index of the toolbar button or separator style to be retrieved.

### Return Value

The style of the button or separator specified by *nIndex*.

### Remarks

A button's style determines how the button appears and how it responds to user input. See [SetButtonStyle](#setbuttonstyle) for examples of button styles.

## <a name="getbuttontext"></a> CToolBar::GetButtonText

Call this member function to retrieve the text that appears on a button.

```
CString GetButtonText(int nIndex) const;

void GetButtonText(
    int nIndex,
    CString& rString) const;
```

### Parameters

*nIndex*<br/>
Index of the text to be retrieved.

*rString*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that will contain the text to be retrieved.

### Return Value

A `CString` object containing the button text.

### Remarks

The second form of this member function fills a `CString` object with the string text.

## <a name="getitemid"></a> CToolBar::GetItemID

This member function returns the command ID of the button or separator specified by *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### Parameters

*nIndex*<br/>
Index of the item whose ID is to be retrieved.

### Return Value

The command ID of the button or separator specified by *nIndex*.

### Remarks

Separators return ID_SEPARATOR.

## <a name="getitemrect"></a> CToolBar::GetItemRect

This member function fills the `RECT` structure whose address is contained in *lpRect* with the coordinates of the button or separator specified by *nIndex*.

```
virtual void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### Parameters

*nIndex*<br/>
Index of the item (button or separator) whose rectangle coordinates are to be retrieved.

*lpRect*<br/>
Address of the [RECT](/windows/win32/api/windef/ns-windef-rect) structure that will contain the item's coordinates.

### Remarks

Coordinates are in pixels relative to the upper-left corner of the toolbar.

Use `GetItemRect` to get the coordinates of a separator you want to replace with a combo box or other control.

### Example

  See the example for [CToolBar::SetSizes](#setsizes).

## <a name="gettoolbarctrl"></a> CToolBar::GetToolBarCtrl

This member function allows direct access to the underlying common control.

```
CToolBarCtrl& GetToolBarCtrl() const;
```

### Return Value

A reference to a `CToolBarCtrl` object.

### Remarks

Use `GetToolBarCtrl` to take advantage of the functionality of the Windows toolbar common control, and to take advantage of the support [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) provides for toolbar customization.

For more information about using common controls, see the article [Controls](../../mfc/controls-mfc.md) and [Common Controls](/windows/win32/Controls/common-controls-intro) in the Windows SDK.

### Example

[!code-cpp[NVC_MFCDocViewSDI#15](../../mfc/codesnippet/cpp/ctoolbar-class_3.cpp)]

## <a name="loadbitmap"></a> CToolBar::LoadBitmap

Call this member function to load the bitmap specified by `lpszResourceName` or `nIDResource`.

```
BOOL LoadBitmap(LPCTSTR lpszResourceName);
BOOL LoadBitmap(UINT nIDResource);
```

### Parameters

*lpszResourceName*<br/>
Pointer to the resource name of the bitmap to be loaded.

*nIDResource*<br/>
Resource ID of the bitmap to be loaded.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The bitmap should contain one image for each toolbar button. If the images are not of the standard size (16 pixels wide and 15 pixels high), call [SetSizes](#setsizes) to set the button sizes and their images.

> [!WARNING]
> `CToolBar` supports bitmaps with a maximum of 16 colors. When you load an image into a toolbar editor, Visual Studio automatically converts the image to a 16-color bitmap, if necessary, and displays a warning message if the image was converted. If you use an image with more than 16 colors (using an external editor to edit the image), the application might behave unexpectedly.

## <a name="loadtoolbar"></a> CToolBar::LoadToolBar

Call this member function to load the toolbar specified by *lpszResourceName* or *nIDResource*.

```
BOOL LoadToolBar(LPCTSTR lpszResourceName);
BOOL LoadToolBar(UINT nIDResource);
```

### Parameters

*lpszResourceName*<br/>
Pointer to the resource name of the toolbar to be loaded.

*nIDResource*<br/>
Resource ID of the toolbar to be loaded.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

See [toolbar editor](../../windows/toolbar-editor.md) in for more information about creating a toolbar resource.

### Example

  See the example for [CToolBar::CreateEx](#createex).

## <a name="setbitmap"></a> CToolBar::SetBitmap

Call this member function to set the bitmap image for the toolbar.

```
BOOL SetBitmap(HBITMAP hbmImageWell);
```

### Parameters

*hbmImageWell*<br/>
Handle of a bitmap image that is associated with a toolbar.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

For example, call `SetBitmap` to change the bitmapped image after the user takes an action on a document that changes the action of a button.

## <a name="setbuttoninfo"></a> CToolBar::SetButtonInfo

Call this member function to set the button's command ID, style, and image number.

```cpp
void SetButtonInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int iImage);
```

### Parameters

*nIndex*<br/>
Zero-based index of the button or separator for which information is to be set.

*nID*<br/>
The value to which the button's command ID is set.

*nStyle*<br/>
The new button style. The following button styles are supported:

- TBBS_BUTTON Standard pushbutton (default)

- TBBS_SEPARATOR Separator

- TBBS_CHECKBOX Auto check-box button

- TBBS_GROUP Marks the start of a group of buttons

- TBBS_CHECKGROUP Marks the start of a group of check-box buttons

- TBBS_DROPDOWN Creates a drop-down list button.

- TBBS_AUTOSIZE The button's width will be calculated based on the text of the button, not on the size of the image.

- TBBS_NOPREFIX The button text will not have an accelerator prefix associated with it.

*iImage*<br/>
New index for the button's image within the bitmap.

### Remarks

For separators, which have the style TBBS_SEPARATOR, this function sets the separator's width in pixels to the value stored in *iImage*.

> [!NOTE]
> You can also set button states using the *nStyle* parameter; however, because button states are controlled by the [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) handler, any state you set using `SetButtonInfo` will be lost during the next idle processing. See [How to Update User-Interface Objects](../../mfc/how-to-update-user-interface-objects.md) and [TN031: Control Bars](../../mfc/tn031-control-bars.md) for more information.

For information on bitmap images and buttons, see the [CToolBar](../../mfc/reference/ctoolbar-class.md) Overview and [CToolBar::LoadBitmap](#loadbitmap).

## <a name="setbuttons"></a> CToolBar::SetButtons

This member function sets each toolbar button's command ID to the value specified by the corresponding element of the array *lpIDArray*.

```
BOOL SetButtons(
    const UINT* lpIDArray,
    int nIDCount);
```

### Parameters

*lpIDArray*<br/>
Pointer to an array of command Ids. It can be NULL to allocate empty buttons.

*nIDCount*<br/>
Number of elements in the array pointed to by *lpIDArray*.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

If an element of the array has the value ID_SEPARATOR, a separator is created in the corresponding position of the toolbar. This function also sets each button's style to TBBS_BUTTON and each separator's style to TBBS_SEPARATOR, and assigns an image index to each button. The image index specifies the position of the button's image within the bitmap.

You do not need to account for separators in the bitmap because this function does not assign image indexes for separators. If your toolbar has buttons at positions 0, 1, and 3 and a separator at position 2, the images at positions 0, 1, and 2 in your bitmap are assigned to the buttons at positions 0, 1, and 3, respectively.

If *lpIDArray* is NULL, this function allocates space for the number of items specified by *nIDCount*. Use [SetButtonInfo](#setbuttoninfo) to set each item's attributes.

## <a name="setbuttonstyle"></a> CToolBar::SetButtonStyle

Call this member function to set the style of a button or separator, or to group buttons.

```cpp
void SetButtonStyle(
    int nIndex,
    UINT nStyle);
```

### Parameters

*nIndex*<br/>
Index of the button or separator whose information is to be set.

*nStyle*<br/>
The button style. The following button styles are supported:

- TBBS_BUTTON Standard pushbutton (default)

- TBBS_SEPARATOR Separator

- TBBS_CHECKBOX Auto check-box button

- TBBS_GROUP Marks the start of a group of buttons

- TBBS_CHECKGROUP Marks the start of a group of check-box buttons

- TBBS_DROPDOWN Creates a drop-down list button

- TBBS_AUTOSIZE The button's width will be calculated based on the text of the button, not on the size of the image

- TBBS_NOPREFIX The button text will not have an accelerator prefix associated with it

### Remarks

A button's style determines how the button appears and how it responds to user input.

Before calling `SetButtonStyle`, call the [GetButtonStyle](#getbuttonstyle) member function to retrieve the button or separator style.

> [!NOTE]
> You can also set button states using the *nStyle* parameter; however, because button states are controlled by the [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) handler, any state you set using `SetButtonStyle` will be lost during the next idle processing. See [How to Update User-Interface Objects](../../mfc/how-to-update-user-interface-objects.md) and [TN031: Control Bars](../../mfc/tn031-control-bars.md) for more information.

## <a name="setbuttontext"></a> CToolBar::SetButtonText

Call this function to set the text on a button.

```
BOOL SetButtonText(
    int nIndex,
    LPCTSTR lpszText);
```

### Parameters

*nIndex*<br/>
Index of the button whose text is to be set.

*lpszText*<br/>
Points to the text to be set on a button.

### Return Value

Nonzero if successful; otherwise 0.

### Example

  See the example for [CToolBar::GetToolBarCtrl](#gettoolbarctrl).

## <a name="setheight"></a> CToolBar::SetHeight

This member function sets the toolbar's height to the value, in pixels, specified in *cyHeight*.

```cpp
void SetHeight(int cyHeight);
```

### Parameters

*cyHeight*<br/>
The height in pixels of the toolbar.

### Remarks

After calling [SetSizes](#setsizes), use this member function to override the standard toolbar height. If the height is too small, the buttons will be clipped at the bottom.

If this function is not called, the framework uses the size of the button to determine the toolbar height.

## <a name="setsizes"></a> CToolBar::SetSizes

Call this member function to set the toolbar's buttons to the size, in pixels, specified in *sizeButton*.

```cpp
void SetSizes(
    SIZE sizeButton,
    SIZE sizeImage);
```

### Parameters

*sizeButton*<br/>
The size in pixels of each button.

*sizeImage*<br/>
The size in pixels of each image.

### Remarks

The *sizeImage* parameter must contain the size, in pixels, of the images in the toolbar's bitmap. The dimensions in *sizeButton* must be sufficient to hold the image plus 7 pixels extra in width and 6 pixels extra in height. This function also sets the toolbar height to fit the buttons.

Call this member function only for toolbars that do not follow *Windows Interface Guidelines for Software Design* recommendations for button and image sizes.

### Example

[!code-cpp[NVC_MFCListView#8](../../atl/reference/codesnippet/cpp/ctoolbar-class_4.cpp)]

## See also

[MFC Sample CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample DLGCBR32](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample DOCKTOOL](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CToolBarCtrl Class](../../mfc/reference/ctoolbarctrl-class.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)
