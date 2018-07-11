---
title: "CComQIPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComQIPtr", "ATLCOMCLI/ATL::CComQIPtr", "ATLCOMCLI/ATL::CComQIPtr::CComQIPtr"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComQIPtr class"]
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComQIPtr Class
A smart pointer class for managing COM interface pointers.  
  
## Syntax  
  
```
template<class T, const IID* piid= &__uuidof(T)>  
class CComQIPtr: public CComPtr<T>
```  
  
#### Parameters  
 *T*  
 A COM interface specifying the type of pointer to be stored.  
  
 *piid*  
 A pointer to the IID of *T*.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComQIPtr::CComQIPtr](#ccomqiptr)|Constructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CComQIPtr::operator =](#operator_eq)|Assigns a pointer to the member pointer.|  
  
## Remarks  
 ATL uses `CComQIPtr` and [CComPtr](../../atl/reference/ccomptr-class.md) to manage COM interface pointers, both of which derive from [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Both classes perform automatic reference counting through calls to `AddRef` and `Release`. Overloaded operators handle pointer operations.  
  
## Inheritance Hierarchy  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 [CComPtr](../../atl/reference/ccomptr-class.md)  
  
 `CComQIPtr`  
  
## Requirements  
 **Header:** atlcomcli.h  
  
##  <a name="ccomqiptr"></a>  CComQIPtr::CComQIPtr  
 The constructor.  
  
```
CComQIPtr() throw();
CComQIPtr(T* lp) throw();
CComQIPtr(IUnknown* lp) throw();
CComQIPtr(const CComQIPtr<T, piid>& lp) throw();
```  
  
### Parameters  
 *lp*  
 Used to initialize the interface pointer.  
  
 *T*  
 A COM interface.  
  
 *piid*  
 A pointer to the IID of *T*.  
  
##  <a name="operator_eq"></a>  CComQIPtr::operator =  
 The assignment operator.  
  
```
T* operator= (T* lp) throw();
T* operator= (const CComQIPtr<T, piid>& lp) throw();
T* operator= (IUnknown* lp) throw();
```  
  
### Parameters  
 *lp*  
 Used to initialize the interface pointer.  
  
 *T*  
 A COM interface.  
  
 *piid*  
 A pointer to the IID of *T*.  
  
### Return Value  
 Returns a pointer to the updated `CComQIPtr` object.  
  
## See Also  
 [CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)   
 [CComQIPtr::CComQIPtr](#ccomqiptr)   
 [CComPtrBase Class](../../atl/reference/ccomptrbase-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComQIPtrElementTraits Class](../../atl/reference/ccomqiptrelementtraits-class.md)
