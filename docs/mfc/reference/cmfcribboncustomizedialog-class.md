---
description: "Learn more about: CMFCRibbonCustomizeDialog Class"
title: "CMFCRibbonCustomizeDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonCustomizeDialog", "AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog", "AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog"]
helpviewer_keywords: ["CMFCRibbonCustomizeDialog [MFC], CMFCRibbonCustomizeDialog"]
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
---
# CMFCRibbonCustomizeDialog Class

Displays the ribbon **Customize** page.

## Syntax

```
class CMFCRibbonCustomizeDialog : public CMFCPropertySheet
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog](#cmfcribboncustomizedialog)|Constructs a `CMFCRibbonCustomizeDialog` object.|
|`CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCRibbonCustomizeDialog::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|

## Remarks

MFC instantiates this class automatically if you do not process the AFX_WM_ON_RIBBON_CUSTOMIZE message, or if you return 0 from the message handler.

If you want to use this class in your application to display the ribbon **Customize** dialog box, just instantiate it and call the `DoModal` method.

Because this class is derived from [CMFCPropertySheet Class](../../mfc/reference/cmfcpropertysheet-class.md), you can add custom pages by using the `CMFCPropertySheet` API.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

[CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)

[CMFCRibbonCustomizeDialog](../../mfc/reference/cmfcribboncustomizedialog-class.md)

## Requirements

**Header:** afxribboncustomizedialog.h

## <a name="cmfcribboncustomizedialog"></a> CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog

Constructs a `CMFCRibbonCustomizeDialog` object.

```
CMFCRibbonCustomizeDialog(
    CWnd* pWndParent,
    CMFCRibbonBar* pRibbon);
```

### Parameters

*pWndParent*<br/>
[in] A pointer to the parent window (usually the main frame).

*pRibbon*<br/>
[in] A pointer to the `CMFCRibbonBar` that is to be customized.

### Example

The following example demonstrates how to construct a `CMFCRibbonCustomizeDialog` object.

[!code-cpp[NVC_MFC_RibbonApp#18](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizedialog-class_1.cpp)]

### Remarks

The constructor instantiates a [CMFCRibbonCustomizePropertyPage Class](../../mfc/reference/cmfcribboncustomizepropertypage-class.md) object and adds it to the collection of property sheet pages.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
