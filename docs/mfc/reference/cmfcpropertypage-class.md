---
description: "Learn more about: CMFCPropertyPage Class"
title: "CMFCPropertyPage Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCPropertyPage", "AFXPROPERTYPAGE/CMFCPropertyPage", "AFXPROPERTYPAGE/CMFCPropertyPage::CMFCPropertyPage"]
helpviewer_keywords: ["CMFCPropertyPage [MFC], CMFCPropertyPage"]
ms.assetid: d279d7f2-2d81-418d-9f23-6147d6e8df09
---
# CMFCPropertyPage Class

The `CMFCPropertyPage` class supports the display of pop-up menus on a property page.

## Syntax

```
class CMFCPropertyPage : public CPropertyPage
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCPropertyPage::CMFCPropertyPage](#cmfcpropertypage)|Constructs a `CMFCPropertyPage` object.|
|`CMFCPropertyPage::~CMFCPropertyPage`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|`CMFCPropertyPage::OnSetActive`|This member function is called by the framework when the page is chosen by the user and becomes the active page. (Overrides [CPropertyPage::OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).)|
|`CMFCPropertyPage::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. For more information and method syntax, see [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). (Overrides `CPropertyPage::PreTranslateMessage`.)|

## Remarks

The `CMFCPropertyPage` class represents individual pages of a property sheet, otherwise known as a tab dialog box.

Use the `CMFCPropertyPage` class together with the [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) class. To use menus on a property page, replace all occurrences of the `CPropertyPage` class with the `CMFCPropertyPage` class.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)

## Requirements

**Header:** afxpropertypage.h

## <a name="cmfcpropertypage"></a> CMFCPropertyPage::CMFCPropertyPage

Constructs a `CMFCPropertyPage` object.

```
CMFCPropertyPage(
    UINT nIDTemplate,
    UINT nIDCaption=0);

CMFCPropertyPage(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption=0);
```

### Parameters

*nIDTemplate*<br/>
Resource ID of the template for this page.

*nIDCaption*<br/>
Resource ID of the label to put in the tab for this page. If 0, the name is obtained from the dialog box template for this page. The default value is 0.

*lpszTemplateName*<br/>
Points to the name of the template for this page. Cannot be NULL.

### Return Value

### Remarks

For more information about the constructor parameters, see [CPropertyPage::CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCPropertySheet Class](../../mfc/reference/cmfcpropertysheet-class.md)
