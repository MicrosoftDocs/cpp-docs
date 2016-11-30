---
title: "CComQIPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComQIPtr"
  - "ATL::CComQIPtr"
  - "CComQIPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComQIPtr class"
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
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
# CComQIPtr Class
A smart pointer class for managing COM interface pointers.  
  
## Syntax  
  
```
template<class T,  const IID* piid= &__uuidof(T)>  class CComQIPtr: public CComPtr<T>
```  
  
#### Parameters  
 `T`  
 A COM interface specifying the type of pointer to be stored.  
  
 `piid`  
 A pointer to the IID of `T`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComQIPtr::CComQIPtr](#ccomqiptr__ccomqiptr)|Constructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CComQIPtr::operator =](#ccomqiptr__operator_eq)|Assigns a pointer to the member pointer.|  
  
## Remarks  
 ATL uses `CComQIPtr` and [CComPtr](../../atl/reference/ccomptr-class.md) to manage COM interface pointers, both of which derive from [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Both classes perform automatic reference counting through calls to `AddRef` and **Release**. Overloaded operators handle pointer operations.  
  
## Inheritance Hierarchy  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 [CComPtr](../../atl/reference/ccomptr-class.md)  
  
 `CComQIPtr`  
  
## Requirements  
 **Header:** atlcomcli.h  
  
##  <a name="ccomqiptr__ccomqiptr"></a>  CComQIPtr::CComQIPtr  
 The constructor.  
  
```
CComQIPtr() throw();
CComQIPtr(T* lp) throw();
CComQIPtr(
 IUnknown* lp) throw();
CComQIPtr(
 const CComQIPtr<T,
    piid>& lp) throw();
```  
  
### Parameters  
 `lp`  
 Used to initialize the interface pointer.  
  
 `T`  
 A COM interface.  
  
 `piid`  
 A pointer to the IID of `T`.  
  
##  <a name="ccomqiptr__operator_eq"></a>  CComQIPtr::operator =  
 The assignment operator.  
  
```
T* operator= (T* lp) throw();

T* operator= (const CComQIPtr<T, piid>& lp) throw();

T* operator= (
    IUnknown* lp) throw();
```  
  
### Parameters  
 `lp`  
 Used to initialize the interface pointer.  
  
 `T`  
 A COM interface.  
  
 `piid`  
 A pointer to the IID of `T`.  
  
### Return Value  
 Returns a pointer to the updated `CComQIPtr` object.  
  
## See Also  
 [CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr__ccomptr)   
 [CComQIPtr::CComQIPtr](#ccomqiptr__ccomqiptr)   
 [CComPtrBase Class](../../atl/reference/ccomptrbase-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComQIPtrElementTraits Class](../../atl/reference/ccomqiptrelementtraits-class.md)
