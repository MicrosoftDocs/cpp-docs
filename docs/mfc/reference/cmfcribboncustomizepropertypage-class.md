---
description: "Learn more about: CMFCRibbonCustomizePropertyPage Class"
title: "CMFCRibbonCustomizePropertyPage Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonCustomizePropertyPage", "AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage", "AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage", "AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage::AddCustomCategory", "AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage::OnOK"]
helpviewer_keywords: ["CMFCRibbonCustomizePropertyPage [MFC], CMFCRibbonCustomizePropertyPage", "CMFCRibbonCustomizePropertyPage [MFC], AddCustomCategory", "CMFCRibbonCustomizePropertyPage [MFC], OnOK"]
ms.assetid: ea32a99a-dfbe-401e-8975-aa191552532f
---
# CMFCRibbonCustomizePropertyPage Class

Implements a custom page for the **Customize** dialog box in Ribbon-based applications.

## Syntax

```
class CMFCRibbonCustomizePropertyPage: public CMFCPropertyPage
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|[CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage](#cmfcribboncustomizepropertypage)|Constructs a `CMFCRibbonCustomizePropertyPage` object.|
|`CMFCRibbonCustomizePropertyPage::~CMFCRibbonCustomizePropertyPage`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCRibbonCustomizePropertyPage::AddCustomCategory](#addcustomcategory)|Adds a custom category to the **Commands** combo box.|
|`CMFCRibbonCustomizePropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCRibbonCustomizePropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCRibbonCustomizePropertyPage::OnOK](#onok)|Called by the system when a user clicks **OK** on the **Customize** dialog box.|

## Remarks

If you want to add custom commands to the **Customize** dialog box, you must handle the AFX_WM_ON_RIBBON_CUSTOMIZE message. In the message handler, instantiate a `CMFCRibbonCustomizePropertyPage` object on the stack. Create a list of custom commands, and then call `AddCustomCategory` to add the new page to the **Customize** dialog box.

## Example

The following example demonstrates how to construct a `CMFCRibbonCustomizePropertyPage` object and to add a custom category.

[!code-cpp[NVC_MFC_RibbonApp#22](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizepropertypage-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)

[CMFCRibbonCustomizePropertyPage](../../mfc/reference/cmfcribboncustomizepropertypage-class.md)

## Requirements

**Header:** afxribboncustomizedialog.h

## <a name="addcustomcategory"></a> CMFCRibbonCustomizePropertyPage::AddCustomCategory

Adds a custom category to the **Commands** combo box.

```cpp
void AddCustomCategory(
    LPCTSTR lpszName,
    const CList<UINT, UINT>& lstIDS);
```

### Parameters

*lpszName*\
[in] Specifies the custom category name.

*lstIDS*\
[in] Contains ribbon command IDs to be shown in the custom category.

### Remarks

This method adds a category named *lpszName* to the **Commands** combo box. When the user selects the category, the commands specified in *lstIDS* appear in the command list.

## <a name="cmfcribboncustomizepropertypage"></a> CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage

Constructs a `CMFCRibbonCustomizePropertyPage` object.

```
CMFCRibbonCustomizePropertyPage(CMFCRibbonBar* pRibbonBar = NULL);
```

### Parameters

*pRibbonBar*<br/>
[in] A pointer to a ribbon control for which the options to customize.

## <a name="onok"></a> CMFCRibbonCustomizePropertyPage::OnOK

Calleld by the system when a user clicks **OK** on the **Customize** dialog box.

```
virtual void OnOK();
```

### Remarks

The default implementation applies the options selected in the **Customize** dialog box to the Quick Access Toolbar.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
