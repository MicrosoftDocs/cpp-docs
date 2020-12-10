---
description: "Learn more about: CD2DMesh Class"
title: "CD2DMesh Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DMesh", "AFXRENDERTARGET/CD2DMesh", "AFXRENDERTARGET/CD2DMesh::CD2DMesh", "AFXRENDERTARGET/CD2DMesh::Attach", "AFXRENDERTARGET/CD2DMesh::Create", "AFXRENDERTARGET/CD2DMesh::Destroy", "AFXRENDERTARGET/CD2DMesh::Detach", "AFXRENDERTARGET/CD2DMesh::Get", "AFXRENDERTARGET/CD2DMesh::IsValid", "AFXRENDERTARGET/CD2DMesh::Open", "AFXRENDERTARGET/CD2DMesh::m_pMesh"]
helpviewer_keywords: ["CD2DMesh [MFC], CD2DMesh", "CD2DMesh [MFC], Attach", "CD2DMesh [MFC], Create", "CD2DMesh [MFC], Destroy", "CD2DMesh [MFC], Detach", "CD2DMesh [MFC], Get", "CD2DMesh [MFC], IsValid", "CD2DMesh [MFC], Open", "CD2DMesh [MFC], m_pMesh"]
ms.assetid: 11a2c78a-1367-40e8-a34f-44aa0509a4c9
---
# CD2DMesh Class

A wrapper for ID2D1Mesh.

## Syntax

```
class CD2DMesh : public CD2DResource;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DMesh::CD2DMesh](#cd2dmesh)|Constructs a CD2DMesh object.|
|[CD2DMesh::~CD2DMesh](#_dtorcd2dmesh)|The destructor. Called when a D2D mesh object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DMesh::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DMesh::Create](#create)|Creates a CD2DMesh. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DMesh::Destroy](#destroy)|Destroys a CD2DMesh object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DMesh::Detach](#detach)|Detaches resource interface from the object|
|[CD2DMesh::Get](#get)|Returns ID2D1Mesh interface|
|[CD2DMesh::IsValid](#isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DMesh::Open](#open)|Opens the mesh for population.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DMesh::operator ID2D1Mesh*](#operator_id2d1mesh_star)|Returns ID2D1Mesh interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DMesh::m_pMesh](#m_pmesh)|A pointer to an ID2D1Mesh.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DMesh`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dmesh"></a> CD2DMesh::~CD2DMesh

The destructor. Called when a D2D mesh object is being destroyed.

```
virtual ~CD2DMesh();
```

## <a name="attach"></a> CD2DMesh::Attach

Attaches existing resource interface to the object

```cpp
void Attach(ID2D1Mesh* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL

## <a name="cd2dmesh"></a> CD2DMesh::CD2DMesh

Constructs a CD2DMesh object.

```
CD2DMesh(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="create"></a> CD2DMesh::Create

Creates a CD2DMesh.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DMesh::Destroy

Destroys a CD2DMesh object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DMesh::Detach

Detaches resource interface from the object

```
ID2D1Mesh* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="get"></a> CD2DMesh::Get

Returns ID2D1Mesh interface

```
ID2D1Mesh* Get();
```

### Return Value

Pointer to an ID2D1Mesh interface or NULL if object is not initialized yet.

## <a name="isvalid"></a> CD2DMesh::IsValid

Checks resource validity

```
virtual BOOL IsValid() const;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_pmesh"></a> CD2DMesh::m_pMesh

A pointer to an ID2D1Mesh.

```
ID2D1Mesh* m_pMesh;
```

## <a name="open"></a> CD2DMesh::Open

Opens the mesh for population.

```
ID2D1TessellationSink* Open();
```

### Return Value

A pointer to an ID2D1TessellationSink that is used to populate the mesh.

## <a name="operator_id2d1mesh_star"></a> CD2DMesh::operator ID2D1Mesh*

Returns ID2D1Mesh interface

```
operator ID2D1Mesh*();
```

### Return Value

Pointer to an ID2D1Mesh interface or NULL if object is not initialized yet.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
