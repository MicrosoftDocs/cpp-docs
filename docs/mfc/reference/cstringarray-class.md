---
title: "CStringArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CStringArray", "AFXCOLL/CStringArray", "AFXCOLL/CObArray::CObArray", "AFXCOLL/CObArray::Add", "AFXCOLL/CObArray::Append", "AFXCOLL/CObArray::Copy", "AFXCOLL/CObArray::ElementAt", "AFXCOLL/CObArray::FreeExtra", "AFXCOLL/CObArray::GetAt", "AFXCOLL/CObArray::GetCount", "AFXCOLL/CObArray::GetData", "AFXCOLL/CObArray::GetSize", "AFXCOLL/CObArray::GetUpperBound", "AFXCOLL/CObArray::InsertAt", "AFXCOLL/CObArray::IsEmpty", "AFXCOLL/CObArray::RemoveAll", "AFXCOLL/CObArray::RemoveAt", "AFXCOLL/CObArray::SetAt", "AFXCOLL/CObArray::SetAtGrow", "AFXCOLL/CObArray::SetSize"]
dev_langs: ["C++"]
helpviewer_keywords: ["CObArray [MFC], CObArray", "CObArray [MFC], Add", "CObArray [MFC], Append", "CObArray [MFC], Copy", "CObArray [MFC], ElementAt", "CObArray [MFC], FreeExtra", "CObArray [MFC], GetAt", "CObArray [MFC], GetCount", "CObArray [MFC], GetData", "CObArray [MFC], GetSize", "CObArray [MFC], GetUpperBound", "CObArray [MFC], InsertAt", "CObArray [MFC], IsEmpty", "CObArray [MFC], RemoveAll", "CObArray [MFC], RemoveAt", "CObArray [MFC], SetAt", "CObArray [MFC], SetAtGrow", "CObArray [MFC], SetSize"]
ms.assetid: 6c637e06-bba8-4c08-b0fc-cf8cb067ce34
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CStringArray Class
Supports arrays of [CString](../../atl-mfc-shared/using-cstring.md) objects.  
  
## Syntax  
  
```  
class CStringArray : public CObject  
```  
  
## Members  
 The member functions of `CStringArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a return value, substitute a [CString](../../atl-mfc-shared/using-cstring.md) object (not a [CString](../../atl-mfc-shared/using-cstring.md) pointer). Wherever you see a `CObject` pointer as a function parameter, substitute a `LPCTSTR`.  
  
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
|[CObArray::CObArray](../../mfc/reference/cobarray-class.md#cobarray)|Constructs an empty array.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::Add](../../mfc/reference/cobarray-class.md#add)|Adds an element to the end of the array; grows the array if necessary.|  
|[CObArray::Append](../../mfc/reference/cobarray-class.md#append)|Appends another array to the array; grows the array if necessary.|  
|[CObArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copies another array to the array; grows the array if necessary.|  
|[CObArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Returns a temporary reference to the element pointer within the array.|  
|[CObArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Frees all unused memory above the current upper bound.|  
|[CObArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Returns the value at a given index.|  
|[CObArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Gets the number of elements in this array.|  
|[CObArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Allows access to elements in the array. Can be **NULL**.|  
|[CObArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Gets the number of elements in this array.|  
|[CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Returns the largest valid index.|  
|[CObArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserts an element (or all the elements in another array) at a specified index.|  
|[CObArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determines if the array is empty.|  
|[CObArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Removes all the elements from this array.|  
|[CObArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Removes an element at a specific index.|  
|[CObArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Sets the value for a given index; array not allowed to grow.|  
|[CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Sets the value for a given index; grows the array if necessary.|  
|[CObArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Sets the number of elements to be contained in this array.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::operator [ ]](../../mfc/reference/cobarray-class.md#operator_at)|Sets or gets the element at the specified index.|  
  
## Remarks  
 `CStringArray` incorporates the IMPLEMENT_SERIAL macro to support serialization and dumping of its elements. If an array of `CString` objects is stored to an archive, either with an overloaded insertion operator or with the `Serialize` member function, each element is serialized in turn.  
  
> [!NOTE]
>  Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 If you need a dump of individual string elements in the array, you must set the depth of the dump context to 1 or greater.  
  
 When a `CString` array is deleted, or when its elements are removed, string memory is freed as appropriate.  
  
 For more information on using `CStringArray`, see the article [Collections](../../mfc/collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CStringArray`  
  
## Requirements  
 **Header:** afxcoll.h  
  
## See Also  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



