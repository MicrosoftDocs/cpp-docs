---
description: "Learn more about: CMFCCustomColorsPropertyPage Class"
title: "CMFCCustomColorsPropertyPage Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCCustomColorsPropertyPage", "AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage", "AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage::Setup"]
helpviewer_keywords: ["CMFCCustomColorsPropertyPage [MFC], Setup"]
ms.assetid: 46a45ba2-1fda-440d-8018-d4dcd44f5816
---
# CMFCCustomColorsPropertyPage Class

Represents a property page that can select custom colors in a color dialog box.

## Syntax

```
class CMFCCustomColorsPropertyPage : public CPropertyPage
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|`CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage`|Default constructor.|

### Public Methods

|Name|Description|
|-|-|
|`CMFCCustomColorsPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCCustomColorsPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCCustomColorsPropertyPage::Setup](#setup)|Sets the color components of the property page.|

### Remarks

The `CMFCColorDialog` class uses this class to display the custom color property page. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md).

## Example

The following example demonstrates how to construct a `CMFCCustomColorsPropertyPage` object and set the color components of the property page.

[!code-cpp[NVC_MFC_RibbonApp#35](../../mfc/reference/codesnippet/cpp/cmfccustomcolorspropertypage-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCCustomColorsPropertyPage](../../mfc/reference/cmfccustomcolorspropertypage-class.md)

## Requirements

**Header:** afxcustomcolorspropertypage.h

## <a name="setup"></a> CMFCCustomColorsPropertyPage::Setup

Sets the color components of the property page.

```cpp
void Setup(
    BYTE R,
    BYTE G,
    BYTE B);
```

### Parameters

*R*\
[in] The red component of the RGB value.

*G*\
[in] The green component of the RGB value.

*B*\
[in] The blue component of the RGB value.

### Remarks

This method updates the current RGB and the associated HLS (hue, lightness, and saturation) color values of the property page. The [CMFCColorDialog::SetPageTwo](../../mfc/reference/cmfccolordialog-class.md#setpagetwo) method calls this method when the framework initializes the color dialog box or the user presses the left mouse button. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md)<br/>
[CMFCStandardColorsPropertyPage Class](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)
