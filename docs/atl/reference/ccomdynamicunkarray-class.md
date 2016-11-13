---
title: "CComDynamicUnkArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComDynamicUnkArray"
  - "CComDynamicUnkArray"
  - "ATL::CComDynamicUnkArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connection points [C++], managing"
  - "CComDynamicUnkArray class"
ms.assetid: 202470d7-9a1b-498f-b96d-659d681acd65
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
# CComDynamicUnkArray Class
This class stores an array of **IUnknown** pointers.  
  
## Syntax  
  
```
class CComDynamicUnkArray
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComDynamicUnkArray::CComDynamicUnkArray](#ccomdynamicunkarray__ccomdynamicunkarray)|Constructor. Initializes the collection values to **NULL** and the collection size to zero.|  
|[CComDynamicUnkArray::~CComDynamicUnkArray](#ccomdynamicunkarray___dtorccomdynamicunkarray)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComDynamicUnkArray::Add](#ccomdynamicunkarray__add)|Call this method to add an `IUnknown` pointer to the array.|  
|[CComDynamicUnkArray::begin](#ccomdynamicunkarray__begin)|Returns a pointer to the first `IUnknown` pointer in the collection.|  
|[CComDynamicUnkArray::clear](#ccomdynamicunkarray__clear)|Empties the array.|  
|[CComDynamicUnkArray::end](#ccomdynamicunkarray__end)|Returns a pointer to one past the last **IUnknown** pointer in the collection.|  
|[CComDynamicUnkArray::GetAt](#ccomdynamicunkarray__getat)|Retrieves the element at the specified index.|  
|[CComDynamicUnkArray::GetCookie](#ccomdynamicunkarray__getcookie)|Call this method to get the cookie associated with a given **IUnknown** pointer.|  
|[CComDynamicUnkArray::GetSize](#ccomdynamicunkarray__getsize)|Returns the length of an array.|  
|[CComDynamicUnkArray::GetUnknown](#ccomdynamicunkarray__getunknown)|Call this method to get the **IUnknown** pointer associated with a given cookie.|  
|[CComDynamicUnkArray::Remove](#ccomdynamicunkarray__remove)|Call this method to remove an **IUnknown** pointer from the array.|  
  
## Remarks  
 **CComDynamicUnkArray** holds a dynamically allocated array of **IUnknown** pointers, each an interface on a connection point. **CComDynamicUnkArray** can be used as a parameter to the [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) template class.  
  
 The **CComDynamicUnkArray** methods [begin](#ccomdynamicunkarray__begin) and [end](#ccomdynamicunkarray__end) can be used to loop through all connection points (for example, when an event is fired).  
  
 See [Adding Connection Points to an Object](../../atl/adding-connection-points-to-an-object.md) for details on automating creation of connection point proxies.  
  
> [!NOTE]
> **Note** The class **CComDynamicUnkArray** is used by the **Add Class** wizard when creating a control which has Connection Points. If you wish to specify the number of Connection Points manually, change the reference from **CComDynamicUnkArray** to `CComUnkArray<` *n* `>`, where *n* is the number of connection points required.  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ccomdynamicunkarray__add"></a>  CComDynamicUnkArray::Add  
 Call this method to add an **IUnknown** pointer to the array.  
  
```
DWORD Add(IUnknown* pUnk);
```  
  
### Parameters  
 *pUnk*  
 The **IUnknown** pointer to add to the array.  
  
### Return Value  
 Returns the cookie associated with the newly added pointer.  
  
##  <a name="ccomdynamicunkarray__begin"></a>  CComDynamicUnkArray::begin  
 Returns a pointer to the beginning of the collection of **IUnknown** interface pointers.  
  
```
IUnknown**
    begin();
```     
  
### Return Value  
 A pointer to an **IUnknown** interface pointer.  
  
### Remarks  
 The collection contains pointers to interfaces stored locally as **IUnknown**. You cast each **IUnknown** interface to the real interface type and then call through it. You do not need to query for the interface first.  
  
 Before using the **IUnknown** interface, you should check that it is not **NULL**.  
  
##  <a name="ccomdynamicunkarray__clear"></a>  CComDynamicUnkArray::clear  
 Empties the array.  
  
```
void clear();
```  
  
##  <a name="ccomdynamicunkarray__ccomdynamicunkarray"></a>  CComDynamicUnkArray::CComDynamicUnkArray  
 The constructor.  
  
```
CComDynamicUnkArray();
```  
  
### Remarks  
 Sets the collection size to zero and initializes the values to **NULL**. The destructor frees the collection, if necessary.  
  
##  <a name="ccomdynamicunkarray___dtorccomdynamicunkarray"></a>  CComDynamicUnkArray::~CComDynamicUnkArray  
 The destructor.  
  
```
~CComDynamicUnkArray();
```  
  
### Remarks  
 Frees resources allocated by the class constructor.  
  
##  <a name="ccomdynamicunkarray__end"></a>  CComDynamicUnkArray::end  
 Returns a pointer to one past the last **IUnknown** pointer in the collection.  
  
```
IUnknown**
    end();
```     
  
### Return Value  
 A pointer to an **IUnknown** interface pointer.  
  
##  <a name="ccomdynamicunkarray__getat"></a>  CComDynamicUnkArray::GetAt  
 Retrieves the element at the specified index.  
  
```
IUnknown* GetAt(int   nIndex);
```  
  
### Parameters  
 `nIndex`  
 The index of the element to retrieve.  
  
### Return Value  
 A pointer to an [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) interface.  
  
##  <a name="ccomdynamicunkarray__getcookie"></a>  CComDynamicUnkArray::GetCookie  
 Call this method to get the cookie associated with a given **IUnknown** pointer.  
  
```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```  
  
### Parameters  
 `ppFind`  
 The **IUnknown** pointer for which the associated cookie is required.  
  
### Return Value  
 Returns the cookie associated with the **IUnknown** pointer, or zero if no matching **IUnknown** pointer is found.  
  
### Remarks  
 If there is more than one instance of the same **IUnknown** pointer, this function returns the cookie for the first one.  
  
##  <a name="ccomdynamicunkarray__getsize"></a>  CComDynamicUnkArray::GetSize  
 Returns the length of an array.  
  
```
int GetSize() const;
```  
  
### Return Value  
 The length of the array.  
  
##  <a name="ccomdynamicunkarray__getunknown"></a>  CComDynamicUnkArray::GetUnknown  
 Call this method to get the **IUnknown** pointer associated with a given cookie.  
  
```
IUnknown* WINAPI GetUnknown(DWORD   dwCookie);
```  
  
### Parameters  
 `dwCookie`  
 The cookie for which the associated **IUnknown** pointer is required.  
  
### Return Value  
 Returns the **IUnknown** pointer, or NULL if no matching cookie is found.  
  
##  <a name="ccomdynamicunkarray__remove"></a>  CComDynamicUnkArray::Remove  
 Call this method to remove an **IUnknown** pointer from the array.  
  
```
BOOL Remove(DWORD   dwCookie);
```  
  
### Parameters  
 `dwCookie`  
 The cookie referencing the **IUnknown** pointer to be removed from the array.  
  
### Return Value  
 Returns TRUE if the pointer is removed; otherwise FALSE.  
  
## See Also  
 [CComUnkArray Class](../../atl/reference/ccomunkarray-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
