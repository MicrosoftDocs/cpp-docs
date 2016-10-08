---
title: "CComUnkArray Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 5fd4b378-a7b5-4cc1-8866-8ab72a73639e
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CComUnkArray Class
This class stores **IUnknown** pointers, and is designed to be used as a parameter to the [IConnectionPointImpl](../VS_visualcpp/IConnectionPointImpl-Class.md) template class.  
  
## Syntax  
  
```  
template<  
    unsigned int nMaxSize  
>  
class CComUnkArray  
```  
  
#### Parameters  
 *nMaxSize*  
 The maximum number of **IUnknown** pointers that can be held in the static array.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComUnkArray::CComUnkArray](../Topic/CComUnkArray::CComUnkArray.md)|Constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComUnkArray::Add](../Topic/CComUnkArray::Add.md)|Call this method to add an **IUnknown** pointer to the array.|  
|[CComUnkArray::begin](../Topic/CComUnkArray::begin.md)|Returns a pointer to the first **IUnknown** pointer in the collection.|  
|[CComUnkArray::end](../Topic/CComUnkArray::end.md)|Returns a pointer to one past the last **IUnknown** pointer in the collection.|  
|[CComUnkArray::GetCookie](../Topic/CComUnkArray::GetCookie.md)|Call this method to get the cookie associated with a given **IUnknown** pointer.|  
|[CComUnkArray::GetUnknown](../Topic/CComUnkArray::GetUnknown.md)|Call this method to get the **IUnknown** pointer associated with a given cookie.|  
|[CComUnkArray::Remove](../Topic/CComUnkArray::Remove.md)|Call this method to remove an **IUnknown** pointer from the array.|  
  
## Remarks  
 **CComUnkArray** holds a fixed number of **IUnknown** pointers, each an interface on a connection point. **CComUnkArray** can be used as a parameter to the [IConnectionPointImpl](../VS_visualcpp/IConnectionPointImpl-Class.md) template class. **CComUnkArray<1>** is a template specialization of **CComUnkArray** that has been optimized for one connection point.  
  
 The **CComUnkArray** methods [begin](../Topic/CComUnkArray::begin.md) and [end](../Topic/CComUnkArray::end.md) can be used to loop through all connection points (for example, when an event is fired).  
  
 See [Adding Connection Points to an Object](../VS_visualcpp/Adding-Connection-Points-to-an-Object.md) for details on automating creation of connection point proxies.  
  
> [!NOTE]
>  **Note** The class [CComDynamicUnkArray](../VS_visualcpp/CComDynamicUnkArray-Class.md) is used by the **Add Class** wizard when creating a control which has Connection Points. If you wish to specify the number of Connection Points manually, change the reference from **CComDynamicUnkArray** to `CComUnkArray<` *n* `>`, where *n* is the number of connection points required.  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ccomunkarray__add"></a>  CComUnkArray::Add  
 Call this method to add an **IUnknown** pointer to the array.  
  
```  
DWORD Add(    IUnknown* pUnk );  
```  
  
### Parameters  
 *pUnk*  
 Call this method to add an **IUnknown** pointer to the array.  
  
### Return Value  
 Returns the cookie associated with the newly added pointer, or 0 if the array is not large enough to contain the new pointer.  
  
##  <a name="ccomunkarray__begin"></a>  CComUnkArray::begin  
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
  
##  <a name="ccomunkarray__ccomunkarray"></a>  CComUnkArray::CComUnkArray  
 The constructor.  
  
```  
CComUnkArray();  
```  
  
### Remarks  
 Sets the collection to hold `nMaxSize` **IUnknown** pointers, and initializes the pointers to **NULL**.  
  
##  <a name="ccomunkarray__end"></a>  CComUnkArray::end  
 Returns a pointer to one past the last **IUnknown** pointer in the collection.  
  
```  
IUnknown**  
    end();  
```  
  
### Return Value  
 A pointer to an **IUnknown** interface pointer.  
  
### Remarks  
 The `CComUnkArray` methods **begin** and **end** can be used to loop through all connection points, for example, when an event is fired.  
  
 [!CODE [NVC_ATL_COM#44](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#44)]  
  
##  <a name="ccomunkarray__getcookie"></a>  CComUnkArray::GetCookie  
 Call this method to get the cookie associated with a given **IUnknown** pointer.  
  
```  
DWORD WINAPI GetCookie(    IUnknown** ppFind );  
```  
  
### Parameters  
 `ppFind`  
 The **IUnknown** pointer for which the associated cookie is required.  
  
### Return Value  
 Returns the cookie associated with the **IUnknown** pointer, or 0 if no matching **IUnknown** pointer is found.  
  
### Remarks  
 If there is more than one instance of the same **IUnknown** pointer, this function returns the cookie for the first one.  
  
##  <a name="ccomunkarray__getunknown"></a>  CComUnkArray::GetUnknown  
 Call this method to get the **IUnknown** pointer associated with a given cookie.  
  
```  
IUnknown* WINAPI GetUnknown(    DWORD dwCookie );  
```  
  
### Parameters  
 `dwCookie`  
 The cookie for which the associated **IUnknown** pointer is required.  
  
### Return Value  
 Returns the **IUnknown** pointer, or NULL if no matching cookie is found.  
  
##  <a name="ccomunkarray__remove"></a>  CComUnkArray::Remove  
 Call this method to remove an **IUnknown** pointer from the array.  
  
```  
BOOL Remove(    DWORD dwCookie );  
```  
  
### Parameters  
 `dwCookie`  
 The cookie referencing the **IUnknown** pointer to be removed from the array.  
  
### Return Value  
 Returns **TRUE** if the pointer is removed,                         **FALSE** otherwise.  
  
## See Also  
 [CComDynamicUnkArray Class](../VS_visualcpp/CComDynamicUnkArray-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)