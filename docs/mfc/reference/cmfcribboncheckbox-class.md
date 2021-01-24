---
description: "Learn more about: CMFCRibbonCheckBox Class"
title: "CMFCRibbonCheckBox Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonCheckBox", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::CMFCRibbonCheckBox", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetCompactSize", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetIntermediateSize", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetRegularSize", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::IsDrawTooltipImage", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDraw", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDrawMenuImage", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDrawOnList", "AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::SetACCData"]
helpviewer_keywords: ["CMFCRibbonCheckBox [MFC], CMFCRibbonCheckBox", "CMFCRibbonCheckBox [MFC], GetCompactSize", "CMFCRibbonCheckBox [MFC], GetIntermediateSize", "CMFCRibbonCheckBox [MFC], GetRegularSize", "CMFCRibbonCheckBox [MFC], IsDrawTooltipImage", "CMFCRibbonCheckBox [MFC], OnDraw", "CMFCRibbonCheckBox [MFC], OnDrawMenuImage", "CMFCRibbonCheckBox [MFC], OnDrawOnList", "CMFCRibbonCheckBox [MFC], SetACCData"]
ms.assetid: 3a6c3891-c8d1-4af0-b954-7b9ab048782a
---
# CMFCRibbonCheckBox Class

The `CMFCRibbonCheckBox` class implements a check box that you can add to a ribbon panel, Quick Access Toolbar, or popup menu.

## Syntax

```
class CMFCRibbonCheckBox : public CMFCRibbonButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonCheckBox::CMFCRibbonCheckBox](#cmfcribboncheckbox)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonCheckBox::GetCompactSize](#getcompactsize)|(Overrides [CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|
|[CMFCRibbonCheckBox::GetIntermediateSize](#getintermediatesize)|(Overrides [CMFCRibbonButton::GetIntermediateSize](../../mfc/reference/cmfcribbonbutton-class.md#getintermediatesize).)|
|[CMFCRibbonCheckBox::GetRegularSize](#getregularsize)|(Overrides [CMFCRibbonButton::GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).)|
|[CMFCRibbonCheckBox::IsDrawTooltipImage](#isdrawtooltipimage)|(Overrides `CMFCRibbonButton::IsDrawTooltipImage`.)|
|[CMFCRibbonCheckBox::OnDraw](#ondraw)|(Overrides [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|
|[CMFCRibbonCheckBox::OnDrawMenuImage](#ondrawmenuimage)|(Overrides [CMFCRibbonBaseElement::OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|
|[CMFCRibbonCheckBox::OnDrawOnList](#ondrawonlist)|(Overrides `CMFCRibbonButton::OnDrawOnList`.)|
|[CMFCRibbonCheckBox::SetACCData](#setaccdata)|(Overrides [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|

## Remarks

To use a `CMFCRibbonCheckBox` in your application, add the following constructor to your code:

```
CMFCRibbonCheckBox (UINT nID, LPCTSTR lpszText)
```

where *nID* is the check box command ID and *lpszText* is the text label of the check box.

You can add a check box to a ribbon panel by using [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonCheckBox](../../mfc/reference/cmfcribboncheckbox-class.md)

## Requirements

**Header:** afxribboncheckbox.h

## <a name="cmfcribboncheckbox"></a> CMFCRibbonCheckBox::CMFCRibbonCheckBox

Constructor of a ribbon check box object

```
CMFCRibbonCheckBox(
    UINT nID,
    LPCTSTR lpszText);
```

### Parameters

*nID*<br/>
[in] Specifies command ID.

*lpszText*<br/>
[in] Specifies text label.

### Return Value

Constructs a ribbon check box object.

### Example

The following example demonstrates how to construct an object of the `CMFCRibbonCheckBox` class.

[!code-cpp[NVC_MFC_RibbonApp#17](../../mfc/reference/codesnippet/cpp/cmfcribboncheckbox-class_1.cpp)]

## <a name="getcompactsize"></a> CMFCRibbonCheckBox::GetCompactSize

When overridden, gets the compact size of the check box.

```
virtual CSize GetCompactSize(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to the CDC associated with the check box.

### Return Value

Returns a `CSize` object that contains the compact size of the check box.

### Remarks

If not overridden, returns the intermediate size of the check box.

## <a name="getintermediatesize"></a> CMFCRibbonCheckBox::GetIntermediateSize

Gets the intermediate size of the check box.

```
virtual CSize GetIntermediateSize(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to the CDC associated with this check box.

### Return Value

A `CSize` object containing the intermediate size of the check box.

### Remarks

If not overridden, calculates the intermediate size as the default check box size ( `AFX_CHECK_BOX_DEFAULT_SIZE`) plus the text size, plus margins.

## <a name="getregularsize"></a> CMFCRibbonCheckBox::GetRegularSize

Gets the regular size of the check box.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to the CDC object associated with this check box.

### Return Value

Returns a `CSize` object that contains the regular size of the check box.

### Remarks

If not overridden, returns the intermediate size of the check box.

## <a name="isdrawtooltipimage"></a> CMFCRibbonCheckBox::IsDrawTooltipImage

Indicates whether there is a tooltip image associated with the check box.

```
virtual BOOL IsDrawTooltipImage() const;
```

### Return Value

Returns TRUE if there is a tooltip image associated with the check box, or FALSE if not.

### Remarks

## <a name="ondraw"></a> CMFCRibbonCheckBox::OnDraw

Called by the framework to draw the check box using a specified device context.

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to the CDC in which to draw the check box.

### Remarks

## <a name="ondrawmenuimage"></a> CMFCRibbonCheckBox::OnDrawMenuImage

Called by the framework to draw a menu image for the check box.

```
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```

### Parameters

[in] *CDC&#42;*<br/>
Pointer to the CDC associated with the check box.

*CRect*<br/>
[in] A `CRect` object specifying the rectangle in which to draw the menu image.

### Return Value

Returns TRUE if the image was drawn, or FALSE if not.

### Remarks

If not overridden, returns FALSE.

## <a name="ondrawonlist"></a> CMFCRibbonCheckBox::OnDrawOnList

Called by the framework to draw the check box in a commands list box.

```
virtual void OnDrawOnList(
    CDC* pDC,
    CString strText,
    int nTextOffset,
    CRect rect,
    BOOL bIsSelected,
    BOOL bHighlighted);
```

### Parameters

*pDC*<br/>
[in] Pointer to the device context in which to draw the check box.

*strText*<br/>
[in] The display text.

*nTextOffset*<br/>
[in] The distance, in pixels, from the left side of the list box to the display text.

*rect*<br/>
[in] The display rectangle for the check box.

*bIsSelected*<br/>
[in] TRUE if the check box is selected, or FALSE if not.

*bHighlighted*<br/>
[in] TRUE if the check box is highlighted, or FALSE if not.

### Remarks

## <a name="setaccdata"></a> CMFCRibbonCheckBox::SetACCData

Sets the accessibility data for the check box.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### Parameters

*pParent*<br/>
The parent window of the check box.

*data*<br/>
The accessibility data for the check box.

### Return Value

Always returns TRUE.

### Remarks

By default this method sets the accessibility data for the check box and always returns TRUE. Override this method to set the accessibility data and return a value that indicates success or failure.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonPanel Class](../../mfc/reference/cmfcribbonpanel-class.md)
