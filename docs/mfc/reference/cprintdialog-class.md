---
description: "Learn more about: CPrintDialog Class"
title: "CPrintDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CPrintDialog", "AFXDLGS/CPrintDialog", "AFXDLGS/CPrintDialog::CPrintDialog", "AFXDLGS/CPrintDialog::CreatePrinterDC", "AFXDLGS/CPrintDialog::DoModal", "AFXDLGS/CPrintDialog::GetCopies", "AFXDLGS/CPrintDialog::GetDefaults", "AFXDLGS/CPrintDialog::GetDeviceName", "AFXDLGS/CPrintDialog::GetDevMode", "AFXDLGS/CPrintDialog::GetDriverName", "AFXDLGS/CPrintDialog::GetFromPage", "AFXDLGS/CPrintDialog::GetPortName", "AFXDLGS/CPrintDialog::GetPrinterDC", "AFXDLGS/CPrintDialog::GetToPage", "AFXDLGS/CPrintDialog::PrintAll", "AFXDLGS/CPrintDialog::PrintCollate", "AFXDLGS/CPrintDialog::PrintRange", "AFXDLGS/CPrintDialog::PrintSelection", "AFXDLGS/CPrintDialog::m_pd"]
helpviewer_keywords: ["CPrintDialog [MFC], CPrintDialog", "CPrintDialog [MFC], CreatePrinterDC", "CPrintDialog [MFC], DoModal", "CPrintDialog [MFC], GetCopies", "CPrintDialog [MFC], GetDefaults", "CPrintDialog [MFC], GetDeviceName", "CPrintDialog [MFC], GetDevMode", "CPrintDialog [MFC], GetDriverName", "CPrintDialog [MFC], GetFromPage", "CPrintDialog [MFC], GetPortName", "CPrintDialog [MFC], GetPrinterDC", "CPrintDialog [MFC], GetToPage", "CPrintDialog [MFC], PrintAll", "CPrintDialog [MFC], PrintCollate", "CPrintDialog [MFC], PrintRange", "CPrintDialog [MFC], PrintSelection", "CPrintDialog [MFC], m_pd"]
ms.assetid: 5bdb2424-adf8-433d-a97c-df11a83bc4e4
---
# CPrintDialog Class

Encapsulates the services provided by the Windows common dialog box for printing.

## Syntax

```
class CPrintDialog : public CCommonDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPrintDialog::CPrintDialog](#cprintdialog)|Constructs a `CPrintDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPrintDialog::CreatePrinterDC](#createprinterdc)|Creates a printer device context without displaying the Print dialog box.|
|[CPrintDialog::DoModal](#domodal)|Displays the dialog box and allows the user to make a selection.|
|[CPrintDialog::GetCopies](#getcopies)|Retrieves the number of copies requested.|
|[CPrintDialog::GetDefaults](#getdefaults)|Retrieves device defaults without displaying a dialog box.|
|[CPrintDialog::GetDeviceName](#getdevicename)|Retrieves the name of the currently selected printer device.|
|[CPrintDialog::GetDevMode](#getdevmode)|Retrieves the `DEVMODE` structure.|
|[CPrintDialog::GetDriverName](#getdrivername)|Retrieves the name of the currently selected printer driver.|
|[CPrintDialog::GetFromPage](#getfrompage)|Retrieves the starting page of the print range.|
|[CPrintDialog::GetPortName](#getportname)|Retrieves the name of the currently selected printer port.|
|[CPrintDialog::GetPrinterDC](#getprinterdc)|Retrieves a handle to the printer device context.|
|[CPrintDialog::GetToPage](#gettopage)|Retrieves the ending page of the print range.|
|[CPrintDialog::PrintAll](#printall)|Determines whether to print all pages of the document.|
|[CPrintDialog::PrintCollate](#printcollate)|Determines whether collated copies are requested.|
|[CPrintDialog::PrintRange](#printrange)|Determines whether to print only a specified range of pages.|
|[CPrintDialog::PrintSelection](#printselection)|Determines whether to print only the currently selected items.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPrintDialog::m_pd](#m_pd)|A structure used to customize a `CPrintDialog` object.|

## Remarks

Common print dialog boxes provide an easy way to implement Print and Print Setup dialog boxes in a manner consistent with Windows standards.

> [!NOTE]
> The `CPrintDialogEx` class encapsulates the services provided by the Windows Print property sheet. For more information see the [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md) overview.

`CPrintDialog`'s functionality is superseded by that of [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md), which is designed to provide you with a common dialog box for both print setup and page setup.

You can rely on the framework to handle many aspects of the printing process for your application. In this case, the framework automatically displays the Windows common dialog box for printing. You can also have the framework handle printing for your application but override the common Print dialog box with your own print dialog box. For more information about using the framework to handle printing tasks, see the article [Printing](../../mfc/printing.md).

If you want your application to handle printing without the framework's involvement, you can use the `CPrintDialog` class "as is" with the constructor provided, or you can derive your own dialog class from `CPrintDialog` and write a constructor to suit your needs. In either case, these dialog boxes will behave like standard MFC dialog boxes because they are derived from class `CCommonDialog`.

To use a `CPrintDialog` object, first create the object using the `CPrintDialog` constructor. Once the dialog box has been constructed, you can set or modify any values in the [m_pd](#m_pd) structure to initialize the values of the dialog box's controls. The `m_pd` structure is of type [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga). For more information on this structure, see the Windows SDK.

If you do not supply your own handles in `m_pd` for the `hDevMode` and `hDevNames` members, be sure to call the Windows function `GlobalFree` for these handles when you are done with the dialog box. When using the framework's Print Setup implementation provided by `CWinApp::OnFilePrintSetup`, you do not have to free these handles. The handles are maintained by `CWinApp` and are freed in `CWinApp`'s destructor. It is only necessary to free these handles when using `CPrintDialog` stand-alone.

After initializing the dialog box controls, call the `DoModal` member function to display the dialog box and allow the user to select print options. `DoModal` returns whether the user selected the OK (IDOK) or Cancel (IDCANCEL) button.

If `DoModal` returns IDOK, you can use one of `CPrintDialog`'s member functions to retrieve the information input by the user.

The `CPrintDialog::GetDefaults` member function is useful for retrieving the current printer defaults without displaying a dialog box. This member function requires no user interaction.

You can use the Windows `CommDlgExtendedError` function to determine whether an error occurred during initialization of the dialog box and to learn more about the error. For more information on this function, see the Windows SDK.

`CPrintDialog` relies on the COMMDLG.DLL file that ships with Windows versions 3.1 and later.

To customize the dialog box, derive a class from `CPrintDialog`, provide a custom dialog template, and add a message map to process the notification messages from the extended controls. Any unprocessed messages should be passed on to the base class. Customizing the hook function is not required.

To process the same message differently depending on whether the dialog box is Print or Print Setup, you must derive a class for each dialog box. You must also override the Windows `AttachOnSetup` function, which handles the creation of a new dialog box when the Print Setup button is selected within a Print dialog box.

For more information on using `CPrintDialog`, see [Common Dialog Classes](../../mfc/common-dialog-classes.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPrintDialog`

## Requirements

**Header:** afxdlgs.h

## <a name="cprintdialog"></a> CPrintDialog::CPrintDialog

Constructs either a Windows Print or Print Setup dialog object.

```
CPrintDialog(
    BOOL bPrintSetupOnly,
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS | PD_HIDEPRINTTOFILE | PD_NOSELECTION,
    CWnd* pParentWnd = NULL);
```

### Parameters

*bPrintSetupOnly*<br/>
Specifies whether the standard Windows Print dialog box or Print Setup dialog box is displayed. Set this parameter to TRUE to display the standard Windows Print Setup dialog box. Set it to FALSE to display the Windows Print dialog box. If *bPrintSetupOnly* is FALSE, a Print Setup option button is still displayed in the Print dialog box.

*dwFlags*<br/>
One or more flags you can use to customize the settings of the dialog box, combined using the bitwise OR operator. For example, the PD_ALLPAGES flag sets the default print range to all pages of the document. See the [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) structure in the Windows SDK for more information on these flags.

*pParentWnd*<br/>
A pointer to the dialog box's parent or owner window.

### Remarks

This member function only constructs the object. Use the `DoModal` member function to display the dialog box.

Note that when you call the constructor with *bPrintSetupOnly* set to FALSE, the PD_RETURNDC flag is automatically used. After calling `DoModal`, `GetDefaults`, or `GetPrinterDC`, a printer DC will be returned in `m_pd.hDC`. This DC must be freed with a call to [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) by the caller of `CPrintDialog`.

### Example

[!code-cpp[NVC_MFCDocView#174](../../mfc/codesnippet/cpp/cprintdialog-class_1.cpp)]

## <a name="createprinterdc"></a> CPrintDialog::CreatePrinterDC

Creates a printer device context (DC) from the [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) and [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) structures.

```
HDC CreatePrinterDC();
```

### Return Value

Handle to the newly created printer device context.

### Remarks

This DC is assumed to be the current printer DC, and any other previously obtained printer DCs must be deleted by the user. This function can be called, and the resulting DC used, without ever displaying the Print dialog box.

### Example

[!code-cpp[NVC_MFCDocView#106](../../mfc/codesnippet/cpp/cprintdialog-class_2.cpp)]

## <a name="domodal"></a> CPrintDialog::DoModal

Displays the Windows common print dialog box and allows the user to select various printing options such as the number of copies, page range, and whether copies should be collated.

```
virtual INT_PTR DoModal();
```

### Return Value

IDOK or IDCANCEL. If IDCANCEL is returned, call the Windows [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) function to determine whether an error occurred.

IDOK and IDCANCEL are constants that indicate whether the user selected the OK or Cancel button.

### Remarks

If you want to initialize the various print dialog options by setting members of the `m_pd` structure, you should do this before calling `DoModal`, but after the dialog object is constructed.

After calling `DoModal`, you can call other member functions to retrieve the settings or information input by the user into the dialog box.

Note that when you call the constructor with *bPrintSetupOnly* set to FALSE, the PD_RETURNDC flag is automatically used. After calling `DoModal`, `GetDefaults`, or `GetPrinterDC`, a printer DC will be returned in `m_pd.hDC`. This DC must be freed with a call to [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) by the caller of `CPrintDialog`.

### Example

  See the example for [CPrintDialog::CreatePrinterDC](#createprinterdc).

## <a name="getcopies"></a> CPrintDialog::GetCopies

Retrieves the number of copies requested.

```
int GetCopies() const;
```

### Return Value

The number of copies requested.

### Remarks

Call this function after calling `DoModal` to retrieve the number of copies requested.

### Example

  See the example for [CPrintDialog::PrintCollate](#printcollate).

## <a name="getdefaults"></a> CPrintDialog::GetDefaults

Retrieves the device defaults of the default printer without displaying a dialog box.

```
BOOL GetDefaults();
```

### Return Value

Nonzero if the function was successful; otherwise 0.

### Remarks

The retrieved values are placed in the `m_pd` structure.

In some cases, a call to this function will call the [constructor](#cprintdialog) for `CPrintDialog` with *bPrintSetupOnly* set to FALSE. In these cases, a printer DC and `hDevNames` and `hDevMode` (two handles located in the `m_pd` data member) are automatically allocated.

If the constructor for `CPrintDialog` was called with *bPrintSetupOnly* set to FALSE, this function will not only return `hDevNames` and `hDevMode` located in `m_pd.hDevNames` and `m_pd.hDevMode`) to the caller, but will also return a printer DC in `m_pd.hDC`. It is the responsibility of the caller to delete the printer DC and call the Windows [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree) function on the handles when you are finished with the `CPrintDialog` object.

### Example

This code fragment gets the default printer's device context and reports to the user the resolution of the printer in dots per inch. (This attribute of the printer's capabilities is often referred to as DPI.)

[!code-cpp[NVC_MFCDocView#107](../../mfc/codesnippet/cpp/cprintdialog-class_3.cpp)]

## <a name="getdevicename"></a> CPrintDialog::GetDeviceName

Retrieves the name of the currently selected printer device.

```
CString GetDeviceName() const;
```

### Return Value

The name of the currently selected printer.

### Remarks

Call this function after calling [DoModal](#domodal) to retrieve the name of the currently selected printer, or after calling [GetDefaults](#getdefaults) to retrieve the current device defaults of the default printer. Use a pointer to the `CString` object returned by `GetDeviceName` as the value of `lpszDeviceName` in a call to [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

### Example

This code fragment shows the user's default printer name and the port it is connected to, along with the spooler name the printer uses. The code might show a message box that says, "Your default printer is HP LaserJet IIIP on \\\server\share using winspool.", for example.

[!code-cpp[NVC_MFCDocView#108](../../mfc/codesnippet/cpp/cprintdialog-class_4.cpp)]

## <a name="getdevmode"></a> CPrintDialog::GetDevMode

Retrieves the `DEVMODE` structure.

```
LPDEVMODE GetDevMode() const;
```

### Return Value

The [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) data structure, which contains information about the device initialization and environment of a print driver. You must unlock the memory taken by this structure with the Windows [GlobalUnlock](/windows/win32/api/winbase/nf-winbase-globalunlock) function, which is described in the Windows SDK.

### Remarks

Call this function after calling [DoModal](#domodal) or [GetDefaults](#getdefaults) to retrieve information about the printing device.

### Example

  See the example for [CPrintDialog::PrintCollate](#printcollate).

## <a name="getdrivername"></a> CPrintDialog::GetDriverName

Retrieves the name of the currently selected printer driver.

```
CString GetDriverName() const;
```

### Return Value

A `CString` specifying the system-defined driver name.

### Remarks

Call this function after calling [DoModal](#domodal) or [GetDefaults](#getdefaults) to retrieve the name of the system-defined printer device driver. Use a pointer to the `CString` object returned by `GetDriverName` as the value of `lpszDriverName` in a call to [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

### Example

  See the example for [CPrintDialog::GetDeviceName](#getdevicename).

## <a name="getfrompage"></a> CPrintDialog::GetFromPage

Retrieves the starting page of the print range.

```
int GetFromPage() const;
```

### Return Value

The starting page number in the range of pages to be printed.

### Remarks

Call this function after calling `DoModal` to retrieve the starting page number in the range of pages to be printed.

### Example

  See the example for [CPrintDialog::m_pd](#m_pd).

## <a name="getportname"></a> CPrintDialog::GetPortName

Retrieves the name of the currently selected printer port.

```
CString GetPortName() const;
```

### Return Value

The name of the currently selected printer port.

### Remarks

Call this function after calling [DoModal](#domodal) or [GetDefaults](#getdefaults) to retrieve the name of the currently selected printer port.

### Example

  See the example for [CPrintDialog::GetDeviceName](#getdevicename).

## <a name="getprinterdc"></a> CPrintDialog::GetPrinterDC

Retrieves a handle to the printer device context.

```
HDC GetPrinterDC() const;
```

### Return Value

A handle to the printer device context if successful; otherwise NULL.

### Remarks

If the *bPrintSetupOnly* parameter of the `CPrintDialog` constructor was FALSE (indicating that the Print dialog box is displayed), then `GetPrinterDC` returns a handle to the printer device context. You must call the Windows [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) function to delete the device context when you are done using it.

### Example

[!code-cpp[NVC_MFCDocView#109](../../mfc/codesnippet/cpp/cprintdialog-class_5.cpp)]

## <a name="gettopage"></a> CPrintDialog::GetToPage

Retrieves the ending page of the print range.

```
int GetToPage() const;
```

### Return Value

The ending page number in the range of pages to be printed.

### Remarks

Call this function after calling `DoModal` to retrieve the ending page number in the range of pages to be printed.

### Example

  See the example for [CPrintDialog::m_pd](#m_pd).

## <a name="m_pd"></a> CPrintDialog::m_pd

A structure whose members store the characteristics of the dialog object.

```
PRINTDLG& m_pd;
```

### Remarks

After constructing a `CPrintDialog` object, you can use `m_pd` to set various aspects of the dialog box before calling the [DoModal](#domodal) member function. For more information on the `m_pd` structure, see [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) in the Windows SDK.

If you modify the `m_pd` data member directly, you will override any default behavior.

### Example

[!code-cpp[NVC_MFCDocView#111](../../mfc/codesnippet/cpp/cprintdialog-class_6.cpp)]

## <a name="printall"></a> CPrintDialog::PrintAll

Determines whether to print all pages of the document.

```
BOOL PrintAll() const;
```

### Return Value

Nonzero if all pages in the document are to be printed; otherwise 0.

### Remarks

Call this function after calling `DoModal` to determine whether to print all pages in the document.

### Example

  See the example for [CPrintDialog::m_pd](#m_pd).

## <a name="printcollate"></a> CPrintDialog::PrintCollate

Determines whether collated copies are requested.

```
BOOL PrintCollate() const;
```

### Return Value

Nonzero if the user selects the collate check box in the dialog box; otherwise 0.

### Remarks

Call this function after calling `DoModal` to determine whether the printer should collate all printed copies of the document.

### Example

[!code-cpp[NVC_MFCDocView#110](../../mfc/codesnippet/cpp/cprintdialog-class_7.cpp)]

## <a name="printrange"></a> CPrintDialog::PrintRange

Determines whether to print only a specified range of pages.

```
BOOL PrintRange() const;
```

### Return Value

Nonzero if only a range of pages in the document are to be printed; otherwise 0.

### Remarks

Call this function after calling `DoModal` to determine whether to print only a range of pages in the document.

### Example

  See the example for [CPrintDialog::m_pd](#m_pd).

## <a name="printselection"></a> CPrintDialog::PrintSelection

Determines whether to print only the currently selected items.

```
BOOL PrintSelection() const;
```

### Return Value

Nonzero if only the selected items are to be printed; otherwise 0.

### Remarks

Call this function after calling `DoModal` to determine whether to print only the currently selected items.

### Example

  See the example for [CPrintDialog::m_pd](#m_pd).

## See also

[MFC Sample DIBLOOK](../../overview/visual-cpp-samples.md)<br/>
[CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CPrintInfo Structure](../../mfc/reference/cprintinfo-structure.md)
