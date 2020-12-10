---
description: "Learn more about: CMFCPropertyGridColorProperty Class"
title: "CMFCPropertyGridColorProperty Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCPropertyGridColorProperty", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::EnableAutomaticButton", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::EnableOtherButton", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::GetColor", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::SetColor", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::SetColumnsNumber", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::SetOriginalValue"]
helpviewer_keywords: ["CMFCPropertyGridColorProperty [MFC], CMFCPropertyGridColorProperty", "CMFCPropertyGridColorProperty [MFC], EnableAutomaticButton", "CMFCPropertyGridColorProperty [MFC], EnableOtherButton", "CMFCPropertyGridColorProperty [MFC], GetColor", "CMFCPropertyGridColorProperty [MFC], SetColor", "CMFCPropertyGridColorProperty [MFC], SetColumnsNumber", "CMFCPropertyGridColorProperty [MFC], SetOriginalValue"]
ms.assetid: af37be93-a91e-40a2-9a65-0f3412c6f0f8
---
# CMFCPropertyGridColorProperty Class

The `CMFCPropertyGridColorProperty` class supports a property list control item that opens a color selection dialog box.

## Syntax

```
class CMFCPropertyGridColorProperty : public CMFCPropertyGridProperty
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty](#cmfcpropertygridcolorproperty)|Constructs a `CMFCPropertyGridColorProperty` object.|
|`CMFCPropertyGridColorProperty::~CMFCPropertyGridColorProperty`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCPropertyGridColorProperty::EnableAutomaticButton](#enableautomaticbutton)|Enables the *automatic* button on the color selection dialog box. (The standard automatic button is labeled **Automatic**.)|
|[CMFCPropertyGridColorProperty::EnableOtherButton](#enableotherbutton)|Enables the *other* button on the color selection dialog box. (The standard other button is labeled **More Colors**.)|
|`CMFCPropertyGridColorProperty::FormatProperty`|Formats the text representation of a property value. (Overrides [CMFCPropertyGridProperty::FormatProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).)|
|[CMFCPropertyGridColorProperty::GetColor](#getcolor)|Gets the current color of the property.|
|`CMFCPropertyGridColorProperty::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|`CMFCPropertyGridColorProperty::OnClickButton`|Called by the framework when the user clicks a button that is contained in a property. (Overrides [CMFCPropertyGridProperty::OnClickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).)|
|`CMFCPropertyGridColorProperty::OnDrawValue`|Called by the framework to display the property value. (Overrides [CMFCPropertyGridProperty::OnDrawValue](../../mfc/reference/cmfcpropertygridproperty-class.md#ondrawvalue).)|
|`CMFCPropertyGridColorProperty::OnEdit`|Called by the framework when the user is about to modify a property value. (Overrides [CMFCPropertyGridProperty::OnEdit](../../mfc/reference/cmfcpropertygridproperty-class.md#onedit).)|
|`CMFCPropertyGridColorProperty::OnUpdateValue`|Called by the framework when the value of an editable property has changed. (Overrides [CMFCPropertyGridProperty::OnUpdateValue](../../mfc/reference/cmfcpropertygridproperty-class.md#onupdatevalue).)|
|[CMFCPropertyGridColorProperty::SetColor](#setcolor)|Sets a new color for the property.|
|[CMFCPropertyGridColorProperty::SetColumnsNumber](#setcolumnsnumber)|Specifies the number of columns in the current color property grid.|
|[CMFCPropertyGridColorProperty::SetOriginalValue](#setoriginalvalue)|Sets the original value of an editable property.|

## Remarks

The `CMFCPropertyGridColorProperty` class supports a color property that can be added to a property list control. For more information, see the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).

## Example

The following example demonstrates how to construct an object of the `CMFCPropertyGridColorProperty` class and configure this object by using various methods of the `CMFCPropertyGridColorProperty` class. The code explains how to enable the automatic and other buttons, and how to set the color and the columns number. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#13](../../mfc/reference/codesnippet/cpp/cmfcpropertygridcolorproperty-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridColorProperty](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)

## Requirements

**Header:** afxpropertygridctrl.h

## <a name="cmfcpropertygridcolorproperty"></a> CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty

Constructs a `CMFCPropertyGridColorProperty` object.

```
CMFCPropertyGridColorProperty(
    const CString& strName,
    const COLORREF& color,
    CPalette* pPalette = NULL,
    LPCTSTR lpszDescr = NULL,
    DWORD_PTR dwData = 0);
```

### Parameters

*strName*<br/>
[in] The name of the property.

*color*<br/>
[in] The color value of the property.

*pPalette*<br/>
[in] Pointer to a palette of colors. The default value is NULL.

*lpszDescr*<br/>
[in] The property description. The default value is NULL.

*dwData*<br/>
[in] Application-specific data, such as an integer or a pointer to other data that is associated with the property. The default value is 0.

## <a name="enableautomaticbutton"></a> CMFCPropertyGridColorProperty::EnableAutomaticButton

Enables the *automatic* button on the color selection dialog box. (The standard automatic button is labeled **Automatic**.)

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### Parameters

*lpszLabel*<br/>
[in] The label text of the automatic button.

*colorAutomatic*<br/>
[in] The RGB color value of the automatic (default) color.

*bEnable*<br/>
[in] TRUE to enable the automatic button; otherwise, FALSE. The default value is TRUE.

### Remarks

## <a name="enableotherbutton"></a> CMFCPropertyGridColorProperty::EnableOtherButton

Enables the *other* button on the color selection dialog box. (The standard other button is labeled **More Colors**.)

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg = TRUE,
    BOOL bEnable = TRUE);
```

### Parameters

*lpszLabel*<br/>
[in] The label text of the other button.

*bAltColorDlg*<br/>
[in] TRUE to display the `CMFCColorDialog` dialog box; FALSE to display the standard color selection dialog box. The default value is TRUE.

*bEnable*<br/>
[in] TRUE to display the other button; otherwise, FALSE.  The default value is TRUE.

### Remarks

## <a name="getcolor"></a> CMFCPropertyGridColorProperty::GetColor

Gets the current color of the property.

```
COLORREF GetColor() const;
```

### Return Value

An RGB color value.

### Remarks

## <a name="setcolor"></a> CMFCPropertyGridColorProperty::SetColor

Sets a new color for the property.

```cpp
void SetColor(COLORREF color);
```

### Parameters

*color*<br/>
[in] An RGB color value.

### Remarks

## <a name="setcolumnsnumber"></a> CMFCPropertyGridColorProperty::SetColumnsNumber

Specifies the number of columns in the current color property grid.

```cpp
void SetColumnsNumber(int nColumnsNumber);
```

### Parameters

*nColumnsNumber*<br/>
[in] The preferred number of columns in the color property grid.

### Remarks

This method sets the value of the `m_nColumnsNumber` protected data member.

## <a name="setoriginalvalue"></a> CMFCPropertyGridColorProperty::SetOriginalValue

Sets the original value of an editable property.

```
virtual void SetOriginalValue(const COleVariant& varValue);
```

### Parameters

*varValue*<br/>
[in] A value.

### Remarks

Use the [CMFCPropertyGridProperty::ResetOriginalValue](../../mfc/reference/cmfcpropertygridproperty-class.md#resetoriginalvalue) method to reset the original value of an edited property.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[CMFCPropertyGridProperty Class](../../mfc/reference/cmfcpropertygridproperty-class.md)
