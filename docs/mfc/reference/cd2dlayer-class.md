---
description: "Learn more about: CD2DLayer Class"
title: "CD2DLayer Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DLayer", "AFXRENDERTARGET/CD2DLayer", "AFXRENDERTARGET/CD2DLayer::CD2DLayer", "AFXRENDERTARGET/CD2DLayer::Attach", "AFXRENDERTARGET/CD2DLayer::Create", "AFXRENDERTARGET/CD2DLayer::Destroy", "AFXRENDERTARGET/CD2DLayer::Detach", "AFXRENDERTARGET/CD2DLayer::Get", "AFXRENDERTARGET/CD2DLayer::GetSize", "AFXRENDERTARGET/CD2DLayer::IsValid", "AFXRENDERTARGET/CD2DLayer::m_pLayer"]
helpviewer_keywords: ["CD2DLayer [MFC], CD2DLayer", "CD2DLayer [MFC], Attach", "CD2DLayer [MFC], Create", "CD2DLayer [MFC], Destroy", "CD2DLayer [MFC], Detach", "CD2DLayer [MFC], Get", "CD2DLayer [MFC], GetSize", "CD2DLayer [MFC], IsValid", "CD2DLayer [MFC], m_pLayer"]
ms.assetid: 2f96378e-66bb-40d1-9661-6afe324de3c1
---
# CD2DLayer Class

A wrapper for ID2D1Layer.

## Syntax

```
class CD2DLayer : public CD2DResource;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DLayer::CD2DLayer](#cd2dlayer)|Constructs a CD2DLayer object.|
|[CD2DLayer::~CD2DLayer](#_dtorcd2dlayer)|The destructor. Called when a D2D layer object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DLayer::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DLayer::Create](#create)|Creates a CD2DLayer. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DLayer::Destroy](#destroy)|Destroys a CD2DLayer object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DLayer::Detach](#detach)|Detaches resource interface from the object|
|[CD2DLayer::Get](#get)|Returns ID2D1Layer interface|
|[CD2DLayer::GetSize](#getsize)|Returns the size of the render target in device-independent pixels|
|[CD2DLayer::IsValid](#isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DLayer::operator ID2D1Layer*](#operator_id2d1layer_star)|Returns ID2D1Layer interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DLayer::m_pLayer](#m_player)|Stores a pointer to an ID2D1Layer object.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DLayer`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dlayer"></a> CD2DLayer::~CD2DLayer

The destructor. Called when a D2D layer object is being destroyed.

```
virtual ~CD2DLayer();
```

## <a name="attach"></a> CD2DLayer::Attach

Attaches existing resource interface to the object

```cpp
void Attach(ID2D1Layer* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL

## <a name="cd2dlayer"></a> CD2DLayer::CD2DLayer

Constructs a CD2DLayer object.

```
CD2DLayer(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="create"></a> CD2DLayer::Create

Creates a CD2DLayer.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DLayer::Destroy

Destroys a CD2DLayer object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DLayer::Detach

Detaches resource interface from the object

```
ID2D1Layer* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="get"></a> CD2DLayer::Get

Returns ID2D1Layer interface

```
ID2D1Layer* Get();
```

### Return Value

Pointer to an ID2D1Layer interface or NULL if object is not initialized yet.

## <a name="getsize"></a> CD2DLayer::GetSize

Returns the size of the render target in device-independent pixels

```
CD2DSizeF GetSize() const;
```

### Return Value

The current size of the render target in device-independent pixels

## <a name="isvalid"></a> CD2DLayer::IsValid

Checks resource validity

```
virtual BOOL IsValid() const;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_player"></a> CD2DLayer::m_pLayer

Stores a pointer to an ID2D1Layer object.

```
ID2D1Layer* m_pLayer;
```

## <a name="operator_id2d1layer_star"></a> CD2DLayer::operator ID2D1Layer*

Returns ID2D1Layer interface

```
operator ID2D1Layer* ();
```

### Return Value

Pointer to an ID2D1Layer interface or NULL if object is not initialized yet.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
