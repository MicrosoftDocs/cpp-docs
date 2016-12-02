---
title: "CBitmapRenderTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CBitmapRenderTarget"
  - "CBitmapRenderTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBitmapRenderTarget class"
ms.assetid: c89a4437-812e-4943-acb2-b429a04cc4d2
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
|[CBitmapRenderTarget::CBitmapRenderTarget](#cbitmaprendertarget__cbitmaprendertarget)|Constructs a CBitmapRenderTarget object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmapRenderTarget::Attach](#cbitmaprendertarget__attach)|Attaches existing render target interface to the object|  
|[CBitmapRenderTarget::Detach](#cbitmaprendertarget__detach)|Detaches render target interface from the object|  
|[CBitmapRenderTarget::GetBitmap](#cbitmaprendertarget__getbitmap)|Retrieves the bitmap for this render target. The returned bitmap can be used for drawing operations.|  
|[CBitmapRenderTarget::GetBitmapRenderTarget](#cbitmaprendertarget__getbitmaprendertarget)|Returns ID2D1BitmapRenderTarget interface|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmapRenderTarget::operator ID2D1BitmapRenderTarget*](#cbitmaprendertarget__operator_id2d1bitmaprendertarget_star)|Returns ID2D1BitmapRenderTarget interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmapRenderTarget::m_pBitmapRenderTarget](#cbitmaprendertarget__m_pbitmaprendertarget)|A pointer to an ID2D1BitmapRenderTarget object.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CBitmapRenderTarget](../../mfc/reference/cbitmaprendertarget-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cbitmaprendertarget__attach"></a>  CBitmapRenderTarget::Attach  
 Attaches existing render target interface to the object  
  
```  
void Attach(ID2D1BitmapRenderTarget* pTarget);
```  
  
### Parameters  
 `pTarget`  
 Existing render target interface. Cannot be NULL  
  
##  <a name="cbitmaprendertarget__cbitmaprendertarget"></a>  CBitmapRenderTarget::CBitmapRenderTarget  
 Constructs a CBitmapRenderTarget object.  
  
```  
CBitmapRenderTarget();
```  
  
##  <a name="cbitmaprendertarget__detach"></a>  CBitmapRenderTarget::Detach  
 Detaches render target interface from the object  
  
```  
ID2D1BitmapRenderTarget* Detach();
```  
  
### Return Value  
 Pointer to detached render target interface.  
  
##  <a name="cbitmaprendertarget__getbitmap"></a>  CBitmapRenderTarget::GetBitmap  
 Retrieves the bitmap for this render target. The returned bitmap can be used for drawing operations.  
  
```  
BOOL GetBitmap(CD2DBitmap& bitmap);
```  
  
### Parameters  
 `bitmap`  
 When this method returns, contains the valid bitmap for this render target. This bitmap can be used for drawing operations.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cbitmaprendertarget__getbitmaprendertarget"></a>  CBitmapRenderTarget::GetBitmapRenderTarget  
 Returns ID2D1BitmapRenderTarget interface  
  
```  
ID2D1BitmapRenderTarget* GetBitmapRenderTarget();
```  
  
### Return Value  
 Pointer to an ID2D1BitmapRenderTarget interface or NULL if object is not initialized yet.  
  
##  <a name="cbitmaprendertarget__m_pbitmaprendertarget"></a>  CBitmapRenderTarget::m_pBitmapRenderTarget  
 A pointer to an ID2D1BitmapRenderTarget object.  
  
```  
ID2D1BitmapRenderTarget* m_pBitmapRenderTarget;  
```  
  
##  <a name="cbitmaprendertarget__operator_id2d1bitmaprendertarget_star"></a>  CBitmapRenderTarget::operator ID2D1BitmapRenderTarget*  
 Returns ID2D1BitmapRenderTarget interface  
  
```  
operator ID2D1BitmapRenderTarget*();
```   
  
### Return Value  
 Pointer to an ID2D1BitmapRenderTarget interface or NULL if object is not initialized yet.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
