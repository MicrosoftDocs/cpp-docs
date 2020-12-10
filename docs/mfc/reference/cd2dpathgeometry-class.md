---
description: "Learn more about: CD2DPathGeometry Class"
title: "CD2DPathGeometry Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DPathGeometry", "AFXRENDERTARGET/CD2DPathGeometry", "AFXRENDERTARGET/CD2DPathGeometry::CD2DPathGeometry", "AFXRENDERTARGET/CD2DPathGeometry::Attach", "AFXRENDERTARGET/CD2DPathGeometry::Create", "AFXRENDERTARGET/CD2DPathGeometry::Destroy", "AFXRENDERTARGET/CD2DPathGeometry::Detach", "AFXRENDERTARGET/CD2DPathGeometry::GetFigureCount", "AFXRENDERTARGET/CD2DPathGeometry::GetSegmentCount", "AFXRENDERTARGET/CD2DPathGeometry::Open", "AFXRENDERTARGET/CD2DPathGeometry::Stream", "AFXRENDERTARGET/CD2DPathGeometry::m_pPathGeometry"]
helpviewer_keywords: ["CD2DPathGeometry [MFC], CD2DPathGeometry", "CD2DPathGeometry [MFC], Attach", "CD2DPathGeometry [MFC], Create", "CD2DPathGeometry [MFC], Destroy", "CD2DPathGeometry [MFC], Detach", "CD2DPathGeometry [MFC], GetFigureCount", "CD2DPathGeometry [MFC], GetSegmentCount", "CD2DPathGeometry [MFC], Open", "CD2DPathGeometry [MFC], Stream", "CD2DPathGeometry [MFC], m_pPathGeometry"]
ms.assetid: 686216eb-5080-4242-ace5-8fa1ce96307c
---
# CD2DPathGeometry Class

A wrapper for ID2D1PathGeometry.

## Syntax

```
class CD2DPathGeometry : public CD2DGeometry;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DPathGeometry::CD2DPathGeometry](#cd2dpathgeometry)|Constructs a CD2DPathGeometry object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DPathGeometry::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DPathGeometry::Create](#create)|Creates a CD2DPathGeometry. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DPathGeometry::Destroy](#destroy)|Destroys a CD2DPathGeometry object. (Overrides [CD2DGeometry::Destroy](../../mfc/reference/cd2dgeometry-class.md#destroy).)|
|[CD2DPathGeometry::Detach](#detach)|Detaches resource interface from the object|
|[CD2DPathGeometry::GetFigureCount](#getfigurecount)|Retrieves tthe number of figures in the path geometry.|
|[CD2DPathGeometry::GetSegmentCount](#getsegmentcount)|Retrieves the number of segments in the path geometry.|
|[CD2DPathGeometry::Open](#open)|Retrieves the geometry sink that is used to populate the path geometry with figures and segments.|
|[CD2DPathGeometry::Stream](#stream)|Copies the contents of the path geometry to the specified ID2D1GeometrySink.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DPathGeometry::m_pPathGeometry](#m_ppathgeometry)|A pointer to an ID2D1PathGeometry.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)

`CD2DPathGeometry`

## Requirements

**Header:** afxrendertarget.h

## <a name="attach"></a> CD2DPathGeometry::Attach

Attaches existing resource interface to the object

```cpp
void Attach(ID2D1PathGeometry* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL

## <a name="cd2dpathgeometry"></a> CD2DPathGeometry::CD2DPathGeometry

Constructs a CD2DPathGeometry object.

```
CD2DPathGeometry(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="create"></a> CD2DPathGeometry::Create

Creates a CD2DPathGeometry.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DPathGeometry::Destroy

Destroys a CD2DPathGeometry object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DPathGeometry::Detach

Detaches resource interface from the object

```
ID2D1PathGeometry* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="getfigurecount"></a> CD2DPathGeometry::GetFigureCount

Retrieves tthe number of figures in the path geometry.

```
int GetFigureCount() const;
```

### Return Value

Returns the number of figures in the path geometry.

## <a name="getsegmentcount"></a> CD2DPathGeometry::GetSegmentCount

Retrieves the number of segments in the path geometry.

```
int GetSegmentCount() const;
```

### Return Value

Returns the number of segments in the path geometry.

## <a name="m_ppathgeometry"></a> CD2DPathGeometry::m_pPathGeometry

A pointer to an ID2D1PathGeometry.

```
ID2D1PathGeometry* m_pPathGeometry;
```

## <a name="open"></a> CD2DPathGeometry::Open

Retrieves the geometry sink that is used to populate the path geometry with figures and segments.

```
ID2D1GeometrySink* Open();
```

### Return Value

A pointer to the ID2D1GeometrySink that is used to populate the path geometry with figures and segments.

## <a name="stream"></a> CD2DPathGeometry::Stream

Copies the contents of the path geometry to the specified ID2D1GeometrySink.

```
BOOL Stream(ID2D1GeometrySink* geometrySink);
```

### Parameters

*geometrySink*<br/>
The sink to which the path geometry's contents are copied. Modifying this sink does not change the contents of this path geometry.

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
