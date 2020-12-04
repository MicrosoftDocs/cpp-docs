---
description: "Learn more about: CD2DBitmapBrush Class"
title: "CD2DBitmapBrush Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DBitmapBrush", "AFXRENDERTARGET/CD2DBitmapBrush", "AFXRENDERTARGET/CD2DBitmapBrush::CD2DBitmapBrush", "AFXRENDERTARGET/CD2DBitmapBrush::Attach", "AFXRENDERTARGET/CD2DBitmapBrush::Create", "AFXRENDERTARGET/CD2DBitmapBrush::Destroy", "AFXRENDERTARGET/CD2DBitmapBrush::Detach", "AFXRENDERTARGET/CD2DBitmapBrush::Get", "AFXRENDERTARGET/CD2DBitmapBrush::GetBitmap", "AFXRENDERTARGET/CD2DBitmapBrush::GetExtendModeX", "AFXRENDERTARGET/CD2DBitmapBrush::GetExtendModeY", "AFXRENDERTARGET/CD2DBitmapBrush::GetInterpolationMode", "AFXRENDERTARGET/CD2DBitmapBrush::SetBitmap", "AFXRENDERTARGET/CD2DBitmapBrush::SetExtendModeX", "AFXRENDERTARGET/CD2DBitmapBrush::SetExtendModeY", "AFXRENDERTARGET/CD2DBitmapBrush::SetInterpolationMode", "AFXRENDERTARGET/CD2DBitmapBrush::CommonInit", "AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmap", "AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmapBrush", "AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmapBrushProperties"]
helpviewer_keywords: ["CD2DBitmapBrush [MFC], CD2DBitmapBrush", "CD2DBitmapBrush [MFC], Attach", "CD2DBitmapBrush [MFC], Create", "CD2DBitmapBrush [MFC], Destroy", "CD2DBitmapBrush [MFC], Detach", "CD2DBitmapBrush [MFC], Get", "CD2DBitmapBrush [MFC], GetBitmap", "CD2DBitmapBrush [MFC], GetExtendModeX", "CD2DBitmapBrush [MFC], GetExtendModeY", "CD2DBitmapBrush [MFC], GetInterpolationMode", "CD2DBitmapBrush [MFC], SetBitmap", "CD2DBitmapBrush [MFC], SetExtendModeX", "CD2DBitmapBrush [MFC], SetExtendModeY", "CD2DBitmapBrush [MFC], SetInterpolationMode", "CD2DBitmapBrush [MFC], CommonInit", "CD2DBitmapBrush [MFC], m_pBitmap", "CD2DBitmapBrush [MFC], m_pBitmapBrush", "CD2DBitmapBrush [MFC], m_pBitmapBrushProperties"]
ms.assetid: 46ebbe34-66e0-44c8-af1d-d129e851de5e
---
# CD2DBitmapBrush Class

A wrapper for ID2D1BitmapBrush.

## Syntax

```
class CD2DBitmapBrush : public CD2DBrush;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DBitmapBrush::CD2DBitmapBrush](#cd2dbitmapbrush)|Overloaded. Constructs a CD2DBitmapBrush object from file.|
|[CD2DBitmapBrush::~CD2DBitmapBrush](#dtor)|The destructor. Called when a D2D bitmap brush object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DBitmapBrush::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DBitmapBrush::Create](#create)|Creates a CD2DBitmapBrush. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DBitmapBrush::Destroy](#destroy)|Destroys a CD2DBitmapBrush object. (Overrides [CD2DBrush::Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|
|[CD2DBitmapBrush::Detach](#detach)|Detaches resource interface from the object|
|[CD2DBitmapBrush::Get](#get)|Returns ID2D1BitmapBrush interface|
|[CD2DBitmapBrush::GetBitmap](#getbitmap)|Gets the bitmap source that this brush uses to paint|
|[CD2DBitmapBrush::GetExtendModeX](#getextendmodex)|Gets the method by which the brush horizontally tiles those areas that extend past its bitmap|
|[CD2DBitmapBrush::GetExtendModeY](#getextendmodey)|Gets the method by which the brush vertically tiles those areas that extend past its bitmap|
|[CD2DBitmapBrush::GetInterpolationMode](#getinterpolationmode)|Gets the interpolation method used when the brush bitmap is scaled or rotated|
|[CD2DBitmapBrush::SetBitmap](#setbitmap)|Specifies the bitmap source that this brush uses to paint|
|[CD2DBitmapBrush::SetExtendModeX](#setextendmodex)|Specifies how the brush horizontally tiles those areas that extend past its bitmap|
|[CD2DBitmapBrush::SetExtendModeY](#setextendmodey)|Specifies how the brush vertically tiles those areas that extend past its bitmap|
|[CD2DBitmapBrush::SetInterpolationMode](#setinterpolationmode)|Specifies the interpolation mode used when the brush bitmap is scaled or rotated|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CD2DBitmapBrush::CommonInit](#commoninit)|Initializes the object|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DBitmapBrush::operator ID2D1BitmapBrush*](#operator_id2d1bitmapbrush_star)|Returns ID2D1BitmapBrush interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DBitmapBrush::m_pBitmap](#m_pbitmap)|Stores a pointer to a CD2DBitmap object.|
|[CD2DBitmapBrush::m_pBitmapBrush](#m_pbitmapbrush)|Stores a pointer to an ID2D1BitmapBrush object.|
|[CD2DBitmapBrush::m_pBitmapBrushProperties](#m_pbitmapbrushproperties)|Bitmap brush properties.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

`CD2DBitmapBrush`

## Requirements

**Header:** afxrendertarget.h

## <a name="dtor"></a> CD2DBitmapBrush::~CD2DBitmapBrush

The destructor. Called when a D2D bitmap brush object is being destroyed.

```
virtual ~CD2DBitmapBrush();
```

## <a name="attach"></a> CD2DBitmapBrush::Attach

Attaches existing resource interface to the object

```cpp
void Attach(ID2D1BitmapBrush* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL

## <a name="cd2dbitmapbrush"></a> CD2DBitmapBrush::CD2DBitmapBrush

Constructs a CD2DBitmapBrush object.

```
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);

CD2DBitmapBrush(
    CRenderTarget* pParentTarget,
    UINT uiResID,
    LPCTSTR lpszType = NULL,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);

CD2DBitmapBrush(
    CRenderTarget* pParentTarget,
    LPCTSTR lpszImagePath,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*pBitmapBrushProperties*<br/>
A pointer to the extend modes and the interpolation mode of a bitmap brush.

*pBrushProperties*<br/>
A pointer to the opacity and transformation of a brush.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

*uiResID*<br/>
The resource ID number of the resource.

*lpszType*<br/>
Pointer to a null-terminated string that contains the resource type.

*sizeDest*<br/>
Destination size of the bitmap.

*lpszImagePath*<br/>
Pointer to a null-terminated string that contains the name of file.

## <a name="commoninit"></a> CD2DBitmapBrush::CommonInit

Initializes the object

```cpp
void CommonInit(D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties);
```

### Parameters

*pBitmapBrushProperties*<br/>
A pointer to the bitmap brush properties.

## <a name="create"></a> CD2DBitmapBrush::Create

Creates a CD2DBitmapBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DBitmapBrush::Destroy

Destroys a CD2DBitmapBrush object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DBitmapBrush::Detach

Detaches resource interface from the object

```
ID2D1BitmapBrush* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="get"></a> CD2DBitmapBrush::Get

Returns ID2D1BitmapBrush interface

```
ID2D1BitmapBrush* Get();
```

### Return Value

Pointer to an ID2D1BitmapBrush interface or NULL if object is not initialized yet.

## <a name="getbitmap"></a> CD2DBitmapBrush::GetBitmap

Gets the bitmap source that this brush uses to paint

```
CD2DBitmap* GetBitmap();
```

### Return Value

Pointer to an CD2DBitmap object or NULL if object is not initialized yet.

## <a name="getextendmodex"></a> CD2DBitmapBrush::GetExtendModeX

Gets the method by which the brush horizontally tiles those areas that extend past its bitmap

```
D2D1_EXTEND_MODE GetExtendModeX() const;
```

### Return Value

A value that specifies how the brush horizontally tiles those areas that extend past its bitmap

## <a name="getextendmodey"></a> CD2DBitmapBrush::GetExtendModeY

Gets the method by which the brush vertically tiles those areas that extend past its bitmap

```
D2D1_EXTEND_MODE GetExtendModeY() const;
```

### Return Value

A value that specifies how the brush vertically tiles those areas that extend past its bitmap

## <a name="getinterpolationmode"></a> CD2DBitmapBrush::GetInterpolationMode

Gets the interpolation method used when the brush bitmap is scaled or rotated

```
D2D1_BITMAP_INTERPOLATION_MODE GetInterpolationMode() const;
```

### Return Value

The interpolation method used when the brush bitmap is scaled or rotated

## <a name="m_pbitmap"></a> CD2DBitmapBrush::m_pBitmap

Stores a pointer to a CD2DBitmap object.

```
CD2DBitmap* m_pBitmap;
```

## <a name="m_pbitmapbrush"></a> CD2DBitmapBrush::m_pBitmapBrush

Stores a pointer to an ID2D1BitmapBrush object.

```
ID2D1BitmapBrush* m_pBitmapBrush;
```

## <a name="m_pbitmapbrushproperties"></a> CD2DBitmapBrush::m_pBitmapBrushProperties

Bitmap brush properties.

```
D2D1_BITMAP_BRUSH_PROPERTIES* m_pBitmapBrushProperties;
```

## <a name="operator_id2d1bitmapbrush_star"></a> CD2DBitmapBrush::operator ID2D1BitmapBrush*

Returns ID2D1BitmapBrush interface

```
operator ID2D1BitmapBrush*();
```

### Return Value

Pointer to an ID2D1BitmapBrush interface or NULL if object is not initialized yet.

## <a name="setbitmap"></a> CD2DBitmapBrush::SetBitmap

Specifies the bitmap source that this brush uses to paint

```cpp
void SetBitmap(CD2DBitmap* pBitmap);
```

### Parameters

*pBitmap*<br/>
The bitmap source used by the brush

## <a name="setextendmodex"></a> CD2DBitmapBrush::SetExtendModeX

Specifies how the brush horizontally tiles those areas that extend past its bitmap

```cpp
void SetExtendModeX(D2D1_EXTEND_MODE extendModeX);
```

### Parameters

*extendModeX*<br/>
A value that specifies how the brush horizontally tiles those areas that extend past its bitmap

## <a name="setextendmodey"></a> CD2DBitmapBrush::SetExtendModeY

Specifies how the brush vertically tiles those areas that extend past its bitmap

```cpp
void SetExtendModeY(D2D1_EXTEND_MODE extendModeY);
```

### Parameters

*extendModeY*<br/>
A value that specifies how the brush vertically tiles those areas that extend past its bitmap

## <a name="setinterpolationmode"></a> CD2DBitmapBrush::SetInterpolationMode

Specifies the interpolation mode used when the brush bitmap is scaled or rotated

```cpp
void SetInterpolationMode(D2D1_BITMAP_INTERPOLATION_MODE interpolationMode);
```

### Parameters

*interpolationMode*<br/>
The interpolation mode used when the brush bitmap is scaled or rotated

## See also

[Classes](../../mfc/reference/mfc-classes.md)
