---
description: "Learn more about: CMFCRibbonContextCaption Class"
title: "CMFCRibbonContextCaption Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonContextCaption", "AFXRIBBONBAR/CMFCRibbonContextCaption", "AFXRIBBONBAR/CMFCRibbonContextCaption::GetColor", "AFXRIBBONBAR/CMFCRibbonContextCaption::GetRightTabX"]
helpviewer_keywords: ["CMFCRibbonContextCaption [MFC], GetColor", "CMFCRibbonContextCaption [MFC], GetRightTabX"]
ms.assetid: cce2c0a2-8370-4266-997e-f8d0eeb3d616
---
# CMFCRibbonContextCaption Class

Implements a colored caption that appears at the top of a ribbon category or a context category.

## Syntax

```
class CMFCRibbonContextCaption : public CMFCRibbonButton
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCRibbonContextCaption::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCRibbonContextCaption::GetColor](#getcolor)|Returns the color of the caption.|
|[CMFCRibbonContextCaption::GetRightTabX](#getrighttabx)||
|`CMFCRibbonContextCaption::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|

## Remarks

This class cannot be directly instantiated. The [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md) class uses this class internally to add color to ribbon categories.

To set the color for ribbon categories, call [CMFCRibbonCategory::SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor). To set the color for context categories, call [CMFCRibbonBar::AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonContextCaption](../../mfc/reference/cmfcribboncontextcaption-class.md)

## Requirements

**Header:** afxRibbonBar.h

## <a name="getcolor"></a> CMFCRibbonContextCaption::GetColor

Returns the background color of the caption.

```
AFX_RibbonCategoryColor GetColor() const;
```

### Return Value

The returned value can be one of the following enumerated values:

- `AFX_CategoryColor_None`

- `AFX_CategoryColor_Red`

- `AFX_CategoryColor_Orange`

- `AFX_CategoryColor_Yellow`

- `AFX_CategoryColor_Green`

- `AFX_CategoryColor_Blue`

- `AFX_CategoryColor_Indigo`

- `AFX_CategoryColor_Violet`

### Remarks

The color of the caption can be set by calling [CMFCRibbonCategory::SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor) or [CMFCRibbonBar::AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).

## <a name="getrighttabx"></a> CMFCRibbonContextCaption::GetRightTabX

Retrieves the position of the right-hand edge of the category’s ribbon tab.

```
int GetRightTabX() const;
```

### Return Value

Returns the right-hand X-value of the enclosing rectangle of the `CMFCRibbonCategory` object’s ribbon tab, or a value of -1 if the tab is truncated.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md)<br/>
[CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)
