---
description: "Learn more about: CMFCColorDialog Class"
title: "CMFCColorDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCColorDialog", "AFXCOLORDIALOG/CMFCColorDialog", "AFXCOLORDIALOG/CMFCColorDialog::CMFCColorDialog", "AFXCOLORDIALOG/CMFCColorDialog::GetColor", "AFXCOLORDIALOG/CMFCColorDialog::GetPalette", "AFXCOLORDIALOG/CMFCColorDialog::RebuildPalette", "AFXCOLORDIALOG/CMFCColorDialog::SetCurrentColor", "AFXCOLORDIALOG/CMFCColorDialog::SetNewColor", "AFXCOLORDIALOG/CMFCColorDialog::SetPageOne", "AFXCOLORDIALOG/CMFCColorDialog::SetPageTwo"]
helpviewer_keywords: ["CMFCColorDialog [MFC], CMFCColorDialog", "CMFCColorDialog [MFC], GetColor", "CMFCColorDialog [MFC], GetPalette", "CMFCColorDialog [MFC], RebuildPalette", "CMFCColorDialog [MFC], SetCurrentColor", "CMFCColorDialog [MFC], SetNewColor", "CMFCColorDialog [MFC], SetPageOne", "CMFCColorDialog [MFC], SetPageTwo"]
ms.assetid: 235bbbbc-a3b1-46e0-801b-fb55093ec579
---
# CMFCColorDialog Class

The `CMFCColorDialog` class represents a color selection dialog box.

## Syntax

```
class CMFCColorDialog : public CDialogEx
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCColorDialog::CMFCColorDialog](#cmfccolordialog)|Constructs a `CMFCColorDialog` object.|
|`CMFCColorDialog::~CMFCColorDialog`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCColorDialog::GetColor](#getcolor)|Returns the current selected color.|
|[CMFCColorDialog::GetPalette](#getpalette)|Returns the color's palette.|
|`CMFCColorDialog::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. For syntax and more information, see [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). (Overrides `CDialogEx::PreTranslateMessage`.)|
|[CMFCColorDialog::RebuildPalette](#rebuildpalette)|Derives a palette from the system palette.|
|[CMFCColorDialog::SetCurrentColor](#setcurrentcolor)|Sets the current selected color.|
|[CMFCColorDialog::SetNewColor](#setnewcolor)|Sets the color most equivalent to a specified RGB value.|
|[CMFCColorDialog::SetPageOne](#setpageone)|Selects an RGB value for the first property page.|
|[CMFCColorDialog::SetPageTwo](#setpagetwo)|Selects an RGB value for the second property page.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|`m_bIsMyPalette`|TRUE if the color selection dialog box uses its own color palette, or FALSE if the dialog box uses a palette that is specified in the `CMFCColorDialog` constructor.|
|`m_bPickerMode`|TRUE while the user is selecting a color from the selection dialog box; otherwise, FALSE.|
|`m_btnColorSelect`|The color button that the user has selected.|
|`m_CurrentColor`|The currently selected color.|
|`m_hcurPicker`|The cursor that is used to pick a color.|
|`m_NewColor`|The prospective selected color, which can be permanently selected or reverted to the original color.|
|`m_pColourSheetOne`|A pointer to the first property page of the color selection property sheet.|
|`m_pColourSheetTwo`|A pointer to the second property page of the color selection property sheet.|
|`m_pPalette`|The current logical palette.|
|`m_pPropSheet`|A pointer to the property sheet for the color selection dialog box.|
|`m_wndColors`|A color picker control object.|
|`m_wndStaticPlaceHolder`|A static control that is a placeholder for the color picker property sheet.|

## Remarks

The color selection dialog box is displayed as a property sheet with two pages. On the first page, you select a standard color from the system palette; on the second page, you select a custom color.

You can construct a `CMFCColorDialog` object on the stack and then call `DoModal`, passing the initial color as a parameter to the `CMFCColorDialog` constructor. The color selection dialog box then creates several [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md) objects to handle each color palette.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)

## Example

The following example demonstrates how to configure a color dialog by using various methods in the `CMFCColorDialog` class. The example shows how to set the current and the new colors of the dialog, and how to set the red, green, and blue components of a selected color on the two property pages of the color dialog. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#3](../../mfc/reference/codesnippet/cpp/cmfccolordialog-class_1.cpp)]

## Requirements

**Header:** afxcolordialog.h

## <a name="cmfccolordialog"></a> CMFCColorDialog::CMFCColorDialog

Constructs a `CMFCColorDialog` object.

```
CMFCColorDialog(
    COLORREF clrInit=0,
    DWORD dwFlags=0,
    CWnd* pParentWnd=NULL,
    HPALETTE hPal=NULL);
```

### Parameters

*clrInit*<br/>
[in] The default color selection. If no value is specified, the default is RGB(0,0,0) (black).

*dwFlags*<br/>
[in] Reserved.

*pParentWnd*<br/>
[in] A pointer to the dialog box's parent or owner window.

*hPal*<br/>
[in] A handle to a color palette.

### Return Value

### Remarks

## <a name="getcolor"></a> CMFCColorDialog::GetColor

Retrieves the color that the user selects from the color dialog.

```
COLORREF GetColor() const;
```

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value that contains the RGB information for the color selected in the color dialog box.

### Remarks

Call this function after you call the `DoModal` method.

## <a name="getpalette"></a> CMFCColorDialog::GetPalette

Retrieves the color palette that is available in the current color dialog.

```
CPalette* GetPalette() const;
```

### Return Value

A pointer to the `CPalette` object that was specified in the `CMFCColorDialog` constructor.

### Remarks

The color palette specifies the colors that the user can choose.

## <a name="rebuildpalette"></a> CMFCColorDialog::RebuildPalette

Derives a palette from the system palette.

```cpp
void RebuildPalette();
```

## <a name="setcurrentcolor"></a> CMFCColorDialog::SetCurrentColor

Sets the current color of the dialog box.

```cpp
void SetCurrentColor(COLORREF rgb);
```

### Parameters

*rgb*<br/>
[in] An RGB color value

### Remarks

## <a name="setnewcolor"></a> CMFCColorDialog::SetNewColor

Sets the current color to the color in the current palette that is most similar.

```cpp
void SetNewColor(COLORREF rgb);
```

### Parameters

*rgb*<br/>
[in] A [COLORREF](/windows/win32/gdi/colorref) that specifies an RGB color.

### Remarks

## <a name="setpageone"></a> CMFCColorDialog::SetPageOne

Explicitly specifies the red, green, and blue components of a selected color on the first property page of a color dialog.

```cpp
void SetPageOne(
    BYTE R,
    BYTE G,
    BYTE B);
```

### Parameters

*R*<br/>
[in] Specifies the red component of the RGB value.

*G*<br/>
[in] Specifies the green component of the RGB value.

*B*<br/>
[in] Specifies the blue component of the RGB value.

### Remarks

## <a name="setpagetwo"></a> CMFCColorDialog::SetPageTwo

Explicitly specifies the red, green, and blue components of a selected color on the second property page of a color dialog.

```cpp
void SetPageTwo(
    BYTE R,
    BYTE G,
    BYTE B);
```

### Parameters

*R*<br/>
[in] Specifies a red component of the RGB value

*G*<br/>
[in] Specifies a green component of an RGB value

*B*<br/>
[in] Specifies a blue component of an RGB value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md)
