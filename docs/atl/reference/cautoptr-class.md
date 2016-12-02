---
title: "CAutoPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAutoPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoPtr class"
ms.assetid: 08988d53-4fb0-4711-bdfc-8ac29c63f410
caps.latest.revision: 23
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
# CAutoPtr Class
This class represents a smart pointer object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <typename   T>
    class CAutoPtr
```  
  
#### Parameters  
 `T`  
 The pointer type.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoPtr::CAutoPtr](#cautoptr__cautoptr)|The constructor.|  
|[CAutoPtr::~CAutoPtr](#cautoptr___dtorcautoptr)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoPtr::Attach](#cautoptr__attach)|Call this method to take ownership of an existing pointer.|  
|[CAutoPtr::Detach](#cautoptr__detach)|Call this method to release ownership of a pointer.|  
|[CAutoPtr::Free](#cautoptr__free)|Call this method to delete an object pointed to by a `CAutoPtr`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoPtr::operator T*](#cautoptr__operator_t_star)|The cast operator.|  
|[CAutoPtr::operator =](#cautoptr__operator_eq)|The assignment operator.|  
|[CAutoPtr::operator ->](#cautoptr__operator_ptr)|The pointer-to-member operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoPtr::m_p](#cautoptr__m_p)|The pointer data member variable.|  
  
## Remarks  
 This class provides methods for creating and managing a smart pointer, which will help protect against memory leaks by automatically freeing resources when it falls out of scope.  
  
 Further, `CAutoPtr`'s copy constructor and assignment operator transfer ownership of the pointer, copying the source pointer to the destination pointer and setting the source pointer to NULL. It is therefore impossible to have two `CAutoPtr` objects each storing the same pointer, and this reduces the possibility of deleting the same pointer twice.  
  
 `CAutoPtr` also simplifies the creation of collections of pointers. Instead of deriving a collection class and overriding the destructor, it's simpler to make a collection of `CAutoPtr` objects. When the collection is deleted, the `CAutoPtr` objects will go out of scope and automatically delete themselves.  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md) and variants work in the same way as `CAutoPtr`, except that they allocate and free memory using different heap functions instead of the C++ **new** and **delete** operators. [CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md) is similar to `CAutoPtr`, the only difference being that it uses **vector new[]** and **vector delete[]** to allocate and free memory.  
  
 See also [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) and [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) when arrays or lists of smart pointers are required.  
  
## Requirements  
 **Header:** atlbase.h  
  
## Example  
 [!code-cpp[NVC_ATL_Utilities#74](../../atl/codesnippet/cpp/cautoptr-class_1.cpp)]  
  
##  <a name="cautoptr__attach"></a>  CAutoPtr::Attach  
 Call this method to take ownership of an existing pointer.  
  
```
void Attach(T* p) throw();
```  
  
### Parameters  
 `p`  
 The `CAutoPtr` object will take ownership of this pointer.  
  
### Remarks  
 When a `CAutoPtr` object takes ownership of a pointer, it will automatically delete the pointer and any allocated data when it goes out of scope. If [CAutoPtr::Detach](#cautoptr__detach) is called, the programmer is again given responsibility for freeing any allocated resources.  
  
 In debug builds, an assertion failure will occur if the [CAutoPtr::m_p](#cautoptr__m_p) data member currently points to an existing value; that is, it is not equal to NULL.  
  
### Example  
 See the example in the [CAutoPtr Overview](../../atl/reference/cautoptr-class.md).  
  
##  <a name="cautoptr__cautoptr"></a>  CAutoPtr::CAutoPtr  
 The constructor.  
  
```
CAutoPtr() throw();
explicit CAutoPtr(T* p) throw();

template<typename TSrc> CAutoPtr(CAutoPtr<TSrc>& p) throw();

template<> CAutoPtr(CAutoPtr<T>& p) throw();
```  
  
### Parameters  
 `p`  
 An existing pointer.  
  
 `TSrc`  
 The type being managed by another `CAutoPtr`, used to initialize the current object.  
  
### Remarks  
 The `CAutoPtr` object can be created using an existing pointer, in which case it transfers ownership of the pointer.  
  
### Example  
 See the example in the [CAutoPtr Overview](../../atl/reference/cautoptr-class.md).  
  
##  <a name="cautoptr___dtorcautoptr"></a>  CAutoPtr::~CAutoPtr  
 The destructor.  
  
```
~CAutoPtr() throw();
```  
  
### Remarks  
 Frees any allocated resources. Calls [CAutoPtr::Free](#cautoptr__free).  
  
##  <a name="cautoptr__detach"></a>  CAutoPtr::Detach  
 Call this method to release ownership of a pointer.  
  
```
T* Detach() throw();
```  
  
### Return Value  
 Returns a copy of the pointer.  
  
### Remarks  
 Releases ownership of a pointer, sets the [CAutoPtr::m_p](#cautoptr__m_p) data member variable to NULL, and returns a copy of the pointer. After calling **Detach**, it is up to the programmer to free any allocated resources over which the `CAutoPtr` object may have previously assumed reponsibility.  
  
### Example  
 See the example in the [CAutoPtr Overview](../../atl/reference/cautoptr-class.md).  
  
##  <a name="cautoptr__free"></a>  CAutoPtr::Free  
 Call this method to delete an object pointed to by a `CAutoPtr`.  
  
```
void Free() throw();
```  
  
### Remarks  
 The object pointed to by the `CAutoPtr` is freed, and the [CAutoPtr::m_p](#cautoptr__m_p) data member variable is set to NULL.  
  
##  <a name="cautoptr__m_p"></a>  CAutoPtr::m_p  
 The pointer data member variable.  
  
```
T* m_p;
```  
  
### Remarks  
 This member variable holds the pointer information.  
  
##  <a name="cautoptr__operator_eq"></a>  CAutoPtr::operator =  
 The assignment operator.  
  
```
template<>
CAutoPtr<T>& operator= (CAutoPtr<T>& p);

template<typename TSrc>
CAutoPtr<T>& operator= (CAutoPtr<TSrc>& p);
```  
  
### Parameters  
 `p`  
 A pointer.  
  
 `TSrc`  
 A class type.  
  
### Return Value  
 Returns a reference to a **CAutoPtr\< T >**.  
  
### Remarks  
 The assignment operator detaches the `CAutoPtr` object from any current pointer and attaches the new pointer, `p`, in its place.  
  
### Example  
 See the example in the [CAutoPtr Overview](../../atl/reference/cautoptr-class.md).  
  
##  <a name="cautoptr__operator_ptr"></a>  CAutoPtr::operator -&gt;  
 The pointer-to-member operator.  
  
```
T* operator->() const throw();
```  
  
### Return Value  
 Returns the value of the [CAutoPtr::m_p](#cautoptr__m_p) data member variable.  
  
### Remarks  
 Use this operator to call a method in a class pointed to by the `CAutoPtr` object. In debug builds, an assertion failure will occur if the `CAutoPtr` points to NULL.  
  
### Example  
 See the example in the [CAutoPtr Overview](../../atl/reference/cautoptr-class.md).  
  
##  <a name="cautoptr__operator_t_star"></a>  CAutoPtr::operator T*  
 The cast operator.  
  
```operator T* () const throw();
```  
  
### Return Value  
 Returns a pointer to the object data type defined in the class template.  
  
### Example  
 See the example in the [CAutoPtr Overview](../../atl/reference/cautoptr-class.md).  
  
## See Also  
 [CHeapPtr Class](../../atl/reference/cheapptr-class.md)   
 [CAutoVectorPtr Class](../../atl/reference/cautovectorptr-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
