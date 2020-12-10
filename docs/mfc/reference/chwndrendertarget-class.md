---
description: "Learn more about: CHwndRenderTarget Class"
title: "CHwndRenderTarget Class"
ms.date: "11/04/2016"
f1_keywords: ["CHwndRenderTarget", "AFXRENDERTARGET/CHwndRenderTarget", "AFXRENDERTARGET/CHwndRenderTarget::CHwndRenderTarget", "AFXRENDERTARGET/CHwndRenderTarget::Attach", "AFXRENDERTARGET/CHwndRenderTarget::CheckWindowState", "AFXRENDERTARGET/CHwndRenderTarget::Create", "AFXRENDERTARGET/CHwndRenderTarget::Detach", "AFXRENDERTARGET/CHwndRenderTarget::GetHwnd", "AFXRENDERTARGET/CHwndRenderTarget::GetHwndRenderTarget", "AFXRENDERTARGET/CHwndRenderTarget::ReCreate", "AFXRENDERTARGET/CHwndRenderTarget::Resize", "AFXRENDERTARGET/CHwndRenderTarget::m_pHwndRenderTarget"]
helpviewer_keywords: ["CHwndRenderTarget [MFC], CHwndRenderTarget", "CHwndRenderTarget [MFC], Attach", "CHwndRenderTarget [MFC], CheckWindowState", "CHwndRenderTarget [MFC], Create", "CHwndRenderTarget [MFC], Detach", "CHwndRenderTarget [MFC], GetHwnd", "CHwndRenderTarget [MFC], GetHwndRenderTarget", "CHwndRenderTarget [MFC], ReCreate", "CHwndRenderTarget [MFC], Resize", "CHwndRenderTarget [MFC], m_pHwndRenderTarget"]
ms.assetid: aa65b69f-7202-46ea-af81-ef325da0b840
---
# CHwndRenderTarget Class

A wrapper for ID2D1HwndRenderTarget.

## Syntax

```
class CHwndRenderTarget : public CRenderTarget;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CHwndRenderTarget::CHwndRenderTarget](#chwndrendertarget)|Constructs a CHwndRenderTarget object from HWND.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CHwndRenderTarget::Attach](#attach)|Attaches existing render target interface to the object|
|[CHwndRenderTarget::CheckWindowState](#checkwindowstate)|Indicates whether the HWND associated with this render target is occluded.|
|[CHwndRenderTarget::Create](#create)|Creates a render target associated with the window|
|[CHwndRenderTarget::Detach](#detach)|Detaches render target interface from the object|
|[CHwndRenderTarget::GetHwnd](#gethwnd)|Returns the HWND associated with this render target.|
|[CHwndRenderTarget::GetHwndRenderTarget](#gethwndrendertarget)|Returns ID2D1HwndRenderTarget interface.|
|[CHwndRenderTarget::ReCreate](#recreate)|Re-creates a render target associated with the window|
|[CHwndRenderTarget::Resize](#resize)|Changes the size of the render target to the specified pixel size|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CHwndRenderTarget::operator ID2D1HwndRenderTarget*](#operator_id2d1hwndrendertarget_star)|Returns ID2D1HwndRenderTarget interface.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CHwndRenderTarget::m_pHwndRenderTarget](#m_phwndrendertarget)|A pointer to an ID2D1HwndRenderTarget object.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

[CHwndRenderTarget](../../mfc/reference/chwndrendertarget-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="attach"></a> CHwndRenderTarget::Attach

Attaches existing render target interface to the object

```cpp
void Attach(ID2D1HwndRenderTarget* pTarget);
```

### Parameters

*pTarget*<br/>
Existing render target interface. Cannot be NULL

## <a name="checkwindowstate"></a> CHwndRenderTarget::CheckWindowState

Indicates whether the HWND associated with this render target is occluded.

```
D2D1_WINDOW_STATE CheckWindowState() const;
```

### Return Value

A value that indicates whether the HWND associated with this render target is occluded.

## <a name="chwndrendertarget"></a> CHwndRenderTarget::CHwndRenderTarget

Constructs a CHwndRenderTarget object from HWND.

```
CHwndRenderTarget(HWND hwnd = NULL);
```

### Parameters

*hwnd*<br/>
The HWND associated with this render target

## <a name="create"></a> CHwndRenderTarget::Create

Creates a render target associated with the window

```
BOOL Create(HWND hWnd);
```

### Parameters

*hWnd*<br/>
The HWND associated with this render target

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE

## <a name="detach"></a> CHwndRenderTarget::Detach

Detaches render target interface from the object

```
ID2D1HwndRenderTarget* Detach();
```

### Return Value

Pointer to detached render target interface.

## <a name="gethwnd"></a> CHwndRenderTarget::GetHwnd

Returns the HWND associated with this render target.

```
HWND GetHwnd() const;
```

### Return Value

The HWND associated with this render target.

## <a name="gethwndrendertarget"></a> CHwndRenderTarget::GetHwndRenderTarget

Returns ID2D1HwndRenderTarget interface.

```
ID2D1HwndRenderTarget* GetHwndRenderTarget();
```

### Return Value

Pointer to an ID2D1HwndRenderTarget interface or NULL if object is not initialized yet.

## <a name="m_phwndrendertarget"></a> CHwndRenderTarget::m_pHwndRenderTarget

A pointer to an ID2D1HwndRenderTarget object.

```
ID2D1HwndRenderTarget* m_pHwndRenderTarget;
```

## <a name="operator_id2d1hwndrendertarget_star"></a> CHwndRenderTarget::operator ID2D1HwndRenderTarget*

Returns ID2D1HwndRenderTarget interface.

```
operator ID2D1HwndRenderTarget*();
```

### Return Value

Pointer to an ID2D1HwndRenderTarget interface or NULL if object is not initialized yet.

## <a name="recreate"></a> CHwndRenderTarget::ReCreate

Re-creates a render target associated with the window

```
BOOL ReCreate(HWND hWnd);
```

### Parameters

*hWnd*<br/>
The HWND associated with this render target

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.

## <a name="resize"></a> CHwndRenderTarget::Resize

Changes the size of the render target to the specified pixel size

```
BOOL Resize(const CD2DSizeU& size);
```

### Parameters

*size*<br/>
The new size of the render target in device pixels

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
