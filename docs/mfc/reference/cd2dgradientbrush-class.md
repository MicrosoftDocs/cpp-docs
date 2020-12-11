---
description: "Learn more about: CD2DGradientBrush Class"
title: "CD2DGradientBrush Class"
ms.date: "03/27/2019"
f1_keywords: ["CD2DGradientBrush", "AFXRENDERTARGET/CD2DGradientBrush", "AFXRENDERTARGET/CD2DGradientBrush::CD2DGradientBrush", "AFXRENDERTARGET/CD2DGradientBrush::Destroy", "AFXRENDERTARGET/CD2DGradientBrush::m_arGradientStops", "AFXRENDERTARGET/CD2DGradientBrush::m_colorInterpolationGamma", "AFXRENDERTARGET/CD2DGradientBrush::m_extendMode", "AFXRENDERTARGET/CD2DGradientBrush::m_pGradientStops"]
helpviewer_keywords: ["CD2DGradientBrush [MFC], CD2DGradientBrush", "CD2DGradientBrush [MFC], Destroy", "CD2DGradientBrush [MFC], m_arGradientStops", "CD2DGradientBrush [MFC], m_colorInterpolationGamma", "CD2DGradientBrush [MFC], m_extendMode", "CD2DGradientBrush [MFC], m_pGradientStops"]
ms.assetid: 5bf133e6-16b7-4e3a-845d-0ce63fafe5ec
---
# CD2DGradientBrush Class

The base class of the CD2DLinearGradientBrush and the CD2DRadialGradientBrush classes.

## Syntax

```
class CD2DGradientBrush : public CD2DBrush;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DGradientBrush::CD2DGradientBrush](#cd2dgradientbrush)|Constructs a CD2DGradientBrush object.|
|[CD2DGradientBrush::~CD2DGradientBrush](#_dtorcd2dgradientbrush)|The destructor. Called when a D2D gradient brush object is being destroyed.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CD2DGradientBrush::Destroy](#destroy)|Destroys a CD2DGradientBrush object. (Overrides [CD2DBrush::Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DGradientBrush::m_arGradientStops](#m_argradientstops)|Array of the D2D1_GRADIENT_STOP structures.|
|[CD2DGradientBrush::m_colorInterpolationGamma](#m_colorinterpolationgamma)|The space in which color interpolation between the gradient stops is performed.|
|[CD2DGradientBrush::m_extendMode](#m_extendmode)|The behavior of the gradient outside the [0,1] normalized range.|
|[CD2DGradientBrush::m_pGradientStops](#m_pgradientstops)|A pointer to an array of D2D1_GRADIENT_STOP structures.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

`CD2DGradientBrush`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dgradientbrush"></a> CD2DGradientBrush::~CD2DGradientBrush

The destructor. Called when a D2D gradient brush object is being destroyed.

```
virtual ~CD2DGradientBrush();
```

## <a name="cd2dgradientbrush"></a> CD2DGradientBrush::CD2DGradientBrush

Constructs a CD2DGradientBrush object.

```
CD2DGradientBrush(
    CRenderTarget* pParentTarget,
    const D2D1_GRADIENT_STOP* gradientStops,
    UINT gradientStopsCount,
    D2D1_GAMMA colorInterpolationGamma = D2D1_GAMMA_2_2,
    D2D1_EXTEND_MODE extendMode = D2D1_EXTEND_MODE_CLAMP,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*gradientStops*<br/>
A pointer to an array of D2D1_GRADIENT_STOP structures.

*gradientStopsCount*<br/>
A value greater than or equal to 1 that specifies the number of gradient stops in the gradientStops array.

*colorInterpolationGamma*<br/>
The space in which color interpolation between the gradient stops is performed.

*extendMode*<br/>
The behavior of the gradient outside the [0,1] normalized range.

*pBrushProperties*<br/>
A pointer to the opacity and transformation of a brush.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="destroy"></a> CD2DGradientBrush::Destroy

Destroys a CD2DGradientBrush object.

```
virtual void Destroy();
```

## <a name="m_argradientstops"></a> CD2DGradientBrush::m_arGradientStops

Array of the D2D1_GRADIENT_STOP structures.

```
CArray<D2D1_GRADIENT_STOP, D2D1_GRADIENT_STOP> m_arGradientStops;
```

## <a name="m_colorinterpolationgamma"></a> CD2DGradientBrush::m_colorInterpolationGamma

The space in which color interpolation between the gradient stops is performed.

```
D2D1_GAMMA m_colorInterpolationGamma;
```

## <a name="m_extendmode"></a> CD2DGradientBrush::m_extendMode

The behavior of the gradient outside the [0,1] normalized range.

```
D2D1_EXTEND_MODE m_extendMode;
```

## <a name="m_pgradientstops"></a> CD2DGradientBrush::m_pGradientStops

A pointer to an array of D2D1_GRADIENT_STOP structures.

```
ID2D1GradientStopCollection* m_pGradientStops;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
