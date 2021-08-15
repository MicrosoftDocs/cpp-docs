---
description: "Learn more about: CD2DResource Class"
title: "CD2DResource Class"
ms.date: "03/27/2019"
f1_keywords: ["CD2DResource", "AFXRENDERTARGET/CD2DResource", "AFXRENDERTARGET/CD2DResource::CD2DResource", "AFXRENDERTARGET/CD2DResource::Create", "AFXRENDERTARGET/CD2DResource::Destroy", "AFXRENDERTARGET/CD2DResource::IsValid", "AFXRENDERTARGET/CD2DResource::IsAutoDestroy", "AFXRENDERTARGET/CD2DResource::ReCreate", "AFXRENDERTARGET/CD2DResource::m_bIsAutoDestroy", "AFXRENDERTARGET/CD2DResource::m_pParentTarget"]
helpviewer_keywords: ["CD2DResource [MFC], CD2DResource", "CD2DResource [MFC], Create", "CD2DResource [MFC], Destroy", "CD2DResource [MFC], IsValid", "CD2DResource [MFC], IsAutoDestroy", "CD2DResource [MFC], ReCreate", "CD2DResource [MFC], m_bIsAutoDestroy", "CD2DResource [MFC], m_pParentTarget"]
ms.assetid: 34e3ee18-aab6-4c39-9294-de869e1f7820
---
# CD2DResource Class

An abstract class that provides an interface for creating and managing D2D resources such as brushes, layers, and texts.

## Syntax

```
class CD2DResource : public CObject;
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CD2DResource::CD2DResource](#cd2dresource)|Constructs a CD2DResource object.|
|[CD2DResource::~CD2DResource](#_dtorcd2dresource)|The destructor. Called when a D2D resource object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DResource::Create](#create)|Creates a CD2DResource.|
|[CD2DResource::Destroy](#destroy)|Destroys a CD2DResource object.|
|[CD2DResource::IsValid](#isvalid)|Checks resource validity|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CD2DResource::IsAutoDestroy](#isautodestroy)|Check auto destroy flag.|
|[CD2DResource::ReCreate](#recreate)|Re-creates a CD2DResource.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DResource::m_bIsAutoDestroy](#m_bisautodestroy)|Resource will be destroyed by owner (CRenderTarget)|
|[CD2DResource::m_pParentTarget](#m_pparenttarget)|Pointer to the parent CRenderTarget)|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CD2DResource`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dresource"></a> CD2DResource::~CD2DResource

The destructor. Called when a D2D resource object is being destroyed.

```
virtual ~CD2DResource();
```

## <a name="cd2dresource"></a> CD2DResource::CD2DResource

Constructs a CD2DResource object.

```
CD2DResource(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="create"></a> CD2DResource::Create

Creates a CD2DResource.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget) = 0;
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DResource::Destroy

Destroys a CD2DResource object.

```
virtual void Destroy() = 0;
```

## <a name="isautodestroy"></a> CD2DResource::IsAutoDestroy

Check auto destroy flag.

```
BOOL IsAutoDestroy() const;
```

### Return Value

TRUE if the object will be destroyed by its owner; otherwise FALSE.

## <a name="isvalid"></a> CD2DResource::IsValid

Checks resource validity

```
virtual BOOL IsValid() const = 0;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_bisautodestroy"></a> CD2DResource::m_bIsAutoDestroy

Resource will be destroyed by owner (CRenderTarget)

```
BOOL m_bIsAutoDestroy;
```

## <a name="m_pparenttarget"></a> CD2DResource::m_pParentTarget

Pointer to the parent CRenderTarget)

```
CRenderTarget* m_pParentTarget;
```

## <a name="recreate"></a> CD2DResource::ReCreate

Re-creates a CD2DResource.

```
virtual HRESULT ReCreate(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
