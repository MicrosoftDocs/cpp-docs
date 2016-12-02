---
title: "CDCRenderTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CDCRenderTarget"
  - "CDCRenderTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDCRenderTarget class"
ms.assetid: aa8059c9-08e6-49e4-9b8c-00fa54077a61
caps.latest.revision: 16
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
|[CDCRenderTarget::CDCRenderTarget](#cdcrendertarget__cdcrendertarget)|Constructs a CDCRenderTarget object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDCRenderTarget::Attach](#cdcrendertarget__attach)|Attaches existing render target interface to the object|  
|[CDCRenderTarget::BindDC](#cdcrendertarget__binddc)|Binds the render target to the device context to which it issues drawing commands|  
|[CDCRenderTarget::Create](#cdcrendertarget__create)|Creates a CDCRenderTarget.|  
|[CDCRenderTarget::Detach](#cdcrendertarget__detach)|Detaches render target interface from the object|  
|[CDCRenderTarget::GetDCRenderTarget](#cdcrendertarget__getdcrendertarget)|Returns ID2D1DCRenderTarget interface|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CDCRenderTarget::operator ID2D1DCRenderTarget*](#cdcrendertarget__operator_id2d1dcrendertarget_star)|Returns ID2D1DCRenderTarget interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CDCRenderTarget::m_pDCRenderTarget](#cdcrendertarget__m_pdcrendertarget)|A pointer to an ID2D1DCRenderTarget object.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CDCRenderTarget](../../mfc/reference/cdcrendertarget-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cdcrendertarget__attach"></a>  CDCRenderTarget::Attach  
 Attaches existing render target interface to the object  
  
```  
void Attach(ID2D1DCRenderTarget* pTarget);
```  
  
### Parameters  
 `pTarget`  
 Existing render target interface. Cannot be NULL  
  
##  <a name="cdcrendertarget__binddc"></a>  CDCRenderTarget::BindDC  
 Binds the render target to the device context to which it issues drawing commands  
  
```  
BOOL BindDC(
    const CDC& dc,  
    const CRect& rect);
```  
  
### Parameters  
 `dc`  
 The device context to which the render target issues drawing commands  
  
 `rect`  
 The dimensions of the handle to a device context (HDC) to which the render target is bound  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cdcrendertarget__cdcrendertarget"></a>  CDCRenderTarget::CDCRenderTarget  
 Constructs a CDCRenderTarget object.  
  
```  
CDCRenderTarget();
```  
  
##  <a name="cdcrendertarget__create"></a>  CDCRenderTarget::Create  
 Creates a CDCRenderTarget.  
  
```  
BOOL Create(const D2D1_RENDER_TARGET_PROPERTIES& props);
```  
  
### Parameters  
 `props`  
 The rendering mode, pixel format, remoting options, DPI information, and the minimum DirectX support required for hardware rendering.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cdcrendertarget__detach"></a>  CDCRenderTarget::Detach  
 Detaches render target interface from the object  
  
```  
ID2D1DCRenderTarget* Detach();
```  
  
### Return Value  
 Pointer to detached render target interface.  
  
##  <a name="cdcrendertarget__getdcrendertarget"></a>  CDCRenderTarget::GetDCRenderTarget  
 Returns ID2D1DCRenderTarget interface  
  
```  
ID2D1DCRenderTarget* GetDCRenderTarget();
```  
  
### Return Value  
 Pointer to an ID2D1DCRenderTarget interface or NULL if object is not initialized yet.  
  
##  <a name="cdcrendertarget__m_pdcrendertarget"></a>  CDCRenderTarget::m_pDCRenderTarget  
 A pointer to an ID2D1DCRenderTarget object.  
  
```  
ID2D1DCRenderTarget* m_pDCRenderTarget;  
```  
  
##  <a name="cdcrendertarget__operator_id2d1dcrendertarget_star"></a>  CDCRenderTarget::operator ID2D1DCRenderTarget*  
 Returns ID2D1DCRenderTarget interface  
  
```  
operator ID2D1DCRenderTarget*();
```   
  
### Return Value  
 Pointer to an ID2D1DCRenderTarget interface or NULL if object is not initialized yet.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
