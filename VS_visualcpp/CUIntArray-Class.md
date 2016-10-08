---
title: "CUIntArray Class"
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
ms.assetid: d71f3d8f-ef9f-4e48-9b69-7782c0e2ddf7
caps.latest.revision: 19
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
# CUIntArray Class
Supports arrays of unsigned integers.  
  
## Syntax  
  
```  
class CUIntArray : public CObject  
```  
  
## Members  
 The member functions of `CUIntArray` are similar to the member functions of class [CObArray](../VS_visualcpp/CObArray-Class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a **UINT**.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 for example, translates to  
  
 `UINT CUIntArray::GetAt( int <nIndex> ) const;`  
  
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
|[CObArray::GetData](../VS_visualcpp/CObArray-Class.md#cobarray__getdata)|Allows access to elements in the array. Can be **NULL**.|  
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
 An unsigned integer, or **UINT**, differs from words and doublewords in that the physical size of a **UINT** can change depending on the target operating environment. A **UINT** is the same size as a doubleword.  
  
 `CUIntArray` incorporates the [IMPLEMENT_DYNAMIC](../Topic/IMPLEMENT_DYNAMIC.md) macro to support run-time type access and dumping to a [CDumpContext](../VS_visualcpp/CDumpContext-Class.md) object. If you need a dump of individual unsigned integer elements, you must set the depth of the dump context to 1 or greater. Unsigned integer arrays cannot be serialized.  
  
> [!NOTE]
>  Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 For more information on using `CUIntArray`, see the article [Collections](../VS_visualcpp/Collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 `CUIntArray`  
  
## Requirements  
 **Header:** afxcoll.h  
  
## See Also  
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)