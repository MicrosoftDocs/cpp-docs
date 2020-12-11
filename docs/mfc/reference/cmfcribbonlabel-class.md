---
description: "Learn more about: CMFCRibbonLabel Class"
title: "CMFCRibbonLabel Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonLabel", "AFXRIBBONLABEL/CMFCRibbonLabel", "AFXRIBBONLABEL/CMFCRibbonLabel::CMFCRibbonLabel", "AFXRIBBONLABEL/CMFCRibbonLabel::SetACCData"]
helpviewer_keywords: ["CMFCRibbonLabel [MFC], CMFCRibbonLabel", "CMFCRibbonLabel [MFC], SetACCData"]
ms.assetid: 0346c891-83bf-4f20-b8a1-c84cf2aadced
---
# CMFCRibbonLabel Class

Implements a non-clickable text label for a ribbon.

## Syntax

```
class CMFCRibbonLabel : public CMFCRibbonButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonLabel::CMFCRibbonLabel](#cmfcribbonlabel)|Constructs and initializes a `CMFCRibbonLabel` object with the specified text string.|
|`CMFCRibbonLabel::~CMFCRibbonLabel`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCRibbonLabel::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCRibbonLabel::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCRibbonLabel::SetACCData](#setaccdata)|Determines the accessibility data for the current ribbon label element. (Overrides [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|

### Remarks

After you create a ribbon label, add it to a panel by calling [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

You cannot add a ribbon label to the Quick Access Toolbar.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md)

## Requirements

**Header:** afxRibbonLabel.h

## <a name="cmfcribbonlabel"></a> CMFCRibbonLabel::CMFCRibbonLabel

Constructs and initializes a [CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md) object that displays the specified text string.

```
CMFCRibbonLabel(
    LPCTSTR lpszText,
    BOOL bIsMultiLine = FALSE);
```

### Parameters

*lpszText*<br/>
[in] The text to appear in the label.

*bIsMultiLine*<br/>
[in] TRUE to specify that the label is a multi-line label; otherwise, FALSE.

## <a name="setaccdata"></a> CMFCRibbonLabel::SetACCData

Determines the accessibility data for the current ribbon label element.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### Parameters

*pParent*<br/>
[in] Represents the parent window of the current ribbon label.

*data*<br/>
[out] An object of type `CAccessibilityData` that is populated with the accessibility data of the current ribbon label.

### Return Value

TRUE if the *data* parameter was successfully populated with the accessibility data of the current ribbon label; otherwise, FALSE.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)
