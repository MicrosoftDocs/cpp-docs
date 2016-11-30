---
title: "CAutoVectorPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAutoVectorPtr"
  - "ATL.CAutoVectorPtr"
  - "ATL.CAutoVectorPtr<T>"
  - "CAutoVectorPtr"
  - "ATL::CAutoVectorPtr<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoVectorPtr class"
ms.assetid: 0030362b-6bc4-4a47-9b5b-3c3899dceab4
caps.latest.revision: 20
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
# CAutoVectorPtr Class
This class represents a smart pointer object using vector new and delete operators.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<typename T> class CAutoVectorPtr
```  
  
#### Parameters  
 `T`  
 The pointer type.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoVectorPtr::CAutoVectorPtr](#cautovectorptr__cautovectorptr)|The constructor.|  
|[CAutoVectorPtr::~CAutoVectorPtr](#cautovectorptr___dtorcautovectorptr)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoVectorPtr::Allocate](#cautovectorptr__allocate)|Call this method to allocate the memory required by the array of objects pointed to by `CAutoVectorPtr`.|  
|[CAutoVectorPtr::Attach](#cautovectorptr__attach)|Call this method to take ownership of an existing pointer.|  
|[CAutoVectorPtr::Detach](#cautovectorptr__detach)|Call this method to release ownership of a pointer.|  
|[CAutoVectorPtr::Free](#cautovectorptr__free)|Call this method to delete an object pointed to by a `CAutoVectorPtr`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoVectorPtr::operator T *](#cautovectorptr__operator_t__star)|The cast operator.|  
|[CAutoVectorPtr::operator =](#cautovectorptr__operator_eq)|The assignment operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoVectorPtr::m_p](#cautovectorptr__m_p)|The pointer data member variable.|  
  
## Remarks  
 This class provides methods for creating and managing a smart pointer, which will help protect against memory leaks by automatically freeing resources when it falls out of scope. `CAutoVectorPtr` is similar to `CAutoPtr`, the only difference being that `CAutoVectorPtr` uses [vector new&#91;&#93;](../../standard-library/new-operators.md#operator_new_arr) and [vector delete&#91;&#93;](../../standard-library/new-operators.md#operator_delete_arr) to allocate and free memory instead of the C++ **new** and **delete** operators. See [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) if collection classes of `CAutoVectorPtr` are required.  

  
 See [CAutoPtr](../../atl/reference/cautoptr-class.md) for an example of using a smart pointer class.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="cautovectorptr__allocate"></a>  CAutoVectorPtr::Allocate  
 Call this method to allocate the memory required by the array of objects pointed to by `CAutoVectorPtr`.  
  
```
bool Allocate(size_t nElements) throw();
```  
  
### Parameters  
 `nElements`  
 The number of elements in the array.  
  
### Return Value  
 Returns true if the memory is successfully allocated, false on failure.  
  
### Remarks  
 In debug builds, an assertion failure will occur if the [CAutoVectorPtr::m_p](#cautovectorptr__m_p) member variable currently points to an existing value; that is, it is not equal to NULL.  
  
##  <a name="cautovectorptr__attach"></a>  CAutoVectorPtr::Attach  
 Call this method to take ownership of an existing pointer.  
  
```
void Attach(T* p) throw();
```  
  
### Parameters  
 `p`  
 The `CAutoVectorPtr` object will take ownership of this pointer.  
  
### Remarks  
 When a `CAutoVectorPtr` object takes ownership of a pointer, it will automatically delete the pointer and any allocated data when it goes out of scope. If [CAutoVectorPtr::Detach](#cautovectorptr__detach) is called, the programmer is again given responsibility for freeing any allocated resources.  
  
 In debug builds, an assertion failure will occur if the [CAutoVectorPtr::m_p](#cautovectorptr__m_p) member variable currently points to an existing value; that is, it is not equal to NULL.  
  
##  <a name="cautovectorptr__cautovectorptr"></a>  CAutoVectorPtr::CAutoVectorPtr  
 The constructor.  
  
```
CAutoVectorPtr() throw();
explicit CAutoVectorPtr(T* p) throw();
CAutoVectorPtr(CAutoVectorPtr<T>& p) throw();
```  
  
### Parameters  
 `p`  
 An existing pointer.  
  
### Remarks  
 The `CAutoVectorPtr` object can be created using an existing pointer, in which case it transfers ownership of the pointer.  
  
##  <a name="cautovectorptr___dtorcautovectorptr"></a>  CAutoVectorPtr::~CAutoVectorPtr  
 The destructor.  
  
```
~CAutoVectorPtr() throw();
```  
  
### Remarks  
 Frees any allocated resources. Calls [CAutoVectorPtr::Free](#cautovectorptr__free).  
  
##  <a name="cautovectorptr__detach"></a>  CAutoVectorPtr::Detach  
 Call this method to release ownership of a pointer.  
  
```
T* Detach() throw();
```  
  
### Return Value  
 Returns a copy of the pointer.  
  
### Remarks  
 Releases ownership of a pointer, sets the [CAutoVectorPtr::m_p](#cautovectorptr__m_p) member variable to NULL, and returns a copy of the pointer. After calling **Detach**, it is up to the programmer to free any allocated resources over which the `CAutoVectorPtr` object may have previously assumed responsibility.  
  
##  <a name="cautovectorptr__free"></a>  CAutoVectorPtr::Free  
 Call this method to delete an object pointed to by a `CAutoVectorPtr`.  
  
```
void Free() throw();
```  
  
### Remarks  
 The object pointed to by the `CAutoVectorPtr` is freed, and the [CAutoVectorPtr::m_p](#cautovectorptr__m_p) member variable is set to NULL.  
  
##  <a name="cautovectorptr__m_p"></a>  CAutoVectorPtr::m_p  
 The pointer data member variable.  
  
```
T* m_p;
```  
  
### Remarks  
 This member variable holds the pointer information.  
  
##  <a name="cautovectorptr__operator_eq"></a>  CAutoVectorPtr::operator =  
 The assignment operator.  
  
```
CAutoVectorPtr<T>& operator= (CAutoVectorPtr<T>& p) throw();
```  
  
### Parameters  
 `p`  
 A pointer.  
  
### Return Value  
 Returns a reference to a **CAutoVectorPtr\< T >**.  
  
### Remarks  
 The assignment operator detaches the `CAutoVectorPtr` object from any current pointer and attaches the new pointer, `p`, in its place.  
  
##  <a name="cautovectorptr__operator_t__star"></a>  CAutoVectorPtr::operator T *  
 The cast operator.  
  
```operator T*() const throw();
```  
  
### Remarks  
 Returns a pointer to the object data type defined in the class template.  
  
## See Also  
 [CAutoPtr Class](../../atl/reference/cautoptr-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
