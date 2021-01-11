---
description: "Learn more about: CD2DBrush Class"
title: "CD2DBrush Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DBrush", "AFXRENDERTARGET/CD2DBrush", "AFXRENDERTARGET/CD2DBrush::CD2DBrush", "AFXRENDERTARGET/CD2DBrush::Attach", "AFXRENDERTARGET/CD2DBrush::Destroy", "AFXRENDERTARGET/CD2DBrush::Detach", "AFXRENDERTARGET/CD2DBrush::Get", "AFXRENDERTARGET/CD2DBrush::GetOpacity", "AFXRENDERTARGET/CD2DBrush::GetTransform", "AFXRENDERTARGET/CD2DBrush::IsValid", "AFXRENDERTARGET/CD2DBrush::SetOpacity", "AFXRENDERTARGET/CD2DBrush::SetTransform", "AFXRENDERTARGET/CD2DBrush::m_pBrush", "AFXRENDERTARGET/CD2DBrush::m_pBrushProperties"]
helpviewer_keywords: ["CD2DBrush [MFC], CD2DBrush", "CD2DBrush [MFC], Attach", "CD2DBrush [MFC], Destroy", "CD2DBrush [MFC], Detach", "CD2DBrush [MFC], Get", "CD2DBrush [MFC], GetOpacity", "CD2DBrush [MFC], GetTransform", "CD2DBrush [MFC], IsValid", "CD2DBrush [MFC], SetOpacity", "CD2DBrush [MFC], SetTransform", "CD2DBrush [MFC], m_pBrush", "CD2DBrush [MFC], m_pBrushProperties"]
ms.assetid: 0d2c0857-2261-48a8-8ee0-a88cbf08499a
---
# CD2DBrush Class

A wrapper for ID2D1Brush.

## Syntax

```
class CD2DBrush : public CD2DResource;
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CD2DBrush::CD2DBrush](#cd2dbrush)|Constructs a CD2DBrush object.|
|[CD2DBrush::~CD2DBrush](#_dtorcd2dbrush)|The destructor. Called when a D2D brush object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DBrush::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DBrush::Destroy](#destroy)|Destroys a CD2DBrush object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DBrush::Detach](#detach)|Detaches resource interface from the object|
|[CD2DBrush::Get](#get)|Returns ID2D1Brush interface|
|[CD2DBrush::GetOpacity](#getopacity)|Gets the degree of opacity of this brush|
|[CD2DBrush::GetTransform](#gettransform)|Gets the current transform of the render target|
|[CD2DBrush::IsValid](#isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DBrush::SetOpacity](#setopacity)|Sets the degree of opacity of this brush|
|[CD2DBrush::SetTransform](#settransform)|Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DBrush::operator ID2D1Brush*](#operator_id2d1brush_star)|Returns ID2D1Brush interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DBrush::m_pBrush](#m_pbrush)|Stores a pointer to an ID2D1Brush object.|
|[CD2DBrush::m_pBrushProperties](#m_pbrushproperties)|Brush properties.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DBrush`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dbrush"></a> CD2DBrush::~CD2DBrush

The destructor. Called when a D2D brush object is being destroyed.

```
virtual ~CD2DBrush();
```

## <a name="attach"></a> CD2DBrush::Attach

Attaches existing resource interface to the object.

```cpp
void Attach(ID2D1Brush* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL.

## <a name="cd2dbrush"></a> CD2DBrush::CD2DBrush

Constructs a CD2DBrush object.

```
CD2DBrush(
    CRenderTarget* pParentTarget,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*pBrushProperties*<br/>
A pointer to the opacity and transformation of a brush.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="destroy"></a> CD2DBrush::Destroy

Destroys a CD2DBrush object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DBrush::Detach

Detaches resource interface from the object.

```
ID2D1Brush* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="get"></a> CD2DBrush::Get

Returns ID2D1Brush interface

```
ID2D1Brush* Get();
```

### Return Value

Pointer to an ID2D1Brush interface or NULL if object is not initialized yet.

## <a name="getopacity"></a> CD2DBrush::GetOpacity

Gets the degree of opacity of this brush

```
FLOAT GetOpacity() const;
```

### Return Value

A value between zero and 1 that indicates the opacity of the brush. This value is a constant multiplier that linearly scales the alpha value of all pixels filled by the brush. The opacity values are clamped in the range 0 to 1 before they are multiplied together.

## <a name="gettransform"></a> CD2DBrush::GetTransform

Gets the current transform of the render target

```cpp
void GetTransform(D2D1_MATRIX_3X2_F* transform) const;
```

### Parameters

*transform*<br/>
When this returns, contains the current transform of the render target. This parameter is passed uninitialized.

## <a name="isvalid"></a> CD2DBrush::IsValid

Checks resource validity

```
virtual BOOL IsValid() const;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_pbrush"></a> CD2DBrush::m_pBrush

Stores a pointer to an ID2D1Brush object.

```
ID2D1Brush* m_pBrush;
```

## <a name="m_pbrushproperties"></a> CD2DBrush::m_pBrushProperties

Brush properties.

```
CD2DBrushProperties* m_pBrushProperties;
```

## <a name="operator_id2d1brush_star"></a> CD2DBrush::operator ID2D1Brush*

Returns ID2D1Brush interface

```
operator ID2D1Brush*();
```

### Return Value

Pointer to an ID2D1Brush interface or NULL if object is not initialized yet.

## <a name="setopacity"></a> CD2DBrush::SetOpacity

Sets the degree of opacity of this brush

```cpp
void SetOpacity(FLOAT opacity);
```

### Parameters

*opacity*<br/>
A value between zero and 1 that indicates the opacity of the brush. This value is a constant multiplier that linearly scales the alpha value of all pixels filled by the brush. The opacity values are clamped in the range 0 to 1 before they are multiplied together.

## <a name="settransform"></a> CD2DBrush::SetTransform

Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.

```cpp
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
```

### Parameters

*transform*<br/>
The transform to apply to the render target

## See also

[Classes](../../mfc/reference/mfc-classes.md)
