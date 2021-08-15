---
description: "Learn more about: COleConvertDialog Class"
title: "COleConvertDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["COleConvertDialog", "AFXODLGS/COleConvertDialog", "AFXODLGS/COleConvertDialog::COleConvertDialog", "AFXODLGS/COleConvertDialog::DoConvert", "AFXODLGS/COleConvertDialog::DoModal", "AFXODLGS/COleConvertDialog::GetClassID", "AFXODLGS/COleConvertDialog::GetDrawAspect", "AFXODLGS/COleConvertDialog::GetIconicMetafile", "AFXODLGS/COleConvertDialog::GetSelectionType", "AFXODLGS/COleConvertDialog::m_cv"]
helpviewer_keywords: ["COleConvertDialog [MFC], COleConvertDialog", "COleConvertDialog [MFC], DoConvert", "COleConvertDialog [MFC], DoModal", "COleConvertDialog [MFC], GetClassID", "COleConvertDialog [MFC], GetDrawAspect", "COleConvertDialog [MFC], GetIconicMetafile", "COleConvertDialog [MFC], GetSelectionType", "COleConvertDialog [MFC], m_cv"]
ms.assetid: a7c57714-31e8-4b78-834d-8ddd1b856a1c
---
# COleConvertDialog Class

For more information, see the [OLEUICONVERT](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) structure in the Windows SDK.

## Syntax

```
class COleConvertDialog : public COleDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleConvertDialog::COleConvertDialog](#coleconvertdialog)|Constructs a `COleConvertDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleConvertDialog::DoConvert](#doconvert)|Performs the conversion specified in the dialog box.|
|[COleConvertDialog::DoModal](#domodal)|Displays the OLE Change Item dialog box.|
|[COleConvertDialog::GetClassID](#getclassid)|Gets the CLSID associated with the chosen item.|
|[COleConvertDialog::GetDrawAspect](#getdrawaspect)|Specifies whether to draw item as an icon.|
|[COleConvertDialog::GetIconicMetafile](#geticonicmetafile)|Gets a handle to the metafile associated with the iconic form of this item.|
|[COleConvertDialog::GetSelectionType](#getselectiontype)|Gets the type of selection chosen.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[COleConvertDialog::m_cv](#m_cv)|A structure that controls the behavior of the dialog box.|

## Remarks

> [!NOTE]
> Application Wizard-generated container code uses this class.

For more information about OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleConvertDialog`

## Requirements

**Header:** afxodlgs.h

## <a name="coleconvertdialog"></a> COleConvertDialog::COleConvertDialog

Constructs only a `COleConvertDialog` object.

```
explicit COleConvertDialog (
    COleClientItem* pItem,
    DWORD dwFlags = CF_SELECTCONVERTTO,
    CLSID* pClassID = NULL,
    CWnd* pParentWnd = NULL);
```

### Parameters

*pItem*<br/>
Points to the item to be converted or activated.

*dwFlags*<br/>
Creation flag, which contains any number of the following values combined using the bitwise-or operator:

- CF_SELECTCONVERTTO Specifies that the Convert To radio button will be selected initially when the dialog box is called. This is the default.

- CF_SELECTACTIVATEAS Specifies that the Activate As radio button will be selected initially when the dialog box is called.

- CF_SETCONVERTDEFAULT Specifies that the class whose CLSID is specified by the `clsidConvertDefault` member of the `m_cv` structure will be used as the default selection in the class list box when the Convert To radio button is selected.

- CF_SETACTIVATEDEFAULT Specifies that the class whose CLSID is specified by the `clsidActivateDefault` member of the `m_cv` structure will be used as the default selection in the class list box when the Activate As radio button is selected.

- CF_SHOWHELPBUTTON Specifies that the Help button will be displayed when the dialog box is called.

*pClassID*<br/>
Points to the CLSID of the item to be converted or activated. If NULL, the CLSID associated with *pItem* will be used.

*pParentWnd*<br/>
Points to the parent or owner window object (of type `CWnd`) to which the dialog object belongs. If it is NULL, the parent window of the dialog box is set to the main application window.

### Remarks

To display the dialog box, call the [DoModal](#domodal) function.

For more information, see [CLSID Key](/windows/win32/com/clsid-key-hklm) and the [OLEUICONVERT](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) structure.

## <a name="doconvert"></a> COleConvertDialog::DoConvert

Call this function, after returning successfully from [DoModal](#domodal), either to convert or to activate an object of type [COleClientItem](../../mfc/reference/coleclientitem-class.md).

```
BOOL DoConvert(COleClientItem* pItem);
```

### Parameters

*pItem*<br/>
Points to the item to be converted or activated. Cannot be NULL.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The item is converted or activated according to the information selected by the user in the Convert dialog box.

## <a name="domodal"></a> COleConvertDialog::DoModal

Call this function to display the OLE Convert dialog box.

```
virtual INT_PTR DoModal();
```

### Return Value

Completion status for the dialog box. One of the following values:

- IDOK if the dialog box was successfully displayed.

- IDCANCEL if the user canceled the dialog box.

- IDABORT if an error occurred. If IDABORT is returned, call the [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) member function to get more information about the type of error that occurred. For a listing of possible errors, see the [OleUIConvert](/windows/win32/api/oledlg/nf-oledlg-oleuiconvertw) function in the Windows SDK.

### Remarks

If you want to initialize the various dialog box controls by setting members of the [m_cv](#m_cv) structure, you should do this before calling `DoModal`, but after the dialog object is constructed.

If `DoModal` returns IDOK, you can call other member functions to retrieve the settings or information that was input by the user into the dialog box.

## <a name="getclassid"></a> COleConvertDialog::GetClassID

Call this function to get the CLSID associated with the item the user selected in the Convert dialog box.

```
REFCLSID GetClassID() const;
```

### Return Value

The CLSID associated with the item that was selected in the Convert dialog box.

### Remarks

Call this function only after [DoModal](#domodal) returns IDOK.

For more information, see [CLSID Key](/windows/win32/com/clsid-key-hklm) in the Windows SDK.

## <a name="getdrawaspect"></a> COleConvertDialog::GetDrawAspect

Call this function to determine whether the user chose to display the selected item as an icon.

```
DVASPECT GetDrawAspect() const;
```

### Return Value

The method needed to render the object.

- DVASPECT_CONTENT Returned if the Display As Icon check box was not checked.

- DVASPECT_ICON Returned if the Display As Icon check box was checked.

### Remarks

Call this function only after [DoModal](#domodal) returns IDOK.

For more information on drawing aspect, see the [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) data structure in the Windows SDK.

## <a name="geticonicmetafile"></a> COleConvertDialog::GetIconicMetafile

Call this function to get a handle to the metafile that contains the iconic aspect of the selected item.

```
HGLOBAL GetIconicMetafile() const;
```

### Return Value

The handle to the metafile containing the iconic aspect of the selected item, if the Display As Icon check box was checked when the dialog was dismissed by choosing OK; otherwise NULL.

## <a name="getselectiontype"></a> COleConvertDialog::GetSelectionType

Call this function to determine the type of conversion selected in the Convert dialog box.

```
UINT GetSelectionType() const;
```

### Return Value

Type of selection made.

### Remarks

The return type values are specified by the `Selection` enumeration type declared in the `COleConvertDialog` class.

```
enum Selection {
    noConversion,
    convertItem,
    activateAs
    };
```

Brief descriptions of these values follow:

- `COleConvertDialog::noConversion` Returned if either the dialog box was canceled or the user selected no conversion. If `COleConvertDialog::DoModal` returned IDOK, it is possible that the user selected a different icon than the one previously selected.

- `COleConvertDialog::convertItem` Returned if the Convert To radio button was checked, the user selected a different item to convert to, and `DoModal` returned IDOK.

- `COleConvertDialog::activateAs` Returned if the Activate As radio button was checked, the user selected a different item to activate, and `DoModal` returned IDOK.

## <a name="m_cv"></a> COleConvertDialog::m_cv

Structure of type OLEUICONVERT used to control the behavior of the Convert dialog box.

```
OLEUICONVERT m_cv;
```

### Remarks

Members of this structure can be modified either directly or through member functions.

For more information, see the [OLEUICONVERT](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) structure in the Windows SDK.

## See also

[COleDialog Class](../../mfc/reference/coledialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleDialog Class](../../mfc/reference/coledialog-class.md)
