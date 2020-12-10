---
description: "Learn more about: CBitmapRenderTarget Class"
title: "CBitmapRenderTarget Class"
ms.date: "11/04/2016"
f1_keywords: ["CBitmapRenderTarget", "AFXRENDERTARGET/CBitmapRenderTarget", "AFXRENDERTARGET/CBitmapRenderTarget::CBitmapRenderTarget", "AFXRENDERTARGET/CBitmapRenderTarget::Attach", "AFXRENDERTARGET/CBitmapRenderTarget::Detach", "AFXRENDERTARGET/CBitmapRenderTarget::GetBitmap", "AFXRENDERTARGET/CBitmapRenderTarget::GetBitmapRenderTarget", "AFXRENDERTARGET/CBitmapRenderTarget::m_pBitmapRenderTarget"]
helpviewer_keywords: ["CBitmapRenderTarget [MFC], CBitmapRenderTarget", "CBitmapRenderTarget [MFC], Attach", "CBitmapRenderTarget [MFC], Detach", "CBitmapRenderTarget [MFC], GetBitmap", "CBitmapRenderTarget [MFC], GetBitmapRenderTarget", "CBitmapRenderTarget [MFC], m_pBitmapRenderTarget"]
ms.assetid: c89a4437-812e-4943-acb2-b429a04cc4d2
---
# CBitmapRenderTarget Class

A wrapper for ID2D1BitmapRenderTarget.

## Syntax

```
class CBitmapRenderTarget : public CRenderTarget;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CBitmapRenderTarget::CBitmapRenderTarget](#cbitmaprendertarget)|Constructs a CBitmapRenderTarget object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CBitmapRenderTarget::Attach](#attach)|Attaches existing render target interface to the object|
|[CBitmapRenderTarget::Detach](#detach)|Detaches render target interface from the object|
|[CBitmapRenderTarget::GetBitmap](#getbitmap)|Retrieves the bitmap for this render target. The returned bitmap can be used for drawing operations.|
|[CBitmapRenderTarget::GetBitmapRenderTarget](#getbitmaprendertarget)|Returns ID2D1BitmapRenderTarget interface|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CBitmapRenderTarget::operator ID2D1BitmapRenderTarget*](#operator_id2d1bitmaprendertarget_star)|Returns ID2D1BitmapRenderTarget interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CBitmapRenderTarget::m_pBitmapRenderTarget](#m_pbitmaprendertarget)|A pointer to an ID2D1BitmapRenderTarget object.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

`CBitmapRenderTarget`

## Requirements

**Header:** afxrendertarget.h

## <a name="attach"></a> CBitmapRenderTarget::Attach

Attaches existing render target interface to the object

```cpp
void Attach(ID2D1BitmapRenderTarget* pTarget);
```

### Parameters

*pTarget*<br/>
Existing render target interface. Cannot be NULL

## <a name="cbitmaprendertarget"></a> CBitmapRenderTarget::CBitmapRenderTarget

Constructs a CBitmapRenderTarget object.

```
CBitmapRenderTarget();
```

## <a name="detach"></a> CBitmapRenderTarget::Detach

Detaches render target interface from the object

```
ID2D1BitmapRenderTarget* Detach();
```

### Return Value

Pointer to detached render target interface.

## <a name="getbitmap"></a> CBitmapRenderTarget::GetBitmap

Retrieves the bitmap for this render target. The returned bitmap can be used for drawing operations.

```
BOOL GetBitmap(CD2DBitmap& bitmap);
```

### Parameters

*bitmap*<br/>
When this method returns, contains the valid bitmap for this render target. This bitmap can be used for drawing operations.

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.

## <a name="getbitmaprendertarget"></a> CBitmapRenderTarget::GetBitmapRenderTarget

Returns ID2D1BitmapRenderTarget interface

```
ID2D1BitmapRenderTarget* GetBitmapRenderTarget();
```

### Return Value

Pointer to an ID2D1BitmapRenderTarget interface or NULL if object is not initialized yet.

## <a name="m_pbitmaprendertarget"></a> CBitmapRenderTarget::m_pBitmapRenderTarget

A pointer to an ID2D1BitmapRenderTarget object.

```
ID2D1BitmapRenderTarget* m_pBitmapRenderTarget;
```

## <a name="operator_id2d1bitmaprendertarget_star"></a> CBitmapRenderTarget::operator ID2D1BitmapRenderTarget*

Returns ID2D1BitmapRenderTarget interface

```
operator ID2D1BitmapRenderTarget*();
```

### Return Value

Pointer to an ID2D1BitmapRenderTarget interface or NULL if object is not initialized yet.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
