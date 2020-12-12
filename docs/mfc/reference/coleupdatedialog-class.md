---
description: "Learn more about: COleUpdateDialog Class"
title: "COleUpdateDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["COleUpdateDialog", "AFXODLGS/COleUpdateDialog", "AFXODLGS/COleUpdateDialog::COleUpdateDialog", "AFXODLGS/COleUpdateDialog::DoModal"]
helpviewer_keywords: ["COleUpdateDialog [MFC], COleUpdateDialog", "COleUpdateDialog [MFC], DoModal"]
ms.assetid: 699ca980-52b1-4cf8-9ab1-ac6767ad5b0e
---
# COleUpdateDialog Class

Used for a special case of the OLE Edit Links dialog box, which should be used when you need to update only existing linked or embedded objects in a document.

## Syntax

```
class COleUpdateDialog : public COleLinksDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleUpdateDialog::COleUpdateDialog](#coleupdatedialog)|Constructs a `COleUpdateDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleUpdateDialog::DoModal](#domodal)|Displays the **Edit Links** dialog box in an update mode.|

## Remarks

For more information regarding OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

[COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)

`COleUpdateDialog`

## Requirements

**Header:** afxodlgs.h

## <a name="coleupdatedialog"></a> COleUpdateDialog::COleUpdateDialog

Constructs a `COleUpdateDialog` object.

```
explicit COleUpdateDialog(
    COleDocument* pDoc,
    BOOL bUpdateLinks = TRUE,
    BOOL bUpdateEmbeddings = FALSE,
    CWnd* pParentWnd = NULL);
```

### Parameters

*pDoc*<br/>
Points to the document containing the links that may need updating.

*bUpdateLinks*<br/>
Flag that determines whether linked objects are to be updated.

*bUpdateEmbeddings*<br/>
Flag that determines whether embedded objects are to be updated.

*pParentWnd*<br/>
Points to the parent or owner window object (of type `CWnd`) to which the dialog object belongs. If it is NULL, the parent window of the dialog box will be set to the main application window.

### Remarks

This function constructs only a `COleUpdateDialog` object. To display the dialog box, call [DoModal](../../mfc/reference/colelinksdialog-class.md#domodal). This class should be used instead of `COleLinksDialog` when you want to update only existing linked or embedded items.

## <a name="domodal"></a> COleUpdateDialog::DoModal

Displays the Edit Links dialog box in update mode.

```
virtual INT_PTR DoModal();
```

### Return Value

Completion status for the dialog box. One of the following values:

- IDOK if the dialog box returned successfully.

- IDCANCEL if none of the linked or embedded items in the current document need updating.

- IDABORT if an error occurred. If IDABORT is returned, call the [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) member function to get more information about the type of error that occurred. For a listing of possible errors, see the [OleUIEditLinks](/windows/win32/api/oledlg/nf-oledlg-oleuieditlinksw) function in the Windows SDK.

### Remarks

All links and/or embeddings are updated unless the user selects the Cancel button.

## See also

[MFC Sample OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[COleLinksDialog Class](../../mfc/reference/colelinksdialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleLinksDialog Class](../../mfc/reference/colelinksdialog-class.md)
