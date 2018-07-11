---
title: "COlePasteSpecialDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["COlePasteSpecialDialog", "AFXODLGS/COlePasteSpecialDialog", "AFXODLGS/COlePasteSpecialDialog::COlePasteSpecialDialog", "AFXODLGS/COlePasteSpecialDialog::AddFormat", "AFXODLGS/COlePasteSpecialDialog::AddLinkEntry", "AFXODLGS/COlePasteSpecialDialog::AddStandardFormats", "AFXODLGS/COlePasteSpecialDialog::CreateItem", "AFXODLGS/COlePasteSpecialDialog::DoModal", "AFXODLGS/COlePasteSpecialDialog::GetDrawAspect", "AFXODLGS/COlePasteSpecialDialog::GetIconicMetafile", "AFXODLGS/COlePasteSpecialDialog::GetPasteIndex", "AFXODLGS/COlePasteSpecialDialog::GetSelectionType", "AFXODLGS/COlePasteSpecialDialog::m_ps"]
dev_langs: ["C++"]
helpviewer_keywords: ["COlePasteSpecialDialog [MFC], COlePasteSpecialDialog", "COlePasteSpecialDialog [MFC], AddFormat", "COlePasteSpecialDialog [MFC], AddLinkEntry", "COlePasteSpecialDialog [MFC], AddStandardFormats", "COlePasteSpecialDialog [MFC], CreateItem", "COlePasteSpecialDialog [MFC], DoModal", "COlePasteSpecialDialog [MFC], GetDrawAspect", "COlePasteSpecialDialog [MFC], GetIconicMetafile", "COlePasteSpecialDialog [MFC], GetPasteIndex", "COlePasteSpecialDialog [MFC], GetSelectionType", "COlePasteSpecialDialog [MFC], m_ps"]
ms.assetid: 0e82ef9a-9bbe-457e-8240-42c86a0534f7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# COlePasteSpecialDialog Class
Used for the OLE Paste Special dialog box.  
  
## Syntax  
  
```  
class COlePasteSpecialDialog : public COleDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COlePasteSpecialDialog::COlePasteSpecialDialog](#colepastespecialdialog)|Constructs a `COlePasteSpecialDialog` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COlePasteSpecialDialog::AddFormat](#addformat)|Adds custom formats to the list of formats your application can paste.|  
|[COlePasteSpecialDialog::AddLinkEntry](#addlinkentry)|Adds a new entry to the list of supported Clipboard formats.|  
|[COlePasteSpecialDialog::AddStandardFormats](#addstandardformats)|Adds CF_BITMAP, CF_DIB, CF_METAFILEPICT, and optionally CF_LINKSOURCE to the list of formats your application can paste.|  
|[COlePasteSpecialDialog::CreateItem](#createitem)|Creates the item in the container document using the specified format.|  
|[COlePasteSpecialDialog::DoModal](#domodal)|Displays the OLE Paste Special dialog box.|  
|[COlePasteSpecialDialog::GetDrawAspect](#getdrawaspect)|Tells whether to draw item as an icon or not.|  
|[COlePasteSpecialDialog::GetIconicMetafile](#geticonicmetafile)|Gets a handle to the metafile associated with the iconic form of this item.|  
|[COlePasteSpecialDialog::GetPasteIndex](#getpasteindex)|Gets the index of available paste options that was chosen by the user.|  
|[COlePasteSpecialDialog::GetSelectionType](#getselectiontype)|Gets the type of selection chosen.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COlePasteSpecialDialog::m_ps](#m_ps)|A structure of type OLEUIPASTESPECIAL that controls the function of the dialog box.|  
  
## Remarks  
 Create an object of class `COlePasteSpecialDialog` when you want to call this dialog box. After a `COlePasteSpecialDialog` object has been constructed, you can use the [AddFormat](#addformat) and [AddStandardFormats](#addstandardformats) member functions to add Clipboard formats to the dialog box. You can also use the [m_ps](#m_ps) structure to initialize the values or states of controls in the dialog box. The `m_ps` structure is of type OLEUIPASTESPECIAL.  
  
 For more information, see the [OLEUIPASTESPECIAL](http://msdn.microsoft.com/library/windows/desktop/ms692434) structure in the Windows SDK.  
  
 For more information regarding OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COlePasteSpecialDialog`  
  
## Requirements  
 **Header:** afxodlgs.h  
  
##  <a name="addformat"></a>  COlePasteSpecialDialog::AddFormat  
 Call this function to add new formats to the list of formats your application can support in a Paste Special operation.  
  
```  
void AddFormat(
    const FORMATETC& formatEtc,  
    LPTSTR lpszFormat,  
    LPTSTR lpszResult,  
    DWORD flags);

 
void AddFormat(
    UINT cf,  
    DWORD tymed,  
    UINT nFormatID,  
    BOOL bEnableIcon,  
    BOOL bLink);
```  
  
### Parameters  
 *fmt*  
 Reference to the data type to add.  
  
 *lpszFormat*  
 String that describes the format to the user.  
  
 *lpszResult*  
 String that describes the result if this format is chosen in the dialog box.  
  
 *flags*  
 The different linking and embedding options available for this format. This flag is a bitwise combination of one or more of the different values in the OLEUIPASTEFLAG enumerated type.  
  
 *cf*  
 The clipboard format to add.  
  
 *tymed*  
 The types of media available in this format. This is a bitwise combination of one or more of the values in the TYMED enumerated type.  
  
 *nFormatID*  
 The ID of the string that identifies this format. The format of this string is two separate strings separated by a '\n' character. The first string is the same that would be passed in the *lpstrFormat* parameter, and the second is the same as the *lpstrResult* parameter.  
  
 *bEnableIcon*  
 Flag that determines whether the Display As Icon check box is enabled when this format is chosen in the list box.  
  
 *bLink*  
 Flag that determines whether the Paste Link radio button is enabled when this format is chosen in the list box.  
  
### Remarks  
 This function can be called to add either standard formats such as CF_TEXT or CF_TIFF or custom formats that your application has registered with the system. For more information about pasting data objects into your application, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 For more information, see the [TYMED](http://msdn.microsoft.com/library/windows/desktop/ms691227) enumeration type and the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure in the Windows SDK.  
  
 For more information, see the [OLEUIPASTEFLAG](http://msdn.microsoft.com/library/windows/desktop/ms682172) enumerated type in the Windows SDK.  
  
##  <a name="addlinkentry"></a>  COlePasteSpecialDialog::AddLinkEntry  
 Adds a new entry to the list of supported Clipboard formats.  
  
```  
OLEUIPASTEFLAG AddLinkEntry(UINT cf);
```  
  
### Parameters  
 *cf*  
 The clipboard format to add.  
  
### Return Value  
 An [OLEUIPASTEFLAG](http://msdn.microsoft.com/library/windows/desktop/ms682172) structure containing the information for the new link entry.  
  
##  <a name="addstandardformats"></a>  COlePasteSpecialDialog::AddStandardFormats  
 Call this function to add the following Clipboard formats to the list of formats your application can support in a Paste Special operation:  
  
```  
void AddStandardFormats(BOOL bEnableLink = TRUE);
```  
  
### Parameters  
 *bEnableLink*  
 Flag that determines whether to add CF_LINKSOURCE to the list of formats your application can paste.  
  
### Remarks  
  
- CF_BITMAP  
  
- CF_DIB  
  
- CF_METAFILEPICT  
  
- **"Embedded Object"**  
  
-   (optionally) **"Link Source"**  
  
 These formats are used to support embedding and linking.  
  
##  <a name="colepastespecialdialog"></a>  COlePasteSpecialDialog::COlePasteSpecialDialog  
 Constructs a `COlePasteSpecialDialog` object.  
  
```  
COlePasteSpecialDialog(
    DWORD dwFlags = PSF_SELECTPASTE,  
    COleDataObject* pDataObject = NULL,  
    CWnd* pParentWnd = NULL);
```  
  
### Parameters  
 *dwFlags*  
 Creation flag, contains any number of the following flags combined using the bitwise-OR operator:  
  
- PSF_SELECTPASTE Specifies that the Paste radio button will be checked initially when the dialog box is called. Cannot be used in combination with PSF_SELECTPASTELINK. This is the default.  
  
- PSF_SELECTPASTELINK Specifies that the Paste Link radio button will be checked initially when the dialog box is called. Cannot be used in combination with PSF_SELECTPASTE.  
  
- PSF_CHECKDISPLAYASICON Specifies that the Display As Icon check box will be checked initially when the dialog box is called.  
  
- PSF_SHOWHELP Specifies that the Help button will be displayed when the dialog box is called.  
  
 *pDataObject*  
 Points to the [COleDataObject](../../mfc/reference/coledataobject-class.md) for pasting. If this value is NULL, it gets the `COleDataObject` from the Clipboard.  
  
 *pParentWnd*  
 Points to the parent or owner window object (of type `CWnd`) to which the dialog object belongs. If it is NULL, the parent window of the dialog box is set to the main application window.  
  
### Remarks  
 This function only constructs a `COlePasteSpecialDialog` object. To display the dialog box, call the [DoModal](#domodal) function.  
  
 For more information, see the [OLEUIPASTEFLAG](http://msdn.microsoft.com/library/windows/desktop/ms682172) enumerated type in the Windows SDK.  
  
##  <a name="createitem"></a>  COlePasteSpecialDialog::CreateItem  
 Creates the new item that was chosen in the Paste Special dialog box.  
  
```  
BOOL CreateItem(COleClientItem* pNewItem);
```  
  
### Parameters  
 *pNewItem*  
 Points to a `COleClientItem` instance. Cannot be NULL.  
  
### Return Value  
 Nonzero if the item was created successfully; otherwise 0.  
  
### Remarks  
 This function should only be called after [DoModal](#domodal) returns IDOK.  
  
##  <a name="domodal"></a>  COlePasteSpecialDialog::DoModal  
 Displays the OLE Paste Special dialog box.  
  
```  
virtual INT_PTR DoModal();
```  
  
### Return Value  
 Completion status for the dialog box. One of the following values:  
  
- IDOK if the dialog box was successfully displayed.  
  
- IDCANCEL if the user canceled the dialog box.  
  
- IDABORT if an error occurred. If IDABORT is returned, call the `COleDialog::GetLastError` member function to get more information about the type of error that occurred. For a listing of possible errors, see the [OleUIPasteSpecial](http://msdn.microsoft.com/library/windows/desktop/ms694512) function in the Windows SDK.  
  
### Remarks  
 If you want to initialize the various dialog box controls by setting members of the [m_ps](#m_ps) structure, you should do this before calling `DoModal`, but after the dialog object is constructed.  
  
 If `DoModal` returns IDOK, you can call other member functions to retrieve the settings or information input by the user into the dialog box.  
  
##  <a name="getdrawaspect"></a>  COlePasteSpecialDialog::GetDrawAspect  
 Determines if the user chose to display the selected item as an icon.  
  
```  
DVASPECT GetDrawAspect() const;  
```  
  
### Return Value  
 The method needed to render the object.  
  
- DVASPECT_CONTENT Returned if the Display As Icon check box was not checked when the dialog box was dismissed.  
  
- DVASPECT_ICON Returned if the Display As Icon check box was checked when the dialog box was dismissed.  
  
### Remarks  
 Only call this function after [DoModal](#domodal) returns IDOK.  
  
 For more information on drawing aspect, see the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure in the Windows SDK.  
  
##  <a name="geticonicmetafile"></a>  COlePasteSpecialDialog::GetIconicMetafile  
 Gets the metafile associated with the item selected by the user.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### Return Value  
 The handle to the metafile containing the iconic aspect of the selected item, if the Display As Icon check box was selected when the dialog box was dismissed by choosing **OK**; otherwise NULL.  
  
##  <a name="getpasteindex"></a>  COlePasteSpecialDialog::GetPasteIndex  
 Gets the index value associated with the entry the user selected.  
  
```  
int GetPasteIndex() const;  
```  
  
### Return Value  
 The index into the array of `OLEUIPASTEENTRY` structures that was selected by the user. The format that corresponds to the selected index should be used when performing the paste operation.  
  
### Remarks  
 For more information, see the [OLEUIPASTEENTRY](http://msdn.microsoft.com/library/windows/desktop/ms690165) structure in the Windows SDK.  
  
##  <a name="getselectiontype"></a>  COlePasteSpecialDialog::GetSelectionType  
 Determines the type of selection the user made.  
  
```  
UINT GetSelectionType() const;  
```  
  
### Return Value  
 Returns type of selection made.  
  
### Remarks  
 The return type values are specified by the `Selection` enumeration type declared in the `COlePasteSpecialDialog` class.  
  
```  
enum Selection {
    pasteLink,
    pasteNormal,
    pasteOther,
    pasteStatic
    };  
```  
  
 Brief desccriptions of these values follow:  
  
- `COlePasteSpecialDialog::pasteLink` The Paste Link radio button was checked and the chosen format was a standard OLE format.  
  
- `COlePasteSpecialDialog::pasteNormal` The Paste radio button was checked and the chosen format was a standard OLE format.  
  
- `COlePasteSpecialDialog::pasteOther` The selected format is not a standard OLE format.  
  
- `COlePasteSpecialDialog::pasteStatic` The chosen format was a metafile.  
  
##  <a name="m_ps"></a>  COlePasteSpecialDialog::m_ps  
 Structure of type OLEUIPASTESPECIAL used to control the behavior of the Paste Special dialog box.  
  
```  
OLEUIPASTESPECIAL m_ps;  
```  
  
### Remarks  
 Members of this structure can be modified directly or through member functions.  
  
 For more information, see the [OLEUIPASTESPECIAL](http://msdn.microsoft.com/library/windows/desktop/ms692434) structure in the Windows SDK.  
  
## See Also  
 [MFC Sample OCLIENT](../../visual-cpp-samples.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)
