---
description: "Learn more about: CD2DSolidColorBrush Class"
title: "CD2DSolidColorBrush Class"
ms.date: "03/27/2019"
f1_keywords: ["CD2DSolidColorBrush", "AFXRENDERTARGET/CD2DSolidColorBrush", "AFXRENDERTARGET/CD2DSolidColorBrush::CD2DSolidColorBrush", "AFXRENDERTARGET/CD2DSolidColorBrush::Attach", "AFXRENDERTARGET/CD2DSolidColorBrush::Create", "AFXRENDERTARGET/CD2DSolidColorBrush::Destroy", "AFXRENDERTARGET/CD2DSolidColorBrush::Detach", "AFXRENDERTARGET/CD2DSolidColorBrush::Get", "AFXRENDERTARGET/CD2DSolidColorBrush::GetColor", "AFXRENDERTARGET/CD2DSolidColorBrush::SetColor", "AFXRENDERTARGET/CD2DSolidColorBrush::m_colorSolid", "AFXRENDERTARGET/CD2DSolidColorBrush::m_pSolidColorBrush"]
helpviewer_keywords: ["CD2DSolidColorBrush [MFC], CD2DSolidColorBrush", "CD2DSolidColorBrush [MFC], Attach", "CD2DSolidColorBrush [MFC], Create", "CD2DSolidColorBrush [MFC], Destroy", "CD2DSolidColorBrush [MFC], Detach", "CD2DSolidColorBrush [MFC], Get", "CD2DSolidColorBrush [MFC], GetColor", "CD2DSolidColorBrush [MFC], SetColor", "CD2DSolidColorBrush [MFC], m_colorSolid", "CD2DSolidColorBrush [MFC], m_pSolidColorBrush"]
ms.assetid: d4506637-acce-4f74-8a9b-f0a45571a735
---
# CD2DSolidColorBrush Class

A wrapper for ID2D1SolidColorBrush.

## Syntax

```
class CD2DSolidColorBrush : public CD2DBrush;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DSolidColorBrush::CD2DSolidColorBrush](#cd2dsolidcolorbrush)|Overloaded. Constructs a CD2DSolidColorBrush object.|
|[CD2DSolidColorBrush::~CD2DSolidColorBrush](#_dtorcd2dsolidcolorbrush)|The destructor. Called when a D2D solid brush object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DSolidColorBrush::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DSolidColorBrush::Create](#create)|Creates a CD2DSolidColorBrush. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DSolidColorBrush::Destroy](#destroy)|Destroys a CD2DSolidColorBrush object. (Overrides [CD2DBrush::Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|
|[CD2DSolidColorBrush::Detach](#detach)|Detaches resource interface from the object|
|[CD2DSolidColorBrush::Get](#get)|Returns ID2D1SolidColorBrush interface|
|[CD2DSolidColorBrush::GetColor](#getcolor)|Retrieves the color of the solid color brush|
|[CD2DSolidColorBrush::SetColor](#setcolor)|Specifies the color of this solid color brush|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DSolidColorBrush::operator ID2D1SolidColorBrush*](#operator_id2d1solidcolorbrush_star)|Returns ID2D1SolidColorBrush interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DSolidColorBrush::m_colorSolid](#m_colorsolid)|Brush solid color.|
|[CD2DSolidColorBrush::m_pSolidColorBrush](#m_psolidcolorbrush)|Stores a pointer to an ID2D1SolidColorBrush object.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

[CD2DSolidColorBrush](../../mfc/reference/cd2dsolidcolorbrush-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dsolidcolorbrush"></a> CD2DSolidColorBrush::~CD2DSolidColorBrush

The destructor. Called when a D2D solid brush object is being destroyed.

```
virtual ~CD2DSolidColorBrush();
```

## <a name="attach"></a> CD2DSolidColorBrush::Attach

Attaches existing resource interface to the object

```cpp
void Attach(ID2D1SolidColorBrush* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL

## <a name="cd2dsolidcolorbrush"></a> CD2DSolidColorBrush::CD2DSolidColorBrush

Constructs a CD2DSolidColorBrush object.

```
CD2DSolidColorBrush(
    CRenderTarget* pParentTarget,
    D2D1_COLOR_F color,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);

CD2DSolidColorBrush(
    CRenderTarget* pParentTarget,
    COLORREF color,
    int nAlpha = 255,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*color*<br/>
The red, green, blue, and alpha values of the brush's color.

*pBrushProperties*<br/>
A pointer to the opacity and transformation of a brush.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

*nAlpha*<br/>
The opacity of the brush's color.

## <a name="create"></a> CD2DSolidColorBrush::Create

Creates a CD2DSolidColorBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DSolidColorBrush::Destroy

Destroys a CD2DSolidColorBrush object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DSolidColorBrush::Detach

Detaches resource interface from the object

```
ID2D1SolidColorBrush* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="get"></a> CD2DSolidColorBrush::Get

Returns ID2D1SolidColorBrush interface

```
ID2D1SolidColorBrush* Get();
```

### Return Value

Pointer to an ID2D1SolidColorBrush interface or NULL if object is not initialized yet.

## <a name="getcolor"></a> CD2DSolidColorBrush::GetColor

Retrieves the color of the solid color brush

```
D2D1_COLOR_F GetColor() const;
```

### Return Value

The color of this solid color brush

## <a name="m_colorsolid"></a> CD2DSolidColorBrush::m_colorSolid

Brush solid color.

```
D2D1_COLOR_F m_colorSolid;
```

## <a name="m_psolidcolorbrush"></a> CD2DSolidColorBrush::m_pSolidColorBrush

Stores a pointer to an ID2D1SolidColorBrush object.

```
ID2D1SolidColorBrush* m_pSolidColorBrush;
```

## <a name="operator_id2d1solidcolorbrush_star"></a> CD2DSolidColorBrush::operator ID2D1SolidColorBrush*

Returns ID2D1SolidColorBrush interface

```
operator ID2D1SolidColorBrush*();
```

### Return Value

Pointer to an ID2D1SolidColorBrush interface or NULL if object is not initialized yet.

## <a name="setcolor"></a> CD2DSolidColorBrush::SetColor

Specifies the color of this solid color brush

```cpp
void SetColor(D2D1_COLOR_F color);
```

### Parameters

*color*<br/>
The color of this solid color brush

## See also

[Classes](../../mfc/reference/mfc-classes.md)
