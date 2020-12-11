---
description: "Learn more about: CColorDialog Class"
title: "CColorDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CColorDialog", "AFXDLGS/CColorDialog", "AFXDLGS/CColorDialog::CColorDialog", "AFXDLGS/CColorDialog::DoModal", "AFXDLGS/CColorDialog::GetColor", "AFXDLGS/CColorDialog::GetSavedCustomColors", "AFXDLGS/CColorDialog::SetCurrentColor", "AFXDLGS/CColorDialog::OnColorOK", "AFXDLGS/CColorDialog::m_cc"]
helpviewer_keywords: ["CColorDialog [MFC], CColorDialog", "CColorDialog [MFC], DoModal", "CColorDialog [MFC], GetColor", "CColorDialog [MFC], GetSavedCustomColors", "CColorDialog [MFC], SetCurrentColor", "CColorDialog [MFC], OnColorOK", "CColorDialog [MFC], m_cc"]
ms.assetid: d013dc25-9290-4b5d-a97e-95ad7208e13b
---
# CColorDialog Class

Allows you to incorporate a color-selection dialog box into your application.

## Syntax

```
class CColorDialog : public CCommonDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CColorDialog::CColorDialog](#ccolordialog)|Constructs a `CColorDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CColorDialog::DoModal](#domodal)|Displays a color dialog box and allows the user to make a selection.|
|[CColorDialog::GetColor](#getcolor)|Returns a `COLORREF` structure containing the values of the selected color.|
|[CColorDialog::GetSavedCustomColors](#getsavedcustomcolors)|Retrieves custom colors created by the user.|
|[CColorDialog::SetCurrentColor](#setcurrentcolor)|Forces the current color selection to the specified color.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CColorDialog::OnColorOK](#oncolorok)|Override to validate the color entered into the dialog box.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CColorDialog::m_cc](#m_cc)|A structure used to customize the settings of the dialog box.|

## Remarks

A `CColorDialog` object is a dialog box with a list of colors that are defined for the display system. The user can select or create a particular color from the list, which is then reported back to the application when the dialog box exits.

To construct a `CColorDialog` object, use the provided constructor or derive a new class and use your own custom constructor.

Once the dialog box has been constructed, you can set or modify any values in the [m_cc](#m_cc) structure to initialize the values of the dialog box's controls. The *m_cc* structure is of type [CHOOSECOLOR](/windows/win32/api/commdlg/ns-commdlg-choosecolora-r1).

After initializing the dialog box's controls, call the `DoModal` member function to display the dialog box and allow the user to select a color. `DoModal` returns the user's selection of either the dialog box's OK (IDOK) or Cancel (IDCANCEL) button.

If `DoModal` returns IDOK, you can use one of `CColorDialog`'s member functions to retrieve the information input by the user.

You can use the Windows [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) function to determine whether an error occurred during initialization of the dialog box and to learn more about the error.

`CColorDialog` relies on the COMMDLG.DLL file that ships with Windows versions 3.1 and later.

To customize the dialog box, derive a class from `CColorDialog`, provide a custom dialog template, and add a message map to process the notification messages from the extended controls. Any unprocessed messages should be passed to the base class.

Customizing the hook function is not required.

> [!NOTE]
> On some installations the `CColorDialog` object will not display with a gray background if you have used the framework to make other `CDialog` objects gray.

For more information on using `CColorDialog`, see [Common Dialog Classes](../../mfc/common-dialog-classes.md)

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CColorDialog`

## Requirements

**Header:** afxdlgs.h

## <a name="ccolordialog"></a> CColorDialog::CColorDialog

Constructs a `CColorDialog` object.

```
CColorDialog(
    COLORREF clrInit = 0,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### Parameters

*clrInit*<br/>
The default color selection. If no value is specified, the default is RGB(0,0,0) (black).

*dwFlags*<br/>
A set of flags that customize the function and appearance of the dialog box. For more information, see the [CHOOSECOLOR](/windows/win32/api/commdlg/ns-commdlg-choosecolora-r1) structure in the Windows SDK.

*pParentWnd*<br/>
A pointer to the dialog box's parent or owner window.

### Example

[!code-cpp[NVC_MFCDocView#49](../../mfc/codesnippet/cpp/ccolordialog-class_1.cpp)]

## <a name="domodal"></a> CColorDialog::DoModal

Call this function to display the Windows common color dialog box and allow the user to select a color.

```
virtual INT_PTR DoModal();
```

### Return Value

IDOK or IDCANCEL. If IDCANCEL is returned, call the Windows [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) function to determine whether an error occurred.

IDOK and IDCANCEL are constants that indicate whether the user selected the OK or Cancel button.

### Remarks

If you want to initialize the various color dialog-box options by setting members of the [m_cc](#m_cc) structure, you should do this before calling `DoModal` but after the dialog-box object is constructed.

After calling `DoModal`, you can call other member functions to retrieve the settings or information input by the user into the dialog box.

### Example

  See the example for [CColorDialog::CColorDialog](#ccolordialog).

## <a name="getcolor"></a> CColorDialog::GetColor

Call this function after calling `DoModal` to retrieve the information about the color the user selected.

```
COLORREF GetColor() const;
```

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value that contains the RGB information for the color selected in the color dialog box.

### Example

[!code-cpp[NVC_MFCDocView#50](../../mfc/codesnippet/cpp/ccolordialog-class_2.cpp)]

## <a name="getsavedcustomcolors"></a> CColorDialog::GetSavedCustomColors

`CColorDialog` objects permit the user, in addition to choosing colors, to define up to 16 custom colors.

```
static COLORREF* PASCAL GetSavedCustomColors();
```

### Return Value

A pointer to an array of 16 RGB color values that stores custom colors created by the user.

### Remarks

The `GetSavedCustomColors` member function provides access to these colors. These colors can be retrieved after [DoModal](#domodal) returns IDOK.

Each of the 16 RGB values in the returned array is initialized to RGB(255,255,255) (white). The custom colors chosen by the user are saved only between dialog box invocations within the application. If you wish to save these colors between invocations of the application, you must save them in some other manner, such as in an initialization (.INI) file.

### Example

[!code-cpp[NVC_MFCDocView#51](../../mfc/codesnippet/cpp/ccolordialog-class_3.cpp)]

## <a name="m_cc"></a> CColorDialog::m_cc

A structure of type [CHOOSECOLOR](/windows/win32/api/commdlg/ns-commdlg-choosecolora-r1), whose members store the characteristics and values of the dialog box.

```
CHOOSECOLOR m_cc;
```

### Remarks

After constructing a `CColorDialog` object, you can use *m_cc* to set various aspects of the dialog box before calling the [DoModal](#domodal) member function.

### Example

[!code-cpp[NVC_MFCDocView#53](../../mfc/codesnippet/cpp/ccolordialog-class_4.cpp)]

## <a name="oncolorok"></a> CColorDialog::OnColorOK

Override to validate the color entered into the dialog box.

```
virtual BOOL OnColorOK();
```

### Return Value

Nonzero if the dialog box should not be dismissed; otherwise 0 to accept the color that was entered.

### Remarks

Override this function only if you want to provide custom validation of the color the user selects in the color dialog box.

The user can select a color by one of the following two methods:

- Clicking a color on the color palette. The selected color's RGB values are then reflected in the appropriate RGB edit boxes.

- Entering values in the RGB edit boxes

Overriding `OnColorOK` allows you to reject a color the user enters into a common color dialog box for any application-specific reason.

Normally, you do not need to use this function because the framework provides default validation of colors and displays a message box if an invalid color is entered.

You can call [SetCurrentColor](#setcurrentcolor) from within `OnColorOK` to force a color selection. Once `OnColorOK` has been fired (that is, the user clicks **OK** to accept the color change), you can call [GetColor](#getcolor) to get the RGB value of the new color.

### Example

[!code-cpp[NVC_MFCDocView#52](../../mfc/codesnippet/cpp/ccolordialog-class_5.cpp)]

## <a name="setcurrentcolor"></a> CColorDialog::SetCurrentColor

Call this function after calling `DoModal` to force the current color selection to the color value specified in *clr*.

```cpp
void SetCurrentColor(COLORREF clr);
```

### Parameters

*clr*<br/>
An RGB color value.

### Remarks

This function is called from within a message handler or `OnColorOK`. The dialog box will automatically update the user's selection based on the value of the *clr* parameter.

### Example

  See the example for [CColorDialog::OnColorOK](#oncolorok).

## See also

[MFC Sample MDI](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample DRAWCLI](../../overview/visual-cpp-samples.md)<br/>
[CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
