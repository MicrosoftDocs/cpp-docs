---
description: "Learn more about: COleChangeSourceDialog Class"
title: "COleChangeSourceDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["COleChangeSourceDialog", "AFXODLGS/COleChangeSourceDialog", "AFXODLGS/COleChangeSourceDialog::COleChangeSourceDialog", "AFXODLGS/COleChangeSourceDialog::DoModal", "AFXODLGS/COleChangeSourceDialog::GetDisplayName", "AFXODLGS/COleChangeSourceDialog::GetFileName", "AFXODLGS/COleChangeSourceDialog::GetFromPrefix", "AFXODLGS/COleChangeSourceDialog::GetItemName", "AFXODLGS/COleChangeSourceDialog::GetToPrefix", "AFXODLGS/COleChangeSourceDialog::IsValidSource", "AFXODLGS/COleChangeSourceDialog::m_cs"]
helpviewer_keywords: ["COleChangeSourceDialog [MFC], COleChangeSourceDialog", "COleChangeSourceDialog [MFC], DoModal", "COleChangeSourceDialog [MFC], GetDisplayName", "COleChangeSourceDialog [MFC], GetFileName", "COleChangeSourceDialog [MFC], GetFromPrefix", "COleChangeSourceDialog [MFC], GetItemName", "COleChangeSourceDialog [MFC], GetToPrefix", "COleChangeSourceDialog [MFC], IsValidSource", "COleChangeSourceDialog [MFC], m_cs"]
ms.assetid: d0e08be7-21ef-45e1-97af-fe27d99e3bac
---
# COleChangeSourceDialog Class

Used for the OLE Change Source dialog box.

## Syntax

```
class COleChangeSourceDialog : public COleDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleChangeSourceDialog::COleChangeSourceDialog](#colechangesourcedialog)|Constructs a `COleChangeSourceDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleChangeSourceDialog::DoModal](#domodal)|Displays the OLE Change Source dialog box.|
|[COleChangeSourceDialog::GetDisplayName](#getdisplayname)|Gets the complete source display name.|
|[COleChangeSourceDialog::GetFileName](#getfilename)|Gets the filename from the source name.|
|[COleChangeSourceDialog::GetFromPrefix](#getfromprefix)|Gets the prefix of the previous source.|
|[COleChangeSourceDialog::GetItemName](#getitemname)|Gets the item name from the source name.|
|[COleChangeSourceDialog::GetToPrefix](#gettoprefix)|Gets the prefix of the new source|
|[COleChangeSourceDialog::IsValidSource](#isvalidsource)|Indicates if the source is valid.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[COleChangeSourceDialog::m_cs](#m_cs)|A structure that controls the behavior of the dialog box.|

## Remarks

Create an object of class `COleChangeSourceDialog` when you want to call this dialog box. After a `COleChangeSourceDialog` object has been constructed, you can use the [m_cs](#m_cs) structure to initialize the values or states of controls in the dialog box. The `m_cs` structure is of type [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew). For more information about using this dialog class, see the [DoModal](#domodal) member function.

For more information, see the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure in Windows SDK.

For more information about OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleChangeSourceDialog`

## Requirements

**Header:** afxodlgs.h

## <a name="colechangesourcedialog"></a> COleChangeSourceDialog::COleChangeSourceDialog

This function constructs a `COleChangeSourceDialog` object.

```
explicit COleChangeSourceDialog(
    COleClientItem* pItem,
    CWnd* pParentWnd = NULL);
```

### Parameters

*pItem*<br/>
Pointer to the linked [COleClientItem](../../mfc/reference/coleclientitem-class.md) whose source is to be updated.

*pParentWnd*<br/>
Points to the parent or owner window object (of type `CWnd`) to which the dialog object belongs. If it is NULL, the parent window of the dialog box will be set to the main application window.

### Remarks

To display the dialog box, call the [DoModal](#domodal) function.

For more information, see the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure and [OleUIChangeSource](/windows/win32/api/oledlg/nf-oledlg-oleuichangesourcew) function in Windows SDK.

## <a name="domodal"></a> COleChangeSourceDialog::DoModal

Call this function to display the OLE Change Source dialog box.

```
virtual INT_PTR DoModal();
```

### Return Value

Completion status for the dialog box. One of the following values:

- IDOK if the dialog box was successfully displayed.

- IDCANCEL if the user canceled the dialog box.

- IDABORT if an error occurred. If IDABORT is returned, call the [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) member function to get more information about the type of error that occurred. For a listing of possible errors, see the [OleUIChangeSource](/windows/win32/api/oledlg/nf-oledlg-oleuichangesourcew) function in Windows SDK.

### Remarks

If you want to initialize the various dialog box controls by setting members of the [m_cs](#m_cs) structure, you should do this before calling `DoModal`, but after the dialog object is constructed.

If `DoModal` returns IDOK, you can call member functions to retrieve user-entered settings or information from the dialog box. The following list names typical query functions:

- [GetFileName](#getfilename)

- [GetDisplayName](#getdisplayname)

- [GetItemName](#getitemname)

## <a name="getdisplayname"></a> COleChangeSourceDialog::GetDisplayName

Call this function to retrieve the complete display name for the linked client item.

```
CString GetDisplayName();
```

### Return Value

The complete source display name (moniker) for the [COleClientItem](../../mfc/reference/coleclientitem-class.md) specified in the constructor.

## <a name="getfilename"></a> COleChangeSourceDialog::GetFileName

Call this function to retrieve the file moniker portion of the display name for the linked client item.

```
CString GetFileName();
```

### Return Value

The file moniker portion of the source display name for the [COleClientItem](../../mfc/reference/coleclientitem-class.md) specified in the constructor.

### Remarks

The file moniker together with the item moniker gives the complete display name.

## <a name="getfromprefix"></a> COleChangeSourceDialog::GetFromPrefix

Call this function to get the previous prefix string for the source.

```
CString GetFromPrefix();
```

### Return Value

The previous prefix string of the source.

### Remarks

Call this function only after [DoModal](#domodal) returns IDOK.

This value comes directly from the `lpszFrom` member of the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure.

For more information, see the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure in Windows SDK.

## <a name="getitemname"></a> COleChangeSourceDialog::GetItemName

Call this function to retrieve the item moniker portion of the display name for the linked client item.

```
CString GetItemName();
```

### Return Value

The item moniker portion of the source display name for the [COleClientItem](../../mfc/reference/coleclientitem-class.md) specified in the constructor.

### Remarks

The file moniker together with the item moniker gives the complete display name.

## <a name="gettoprefix"></a> COleChangeSourceDialog::GetToPrefix

Call this function to get the new prefix string for the source.

```
CString GetToPrefix();
```

### Return Value

The new prefix string of the source.

### Remarks

Call this function only after [DoModal](#domodal) returns IDOK.

This value comes directly from the `lpszTo` member of the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure.

For more information, see the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure in Windows SDK.

## <a name="m_cs"></a> COleChangeSourceDialog::m_cs

This data member is a structure of type [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew).

```
OLEUICHANGESOURCE m_cs;
```

### Remarks

`OLEUICHANGESOURCE` is used to control the behavior of the OLE Change Source dialog box. Members of this structure can be modified directly.

For more information, see the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure in Windows SDK.

## <a name="isvalidsource"></a> COleChangeSourceDialog::IsValidSource

Call this function to determine if the new source is valid.

```
BOOL IsValidSource();
```

### Return Value

Nonzero if the new source is valid, otherwise 0.

### Remarks

Call this function only after [DoModal](#domodal) returns IDOK.

For more information, see the [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) structure in Windows SDK.

## See also

[COleDialog Class](../../mfc/reference/coledialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleDialog Class](../../mfc/reference/coledialog-class.md)
