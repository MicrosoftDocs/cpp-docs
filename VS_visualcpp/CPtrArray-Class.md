---
title: "CPtrArray Class"
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
ms.assetid: c23b87a3-bf84-49d6-a66b-61e999d0938a
caps.latest.revision: 18
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
# CPtrArray Class
Supports arrays of void pointers.  
  
## Syntax  
  
```  
class CPtrArray : public CObject  
```  
  
## Members  
 The member functions of `CPtrArray` are similar to the member functions of class [CObArray](../VS_visualcpp/CObArray-Class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a pointer to `void`.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 for example, translates to  
  
 `void* CPtrArray::GetAt( int <nIndex> ) const;`  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::CObArray](../VS_visualcpp/CObArray-Class.md#cobarray__cobarray)|Constructs an empty array.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::Add](../VS_visualcpp/CObArray-Class.md#cobarray__add)|Adds an element to the end of the array; grows the array if necessary.|  
|[CObArray::Append](../VS_visualcpp/CObArray-Class.md#cobarray__append)|Appends another array to the array; grows the array if necessary.|  
|[CObArray::Copy](../VS_visualcpp/CObArray-Class.md#cobarray__copy)|Copies another array to the array; grows the array if necessary.|  
|[CObArray::ElementAt](../VS_visualcpp/CObArray-Class.md#cobarray__elementat)|Returns a temporary reference to the element pointer within the array.|  
|[CObArray::FreeExtra](../VS_visualcpp/CObArray-Class.md#cobarray__freeextra)|Frees all unused memory above the current upper bound.|  
|[CObArray::GetAt](../VS_visualcpp/CObArray-Class.md#cobarray__getat)|Returns the value at a given index.|  
|[CObArray::GetCount](../VS_visualcpp/CObArray-Class.md#cobarray__getcount)|Gets the number of elements in this array.|  
|[CObArray::GetData](../VS_visualcpp/CObArray-Class.md#cobarray__getdata)|Allows access to elements in the array. Can be `NULL`.|  
|[CObArray::GetSize](../VS_visualcpp/CObArray-Class.md#cobarray__getsize)|Gets the number of elements in this array.|  
|[CObArray::GetUpperBound](../VS_visualcpp/CObArray-Class.md#cobarray__getupperbound)|Returns the largest valid index.|  
|[CObArray::InsertAt](../VS_visualcpp/CObArray-Class.md#cobarray__insertat)|Inserts an element (or all the elements in another array) at a specified index.|  
|[CObArray::IsEmpty](../VS_visualcpp/CObArray-Class.md#cobarray__isempty)|Determines if the array is empty.|  
|[CObArray::RemoveAll](../VS_visualcpp/CObArray-Class.md#cobarray__removeall)|Removes all the elements from this array.|  
|[CObArray::RemoveAt](../VS_visualcpp/CObArray-Class.md#cobarray__removeat)|Removes an element at a specific index.|  
|[CObArray::SetAt](../VS_visualcpp/CObArray-Class.md#cobarray__setat)|Sets the value for a given index; array not allowed to grow.|  
|[CObArray::SetAtGrow](../VS_visualcpp/CObArray-Class.md#cobarray__setatgrow)|Sets the value for a given index; grows the array if necessary.|  
|[CObArray::SetSize](../VS_visualcpp/CObArray-Class.md#cobarray__setsize)|Sets the number of elements to be contained in this array.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::operator [ ]](../VS_visualcpp/CObArray-Class.md#cobarray__operator_at)|Sets or gets the element at the specified index.|  
  
## Remarks  
 `CPtrArray` incorporates the `IMPLEMENT_DYNAMIC` macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual pointer array elements, you must set the depth of the dump context to 1 or greater.  
  
> [!NOTE]
>  Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 Pointer arrays cannot be serialized.  
  
 When a pointer array is deleted, or when its elements are removed, only the pointers are removed, not the entities they reference.  
  
 For more information on using `CPtrArray`, see the article [Collections](../VS_visualcpp/Collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 `CPtrArray`  
  
## Requirements  
 **Header:** afxcoll.h  
  
## See Also  
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CObArray Class](../VS_visualcpp/CObArray-Class.md)