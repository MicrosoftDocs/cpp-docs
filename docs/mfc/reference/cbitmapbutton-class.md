---
description: "Learn more about: CBitmapButton Class"
title: "CBitmapButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CBitmapButton", "AFXEXT/CBitmapButton", "AFXEXT/CBitmapButton::CBitmapButton", "AFXEXT/CBitmapButton::AutoLoad", "AFXEXT/CBitmapButton::LoadBitmaps", "AFXEXT/CBitmapButton::SizeToContent"]
helpviewer_keywords: ["CBitmapButton [MFC], CBitmapButton", "CBitmapButton [MFC], AutoLoad", "CBitmapButton [MFC], LoadBitmaps", "CBitmapButton [MFC], SizeToContent"]
ms.assetid: 9ad6cb45-c3c4-4fb1-96d3-1fe3df7bbcfc
---
# CBitmapButton Class

Creates pushbutton controls labeled with bitmapped images instead of text.

## Syntax

```
class CBitmapButton : public CButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CBitmapButton::CBitmapButton](#cbitmapbutton)|Constructs a `CBitmapButton` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CBitmapButton::AutoLoad](#autoload)|Associates a button in a dialog box with an object of the `CBitmapButton` class, loads the bitmap(s) by name, and sizes the button to fit the bitmap.|
|[CBitmapButton::LoadBitmaps](#loadbitmaps)|Initializes the object by loading one or more named bitmap resources from the application's resource file and attaching the bitmaps to the object.|
|[CBitmapButton::SizeToContent](#sizetocontent)|Sizes the button to accommodate the bitmap.|

## Remarks

`CBitmapButton` objects contain up to four bitmaps, which contain images for the different states a button can assume: up (or normal), down (or selected), focused, and disabled. Only the first bitmap is required; the others are optional.

Bitmap-button images include the border around the image as well as the image itself. The border typically plays a part in showing the state of the button. For example, the bitmap for the focused state usually is like the one for the up state but with a dashed rectangle inset from the border or a thick solid line at the border. The bitmap for the disabled state usually resembles the one for the up state but has lower contrast (like a dimmed or grayed menu selection).

These bitmaps can be of any size, but all are treated as if they were the same size as the bitmap for the up state.

Various applications demand different combinations of bitmap images:

|Up|Down|Focused|Disabled|Application|
|--------|----------|-------------|--------------|-----------------|
|×||||Bitmap|
|×|×|||Button without WS_TABSTOP style|
|×|×|×|×|Dialog button with all states|
|×|×|×||Dialog button with WS_TABSTOP style|

When creating a bitmap-button control, set the BS_OWNERDRAW style to specify that the button is owner-drawn. This causes Windows to send the WM_MEASUREITEM and WM_DRAWITEM messages for the button; the framework handles these messages and manages the appearance of the button for you.

### To create a bitmap-button control in a window's client area

1. Create one to four bitmap images for the button.

1. Construct the [CBitmapButton](#cbitmapbutton) object.

1. Call the [Create](../../mfc/reference/cbutton-class.md#create) function to create the Windows button control and attach it to the `CBitmapButton` object.

1. Call the [LoadBitmaps](#loadbitmaps) member function to load the bitmap resources after the bitmap button is constructed.

### To include a bitmap-button control in a dialog box

1. Create one to four bitmap images for the button.

1. Create a dialog template with an owner-draw button positioned where you want the bitmap button. The size of the button in the template does not matter.

1. Set the button's caption to a value such as " MYIMAGE" and define a symbol for the button such as IDC_MYIMAGE.

1. In your application's resource script, give each of the images created for the button an ID constructed by appending one of the letters "U," "D," "F," or "X" (for up, down, focused, and disabled) to the string used for the button caption in step 3. For the button caption " MYIMAGE," for example, the IDs would be " MYIMAGEU," " MYIMAGED," " MYIMAGEF," and " MYIMAGEX." You **must** specify the ID of your bitmaps within double quotes. Otherwise the resource editor will assign an integer to the resource and MFC will fail when loading the image.

1. In your application's dialog class (derived from `CDialog`), add a `CBitmapButton` member object.

1. In the `CDialog` object's [OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog) routine, call the `CBitmapButton` object's [AutoLoad](#autoload) function, using as parameters the button's control ID and the `CDialog` object's **`this`** pointer.

If you want to handle Windows notification messages, such as BN_CLICKED, sent by a bitmap-button control to its parent (usually a class derived from `CDialog`), add to the `CDialog`-derived object a message-map entry and message-handler member function for each message. The notifications sent by a `CBitmapButton` object are the same as those sent by a [CButton](../../mfc/reference/cbutton-class.md) object.

The class [CToolBar](../../mfc/reference/ctoolbar-class.md) takes a different approach to bitmap buttons.

For more information on `CBitmapButton`, see [Controls](../../mfc/controls-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

`CBitmapButton`

## Requirements

**Header:** afxext.h

## <a name="autoload"></a> CBitmapButton::AutoLoad

Associates a button in a dialog box with an object of the `CBitmapButton` class, loads the bitmap(s) by name, and sizes the button to fit the bitmap.

```
BOOL AutoLoad(
    UINT nID,
    CWnd* pParent);
```

### Parameters

*nID*<br/>
The button's control ID.

*pParent*<br/>
Pointer to the object that owns the button.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Use the `AutoLoad` function to initialize an owner-draw button in a dialog box as a bitmap button. Instructions for using this function are in the remarks for the `CBitmapButton` class.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#75](../../mfc/codesnippet/cpp/cbitmapbutton-class_1.cpp)]

## <a name="cbitmapbutton"></a> CBitmapButton::CBitmapButton

Creates a `CBitmapButton` object.

```
CBitmapButton();
```

### Remarks

After creating the C++ `CBitmapButton` object, call [CButton::Create](../../mfc/reference/cbutton-class.md#create) to create the Windows button control and attach it to the `CBitmapButton` object.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#57](../../mfc/codesnippet/cpp/cbitmapbutton-class_2.cpp)]

## <a name="loadbitmaps"></a> CBitmapButton::LoadBitmaps

Use this function when you want to load bitmap images identified by their resource names or ID numbers, or when you cannot use the `AutoLoad` function because, for example, you are creating a bitmap button that is not part of a dialog box.

```
BOOL LoadBitmaps(
    LPCTSTR lpszBitmapResource,
    LPCTSTR lpszBitmapResourceSel = NULL,
    LPCTSTR lpszBitmapResourceFocus = NULL,
    LPCTSTR lpszBitmapResourceDisabled = NULL);

BOOL LoadBitmaps(
    UINT nIDBitmapResource,
    UINT nIDBitmapResourceSel = 0,
    UINT nIDBitmapResourceFocus = 0,
    UINT nIDBitmapResourceDisabled = 0);
```

### Parameters

*lpszBitmapResource*<br/>
Points to the null-terminated string that contains the name of the bitmap for a bitmap button's normal or "up" state. Required.

*lpszBitmapResourceSel*<br/>
Points to the null-terminated string that contains the name of the bitmap for a bitmap button's selected or "down" state. May be NULL.

*lpszBitmapResourceFocus*<br/>
Points to the null-terminated string that contains the name of the bitmap for a bitmap button's focused state. May be NULL.

*lpszBitmapResourceDisabled*<br/>
Points to the null-terminated string that contains the name of the bitmap for a bitmap button's disabled state. May be NULL.

*nIDBitmapResource*<br/>
Specifies the resource ID number of the bitmap resource for a bitmap button's normal or "up" state. Required.

*nIDBitmapResourceSel*<br/>
Specifies the resource ID number of the bitmap resource for a bitmap button's selected or "down" state. May be 0.

*nIDBitmapResourceFocus*<br/>
Specifies the resource ID number of the bitmap resource for a bitmap button's focused state. May be 0.

*nIDBitmapResourceDisabled*<br/>
Specifies the resource ID number of the bitmap resource for a bitmap button's disabled state. May be 0.

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#58](../../mfc/codesnippet/cpp/cbitmapbutton-class_3.cpp)]

## <a name="sizetocontent"></a> CBitmapButton::SizeToContent

Call this function to resize a bitmap button to the size of the bitmap.

```cpp
void SizeToContent();
```

### Example

[!code-cpp[NVC_MFCControlLadenDialog#59](../../mfc/codesnippet/cpp/cbitmapbutton-class_4.cpp)]

## See also

[MFC Sample CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[CButton Class](../../mfc/reference/cbutton-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
