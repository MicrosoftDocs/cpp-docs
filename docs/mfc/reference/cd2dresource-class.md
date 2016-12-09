---
title: "CD2DResource Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DResource"
  - "CD2DResource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DResource class"
ms.assetid: 34e3ee18-aab6-4c39-9294-de869e1f7820
caps.latest.revision: 18
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
# CD2DResource Class
An abstract class that provides a interface for creating and managing D2D resources such as brushes, layers, and texts.  
  
## Syntax  
  
```  
class CD2DResource : public CObject;  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DResource::CD2DResource](#cd2dresource)|Constructs a CD2DResource object.|  
|[CD2DResource::~CD2DResource](#cd2dresource__~cd2dresource)|The destructor. Called when a D2D resource object is being destroyed.|  
  
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
|[CD2DResource::m_bIsAutoDestroy](#m_bisautodestroy)|Resource will be destoyed by owner (CRenderTarget)|  
|[CD2DResource::m_pParentTarget](#m_pparenttarget)|Pointer to the parent CRenderTarget)|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CD2DResource`  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="_dtorcd2dresource"></a>  CD2DResource::~CD2DResource  
 The destructor. Called when a D2D resource object is being destroyed.  
  
```  
virtual ~CD2DResource();
```  
  
##  <a name="cd2dresource"></a>  CD2DResource::CD2DResource  
 Constructs a CD2DResource object.  
  
```  
CD2DResource(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="create"></a>  CD2DResource::Create  
 Creates a CD2DResource.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget) = 0;  
```  
  
### Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="destroy"></a>  CD2DResource::Destroy  
 Destroys a CD2DResource object.  
  
```  
virtual void Destroy() = 0;  
```  
  
##  <a name="isautodestroy"></a>  CD2DResource::IsAutoDestroy  
 Check auto destroy flag.  
  
```  
BOOL IsAutoDestroy() const;

 
```  
  
### Return Value  
 TRUE if the object will be destroyed by its owner; otherwise FALSE.  
  
##  <a name="isvalid"></a>  CD2DResource::IsValid  
 Checks resource validity  
  
```  
virtual BOOL IsValid() const = 0;  
```  
  
### Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="m_bisautodestroy"></a>  CD2DResource::m_bIsAutoDestroy  
 Resource will be destoyed by owner (CRenderTarget)  
  
```  
BOOL m_bIsAutoDestroy;  
```  
  
##  <a name="m_pparenttarget"></a>  CD2DResource::m_pParentTarget  
 Pointer to the parent CRenderTarget)  
  
```  
CRenderTarget* m_pParentTarget;  
```  
  
##  <a name="recreate"></a>  CD2DResource::ReCreate  
 Re-creates a CD2DResource.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* pRenderTarget);
```  
  
### Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
