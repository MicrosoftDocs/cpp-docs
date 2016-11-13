---
title: "CPrintDialogEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPrintDialogEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Print Setup dialog box"
  - "CPrintDialogEx class"
  - "Print dialog box"
ms.assetid: 1d506703-ee1c-44cc-b4ce-4e778fec26b8
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CPrintDialogEx Class
Encapsulates the services provided by the Windows 2000 Print property sheet.  
  
## Syntax  
  
```  
class CPrintDialogEx : public CCommonDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPrintDialogEx::CPrintDialogEx](#cprintdialogex__cprintdialogex)|Constructs a `CPrintDialogEx` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPrintDialogEx::CreatePrinterDC](#cprintdialogex__createprinterdc)|Creates a printer device context without displaying the Print dialog box.|  
|[CPrintDialogEx::DoModal](#cprintdialogex__domodal)|Displays the dialog box and allows the user to make selections.|  
|[CPrintDialogEx::GetCopies](#cprintdialogex__getcopies)|Retrieves the number of copies requested.|  
|[CPrintDialogEx::GetDefaults](#cprintdialogex__getdefaults)|Retrieves device defaults without displaying a dialog box.|  
|[CPrintDialogEx::GetDeviceName](#cprintdialogex__getdevicename)|Retrieves the name of the currently selected printer device.|  
|[CPrintDialogEx::GetDevMode](#cprintdialogex__getdevmode)|Retrieves the `DEVMODE` structure.|  
|[CPrintDialogEx::GetDriverName](#cprintdialogex__getdrivername)|Retrieves the name of the system-defined printer device driver.|  
|[CPrintDialogEx::GetPortName](#cprintdialogex__getportname)|Retrieves the name of the currently selected printer port.|  
|[CPrintDialogEx::GetPrinterDC](#cprintdialogex__getprinterdc)|Retrieves a handle to the printer device context.|  
|[CPrintDialogEx::PrintAll](#cprintdialogex__printall)|Determines whether to print all pages of the document.|  
|[CPrintDialogEx::PrintCollate](#cprintdialogex__printcollate)|Determines whether collated copies are requested.|  
|[CPrintDialogEx::PrintCurrentPage](#cprintdialogex__printcurrentpage)|Determines whether to print the current page of the document.|  
|[CPrintDialogEx::PrintRange](#cprintdialogex__printrange)|Determines whether to print only a specified range of pages.|  
|[CPrintDialogEx::PrintSelection](#cprintdialogex__printselection)|Determines whether to print only the currently selected items.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPrintDialogEx::m_pdex](#cprintdialogex__m_pdex)|A structure used to customize a `CPrintDialogEx` object.|  
  
## Remarks  
 You can rely on the framework to handle many aspects of the printing process for your application. For more information about using the framework to handle printing tasks, see the article [Printing](../../mfc/printing.md).  
  
 If you want your application to handle printing without the framework's involvement, you can use the `CPrintDialogEx` class "as is" with the constructor provided, or you can derive your own dialog class from `CPrintDialogEx` and write a constructor to suit your needs. In either case, these dialog boxes will behave like standard MFC dialog boxes because they are derived from class `CCommonDialog`.  
  
 To use a `CPrintDialogEx` object, first create the object using the `CPrintDialogEx` constructor. Once the dialog box has been constructed, you can set or modify any values in the [m_pdex](#cprintdialogex__m_pdex) structure to initialize the values of the dialog box's controls. The `m_pdex` structure is of type [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844). For more information on this structure, see the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 If you do not supply your own handles in `m_pdex` for the **hDevMode** and **hDevNames** members, be sure to call the Windows function **GlobalFree** for these handles when you are done with the dialog box.  
  
 After initializing the dialog box controls, call the `DoModal` member function to display the dialog box and allow the user to select print options. When `DoModal` returns, you can determine whether the user selected the OK, Apply, or Cancel button.  
  
 If the user pressed OK, you can use `CPrintDialogEx`'s member functions to retrieve the information input by the user.  
  
 The `CPrintDialogEx::GetDefaults` member function is useful for retrieving the current printer defaults without displaying a dialog box. This method requires no user interaction.  
  
 You can use the Windows **CommDlgExtendedError** function to determine whether an error occurred during initialization of the dialog box and to learn more about the error. For more information on this function, see the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
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
  
##  <a name="cprintdialogex__cprintdialogex"></a>  CPrintDialogEx::CPrintDialogEx  
 Constructs a Windows 2000 Print property sheet.  
  
```  
CPrintDialogEx(
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS       | PD_HIDEPRINTTOFILE | PD_NOSELECTION | PD_NOCURRENTPAGE,  
    CWnd* pParentWnd = NULL);
```  
  
### Parameters  
 `dwFlags`  
 One or more flags you can use to customize the settings of the dialog box, combined using the bitwise OR operator. For example, the **PD_ALLPAGES** flag sets the default print range to all pages of the document. See the [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information on these flags.  
  
 `pParentWnd`  
 A pointer to the dialog box's parent or owner window.  
  
### Remarks  
 This member function only constructs the object. Use the `DoModal` member function to display the dialog box.  
  
##  <a name="cprintdialogex__createprinterdc"></a>  CPrintDialogEx::CreatePrinterDC  
 Creates a printer device context (DC) from the [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) and [DEVNAMES](../../mfc/reference/devnames-structure.md) structures.  
  
```  
HDC CreatePrinterDC();
```  
  
### Return Value  
 Handle to the newly created printer device context.  
  
### Remarks  
 The returned DC is also stored in the **hDC** member of [m_pdex](#cprintdialogex__m_pdex).  
  
 This DC is assumed to be the current printer DC, and any other previously obtained printer DCs must be deleted. This function can be called, and the resulting DC used, without ever displaying the Print dialog box.  
  
##  <a name="cprintdialogex__domodal"></a>  CPrintDialogEx::DoModal  
 Call this function to display the Windows 2000 common Print property sheet and allow the user to select various printing options such as the number of copies, page range, and whether copies should be collated.  
  
```  
virtual INT_PTR DoModal();
```  
  
### Return Value  
 The INT_PTR return value is actually an HRESULT. See the Return Values section in [PrintDlgEx](http://msdn.microsoft.com/library/windows/desktop/ms646942) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 If you want to initialize the various print dialog options by setting members of the `m_pdex` structure, you should do this before calling `DoModal`, but after the dialog object is constructed.  
  
 After calling `DoModal`, you can call other member functions to retrieve the settings or information input by the user into the dialog box.  
  
 If the **PD_RETURNDC** flag is used when calling `DoModal`, a printer DC will be returned in the **hDC** member of [m_pdex](#cprintdialogex__m_pdex). This DC must be freed with a call to [DeleteDC](http://msdn.microsoft.com/library/windows/desktop/dd183533) by the caller of `CPrintDialogEx`.  
  
##  <a name="cprintdialogex__getcopies"></a>  CPrintDialogEx::GetCopies  
 Call this function after calling `DoModal` to retrieve the number of copies requested.  
  
```  
int GetCopies() const;

 
```  
  
### Return Value  
 The number of copies requested.  
  
##  <a name="cprintdialogex__getdefaults"></a>  CPrintDialogEx::GetDefaults  
 Call this function to retrieve the device defaults of the default printer without displaying a dialog box.  
  
```  
BOOL GetDefaults();
```  
  
### Return Value  
 **TRUE** if successful, otherwise **FALSE**.  
  
### Remarks  
 Creates a printer device context (DC) from the [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) and [DEVNAMES](../../mfc/reference/devnames-structure.md) structures.  
  
 `GetDefaults` does not display the Print property sheet. Instead, it sets the **hDevNames** and **hDevMode** members of [m_pdex](#cprintdialogex__m_pdex) to handles to the [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) and [DEVNAMES](../../mfc/reference/devnames-structure.md) structures that are initialized for the system default printer. Both **hDevNames** and **hDevMode** must be NULL, or `GetDefaults` fails.  
  
 If the **PD_RETURNDC** flag is set, this function will not only return **hDevNames** and **hDevMode** (located in **m_pdex.hDevNames** and **m_pdex.hDevMode**) to the caller, but will also return a printer DC in **m_pdex.hDC**. It is the responsibility of the caller to delete the printer DC and call the Windows [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579) function on the handles when you are finished with the `CPrintDialogEx` object.  
  
##  <a name="cprintdialogex__getdevicename"></a>  CPrintDialogEx::GetDeviceName  
 Call this function after calling [DoModal](#cprintdialogex__domodal) to retrieve the name of the currently selected printer, or after calling [GetDefaults](#cprintdialogex__getdefaults) to retrieve the name of the default printer.  
  
```  
CString GetDeviceName() const;

 
```  
  
### Return Value  
 The name of the currently selected printer.  
  
### Remarks  
 Use a pointer to the `CString` object returned by `GetDeviceName` as the value of `lpszDeviceName` in a call to [CDC::CreateDC](../../mfc/reference/cdc-class.md#cdc__createdc).  
  
##  <a name="cprintdialogex__getdevmode"></a>  CPrintDialogEx::GetDevMode  
 Call this function after calling [DoModal](#cprintdialogex__domodal) or [GetDefaults](#cprintdialogex__getdefaults) to retrieve information about the printing device.  
  
```  
LPDEVMODE GetDevMode() const;

 
```  
  
### Return Value  
 The [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) data structure, which contains information about the device initialization and environment of a print driver. You must unlock the memory taken by this structure with the Windows [GlobalUnlock](http://msdn.microsoft.com/library/windows/desktop/aa366595) function, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cprintdialogex__getdrivername"></a>  CPrintDialogEx::GetDriverName  
 Call this function after calling [DoModal](#cprintdialogex__domodal) or [GetDefaults](#cprintdialogex__getdefaults) to retrieve the name of the system-defined printer device driver.  
  
```  
CString GetDriverName() const;

 
```  
  
### Return Value  
 A `CString` specifying the system-defined driver name.  
  
### Remarks  
 Use a pointer to the `CString` object returned by `GetDriverName` as the value of `lpszDriverName` in a call to [CDC::CreateDC](../../mfc/reference/cdc-class.md#cdc__createdc).  
  
##  <a name="cprintdialogex__getportname"></a>  CPrintDialogEx::GetPortName  
 Call this function after calling [DoModal](#cprintdialogex__domodal) or [GetDefaults](#cprintdialogex__getdefaults) to retrieve the name of the currently selected printer port.  
  
```  
CString GetPortName() const;

 
```  
  
### Return Value  
 The name of the currently selected printer port.  
  
##  <a name="cprintdialogex__getprinterdc"></a>  CPrintDialogEx::GetPrinterDC  
 Returns a handle to the printer device context.  
  
```  
HDC GetPrinterDC() const;

 
```  
  
### Return Value  
 A handle to the printer device context.  
  
### Remarks  
 You must call the Windows [DeleteDC](http://msdn.microsoft.com/library/windows/desktop/dd183533) function to delete the device context when you are done using it.  
  
##  <a name="cprintdialogex__m_pdex"></a>  CPrintDialogEx::m_pdex  
 A PRINTDLGEX structure whose members store the characteristics of the dialog object.  
  
```  
PRINTDLGEX m_pdex;  
```  
  
### Remarks  
 After constructing a `CPrintDialogEx` object, you can use `m_pdex` to set various aspects of the dialog box before calling the [DoModal](#cprintdialogex__domodal) member function. For more information on the `m_pdex` structure, see [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 If you modify the `m_pdex` data member directly, you will override any default behavior.  
  
##  <a name="cprintdialogex__printall"></a>  CPrintDialogEx::PrintAll  
 Call this function after calling `DoModal` to determine whether to print all pages in the document.  
  
```  
BOOL PrintAll() const;

 
```  
  
### Return Value  
 **TRUE** if all pages in the document are to be printed; otherwise **FALSE**.  
  
##  <a name="cprintdialogex__printcollate"></a>  CPrintDialogEx::PrintCollate  
 Call this function after calling `DoModal` to determine whether the printer should collate all printed copies of the document.  
  
```  
BOOL PrintCollate() const;

 
```  
  
### Return Value  
 **TRUE** if the user selects the collate check box in the dialog box; otherwise **FALSE**.  
  
##  <a name="cprintdialogex__printcurrentpage"></a>  CPrintDialogEx::PrintCurrentPage  
 Call this function after calling `DoModal` to determine whether to print the current page in the document.  
  
```  
BOOL PrintCurrentPage() const;

 
```  
  
### Return Value  
 **TRUE** if **Print Current Page** is selected in the print dialog; otherwise **FALSE**.  
  
##  <a name="cprintdialogex__printrange"></a>  CPrintDialogEx::PrintRange  
 Call this function after calling `DoModal` to determine whether to print only a range of pages in the document.  
  
```  
BOOL PrintRange() const;

 
```  
  
### Return Value  
 **TRUE** if only a range of pages in the document are to be printed; otherwise **FALSE**.  
  
### Remarks  
 The specified page ranges can be determined from [m_pdex](#cprintdialogex__m_pdex) (see **nPageRanges**, **nMaxPageRanges**, and **lpPageRanges** in the [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]).  
  
##  <a name="cprintdialogex__printselection"></a>  CPrintDialogEx::PrintSelection  
 Call this function after calling `DoModal` to determine whether to print only the currently selected items.  
  
```  
BOOL PrintSelection() const;

 
```  
  
### Return Value  
 **TRUE** if only the selected items are to be printed; otherwise **FALSE**.  
  
## See Also  
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CPrintInfo Structure](../../mfc/reference/cprintinfo-structure.md)
