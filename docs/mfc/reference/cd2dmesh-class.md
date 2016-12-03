---
title: "CD2DMesh Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DMesh"
  - "CD2DMesh"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DMesh class"
ms.assetid: 11a2c78a-1367-40e8-a34f-44aa0509a4c9
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CD2DMesh::CD2DMesh](#cd2dmesh__cd2dmesh)|Constructs a CD2DMesh object.|  
|[CD2DMesh::~CD2DMesh](#cd2dmesh___dtorcd2dmesh)|The destructor. Called when a D2D mesh object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DMesh::Attach](#cd2dmesh__attach)|Attaches existing resource interface to the object|  
|[CD2DMesh::Create](#cd2dmesh__create)|Creates a CD2DMesh. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#cd2dresource__create).)|  
|[CD2DMesh::Destroy](#cd2dmesh__destroy)|Destroys a CD2DMesh object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#cd2dresource__destroy).)|  
|[CD2DMesh::Detach](#cd2dmesh__detach)|Detaches resource interface from the object|  
|[CD2DMesh::Get](#cd2dmesh__get)|Returns ID2D1Mesh interface|  
|[CD2DMesh::IsValid](#cd2dmesh__isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#cd2dresource__isvalid).)|  
|[CD2DMesh::Open](#cd2dmesh__open)|Opens the mesh for population.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DMesh::operator ID2D1Mesh*](#cd2dmesh__operator_id2d1mesh_star)|Returns ID2D1Mesh interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DMesh::m_pMesh](#cd2dmesh__m_pmesh)|A pointer to an ID2D1Mesh.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DMesh](../../mfc/reference/cd2dmesh-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dmesh___dtorcd2dmesh"></a>  CD2DMesh::~CD2DMesh  
 The destructor. Called when a D2D mesh object is being destroyed.  
  
```  
virtual ~CD2DMesh();
```  
  
##  <a name="cd2dmesh__attach"></a>  CD2DMesh::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1Mesh* pResource);
```  
  
### Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dmesh__cd2dmesh"></a>  CD2DMesh::CD2DMesh  
 Constructs a CD2DMesh object.  
  
```  
CD2DMesh(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="cd2dmesh__create"></a>  CD2DMesh::Create  
 Creates a CD2DMesh.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="cd2dmesh__destroy"></a>  CD2DMesh::Destroy  
 Destroys a CD2DMesh object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dmesh__detach"></a>  CD2DMesh::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1Mesh* Detach();
```  
  
### Return Value  
 Pointer to detached resource interface.  
  
##  <a name="cd2dmesh__get"></a>  CD2DMesh::Get  
 Returns ID2D1Mesh interface  
  
```  
ID2D1Mesh* Get();
```  
  
### Return Value  
 Pointer to an ID2D1Mesh interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dmesh__isvalid"></a>  CD2DMesh::IsValid  
 Checks resource validity  
  
```  
virtual BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="cd2dmesh__m_pmesh"></a>  CD2DMesh::m_pMesh  
 A pointer to an ID2D1Mesh.  
  
```  
ID2D1Mesh* m_pMesh;  
```  
  
##  <a name="cd2dmesh__open"></a>  CD2DMesh::Open  
 Opens the mesh for population.  
  
```  
ID2D1TessellationSink* Open();
```  
  
### Return Value  
 A pointer to an ID2D1TessellationSink that is used to populate the mesh.  
  
##  <a name="cd2dmesh__operator_id2d1mesh_star"></a>  CD2DMesh::operator ID2D1Mesh*  
 Returns ID2D1Mesh interface  
  
```  
operator ID2D1Mesh*();
```   
  
### Return Value  
 Pointer to an ID2D1Mesh interface or NULL if object is not initialized yet.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
