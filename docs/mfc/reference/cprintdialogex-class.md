---
description: "Learn more about: CPrintDialogEx Class"
title: "CPrintDialogEx Class"
ms.date: "11/04/2016"
f1_keywords: ["CPrintDialogEx", "AFXDLGS/CPrintDialogEx", "AFXDLGS/CPrintDialogEx::CPrintDialogEx", "AFXDLGS/CPrintDialogEx::CreatePrinterDC", "AFXDLGS/CPrintDialogEx::DoModal", "AFXDLGS/CPrintDialogEx::GetCopies", "AFXDLGS/CPrintDialogEx::GetDefaults", "AFXDLGS/CPrintDialogEx::GetDeviceName", "AFXDLGS/CPrintDialogEx::GetDevMode", "AFXDLGS/CPrintDialogEx::GetDriverName", "AFXDLGS/CPrintDialogEx::GetPortName", "AFXDLGS/CPrintDialogEx::GetPrinterDC", "AFXDLGS/CPrintDialogEx::PrintAll", "AFXDLGS/CPrintDialogEx::PrintCollate", "AFXDLGS/CPrintDialogEx::PrintCurrentPage", "AFXDLGS/CPrintDialogEx::PrintRange", "AFXDLGS/CPrintDialogEx::PrintSelection", "AFXDLGS/CPrintDialogEx::m_pdex"]
helpviewer_keywords: ["CPrintDialogEx [MFC], CPrintDialogEx", "CPrintDialogEx [MFC], CreatePrinterDC", "CPrintDialogEx [MFC], DoModal", "CPrintDialogEx [MFC], GetCopies", "CPrintDialogEx [MFC], GetDefaults", "CPrintDialogEx [MFC], GetDeviceName", "CPrintDialogEx [MFC], GetDevMode", "CPrintDialogEx [MFC], GetDriverName", "CPrintDialogEx [MFC], GetPortName", "CPrintDialogEx [MFC], GetPrinterDC", "CPrintDialogEx [MFC], PrintAll", "CPrintDialogEx [MFC], PrintCollate", "CPrintDialogEx [MFC], PrintCurrentPage", "CPrintDialogEx [MFC], PrintRange", "CPrintDialogEx [MFC], PrintSelection", "CPrintDialogEx [MFC], m_pdex"]
ms.assetid: 1d506703-ee1c-44cc-b4ce-4e778fec26b8
---
# CPrintDialogEx Class

Encapsulates the services provided by the Windows Print property sheet.

## Syntax

```
class CPrintDialogEx : public CCommonDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPrintDialogEx::CPrintDialogEx](#cprintdialogex)|Constructs a `CPrintDialogEx` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPrintDialogEx::CreatePrinterDC](#createprinterdc)|Creates a printer device context without displaying the Print dialog box.|
|[CPrintDialogEx::DoModal](#domodal)|Displays the dialog box and allows the user to make selections.|
|[CPrintDialogEx::GetCopies](#getcopies)|Retrieves the number of copies requested.|
|[CPrintDialogEx::GetDefaults](#getdefaults)|Retrieves device defaults without displaying a dialog box.|
|[CPrintDialogEx::GetDeviceName](#getdevicename)|Retrieves the name of the currently selected printer device.|
|[CPrintDialogEx::GetDevMode](#getdevmode)|Retrieves the `DEVMODE` structure.|
|[CPrintDialogEx::GetDriverName](#getdrivername)|Retrieves the name of the system-defined printer device driver.|
|[CPrintDialogEx::GetPortName](#getportname)|Retrieves the name of the currently selected printer port.|
|[CPrintDialogEx::GetPrinterDC](#getprinterdc)|Retrieves a handle to the printer device context.|
|[CPrintDialogEx::PrintAll](#printall)|Determines whether to print all pages of the document.|
|[CPrintDialogEx::PrintCollate](#printcollate)|Determines whether collated copies are requested.|
|[CPrintDialogEx::PrintCurrentPage](#printcurrentpage)|Determines whether to print the current page of the document.|
|[CPrintDialogEx::PrintRange](#printrange)|Determines whether to print only a specified range of pages.|
|[CPrintDialogEx::PrintSelection](#printselection)|Determines whether to print only the currently selected items.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPrintDialogEx::m_pdex](#m_pdex)|A structure used to customize a `CPrintDialogEx` object.|

## Remarks

You can rely on the framework to handle many aspects of the printing process for your application. For more information about using the framework to handle printing tasks, see the article [Printing](../../mfc/printing.md).

If you want your application to handle printing without the framework's involvement, you can use the `CPrintDialogEx` class "as is" with the constructor provided, or you can derive your own dialog class from `CPrintDialogEx` and write a constructor to suit your needs. In either case, these dialog boxes will behave like standard MFC dialog boxes because they are derived from class `CCommonDialog`.

To use a `CPrintDialogEx` object, first create the object using the `CPrintDialogEx` constructor. Once the dialog box has been constructed, you can set or modify any values in the [m_pdex](#m_pdex) structure to initialize the values of the dialog box's controls. The `m_pdex` structure is of type [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw). For more information on this structure, see the Windows SDK.

If you do not supply your own handles in `m_pdex` for the `hDevMode` and `hDevNames` members, be sure to call the Windows function `GlobalFree` for these handles when you are done with the dialog box.

After initializing the dialog box controls, call the `DoModal` member function to display the dialog box and allow the user to select print options. When `DoModal` returns, you can determine whether the user selected the OK, Apply, or Cancel button.

If the user pressed OK, you can use `CPrintDialogEx`'s member functions to retrieve the information input by the user.

The `CPrintDialogEx::GetDefaults` member function is useful for retrieving the current printer defaults without displaying a dialog box. This method requires no user interaction.

You can use the Windows `CommDlgExtendedError` function to determine whether an error occurred during initialization of the dialog box and to learn more about the error. For more information on this function, see the Windows SDK.

For more information on using `CPrintDialogEx`, see [Common Dialog Classes](../../mfc/common-dialog-classes.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`IObjectWithSite`

`IPrintDialogCallback`

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPrintDialogEx`

## Requirements

**Header:** afxdlgs.h

## <a name="cprintdialogex"></a> CPrintDialogEx::CPrintDialogEx

Constructs a Windows Print property sheet.

```
CPrintDialogEx(
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS       | PD_HIDEPRINTTOFILE | PD_NOSELECTION | PD_NOCURRENTPAGE,
    CWnd* pParentWnd = NULL);
```

### Parameters

*dwFlags*<br/>
One or more flags you can use to customize the settings of the dialog box, combined using the bitwise OR operator. For example, the PD_ALLPAGES flag sets the default print range to all pages of the document. See the [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw) structure in the Windows SDK for more information on these flags.

*pParentWnd*<br/>
A pointer to the dialog box's parent or owner window.

### Remarks

This member function only constructs the object. Use the `DoModal` member function to display the dialog box.

## <a name="createprinterdc"></a> CPrintDialogEx::CreatePrinterDC

Creates a printer device context (DC) from the [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) and [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) structures.

```
HDC CreatePrinterDC();
```

### Return Value

Handle to the newly created printer device context.

### Remarks

The returned DC is also stored in the `hDC` member of [m_pdex](#m_pdex).

This DC is assumed to be the current printer DC, and any other previously obtained printer DCs must be deleted. This function can be called, and the resulting DC used, without ever displaying the Print dialog box.

## <a name="domodal"></a> CPrintDialogEx::DoModal

Call this function to display the Windows Print property sheet and allow the user to select various printing options such as the number of copies, page range, and whether copies should be collated.

```
virtual INT_PTR DoModal();
```

### Return Value

The INT_PTR return value is actually an HRESULT. See the Return Values section in [PrintDlgEx](/previous-versions/windows/desktop/legacy/ms646942\(v=vs.85\)) in the Windows SDK.

### Remarks

If you want to initialize the various print dialog options by setting members of the `m_pdex` structure, you should do this before calling `DoModal`, but after the dialog object is constructed.

After calling `DoModal`, you can call other member functions to retrieve the settings or information input by the user into the dialog box.

If the PD_RETURNDC flag is used when calling `DoModal`, a printer DC will be returned in the `hDC` member of [m_pdex](#m_pdex). This DC must be freed with a call to [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) by the caller of `CPrintDialogEx`.

## <a name="getcopies"></a> CPrintDialogEx::GetCopies

Call this function after calling `DoModal` to retrieve the number of copies requested.

```
int GetCopies() const;
```

### Return Value

The number of copies requested.

## <a name="getdefaults"></a> CPrintDialogEx::GetDefaults

Call this function to retrieve the device defaults of the default printer without displaying a dialog box.

```
BOOL GetDefaults();
```

### Return Value

TRUE if successful, otherwise FALSE.

### Remarks

Creates a printer device context (DC) from the [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) and [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) structures.

`GetDefaults` does not display the Print property sheet. Instead, it sets the `hDevNames` and `hDevMode` members of [m_pdex](#m_pdex) to handles to the [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) and [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) structures that are initialized for the system default printer. Both `hDevNames` and `hDevMode` must be NULL, or `GetDefaults` fails.

If the PD_RETURNDC flag is set, this function will not only return `hDevNames` and `hDevMode` (located in `m_pdex.hDevNames` and `m_pdex.hDevMode`) to the caller, but will also return a printer DC in `m_pdex.hDC`. It is the responsibility of the caller to delete the printer DC and call the Windows [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree) function on the handles when you are finished with the `CPrintDialogEx` object.

## <a name="getdevicename"></a> CPrintDialogEx::GetDeviceName

Call this function after calling [DoModal](#domodal) to retrieve the name of the currently selected printer, or after calling [GetDefaults](#getdefaults) to retrieve the name of the default printer.

```
CString GetDeviceName() const;
```

### Return Value

The name of the currently selected printer.

### Remarks

Use a pointer to the `CString` object returned by `GetDeviceName` as the value of `lpszDeviceName` in a call to [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

## <a name="getdevmode"></a> CPrintDialogEx::GetDevMode

Call this function after calling [DoModal](#domodal) or [GetDefaults](#getdefaults) to retrieve information about the printing device.

```
LPDEVMODE GetDevMode() const;
```

### Return Value

The [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) data structure, which contains information about the device initialization and environment of a print driver. You must unlock the memory taken by this structure with the Windows [GlobalUnlock](/windows/win32/api/winbase/nf-winbase-globalunlock) function, which is described in the Windows SDK.

## <a name="getdrivername"></a> CPrintDialogEx::GetDriverName

Call this function after calling [DoModal](#domodal) or [GetDefaults](#getdefaults) to retrieve the name of the system-defined printer device driver.

```
CString GetDriverName() const;
```

### Return Value

A `CString` specifying the system-defined driver name.

### Remarks

Use a pointer to the `CString` object returned by `GetDriverName` as the value of *lpszDriverName* in a call to [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

## <a name="getportname"></a> CPrintDialogEx::GetPortName

Call this function after calling [DoModal](#domodal) or [GetDefaults](#getdefaults) to retrieve the name of the currently selected printer port.

```
CString GetPortName() const;
```

### Return Value

The name of the currently selected printer port.

## <a name="getprinterdc"></a> CPrintDialogEx::GetPrinterDC

Returns a handle to the printer device context.

```
HDC GetPrinterDC() const;
```

### Return Value

A handle to the printer device context.

### Remarks

You must call the Windows [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) function to delete the device context when you are done using it.

## <a name="m_pdex"></a> CPrintDialogEx::m_pdex

A PRINTDLGEX structure whose members store the characteristics of the dialog object.

```
PRINTDLGEX m_pdex;
```

### Remarks

After constructing a `CPrintDialogEx` object, you can use `m_pdex` to set various aspects of the dialog box before calling the [DoModal](#domodal) member function. For more information on the `m_pdex` structure, see [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw) in the Windows SDK.

If you modify the `m_pdex` data member directly, you will override any default behavior.

## <a name="printall"></a> CPrintDialogEx::PrintAll

Call this function after calling `DoModal` to determine whether to print all pages in the document.

```
BOOL PrintAll() const;
```

### Return Value

TRUE if all pages in the document are to be printed; otherwise FALSE.

## <a name="printcollate"></a> CPrintDialogEx::PrintCollate

Call this function after calling `DoModal` to determine whether the printer should collate all printed copies of the document.

```
BOOL PrintCollate() const;
```

### Return Value

TRUE if the user selects the collate check box in the dialog box; otherwise FALSE.

## <a name="printcurrentpage"></a> CPrintDialogEx::PrintCurrentPage

Call this function after calling `DoModal` to determine whether to print the current page in the document.

```
BOOL PrintCurrentPage() const;
```

### Return Value

TRUE if **Print Current Page** is selected in the print dialog; otherwise FALSE.

## <a name="printrange"></a> CPrintDialogEx::PrintRange

Call this function after calling `DoModal` to determine whether to print only a range of pages in the document.

```
BOOL PrintRange() const;
```

### Return Value

TRUE if only a range of pages in the document are to be printed; otherwise FALSE.

### Remarks

The specified page ranges can be determined from [m_pdex](#m_pdex) (see `nPageRanges`, `nMaxPageRanges`, and `lpPageRanges` in the [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw) structure in the Windows SDK).

## <a name="printselection"></a> CPrintDialogEx::PrintSelection

Call this function after calling `DoModal` to determine whether to print only the currently selected items.

```
BOOL PrintSelection() const;
```

### Return Value

TRUE if only the selected items are to be printed; otherwise FALSE.

## See also

[CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CPrintInfo Structure](../../mfc/reference/cprintinfo-structure.md)
