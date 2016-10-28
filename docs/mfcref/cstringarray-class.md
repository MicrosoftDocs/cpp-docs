---
title: "CStringArray Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CStringArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "string arrays"
  - "arrays [C++], strings"
  - "CStringArray class"
  - "strings [C++], collections"
ms.assetid: 6c637e06-bba8-4c08-b0fc-cf8cb067ce34
caps.latest.revision: 20
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
# CStringArray Class
Supports arrays of [CString](../atl/using-cstring.md) objects.  
  
## Syntax  
  
```  
class CStringArray : public CObject  
```  
  
## Members  
 The member functions of `CStringArray` are similar to the member functions of class [CObArray](../mfcref/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a return value, substitute a [CString](../atl/using-cstring.md) object (not a [CString](../atl/using-cstring.md) pointer). Wherever you see a `CObject` pointer as a function parameter, substitute a `LPCTSTR`.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 for example, translates to  
  
 `CString CStringArray::GetAt( int <nIndex> ) const;`  
  
 and  
  
 `void SetAt( int <nIndex>, CObject* <newElement> )`  
  
 translates to  
  
 `void SetAt( int <nIndex>, LPCTSTR <newElement> )`  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::CObArray](../mfcref/cobarray-class.md#cobarray__cobarray)|Constructs an empty array.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::Add](../mfcref/cobarray-class.md#cobarray__add)|Adds an element to the end of the array; grows the array if necessary.|  
|[CObArray::Append](../mfcref/cobarray-class.md#cobarray__append)|Appends another array to the array; grows the array if necessary.|  
|[CObArray::Copy](../mfcref/cobarray-class.md#cobarray__copy)|Copies another array to the array; grows the array if necessary.|  
|[CObArray::ElementAt](../mfcref/cobarray-class.md#cobarray__elementat)|Returns a temporary reference to the element pointer within the array.|  
|[CObArray::FreeExtra](../mfcref/cobarray-class.md#cobarray__freeextra)|Frees all unused memory above the current upper bound.|  
|[CObArray::GetAt](../mfcref/cobarray-class.md#cobarray__getat)|Returns the value at a given index.|  
|[CObArray::GetCount](../mfcref/cobarray-class.md#cobarray__getcount)|Gets the number of elements in this array.|  
|[CObArray::GetData](../mfcref/cobarray-class.md#cobarray__getdata)|Allows access to elements in the array. Can be **NULL**.|  
|[CObArray::GetSize](../mfcref/cobarray-class.md#cobarray__getsize)|Gets the number of elements in this array.|  
|[CObArray::GetUpperBound](../mfcref/cobarray-class.md#cobarray__getupperbound)|Returns the largest valid index.|  
|[CObArray::InsertAt](../mfcref/cobarray-class.md#cobarray__insertat)|Inserts an element (or all the elements in another array) at a specified index.|  
|[CObArray::IsEmpty](../mfcref/cobarray-class.md#cobarray__isempty)|Determines if the array is empty.|  
|[CObArray::RemoveAll](../mfcref/cobarray-class.md#cobarray__removeall)|Removes all the elements from this array.|  
|[CObArray::RemoveAt](../mfcref/cobarray-class.md#cobarray__removeat)|Removes an element at a specific index.|  
|[CObArray::SetAt](../mfcref/cobarray-class.md#cobarray__setat)|Sets the value for a given index; array not allowed to grow.|  
|[CObArray::SetAtGrow](../mfcref/cobarray-class.md#cobarray__setatgrow)|Sets the value for a given index; grows the array if necessary.|  
|[CObArray::SetSize](../mfcref/cobarray-class.md#cobarray__setsize)|Sets the number of elements to be contained in this array.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::operator [ ]](../mfcref/cobarray-class.md#cobarray__operator_at)|Sets or gets the element at the specified index.|  
  
## Remarks  
 `CStringArray` incorporates the `IMPLEMENT_SERIAL` macro to support serialization and dumping of its elements. If an array of `CString` objects is stored to an archive, either with an overloaded insertion operator or with the `Serialize` member function, each element is serialized in turn.  
  
> [!NOTE]
>  Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 If you need a dump of individual string elements in the array, you must set the depth of the dump context to 1 or greater.  
  
 When a `CString` array is deleted, or when its elements are removed, string memory is freed as appropriate.  
  
 For more information on using `CStringArray`, see the article [Collections](../mfc/collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 `CStringArray`  
  
## Requirements  
 **Header:** afxcoll.h  
  
## See Also  
 [CObject Class](../mfcref/cobject-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)