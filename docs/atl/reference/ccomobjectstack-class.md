---
title: "CComObjectStack Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CComObjectStack"
  - "ATL.CComObjectStack"
  - "ATL::CComObjectStack<Base>"
  - "ATL.CComObjectStack<Base>"
  - "CComObjectStack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObjectStack class"
ms.assetid: 3da72c40-c834-45f6-bb76-6ac204028d80
caps.latest.revision: 19
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
# CComObjectStack Class
This class creates a temporary COM object and provides it with a skeletal implementation of **IUnknown**.  
  
## Syntax  
  
```
template <class  Base>  class CComObjectStack
 :  public Base
```  
  
#### Parameters  
 `Base`  
 Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interface you want to support on the object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComObjectStack::CComObjectStack](#ccomobjectstack__ccomobjectstack)|The constructor.|  
|[CComObjectStack::~CComObjectStack](#ccomobjectstack___dtorccomobjectstack)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComObjectStack::AddRef](#ccomobjectstack__addref)|Returns zero. In debug mode, calls `_ASSERTE`.|  
|[CComObjectStack::QueryInterface](#ccomobjectstack__queryinterface)|Returns **E_NOINTERFACE**. In debug mode, calls `_ASSERTE`.|  
|[CComObjectStack::Release](#ccomobjectstack__release)|Returns zero. In debug mode, calls `_ASSERTE`. ~|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CComObjectStack::m_hResFinalConstruct](#ccomobjectstack__m_hresfinalconstruct)|Contains the **HRESULT** returned during construction of the `CComObjectStack` object.|  
  
## Remarks  
 `CComObjectStack` is used to create a temporary COM object and provide the object a skeletal implementation of **IUnknown**. Typically, the object is used as a local variable within one function (that is, pushed onto the stack). Since the object is destroyed when the function finishes, reference counting is not performed to increase efficiency.  
  
 The following example shows how to create a COM object used inside a function:  
  
 [!code-cpp[NVC_ATL_COM#42](../../atl/codesnippet/cpp/ccomobjectstack-class_1.cpp)]  
  
 The temporary object `Tempobj` is pushed onto the stack and automatically disappears when the function finishes.  
  
## Inheritance Hierarchy  
 `Base`  
  
 `CComObjectStack`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ccomobjectstack__addref"></a>  CComObjectStack::AddRef  
 Returns zero.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### Return Value  
 Returns zero.  
  
### Remarks  
 In debug mode, calls `_ASSERTE`.  
  
##  <a name="ccomobjectstack__ccomobjectstack"></a>  CComObjectStack::CComObjectStack  
 The constructor.  
  
```
CComObjectStack(void* = NULL);
```  
  
### Remarks  
 Calls `FinalConstruct` and then sets [m_hResFinalConstruct](#ccomobjectstack__m_hresfinalconstruct) to the `HRESULT` returned by `FinalConstruct`. If you have not derived your base class from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), you must supply your own `FinalConstruct` method. The destructor calls `FinalRelease`.  
  
##  <a name="ccomobjectstack___dtorccomobjectstack"></a>  CComObjectStack::~CComObjectStack  
 The destructor.  
  
```
CComObjectStack();
```  
  
### Remarks  
 Frees all allocated resources and calls [FinalRelease](ccomobjectrootex-class.md#ccomobjectrootex__finalrelease).  
  
##  <a name="ccomobjectstack__m_hresfinalconstruct"></a>  CComObjectStack::m_hResFinalConstruct  
 Contains the `HRESULT` returned from calling `FinalConstruct` during construction of the `CComObjectStack` object.  
  
```
HRESULT     m_hResFinalConstruct;
```  
  
##  <a name="ccomobjectstack__queryinterface"></a>  CComObjectStack::QueryInterface  
 Returns **E_NOINTERFACE**.  
  
```
HRESULT     QueryInterface(
    REFIID,
 void**)
 ;
```  
  
### Return Value  
 Returns **E_NOINTERFACE**.  
  
### Remarks  
 In debug mode, calls `_ASSERTE`.  
  
##  <a name="ccomobjectstack__release"></a>  CComObjectStack::Release  
 Returns zero.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### Return Value  
 Returns zero.  
  
### Remarks  
 In debug mode, calls `_ASSERTE`.  
  
## See Also  
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComObject Class](../../atl/reference/ccomobject-class.md)   
 [CComObjectGlobal Class](../../atl/reference/ccomobjectglobal-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
