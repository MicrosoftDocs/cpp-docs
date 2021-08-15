---
description: "Learn more about: CMFCStandardColorsPropertyPage Class"
title: "CMFCStandardColorsPropertyPage Class"
ms.date: "11/04/2016"
helpviewer_keywords: ["CMFCStandardColorsPropertyPage class [MFC]"]
ms.assetid: b84b7cfb-bb24-4c65-804a-5b642cb64400
---
# CMFCStandardColorsPropertyPage Class

Represents a property page that users use to select standard colors in a color dialog box.

## Syntax

```
class CMFCStandardColorsPropertyPage : public CPropertyPage
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|`CMFCStandardColorsPropertyPage::CMFCStandardColorsPropertyPage`|Default constructor.|

### Public Methods

|Name|Description|
|-|-|
|`CMFCStandardColorsPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCStandardColorsPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|

### Remarks

The `CMFCColorDialog` class uses this class to display the standard color property page. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCStandardColorsPropertyPage](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)

## Requirements

**Header:** afxstandardcolorspropertypage.h

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md)<br/>
[CMFCCustomColorsPropertyPage Class](../../mfc/reference/cmfccustomcolorspropertypage-class.md)
