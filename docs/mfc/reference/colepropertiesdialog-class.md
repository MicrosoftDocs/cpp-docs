---
description: "Learn more about: COlePropertiesDialog Class"
title: "COlePropertiesDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["COlePropertiesDialog", "AFXODLGS/COlePropertiesDialog", "AFXODLGS/COlePropertiesDialog::COlePropertiesDialog", "AFXODLGS/COlePropertiesDialog::DoModal", "AFXODLGS/COlePropertiesDialog::OnApplyScale", "AFXODLGS/COlePropertiesDialog::m_gp", "AFXODLGS/COlePropertiesDialog::m_lp", "AFXODLGS/COlePropertiesDialog::m_op", "AFXODLGS/COlePropertiesDialog::m_psh", "AFXODLGS/COlePropertiesDialog::m_vp"]
helpviewer_keywords: ["COlePropertiesDialog [MFC], COlePropertiesDialog", "COlePropertiesDialog [MFC], DoModal", "COlePropertiesDialog [MFC], OnApplyScale", "COlePropertiesDialog [MFC], m_gp", "COlePropertiesDialog [MFC], m_lp", "COlePropertiesDialog [MFC], m_op", "COlePropertiesDialog [MFC], m_psh", "COlePropertiesDialog [MFC], m_vp"]
ms.assetid: a54dbc89-1447-4329-bd01-00e98ec9e935
---
# COlePropertiesDialog Class

Encapsulates the Windows common OLE Object Properties dialog box.

## Syntax

```
class COlePropertiesDialog : public COleDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COlePropertiesDialog::COlePropertiesDialog](#colepropertiesdialog)|Constructs a `COlePropertiesDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COlePropertiesDialog::DoModal](#domodal)|Displays the dialog box and allows the user to make a selection.|
|[COlePropertiesDialog::OnApplyScale](#onapplyscale)|Called by the framework when the scaling of the document item has changed.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[COlePropertiesDialog::m_gp](#m_gp)|A structure used to initialize the "General" page of a `COlePropertiesDialog` object.|
|[COlePropertiesDialog::m_lp](#m_lp)|A structure used to initialize the "Link" page of a `COlePropertiesDialog` object.|
|[COlePropertiesDialog::m_op](#m_op)|A structure used to initialize the `COlePropertiesDialog` object.|
|[COlePropertiesDialog::m_psh](#m_psh)|A structure used to add additional custom property pages.|
|[COlePropertiesDialog::m_vp](#m_vp)|A structure used to customize the "View" page of a `COlePropertiesDialog` object.|

## Remarks

Common OLE Object Properties dialog boxes provide an easy way to display and modify the properties of an OLE document item in a manner consistent with Windows standards. These properties include, among others, information on the file represented by the document item, options for displaying the icon and image scaling, and information on the item's link (if the item is linked).

To use a `COlePropertiesDialog` object, first create the object using the `COlePropertiesDialog` constructor. After the dialog box has been constructed, call the `DoModal` member function to display the dialog box and allow the user to modify any properties of the item. `DoModal` returns whether the user selected the OK (IDOK) or the Cancel (IDCANCEL) button. In addition to the OK and Cancel buttons, there is an Apply button. When the user selects Apply, any changes made to the properties of the document item are applied to the item and its image is automatically updated, but remains active.

The [m_psh](#m_psh) data member is a pointer to a `PROPSHEETHEADER` structure, and in most cases you will not need to access it explicitly. One exception is when you need additional property pages beyond the default General, View, and Link pages. In this case, you can modify the `m_psh` data member to include your custom pages before calling the `DoModal` member function.

For more information on OLE dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COlePropertiesDialog`

## Requirements

**Header:** afxodlgs.h

## <a name="colepropertiesdialog"></a> COlePropertiesDialog::COlePropertiesDialog

Creates a `COlePropertiesDialog` object.

```
COlePropertiesDialog(
    COleClientItem* pItem,
    UINT nScaleMin = 10,
    UINT nScaleMax = 500,
    CWnd* pParentWnd = NULL);
```

### Parameters

*pItem*<br/>
Pointer to the document item whose properties are being accessed.

*nScaleMin*<br/>
Minimum scaling percentage for the document item image.

*nScaleMax*<br/>
Maximum scaling percentage for the document item image.

*pParentWnd*<br/>
Pointer to the dialog box's parent or owner.

### Remarks

Derive your common OLE Object Properties dialog class from `COlePropertiesDialog` in order to implement scaling for your document items. Any dialog boxes implemented by an instance of this class will not support scaling of the document item.

By default, the common OLE Object Properties dialog box has three default pages:

- General

   This page contains system information for the file represented by the selected document item. From this page, the user can convert the selected item to another type.

- View

   This page contains options for displaying the item, changing the icon, and changing the scaling of the image.

- Link

   This page contains options for changing the location of the linked item and updating the linked item. From this page, the user can break the link of the selected item.

To add pages beyond those provided by default, modify the [m_psh](#m_psh) member variable before exiting the constructor of your `COlePropertiesDialog`-derived class. This is an advanced implementation of the `COlePropertiesDialog` constructor.

## <a name="domodal"></a> COlePropertiesDialog::DoModal

Call this member function to display the Windows common OLE Object Properties dialog box and allow the user to view and/or change the various properties of the document item.

```
virtual INT_PTR DoModal();
```

### Return Value

IDOK or IDCANCEL if successful; otherwise 0. IDOK and IDCANCEL are constants that indicate whether the user selected the OK or Cancel button.

If IDCANCEL is returned, you can call the Windows [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) function to determine whether an error occurred.

## <a name="m_gp"></a> COlePropertiesDialog::m_gp

A structure of type [OLEUIGNRLPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuignrlpropsw), used to initialize the General page of the OLE Object Properties dialog box.

```
OLEUIGNRLPROPS m_gp;
```

### Remarks

This page shows the type and size of an embedding and allows the user access to the Convert dialog box. This page also shows the link destination if the object is a link.

For more information on the `OLEUIGNRLPROPS` structure, see the Windows SDK.

## <a name="m_lp"></a> COlePropertiesDialog::m_lp

A structure of type [OLEUILINKPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuilinkpropsw), used to initialize the Link page of the OLE Object Properties dialog box.

```
OLEUILINKPROPS m_lp;
```

### Remarks

This page shows the location of the linked item and allows the user to update, or break, the link to the item.

For more information on the `OLEUILINKPROPS` structure, see the Windows SDK.

## <a name="m_op"></a> COlePropertiesDialog::m_op

A structure of type [OLEUIOBJECTPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuiobjectpropsw), used to initialize the common OLE Object Properties dialog box.

```
OLEUIOBJECTPROPS m_op;
```

### Remarks

This structure contains members used to initialize the General, Link, and View pages.

For more information, see the OLEUIOBJECTPROPS and [OLEUILINKPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuilinkpropsw) structures in the Windows SDK.

## <a name="m_psh"></a> COlePropertiesDialog::m_psh

A structure of type [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2), whose members store the characteristics of the dialog object.

```
PROPSHEETHEADER m_psh;
```

### Remarks

After constructing a `COlePropertiesDialog` object, you can use `m_psh` to set various aspects of the dialog box before calling the `DoModal` member function.

If you modify the `m_psh` data member directly, you will override any default behavior.

For more information on the `PROPSHEETHEADER` structure, see the Windows SDK.

## <a name="m_vp"></a> COlePropertiesDialog::m_vp

A structure of type [OLEUIVIEWPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuiviewpropsw), used to initialize the View page of the OLE Object Properties dialog box.

```
OLEUIVIEWPROPS m_vp;
```

### Remarks

This page allows the user to toggle between "content" and "iconic" views of the object, and change its scaling within the container. It also allows the user access to the Change Icon dialog box when the object is being displayed as an icon.

For more information on the `OLEUIVIEWPROPS` structure, see the Windows SDK.

## <a name="onapplyscale"></a> COlePropertiesDialog::OnApplyScale

Called by the framework when the scaling value has changed and either OK or Apply was selected.

```
virtual BOOL OnApplyScale(
    COleClientItem* pItem,
    int nCurrentScale,
    BOOL bRelativeToOrig);
```

### Parameters

*pItem*<br/>
Pointer to the document item whose properties are being accessed.

*nCurrentScale*<br/>
Numerical value of the dialog scale.

*bRelativeToOrig*<br/>
Indicates whether scaling applies to the original size of the document item.

### Return Value

Nonzero if handled; otherwise 0.

### Remarks

The default implementation does nothing. You must override this function to enable the scaling controls.

> [!NOTE]
> Before the common OLE Object Properties dialog box is displayed, the framework calls this function with a NULL for *pItem* and a - 1 for *nCurrentScale*. This is done to determine if the scaling controls should be enabled.

## See also

[MFC Sample CIRC](../../overview/visual-cpp-samples.md)<br/>
[COleDialog Class](../../mfc/reference/coledialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleDialog Class](../../mfc/reference/coledialog-class.md)<br/>
[CPropertyPage Class](../../mfc/reference/cpropertypage-class.md)
