---
description: "Learn more about: CPageSetupDialog Class"
title: "CPageSetupDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CPageSetupDialog", "AFXDLGS/CPageSetupDialog", "AFXDLGS/CPageSetupDialog::CPageSetupDialog", "AFXDLGS/CPageSetupDialog::CreatePrinterDC", "AFXDLGS/CPageSetupDialog::DoModal", "AFXDLGS/CPageSetupDialog::GetDeviceName", "AFXDLGS/CPageSetupDialog::GetDevMode", "AFXDLGS/CPageSetupDialog::GetDriverName", "AFXDLGS/CPageSetupDialog::GetMargins", "AFXDLGS/CPageSetupDialog::GetPaperSize", "AFXDLGS/CPageSetupDialog::GetPortName", "AFXDLGS/CPageSetupDialog::OnDrawPage", "AFXDLGS/CPageSetupDialog::PreDrawPage", "AFXDLGS/CPageSetupDialog::m_psd"]
helpviewer_keywords: ["CPageSetupDialog [MFC], CPageSetupDialog", "CPageSetupDialog [MFC], CreatePrinterDC", "CPageSetupDialog [MFC], DoModal", "CPageSetupDialog [MFC], GetDeviceName", "CPageSetupDialog [MFC], GetDevMode", "CPageSetupDialog [MFC], GetDriverName", "CPageSetupDialog [MFC], GetMargins", "CPageSetupDialog [MFC], GetPaperSize", "CPageSetupDialog [MFC], GetPortName", "CPageSetupDialog [MFC], OnDrawPage", "CPageSetupDialog [MFC], PreDrawPage", "CPageSetupDialog [MFC], m_psd"]
ms.assetid: 049c0ac8-f254-4854-9414-7a8271d1447a
---
# CPageSetupDialog Class

Encapsulates the services provided by the Windows common OLE Page Setup dialog box with additional support for setting and modifying print margins.

## Syntax

```
class CPageSetupDialog : public CCommonDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog)|Constructs a `CPageSetupDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPageSetupDialog::CreatePrinterDC](#createprinterdc)|Creates a device context for printing.|
|[CPageSetupDialog::DoModal](#domodal)|Displays the dialog box and allows the user make a selection.|
|[CPageSetupDialog::GetDeviceName](#getdevicename)|Returns the device name of the printer.|
|[CPageSetupDialog::GetDevMode](#getdevmode)|Returns the current DEVMODE of the printer.|
|[CPageSetupDialog::GetDriverName](#getdrivername)|Returns the driver used by the printer.|
|[CPageSetupDialog::GetMargins](#getmargins)|Returns the current margin settings of the printer.|
|[CPageSetupDialog::GetPaperSize](#getpapersize)|Returns the paper size of the printer.|
|[CPageSetupDialog::GetPortName](#getportname)|Returns the output port name.|
|[CPageSetupDialog::OnDrawPage](#ondrawpage)|Called by the framework to render a screen image of a printed page.|
|[CPageSetupDialog::PreDrawPage](#predrawpage)|Called by the framework before rendering a screen image of a printed page.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPageSetupDialog::m_psd](#m_psd)|A structure used to customize a `CPageSetupDialog` object.|

## Remarks

This class is designed to take the place of the Print Setup dialog box.

To use a `CPageSetupDialog` object, first create the object using the `CPageSetupDialog` constructor. Once the dialog box has been constructed, you can set or modify any values in the `m_psd` data member to initialize the values of the dialog box's controls. The [m_psd](#m_psd) structure is of type PAGESETUPDLG.

After initializing the dialog box controls, call the `DoModal` member function to display the dialog box and allow the user to select print options. `DoModal` returns whether the user selected the OK (IDOK) or Cancel (IDCANCEL) button.

If `DoModal` returns IDOK, you can use several of `CPageSetupDialog`'s member functions, or access the `m_psd` data member, to retrieve information input by the user.

> [!NOTE]
> After the common OLE Page Setup dialog box is dismissed, any changes made by the user will not be saved by the framework. It is up to the application itself to save any values from this dialog box to a permanent location, such as member of the application's document or application class.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPageSetupDialog`

## Requirements

**Header:** afxdlgs.h

## <a name="cpagesetupdialog"></a> CPageSetupDialog::CPageSetupDialog

Call this function to construct a `CPageSetupDialog` object.

```
CPageSetupDialog(
    DWORD dwFlags = PSD_MARGINS | PSD_INWININIINTLMEASURE,
    CWnd* pParentWnd = NULL);
```

### Parameters

*dwFlags*<br/>
One or more flags you can use to customize the settings of the dialog box. The values can be combined using the bitwise-OR operator. These values have the following meanings:

- PSD_DEFAULTMINMARGINS Sets the minimum allowable widths for the page margins to be the same as the printer's minimums. This flag is ignored if the PSD_MARGINS and PSD_MINMARGINS flags are also specified.

- PSD_INWININIINTLMEASURE Not implemented.

- PSD_MINMARGINS Causes the system to use the values specified in the `rtMinMargin` member as the minimum allowable widths for the left, top, right, and bottom margins. The system prevents the user from entering a width that is less than the specified minimum. If PSD_MINMARGINS is not specified, the system sets the minimum allowable widths to those allowed by the printer.

- PSD_MARGINS Activates the margin control area.

- PSD_INTHOUSANDTHSOFINCHES Causes the units of the dialog box to be measured in 1/1000 of an inch.

- PSD_INHUNDREDTHSOFMILLIMETERS Causes the units of the dialog box to be measured in 1/100 of a millimeter.

- PSD_DISABLEMARGINS Disables the margin dialog box controls.

- PSD_DISABLEPRINTER Disables the Printer button.

- PSD_NOWARNING Prevents the warning message from being displayed when there is no default printer.

- PSD_DISABLEORIENTATION Disables the page orientation dialog control.

- PSD_RETURNDEFAULT Causes `CPageSetupDialog` to return [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) and [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) structures that are initialized for the system default printer without displaying a dialog box. It is assumed that both `hDevNames` and `hDevMode` are NULL; otherwise, the function returns an error. If the system default printer is supported by an old printer driver (earlier than Windows version 3.0), only `hDevNames` is returned; `hDevMode` is NULL.

- PSD_DISABLEPAPER Disables the paper selection control.

- PSD_SHOWHELP Causes the dialog box to show the Help button. The `hwndOwner` member must not be NULL if this flag is specified.

- PSD_ENABLEPAGESETUPHOOK Enables the hook function specified in `lpfnSetupHook`.

- PSD_ENABLEPAGESETUPTEMPLATE Causes the operating system to create the dialog box by using the dialog template box identified by `hInstance` and `lpSetupTemplateName`.

- PSD_ENABLEPAGESETUPTEMPLATEHANDLE Indicates that `hInstance` identifies a data block that contains a preloaded dialog box template. The system ignores `lpSetupTemplateName` if this flag is specified.

- PSD_ENABLEPAGEPAINTHOOK Enables the hook function specified in `lpfnPagePaintHook`.

- PSD_DISABLEPAGEPAINTING Disables the draw area of the dialog box.

*pParentWnd*<br/>
Pointer to the dialog box's parent or owner.

### Remarks

Use the [DoModal](../../mfc/reference/cdialog-class.md#domodal) function to display the dialog box.

### Example

[!code-cpp[NVC_MFCDocView#94](../../mfc/codesnippet/cpp/cpagesetupdialog-class_1.cpp)]

## <a name="createprinterdc"></a> CPageSetupDialog::CreatePrinterDC

Creates a printer device context from the [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) and [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) structures.

```
HDC CreatePrinterDC();
```

### Return Value

Handle to the newly created printer device context (DC).

## <a name="domodal"></a> CPageSetupDialog::DoModal

Call this function to display the Windows common OLE Page Setup dialog box and allow the user to select various print setup options such as the printing margins, size and orientation of the paper, and destination printer.

```
virtual INT_PTR DoModal();
```

### Return Value

IDOK or IDCANCEL. If IDCANCEL is returned, call the Windows [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) function to determine whether an error occurred.

IDOK and IDCANCEL are constants that indicate whether the user selected the OK or Cancel button.

### Remarks

In addition, the user can access the printer setup options such as network location and properties specific to the selected printer.

If you want to initialize the various Page Setup dialog options by setting members of the `m_psd` structure, you should do so before calling `DoModal`, and after the dialog object is constructed. After calling `DoModal`, call other member functions to retrieve the settings or information input by the user into the dialog box.

If you want to propagate the current settings entered by the user, make a call to [CWinApp::SelectPrinter](../../mfc/reference/cwinapp-class.md#selectprinter). This function takes the information from the `CPageSetupDialog` object and initializes and selects a new printer DC with the proper attributes.

[!code-cpp[NVC_MFCDocView#95](../../mfc/codesnippet/cpp/cpagesetupdialog-class_2.cpp)]

### Example

  See the example for [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).

## <a name="getdevicename"></a> CPageSetupDialog::GetDeviceName

Call this function after `DoModal` to retrieve the name of the currently selected printer.

```
CString GetDeviceName() const;
```

### Return Value

The device name used by the `CPageSetupDialog` object.

## <a name="getdevmode"></a> CPageSetupDialog::GetDevMode

Call this function after calling `DoModal` to retrieve information about the printer device context of the `CPageSetupDialog` object.

```
LPDEVMODE GetDevMode() const;
```

### Return Value

The [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) data structure, which contains information about the device initialization and environment of a print driver. You must unlock the memory taken by this structure with the Windows [GlobalUnlock](/windows/win32/api/winbase/nf-winbase-globalunlock) function, which is described in the Windows SDK.

## <a name="getdrivername"></a> CPageSetupDialog::GetDriverName

Call this function after calling [DoModal](../../mfc/reference/cprintdialog-class.md#domodal) to retrieve the name of the system-defined printer device driver.

```
CString GetDriverName() const;
```

### Return Value

A `CString` specifying the system-defined driver name.

### Remarks

Use a pointer to the `CString` object returned by `GetDriverName` as the value of `lpszDriverName` in a call to [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

## <a name="getmargins"></a> CPageSetupDialog::GetMargins

Call this function after a call to `DoModal` to retrieve the margins of the printer device driver.

```cpp
void GetMargins(
    LPRECT lpRectMargins,
    LPRECT lpRectMinMargins) const;
```

### Parameters

*lpRectMargins*<br/>
Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or [CRect](../../atl-mfc-shared/reference/crect-class.md) object that describes (in 1/1000 inches or 1/100 mm) the print margins for the currently selected printer. Pass NULL for this parameter, if you are not interested in this rectangle.

*lpRectMinMargins*<br/>
Pointer to a `RECT` structure or `CRect` object that describes (in 1/1000 inches or 1/100 mm) the minimum print margins for the currently selected printer. Pass NULL for this parameter, if you are not interested in this rectangle.

## <a name="getpapersize"></a> CPageSetupDialog::GetPaperSize

Call this function to retrieve the size of the paper selected for printing.

```
CSize GetPaperSize() const;
```

### Return Value

A [CSize](../../atl-mfc-shared/reference/csize-class.md) object containing the size of the paper (in 1/1000 inches or 1/100 mm) selected for printing.

## <a name="getportname"></a> CPageSetupDialog::GetPortName

Call this function after calling `DoModal` to retrieve the name of the currently selected printer port.

```
CString GetPortName() const;
```

### Return Value

The name of the currently selected printer port.

## <a name="m_psd"></a> CPageSetupDialog::m_psd

A structure of type PAGESETUPDLG, whose members store the characteristics of the dialog object.

```
PAGESETUPDLG m_psd;
```

### Remarks

After constructing a `CPageSetupDialog` object, you can use `m_psd` to set various aspects of the dialog box before calling the `DoModal` member function.

If you modify the `m_psd` data member directly, you will override any default behavior.

For more information on the [PAGESETUPDLG](/windows/win32/api/commdlg/ns-commdlg-pagesetupdlgw) structure, see the Windows SDK.

See the example for [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).

## <a name="ondrawpage"></a> CPageSetupDialog::OnDrawPage

Called by the framework to draw a screen image of a printed page.

```
virtual UINT OnDrawPage(
    CDC* pDC,
    UINT nMessage,
    LPRECT lpRect);
```

### Parameters

*pDC*<br/>
Pointer to the printer device context.

*nMessage*<br/>
Specifies a message, indicating the area of the page currently being drawn. Can be one of the following:

- WM_PSD_FULLPAGERECT The entire page area.

- WM_PSD_MINMARGINRECT Current minimum margins.

- WM_PSD_MARGINRECT Current margins.

- WM_PSD_GREEKTEXTRECT Contents of the page.

- WM_PSD_ENVSTAMPRECT Area reserved for a postage stamp representation.

- WM_PSD_YAFULLPAGERECT Area for a return address representation. This area extends to the edges of the sample page area.

*lpRect*<br/>
Pointer to a [CRect](../../atl-mfc-shared/reference/crect-class.md) or [RECT](/windows/win32/api/windef/ns-windef-rect) object containing the coordinates of the drawing area.

### Return Value

Nonzero value if handled; otherwise 0.

### Remarks

This image is then displayed as part of the common OLE Page Setup dialog box. The default implementation draws an image of a page of text.

Override this function to customize the drawing of a specific area of the image, or the entire image. You can do this by using a **`switch`** statement with **`case`** statements checking the value of *nMessage*. For example, to customize the rendering of the contents of the page image, you could use the following example code:

[!code-cpp[NVC_MFCDocView#96](../../mfc/codesnippet/cpp/cpagesetupdialog-class_3.cpp)]

Note that you do not need to handle every case of *nMessage*. You can choose to handle one component of the image, several components of the image, or the whole area.

## <a name="predrawpage"></a> CPageSetupDialog::PreDrawPage

Called by the framework before drawing the screen image of a printed page.

```
virtual UINT PreDrawPage(
    WORD wPaper,
    WORD wFlags,
    LPPAGESETUPDLG pPSD);
```

### Parameters

*wPaper*<br/>
Specifies a value that indicates the paper size. This value can be one of the **DMPAPER_** values listed in the description of the [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) structure.

*wFlags*<br/>
Indicates the orientation of the paper or envelope, and whether the printer is a dot-matrix or HPPCL (Hewlett Packard Printer Control Language) device. This parameter can have one of the following values:

- 0x001   Paper in landscape mode (dot matrix)

- 0x003   Paper in landscape mode (HPPCL)

- 0x005   Paper in portrait mode (dot matrix)

- 0x007   Paper in portrait mode (HPPCL)

- 0x00b   Envelope in landscape mode (HPPCL)

- 0x00d   Envelope in portrait mode (dot matrix)

- 0x019   Envelope in landscape mode (dot matrix)

- 0x01f   Envelope in portrait mode (dot matrix)

*pPSD*<br/>
Pointer to a `PAGESETUPDLG` structure. For more information on [PAGESETUPDLG](/windows/win32/api/commdlg/ns-commdlg-pagesetupdlgw), see the Windows SDK.

### Return Value

Nonzero value if handled; otherwise 0.

### Remarks

Override this function to customize the drawing of the image. If you override this function and return TRUE, you must draw the entire image. If you override this function and return FALSE, the entire default image is drawn by the framework.

## See also

[MFC Sample WORDPAD](../../overview/visual-cpp-samples.md)<br/>
[CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
