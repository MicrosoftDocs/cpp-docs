---
description: "Learn more about: CFontDialog Class"
title: "CFontDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CFontDialog", "AFXDLGS/CFontDialog", "AFXDLGS/CFontDialog::CFontDialog", "AFXDLGS/CFontDialog::DoModal", "AFXDLGS/CFontDialog::GetCharFormat", "AFXDLGS/CFontDialog::GetColor", "AFXDLGS/CFontDialog::GetCurrentFont", "AFXDLGS/CFontDialog::GetFaceName", "AFXDLGS/CFontDialog::GetSize", "AFXDLGS/CFontDialog::GetStyleName", "AFXDLGS/CFontDialog::GetWeight", "AFXDLGS/CFontDialog::IsBold", "AFXDLGS/CFontDialog::IsItalic", "AFXDLGS/CFontDialog::IsStrikeOut", "AFXDLGS/CFontDialog::IsUnderline", "AFXDLGS/CFontDialog::m_cf"]
helpviewer_keywords: ["CFontDialog [MFC], CFontDialog", "CFontDialog [MFC], DoModal", "CFontDialog [MFC], GetCharFormat", "CFontDialog [MFC], GetColor", "CFontDialog [MFC], GetCurrentFont", "CFontDialog [MFC], GetFaceName", "CFontDialog [MFC], GetSize", "CFontDialog [MFC], GetStyleName", "CFontDialog [MFC], GetWeight", "CFontDialog [MFC], IsBold", "CFontDialog [MFC], IsItalic", "CFontDialog [MFC], IsStrikeOut", "CFontDialog [MFC], IsUnderline", "CFontDialog [MFC], m_cf"]
ms.assetid: 6228d500-ed0f-4156-81e5-ab0d57d1dcf4
---
# CFontDialog Class

Allows you to incorporate a font-selection dialog box into your application.

## Syntax

```
class CFontDialog : public CCommonDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CFontDialog::CFontDialog](#cfontdialog)|Constructs a `CFontDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFontDialog::DoModal](#domodal)|Displays the dialog and allows the user to make a selection.|
|[CFontDialog::GetCharFormat](#getcharformat)|Retrieves the character formatting of the selected font.|
|[CFontDialog::GetColor](#getcolor)|Returns the color of the selected font.|
|[CFontDialog::GetCurrentFont](#getcurrentfont)|Assigns the characteristics of the currently selected font to a `LOGFONT` structure.|
|[CFontDialog::GetFaceName](#getfacename)|Returns the face name of the selected font.|
|[CFontDialog::GetSize](#getsize)|Returns the point size of the selected font.|
|[CFontDialog::GetStyleName](#getstylename)|Returns the style name of the selected font.|
|[CFontDialog::GetWeight](#getweight)|Returns the weight of the selected font.|
|[CFontDialog::IsBold](#isbold)|Determines whether the font is bold.|
|[CFontDialog::IsItalic](#isitalic)|Determines whether the font is italic.|
|[CFontDialog::IsStrikeOut](#isstrikeout)|Determines whether the font is displayed with strikeout.|
|[CFontDialog::IsUnderline](#isunderline)|Determines whether the font is underlined.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CFontDialog::m_cf](#m_cf)|A structure used to customize a `CFontDialog` object.|

## Remarks

A `CFontDialog` object is a dialog box with a list of fonts that are currently installed in the system. The user can select a particular font from the list, and this selection is then reported back to the application.

To construct a `CFontDialog` object, use the provided constructor or derive a new subclass and use your own custom constructor.

Once a `CFontDialog` object has been constructed, you can use the `m_cf` structure to initialize the values or states of controls in the dialog box. The [m_cf](#m_cf) structure is of type [CHOOSEFONT](/windows/win32/api/commdlg/ns-commdlg-choosefontw). For more information on this structure, see the Windows SDK.

After initializing the dialog object's controls, call the `DoModal` member function to display the dialog box and allow the user to select a font. `DoModal` returns whether the user selected the OK (IDOK) or Cancel (IDCANCEL) button.

If `DoModal` returns IDOK, you can use one of `CFontDialog`'s member functions to retrieve the information input by the user.

You can use the Windows [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) function to determine whether an error occurred during initialization of the dialog box and to learn more about the error. For more information on this function, see the Windows SDK.

`CFontDialog` relies on the COMMDLG.DLL file that ships with Windows versions 3.1 and later.

To customize the dialog box, derive a class from `CFontDialog`, provide a custom dialog template, and add a message-map to process the notification messages from the extended controls. Any unprocessed messages should be passed to the base class.

Customizing the hook function is not required.

For more information on using `CFontDialog`, see [Common Dialog Classes](../../mfc/common-dialog-classes.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CFontDialog`

## Requirements

**Header:** afxdlgs.h

## <a name="cfontdialog"></a> CFontDialog::CFontDialog

Constructs a `CFontDialog` object.

```
CFontDialog(
    LPLOGFONT lplfInitial = NULL,
    DWORD dwFlags = CF_EFFECTS | CF_SCREENFONTS,
    CDC* pdcPrinter = NULL,
    CWnd* pParentWnd = NULL);

CFontDialog(
    const CHARFORMAT& charformat,
    DWORD dwFlags = CF_SCREENFONTS,
    CDC* pdcPrinter = NULL,
    CWnd* pParentWnd = NULL);
```

### Parameters

*plfInitial*<br/>
A pointer to a [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) data structure that allows you to set some of the font's characteristics.

*charFormat*<br/>
A pointer to a [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) data structure that allows you to set some of the font's characteristics in a rich edit control.

*dwFlags*<br/>
Specifies one or more choose-font flags. One or more preset values can be combined using the bitwise OR operator. If you modify the `m_cf.Flag`s structure member, be sure to use a bitwise OR operator in your changes to keep the default behavior intact. For details on each of these flags, see the description of the [CHOOSEFONT](/windows/win32/api/commdlg/ns-commdlg-choosefontw) structure in the Windows SDK.

*pdcPrinter*<br/>
A pointer to a printer-device context. If supplied, this parameter points to a printer-device context for the printer on which the fonts are to be selected.

*pParentWnd*<br/>
A pointer to the font dialog box's parent or owner window.

### Remarks

Note that the constructor automatically fills in the members of the `CHOOSEFONT` structure. You should only change these if you want a font dialog different than the default.

> [!NOTE]
> The first version of this function only exists when there is no rich edit control support.

### Example

[!code-cpp[NVC_MFCDocView#78](../../mfc/codesnippet/cpp/cfontdialog-class_1.cpp)]

## <a name="domodal"></a> CFontDialog::DoModal

Call this function to display the Windows common font dialog box and allow the user to choose a font.

```
virtual INT_PTR DoModal();
```

### Return Value

IDOK or IDCANCEL. If IDCANCEL is returned, call the Windows [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) function to determine whether an error occurred.

IDOK and IDCANCEL are constants that indicate whether the user selected the OK or Cancel button.

### Remarks

If you want to initialize the various font dialog controls by setting members of the [m_cf](#m_cf) structure, you should do this before calling `DoModal`, but after the dialog object is constructed.

If `DoModal` returns IDOK, you can call other member functions to retrieve the settings or information input by the user into the dialog box.

### Example

  See the examples for [CFontDialog::CFontDialog](#cfontdialog) and [CFontDialog::GetColor](#getcolor).

## <a name="getcharformat"></a> CFontDialog::GetCharFormat

Retrieves the character formatting of the selected font.

```cpp
void GetCharFormat(CHARFORMAT& cf) const;
```

### Parameters

*cf*<br/>
A [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) structure containing information about the character formatting of the selected font.

## <a name="getcolor"></a> CFontDialog::GetColor

Call this function to retrieve the selected font color.

```
COLORREF GetColor() const;
```

### Return Value

The color of the selected font.

### Example

[!code-cpp[NVC_MFCDocView#79](../../mfc/codesnippet/cpp/cfontdialog-class_2.cpp)]

## <a name="getcurrentfont"></a> CFontDialog::GetCurrentFont

Call this function to assign the characteristics of the currently selected font to the members of a [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) structure.

```cpp
void GetCurrentFont(LPLOGFONT lplf);
```

### Parameters

*lplf*<br/>
A pointer to a `LOGFONT` structure.

### Remarks

Other `CFontDialog` member functions are provided to access individual characteristics of the current font.

If this function is called during a call to [DoModal](#domodal), it returns the current selection at the time (what the user sees or has changed in the dialog). If this function is called after a call to `DoModal` (only if `DoModal` returns IDOK), it returns what the user actually selected.

### Example

[!code-cpp[NVC_MFCDocView#80](../../mfc/codesnippet/cpp/cfontdialog-class_3.cpp)]

## <a name="getfacename"></a> CFontDialog::GetFaceName

Call this function to retrieve the face name of the selected font.

```
CString GetFaceName() const;
```

### Return Value

The face name of the font selected in the `CFontDialog` dialog box.

### Example

[!code-cpp[NVC_MFCDocView#81](../../mfc/codesnippet/cpp/cfontdialog-class_4.cpp)]

## <a name="getsize"></a> CFontDialog::GetSize

Call this function to retrieve the size of the selected font.

```
int GetSize() const;
```

### Return Value

The font's size, in tenths of a point.

### Example

[!code-cpp[NVC_MFCDocView#82](../../mfc/codesnippet/cpp/cfontdialog-class_5.cpp)]

## <a name="getstylename"></a> CFontDialog::GetStyleName

Call this function to retrieve the style name of the selected font.

```
CString GetStyleName() const;
```

### Return Value

The style name of the font.

### Example

[!code-cpp[NVC_MFCDocView#83](../../mfc/codesnippet/cpp/cfontdialog-class_6.cpp)]

## <a name="getweight"></a> CFontDialog::GetWeight

Call this function to retrieve the weight of the selected font.

```
int GetWeight() const;
```

### Return Value

The weight of the selected font.

### Remarks

For more information on the weight of a font, see [CFont::CreateFont](../../mfc/reference/cfont-class.md#createfont).

### Example

[!code-cpp[NVC_MFCDocView#84](../../mfc/codesnippet/cpp/cfontdialog-class_7.cpp)]

## <a name="isbold"></a> CFontDialog::IsBold

Call this function to determine if the selected font is bold.

```
BOOL IsBold() const;
```

### Return Value

Nonzero if the selected font has the Bold characteristic enabled; otherwise 0.

### Example

[!code-cpp[NVC_MFCDocView#85](../../mfc/codesnippet/cpp/cfontdialog-class_8.cpp)]

## <a name="isitalic"></a> CFontDialog::IsItalic

Call this function to determine if the selected font is italic.

```
BOOL IsItalic() const;
```

### Return Value

Nonzero if the selected font has the Italic characteristic enabled; otherwise 0.

### Example

[!code-cpp[NVC_MFCDocView#86](../../mfc/codesnippet/cpp/cfontdialog-class_9.cpp)]

## <a name="isstrikeout"></a> CFontDialog::IsStrikeOut

Call this function to determine if the selected font is displayed with strikeout.

```
BOOL IsStrikeOut() const;
```

### Return Value

Nonzero if the selected font has the Strikeout characteristic enabled; otherwise 0.

### Example

[!code-cpp[NVC_MFCDocView#87](../../mfc/codesnippet/cpp/cfontdialog-class_10.cpp)]

## <a name="isunderline"></a> CFontDialog::IsUnderline

Call this function to determine if the selected font is underlined.

```
BOOL IsUnderline() const;
```

### Return Value

Nonzero if the selected font has the Underline characteristic enabled; otherwise 0.

### Example

[!code-cpp[NVC_MFCDocView#88](../../mfc/codesnippet/cpp/cfontdialog-class_11.cpp)]

## <a name="m_cf"></a> CFontDialog::m_cf

A structure whose members store the characteristics of the dialog object.

```
CHOOSEFONT m_cf;
```

### Remarks

After constructing a `CFontDialog` object, you can use `m_cf` to modify various aspects of the dialog box before calling the `DoModal` member function. For more information on this structure, see [CHOOSEFONT](/windows/win32/api/commdlg/ns-commdlg-choosefontw) in the Windows SDK.

### Example

[!code-cpp[NVC_MFCDocView#89](../../mfc/codesnippet/cpp/cfontdialog-class_12.cpp)]

## See also

[MFC Sample HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
