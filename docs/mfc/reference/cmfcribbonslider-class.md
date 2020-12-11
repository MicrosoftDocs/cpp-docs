---
description: "Learn more about: CMFCRibbonSlider Class"
title: "CMFCRibbonSlider Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonSlider", "AFXRIBBONSLIDER/CMFCRibbonSlider", "AFXRIBBONSLIDER/CMFCRibbonSlider::CMFCRibbonSlider", "AFXRIBBONSLIDER/CMFCRibbonSlider::GetPos", "AFXRIBBONSLIDER/CMFCRibbonSlider::GetRangeMax", "AFXRIBBONSLIDER/CMFCRibbonSlider::GetRangeMin", "AFXRIBBONSLIDER/CMFCRibbonSlider::GetRegularSize", "AFXRIBBONSLIDER/CMFCRibbonSlider::GetZoomIncrement", "AFXRIBBONSLIDER/CMFCRibbonSlider::HasZoomButtons", "AFXRIBBONSLIDER/CMFCRibbonSlider::OnDraw", "AFXRIBBONSLIDER/CMFCRibbonSlider::SetPos", "AFXRIBBONSLIDER/CMFCRibbonSlider::SetRange", "AFXRIBBONSLIDER/CMFCRibbonSlider::SetZoomButtons", "AFXRIBBONSLIDER/CMFCRibbonSlider::SetZoomIncrement"]
helpviewer_keywords: ["CMFCRibbonSlider [MFC], CMFCRibbonSlider", "CMFCRibbonSlider [MFC], GetPos", "CMFCRibbonSlider [MFC], GetRangeMax", "CMFCRibbonSlider [MFC], GetRangeMin", "CMFCRibbonSlider [MFC], GetRegularSize", "CMFCRibbonSlider [MFC], GetZoomIncrement", "CMFCRibbonSlider [MFC], HasZoomButtons", "CMFCRibbonSlider [MFC], OnDraw", "CMFCRibbonSlider [MFC], SetPos", "CMFCRibbonSlider [MFC], SetRange", "CMFCRibbonSlider [MFC], SetZoomButtons", "CMFCRibbonSlider [MFC], SetZoomIncrement"]
ms.assetid: 9351ac34-f234-4e42-91e2-763f1989c8ff
---
# CMFCRibbonSlider Class

The `CMFCRibbonSlider` class implements a slider control that you can add to a ribbon bar or ribbon status bar. The ribbon slider control resembles the zoom sliders that appear in Office 2007 applications.

## Syntax

```
class CMFCRibbonSlider : public CMFCRibbonBaseElement
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonSlider::CMFCRibbonSlider](#cmfcribbonslider)|Constructs and initializes a ribbon slider control.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonSlider::GetPos](#getpos)|Returns the current position of the slider control.|
|[CMFCRibbonSlider::GetRangeMax](#getrangemax)|Returns the maximum value of the slider.|
|[CMFCRibbonSlider::GetRangeMin](#getrangemin)|Returns the minimum value of the slider.|
|[CMFCRibbonSlider::GetRegularSize](#getregularsize)|Returns the regular size of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonSlider::GetZoomIncrement](#getzoomincrement)|Returns the size of the zoom increment for the slider control.|
|[CMFCRibbonSlider::HasZoomButtons](#haszoombuttons)|Specifies whether the slider has zoom buttons.|
|[CMFCRibbonSlider::OnDraw](#ondraw)|Called by the framework to draw the ribbon element. (Overrides [CMFCRibbonBaseElement::OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).)|
|[CMFCRibbonSlider::SetPos](#setpos)|Sets the current position of the slider control.|
|[CMFCRibbonSlider::SetRange](#setrange)|Specifies the range of the slider control by setting the minimum and maximum values.|
|[CMFCRibbonSlider::SetZoomButtons](#setzoombuttons)|Shows or hides the zoom buttons.|
|[CMFCRibbonSlider::SetZoomIncrement](#setzoomincrement)|Sets size of the zoom increment for the slider control.|

## Remarks

You can use the `SetRange` method to configure the range of zoom increments for the slider. You can set current position of the slider by using the `SetPos` method.

You can display circular zoom buttons on the left and right side of the slider control by using the `SetZoomButtons` method. By default, the slider is horizontal, the left zoom button displays a minus sign and the right zoom button displays a plus sign.

The `SetZoomIncrement` method defines the increment to add to or subtract from the current position when a user clicks the zoom buttons.

## Example

The following example demonstrates how to use various methods in the `CMFCRibbonSlider` class to set the properties of the slider. The example shows how to construct a `CMFCRibbonSlider` object, display zoom buttons, set the current position of the slider control, and set the range of values for the slider control.

[!code-cpp[NVC_MFC_RibbonApp#12](../../mfc/reference/codesnippet/cpp/cmfcribbonslider-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md)

## Requirements

**Header:** afxribbonslider.h

## <a name="cmfcribbonslider"></a> CMFCRibbonSlider::CMFCRibbonSlider

Construct a ribbon slider.

```
CMFCRibbonSlider(
    UINT nID,
    int nWidth=100);
```

### Parameters

*nID*<br/>
[in] Slider ID.

[in]. *nWidth*
Slider width in pixels.

### Remarks

Constructs a ribbon slider that is *nWidth* pixels wide in the panel category where the slider is added. By default, the slider is horizontal.

## <a name="getpos"></a> CMFCRibbonSlider::GetPos

Returns the current position of the slider control.

```
int GetPos() const;
```

### Return Value

The current position of the slider control, which is a position relative to the beginning of the slider.

## <a name="getrangemax"></a> CMFCRibbonSlider::GetRangeMax

Obtains the maximum increment of the slider that the slider can travel on the slider control.

```
int GetRangeMax() const;
```

### Return Value

The maximum increment of the slider that the slider can travel on the slider control.

## <a name="getrangemin"></a> CMFCRibbonSlider::GetRangeMin

Returns the minimum increment that the slider can travel on the slider control.

```
int GetRangeMin() const;
```

### Return Value

The minimum increment that the slider can travel on the slider control.

## <a name="getregularsize"></a> CMFCRibbonSlider::GetRegularSize

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Return Value

### Remarks

## <a name="getzoomincrement"></a> CMFCRibbonSlider::GetZoomIncrement

Obtain the zoom increment for the slider control.

```
int GetZoomIncrement() const;
```

### Return Value

The zoom increment for the slider control.

## <a name="haszoombuttons"></a> CMFCRibbonSlider::HasZoomButtons

Specifies whether the slider has zoom buttons.

```
BOOL HasZoomButtons() const;
```

### Return Value

TRUE if the slider has zoom buttons; FALSE otherwise.

## <a name="ondraw"></a> CMFCRibbonSlider::OnDraw

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Remarks

## <a name="setpos"></a> CMFCRibbonSlider::SetPos

Set the current position of the slider control.

```cpp
void SetPos(
    int nPos,
    BOOL bRedraw=TRUE);
```

### Parameters

*nPos*<br/>
[in] Specifies the position to set for the slider. The position is relative to the beginning of the slider.

*bRedraw*<br/>
[in] If TRUE, the slider will be redrawn.

## <a name="setrange"></a> CMFCRibbonSlider::SetRange

Set the range of values for the slider control.

```cpp
void SetRange(
    int nMin,
    int nMax);
```

### Parameters

*nMin*<br/>
[in] Specifies minimum value of the slider control.

*nMax*<br/>
[in] Specifies maximum value of the slider control.

### Remarks

Specifies the range of values for the slider control by setting the minimum and maximum values.

## <a name="setzoombuttons"></a> CMFCRibbonSlider::SetZoomButtons

Display or hide zoom buttons.

```cpp
void SetZoomButtons(BOOL bSet=TRUE);
```

### Parameters

[in]. *bSet*
TRUE to display zoom buttons; FALSE to hide them.

## <a name="setzoomincrement"></a> CMFCRibbonSlider::SetZoomIncrement

Set the zoom increment for the slider control.

```cpp
void SetZoomIncrement(int nZoomIncrement);
```

### Parameters

*nZoomIncrement*<br/>
[in] Specifies the zoom increment of the slider control.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)
