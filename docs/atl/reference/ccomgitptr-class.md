---
title: "CComGITPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CComGITPtr<T>"
  - "CComGITPtr"
  - "ATL.CComGITPtr"
  - "ATL.CComGITPtr<T>"
  - "ATL::CComGITPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComGITPtr class"
ms.assetid: af895acb-525a-4555-bb67-b241b7df515b
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
# CComGITPtr Class
This class provides methods for dealing with interface pointers and the global interface table (GIT).  
  
## Syntax  
  
```
template <class T>  class CComGITPtr
```  
  
#### Parameters  
 `T`  
 The type of the interface pointer to be stored in the GIT.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComGITPtr::CComGITPtr](#ccomgitptr__ccomgitptr)|The constructor.|  
|[CComGITPtr::~CComGITPtr](#ccomgitptr___dtorccomgitptr)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComGITPtr::Attach](#ccomgitptr__attach)|Call this method to register the interface pointer in the global interface table (GIT).|  
|[CComGITPtr::CopyTo](#ccomgitptr__copyto)|Call this method to copy the interface from the global interface table (GIT) to the passed pointer.|  
|[CComGITPtr::Detach](#ccomgitptr__detach)|Call this method to disassociate the interface from the `CComGITPtr` object.|  
|[CComGITPtr::GetCookie](#ccomgitptr__getcookie)|Call this method to return the cookie from the `CComGITPtr` object.|  
|[CComGITPtr::Revoke](#ccomgitptr__revoke)|Call this method to remove the interface from the global interface table (GIT).|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CComGITPtr::operator DWORD](#ccomgitptr__operator_dword)|Returns the cookie from the `CComGITPtr` object.|  
|[CComGITPtr::operator =](#ccomgitptr__operator_eq)|Assignment operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CComGITPtr::m_dwCookie](#ccomgitptr__m_dwcookie)|The cookie.|  
  
## Remarks  
 Objects that aggregate the free threaded marshaler and need to use interface pointers obtained from other objects must take extra steps to ensure that the interfaces are correctly marshaled. Typically this involves storing the interface pointers in the GIT and getting the pointer from the GIT each time it is used. The class `CComGITPtr` is provided to help you use interface pointers stored in the GIT.  
  
> [!NOTE]
>  The global interface table facility is only available on Windows 95 with DCOM version 1.1 and later, Windows 98, Windows NT 4.0 with Service Pack 3 and later, and Windows 2000.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomgitptr__attach"></a>  CComGITPtr::Attach  
 Call this method to register the interface pointer in the global interface table (GIT).  
  
```
HRESULT Attach(T* p) throw();
HRESULT Attach(DWORD dwCookie) throw();
```  
  
### Parameters  
 `p`  
 The interface pointer to be added to the GIT.  
  
 `dwCookie`  
 The cookie used to identify the interface pointer.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 In debug builds, an assertion error will occur if the GIT is not valid, or if the cookie is equal to NULL.  
  
##  <a name="ccomgitptr__ccomgitptr"></a>  CComGITPtr::CComGITPtr  
 The constructor.  
  
```
CComGITPtr() throw();

CComGITPtr(T* p);

CComGITPtr(const CComGITPtr& git);

explicit CComGITPtr(DWORD  dwCookie) throw();

CComGITPtr(CComGITPtr&& rv);
```  
  
### Parameters  
 [in] `p`  
 An interface pointer to be stored in the global interface table (GIT).  
  
 [in] `git`  
 A reference to an existing `CComGITPtr` object.  
  
 [in] `dwCookie`  
 A cookie used to identify the interface pointer.  
  
 [in] `rv`  
 The source `CComGITPtr` object to move data from.  
  
### Remarks  
 Creates a new `CComGITPtr` object, optionally using an existing `CComGITPtr` object.  
  
 The constructor utilizing `rv` is a move constructor. The data is moved from the source, `rv`, and then `rv` is cleared.  
  
##  <a name="ccomgitptr___dtorccomgitptr"></a>  CComGITPtr::~CComGITPtr  
 The destructor.  
  
```
~CComGITPtr() throw();
```  
  
### Remarks  
 Removes the interface from the global interface table (GIT), using [CComGITPtr::Revoke](#ccomgitptr__revoke).  
  
##  <a name="ccomgitptr__copyto"></a>  CComGITPtr::CopyTo  
 Call this method to copy the interface from the global interface table (GIT) to the passed pointer.  
  
```
HRESULT CopyTo(T** pp) const throw();
```  
  
### Parameters  
 `pp`  
 The pointer which is to receive the interface.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The interface from the GIT is copied to the passed pointer. The pointer must be released by the caller when it is no longer required.  
  
##  <a name="ccomgitptr__detach"></a>  CComGITPtr::Detach  
 Call this method to disassociate the interface from the `CComGITPtr` object.  
  
```
DWORD Detach() throw();
```  
  
### Return Value  
 Returns the cookie from the `CComGITPtr` object.  
  
### Remarks  
 It is up to the caller to remove the interface from the GIT, using [CComGITPtr::Revoke](#ccomgitptr__revoke).  
  
##  <a name="ccomgitptr__getcookie"></a>  CComGITPtr::GetCookie  
 Call this method to return the cookie from the `CComGITPtr` object.  
  
```
DWORD GetCookie() const;
```  
  
### Return Value  
 Returns the cookie.  
  
### Remarks  
 The cookie is a variable used to identify an interface and its location.  
  
##  <a name="ccomgitptr__m_dwcookie"></a>  CComGITPtr::m_dwCookie  
 The cookie.  
  
```
DWORD m_dwCookie;
```  
  
### Remarks  
 The cookie is a member variable used to identify an interface and its location.  
  
##  <a name="ccomgitptr__operator_eq"></a>  CComGITPtr::operator =  
 The assignment operator.  
  
```
CComGITPtr& operator= (T* p);

CComGITPtr& operator= (const CComGITPtr& git);

CComGITPtr& operator= (DWORD dwCookie);

CComGITPtr& operator= (CComGITPtr&& rv);
```  
  
### Parameters  
 [in] `p`  
 A pointer to an interface.  
  
 [in] `git`  
 A reference to a `CComGITPtr` object.  
  
 [in] `dwCookie`  
 A cookie used to identify the interface pointer.  
  
 [in] `rv`  
 The `CComGITPtr` to move data from.  
  
### Return Value  
 Returns the updated `CComGITPtr` object.  
  
### Remarks  
 Assigns a new value to a `CComGITPtr` object, either from an existing object or from a reference to a global interface table.  
  
##  <a name="ccomgitptr__operator_dword"></a>  CComGITPtr::operator DWORD  
 Returns the cookie associated with the `CComGITPtr` object.  
  
```operator DWORD() const;
```  
  
### Remarks  
 The cookie is a variable used to identify an interface and its location.  
  
##  <a name="ccomgitptr__revoke"></a>  CComGITPtr::Revoke  
 Call this method to remove the current interface from the global interface table (GIT).  
  
```
HRESULT Revoke() throw();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Removes the interface from the GIT.  
  
## See Also  
 [Free Threaded Marshaler](../../atl/atl-and-the-free-threaded-marshaler.md)   
 [Accessing Interfaces Across Apartments](http://msdn.microsoft.com/library/windows/desktop/ms682353)   
 [When to Use the Global Interface Table](http://msdn.microsoft.com/library/windows/desktop/ms693729)   
 [Class Overview](../../atl/atl-class-overview.md)
