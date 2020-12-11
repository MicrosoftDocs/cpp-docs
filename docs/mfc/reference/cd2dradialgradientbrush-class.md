---
description: "Learn more about: CD2DRadialGradientBrush Class"
title: "CD2DRadialGradientBrush Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DRadialGradientBrush", "AFXRENDERTARGET/CD2DRadialGradientBrush", "AFXRENDERTARGET/CD2DRadialGradientBrush::CD2DRadialGradientBrush", "AFXRENDERTARGET/CD2DRadialGradientBrush::Attach", "AFXRENDERTARGET/CD2DRadialGradientBrush::Create", "AFXRENDERTARGET/CD2DRadialGradientBrush::Destroy", "AFXRENDERTARGET/CD2DRadialGradientBrush::Detach", "AFXRENDERTARGET/CD2DRadialGradientBrush::Get", "AFXRENDERTARGET/CD2DRadialGradientBrush::GetCenter", "AFXRENDERTARGET/CD2DRadialGradientBrush::GetGradientOriginOffset", "AFXRENDERTARGET/CD2DRadialGradientBrush::GetRadiusX", "AFXRENDERTARGET/CD2DRadialGradientBrush::GetRadiusY", "AFXRENDERTARGET/CD2DRadialGradientBrush::SetCenter", "AFXRENDERTARGET/CD2DRadialGradientBrush::SetGradientOriginOffset", "AFXRENDERTARGET/CD2DRadialGradientBrush::SetRadiusX", "AFXRENDERTARGET/CD2DRadialGradientBrush::SetRadiusY", "AFXRENDERTARGET/CD2DRadialGradientBrush::m_pRadialGradientBrush", "AFXRENDERTARGET/CD2DRadialGradientBrush::m_RadialGradientBrushProperties"]
helpviewer_keywords: ["CD2DRadialGradientBrush [MFC], CD2DRadialGradientBrush", "CD2DRadialGradientBrush [MFC], Attach", "CD2DRadialGradientBrush [MFC], Create", "CD2DRadialGradientBrush [MFC], Destroy", "CD2DRadialGradientBrush [MFC], Detach", "CD2DRadialGradientBrush [MFC], Get", "CD2DRadialGradientBrush [MFC], GetCenter", "CD2DRadialGradientBrush [MFC], GetGradientOriginOffset", "CD2DRadialGradientBrush [MFC], GetRadiusX", "CD2DRadialGradientBrush [MFC], GetRadiusY", "CD2DRadialGradientBrush [MFC], SetCenter", "CD2DRadialGradientBrush [MFC], SetGradientOriginOffset", "CD2DRadialGradientBrush [MFC], SetRadiusX", "CD2DRadialGradientBrush [MFC], SetRadiusY", "CD2DRadialGradientBrush [MFC], m_pRadialGradientBrush", "CD2DRadialGradientBrush [MFC], m_RadialGradientBrushProperties"]
ms.assetid: 6c76d84a-d831-4ee2-96f1-82c1f5b0d6a9
---
# CD2DRadialGradientBrush Class

A wrapper for ID2D1RadialGradientBrush.

## Syntax

```
class CD2DRadialGradientBrush : public CD2DGradientBrush;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush::CD2DRadialGradientBrush](#cd2dradialgradientbrush)|Constructs a CD2DLinearGradientBrush object.|
|[CD2DRadialGradientBrush::~CD2DRadialGradientBrush](#_dtorcd2dradialgradientbrush)|The destructor. Called when a D2D radial gradient brush object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DRadialGradientBrush::Create](#create)|Creates a CD2DRadialGradientBrush. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DRadialGradientBrush::Destroy](#destroy)|Destroys a CD2DRadialGradientBrush object. (Overrides [CD2DGradientBrush::Destroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).)|
|[CD2DRadialGradientBrush::Detach](#detach)|Detaches resource interface from the object|
|[CD2DRadialGradientBrush::Get](#get)|Returns ID2D1RadialGradientBrush interface|
|[CD2DRadialGradientBrush::GetCenter](#getcenter)|Retrieves the center of the gradient ellipse|
|[CD2DRadialGradientBrush::GetGradientOriginOffset](#getgradientoriginoffset)|Retrieves the offset of the gradient origin relative to the gradient ellipse's center|
|[CD2DRadialGradientBrush::GetRadiusX](#getradiusx)|Retrieves the x-radius of the gradient ellipse|
|[CD2DRadialGradientBrush::GetRadiusY](#getradiusy)|Retrieves the y-radius of the gradient ellipse|
|[CD2DRadialGradientBrush::SetCenter](#setcenter)|Specifies the center of the gradient ellipse in the brush's coordinate space|
|[CD2DRadialGradientBrush::SetGradientOriginOffset](#setgradientoriginoffset)|Specifies the offset of the gradient origin relative to the gradient ellipse's center|
|[CD2DRadialGradientBrush::SetRadiusX](#setradiusx)|Specifies the x-radius of the gradient ellipse, in the brush's coordinate space|
|[CD2DRadialGradientBrush::SetRadiusY](#setradiusy)|Specifies the y-radius of the gradient ellipse, in the brush's coordinate space|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush*](#operator_id2d1radialgradientbrush_star)|Returns ID2D1RadialGradientBrush interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush::m_pRadialGradientBrush](#m_pradialgradientbrush)|A pointer to an ID2D1RadialGradientBrush.|
|[CD2DRadialGradientBrush::m_RadialGradientBrushProperties](#m_radialgradientbrushproperties)|The center, gradient origin offset, and x-radius and y-radius of the brush's gradient.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

[CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)

`CD2DRadialGradientBrush`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dradialgradientbrush"></a> CD2DRadialGradientBrush::~CD2DRadialGradientBrush

The destructor. Called when a D2D radial gradient brush object is being destroyed.

```
virtual ~CD2DRadialGradientBrush();
```

## <a name="attach"></a> CD2DRadialGradientBrush::Attach

Attaches existing resource interface to the object

```cpp
void Attach(ID2D1RadialGradientBrush* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL

## <a name="cd2dradialgradientbrush"></a> CD2DRadialGradientBrush::CD2DRadialGradientBrush

Constructs a CD2DLinearGradientBrush object.

```
CD2DRadialGradientBrush(
    CRenderTarget* pParentTarget,
    const D2D1_GRADIENT_STOP* gradientStops,
    UINT gradientStopsCount,
    D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES RadialGradientBrushProperties,
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

*RadialGradientBrushProperties*<br/>
The center, gradient origin offset, and x-radius and y-radius of the brush's gradient.

*colorInterpolationGamma*<br/>
The space in which color interpolation between the gradient stops is performed.

*extendMode*<br/>
The behavior of the gradient outside the [0,1] normalized range.

*pBrushProperties*<br/>
A pointer to the opacity and transformation of a brush.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="create"></a> CD2DRadialGradientBrush::Create

Creates a CD2DRadialGradientBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DRadialGradientBrush::Destroy

Destroys a CD2DRadialGradientBrush object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DRadialGradientBrush::Detach

Detaches resource interface from the object

```
ID2D1RadialGradientBrush* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="get"></a> CD2DRadialGradientBrush::Get

Returns ID2D1RadialGradientBrush interface

```
ID2D1RadialGradientBrush* Get();
```

### Return Value

Pointer to an ID2D1RadialGradientBrush interface or NULL if object is not initialized yet.

## <a name="getcenter"></a> CD2DRadialGradientBrush::GetCenter

Retrieves the center of the gradient ellipse

```
CD2DPointF GetCenter() const;
```

### Return Value

The center of the gradient ellipse. This value is expressed in the brush's coordinate space

## <a name="getgradientoriginoffset"></a> CD2DRadialGradientBrush::GetGradientOriginOffset

Retrieves the offset of the gradient origin relative to the gradient ellipse's center

```
CD2DPointF GetGradientOriginOffset() const;
```

### Return Value

The offset of the gradient origin from the center of the gradient ellipse. This value is expressed in the brush's coordinate space

## <a name="getradiusx"></a> CD2DRadialGradientBrush::GetRadiusX

Retrieves the x-radius of the gradient ellipse

```
FLOAT GetRadiusX() const;
```

### Return Value

The x-radius of the gradient ellipse. This value is expressed in the brush's coordinate space

## <a name="getradiusy"></a> CD2DRadialGradientBrush::GetRadiusY

Retrieves the y-radius of the gradient ellipse

```
FLOAT GetRadiusY() const;
```

### Return Value

The y-radius of the gradient ellipse. This value is expressed in the brush's coordinate space

## <a name="m_pradialgradientbrush"></a> CD2DRadialGradientBrush::m_pRadialGradientBrush

A pointer to an ID2D1RadialGradientBrush.

```
ID2D1RadialGradientBrush* m_pRadialGradientBrush;
```

## <a name="m_radialgradientbrushproperties"></a> CD2DRadialGradientBrush::m_RadialGradientBrushProperties

The center, gradient origin offset, and x-radius and y-radius of the brush's gradient.

```
D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES m_RadialGradientBrushProperties;
```

## <a name="operator_id2d1radialgradientbrush_star"></a> CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush*

Returns ID2D1RadialGradientBrush interface

```
operator ID2D1RadialGradientBrush*();
```

### Return Value

Pointer to an ID2D1RadialGradientBrush interface or NULL if object is not initialized yet.

## <a name="setcenter"></a> CD2DRadialGradientBrush::SetCenter

Specifies the center of the gradient ellipse in the brush's coordinate space

```cpp
void SetCenter(CD2DPointF point);
```

### Parameters

*point*<br/>
The center of the gradient ellipse, in the brush's coordinate space

## <a name="setgradientoriginoffset"></a> CD2DRadialGradientBrush::SetGradientOriginOffset

Specifies the offset of the gradient origin relative to the gradient ellipse's center

```cpp
void SetGradientOriginOffset(CD2DPointF gradientOriginOffset);
```

### Parameters

*gradientOriginOffset*<br/>
The offset of the gradient origin from the center of the gradient ellipse

## <a name="setradiusx"></a> CD2DRadialGradientBrush::SetRadiusX

Specifies the x-radius of the gradient ellipse, in the brush's coordinate space

```cpp
void SetRadiusX(FLOAT radiusX);
```

### Parameters

*radiusX*<br/>
The x-radius of the gradient ellipse. This value is in the brush's coordinate space

## <a name="setradiusy"></a> CD2DRadialGradientBrush::SetRadiusY

Specifies the y-radius of the gradient ellipse, in the brush's coordinate space

```cpp
void SetRadiusY(FLOAT radiusY);
```

### Parameters

*radiusY*<br/>
The y-radius of the gradient ellipse. This value is in the brush's coordinate space

## See also

[Classes](../../mfc/reference/mfc-classes.md)
