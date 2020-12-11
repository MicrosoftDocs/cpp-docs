---
description: "Learn more about: CDCRenderTarget Class"
title: "CDCRenderTarget Class"
ms.date: "11/04/2016"
f1_keywords: ["CDCRenderTarget", "AFXRENDERTARGET/CDCRenderTarget", "AFXRENDERTARGET/CDCRenderTarget::CDCRenderTarget", "AFXRENDERTARGET/CDCRenderTarget::Attach", "AFXRENDERTARGET/CDCRenderTarget::BindDC", "AFXRENDERTARGET/CDCRenderTarget::Create", "AFXRENDERTARGET/CDCRenderTarget::Detach", "AFXRENDERTARGET/CDCRenderTarget::GetDCRenderTarget", "AFXRENDERTARGET/CDCRenderTarget::m_pDCRenderTarget"]
helpviewer_keywords: ["CDCRenderTarget [MFC], CDCRenderTarget", "CDCRenderTarget [MFC], Attach", "CDCRenderTarget [MFC], BindDC", "CDCRenderTarget [MFC], Create", "CDCRenderTarget [MFC], Detach", "CDCRenderTarget [MFC], GetDCRenderTarget", "CDCRenderTarget [MFC], m_pDCRenderTarget"]
ms.assetid: aa8059c9-08e6-49e4-9b8c-00fa54077a61
---
# CDCRenderTarget Class

A wrapper for ID2D1DCRenderTarget.

## Syntax

```
class CDCRenderTarget : public CRenderTarget;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDCRenderTarget::CDCRenderTarget](#cdcrendertarget)|Constructs a CDCRenderTarget object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDCRenderTarget::Attach](#attach)|Attaches existing render target interface to the object|
|[CDCRenderTarget::BindDC](#binddc)|Binds the render target to the device context to which it issues drawing commands|
|[CDCRenderTarget::Create](#create)|Creates a CDCRenderTarget.|
|[CDCRenderTarget::Detach](#detach)|Detaches render target interface from the object|
|[CDCRenderTarget::GetDCRenderTarget](#getdcrendertarget)|Returns ID2D1DCRenderTarget interface|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CDCRenderTarget::operator ID2D1DCRenderTarget*](#operator_id2d1dcrendertarget_star)|Returns ID2D1DCRenderTarget interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CDCRenderTarget::m_pDCRenderTarget](#m_pdcrendertarget)|A pointer to an ID2D1DCRenderTarget object.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

[CDCRenderTarget](../../mfc/reference/cdcrendertarget-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="attach"></a> CDCRenderTarget::Attach

Attaches existing render target interface to the object

```cpp
void Attach(ID2D1DCRenderTarget* pTarget);
```

### Parameters

*pTarget*<br/>
Existing render target interface. Cannot be NULL

## <a name="binddc"></a> CDCRenderTarget::BindDC

Binds the render target to the device context to which it issues drawing commands

```
BOOL BindDC(
    const CDC& dc,
    const CRect& rect);
```

### Parameters

*dc*<br/>
The device context to which the render target issues drawing commands

*rect*<br/>
The dimensions of the handle to a device context (HDC) to which the render target is bound

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.

## <a name="cdcrendertarget"></a> CDCRenderTarget::CDCRenderTarget

Constructs a CDCRenderTarget object.

```
CDCRenderTarget();
```

## <a name="create"></a> CDCRenderTarget::Create

Creates a CDCRenderTarget.

```
BOOL Create(const D2D1_RENDER_TARGET_PROPERTIES& props);
```

### Parameters

*props*<br/>
The rendering mode, pixel format, remoting options, DPI information, and the minimum DirectX support required for hardware rendering.

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.

## <a name="detach"></a> CDCRenderTarget::Detach

Detaches render target interface from the object

```
ID2D1DCRenderTarget* Detach();
```

### Return Value

Pointer to detached render target interface.

## <a name="getdcrendertarget"></a> CDCRenderTarget::GetDCRenderTarget

Returns ID2D1DCRenderTarget interface

```
ID2D1DCRenderTarget* GetDCRenderTarget();
```

### Return Value

Pointer to an ID2D1DCRenderTarget interface or NULL if object is not initialized yet.

## <a name="m_pdcrendertarget"></a> CDCRenderTarget::m_pDCRenderTarget

A pointer to an ID2D1DCRenderTarget object.

```
ID2D1DCRenderTarget* m_pDCRenderTarget;
```

## <a name="operator_id2d1dcrendertarget_star"></a> CDCRenderTarget::operator ID2D1DCRenderTarget*

Returns ID2D1DCRenderTarget interface

```
operator ID2D1DCRenderTarget*();
```

### Return Value

Pointer to an ID2D1DCRenderTarget interface or NULL if object is not initialized yet.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
