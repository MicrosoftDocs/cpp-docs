---
title: "CObArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CObArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "arrays [C++], pointers"
  - "CObArray class"
  - "arrays [C++], Object type"
  - "object arrays, CObArray class"
ms.assetid: 27894efd-2370-4776-9ed9-24a98492af17
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
# CObArray Class
Supports arrays of `CObject` pointers.  
  
## Syntax  
  
```  
class CObArray : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::CObArray](#cobarray__cobarray)|Constructs an empty array for `CObject` pointers.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::Add](#cobarray__add)|Adds an element to the end of the array; grows the array if necessary.|  
|[CObArray::Append](#cobarray__append)|Appends another array to the array; grows the array if necessary.|  
|[CObArray::Copy](#cobarray__copy)|Copies another array to the array; grows the array if necessary.|  
|[CObArray::ElementAt](#cobarray__elementat)|Returns a temporary reference to the element pointer within the array.|  
|[CObArray::FreeExtra](#cobarray__freeextra)|Frees all unused memory above the current upper bound.|  
|[CObArray::GetAt](#cobarray__getat)|Returns the value at a given index.|  
|[CObArray::GetCount](#cobarray__getcount)|Gets the number of elements in this array.|  
|[CObArray::GetData](#cobarray__getdata)|Allows access to elements in the array. Can be **NULL**.|  
|[CObArray::GetSize](#cobarray__getsize)|Gets the number of elements in this array.|  
|[CObArray::GetUpperBound](#cobarray__getupperbound)|Returns the largest valid index.|  
|[CObArray::InsertAt](#cobarray__insertat)|Inserts an element (or all the elements in another array) at a specified index.|  
|[CObArray::IsEmpty](#cobarray__isempty)|Determines if the array is empty.|  
|[CObArray::RemoveAll](#cobarray__removeall)|Removes all the elements from this array.|  
|[CObArray::RemoveAt](#cobarray__removeat)|Removes an element at a specific index.|  
|[CObArray::SetAt](#cobarray__setat)|Sets the value for a given index; array not allowed to grow.|  
|[CObArray::SetAtGrow](#cobarray__setatgrow)|Sets the value for a given index; grows the array if necessary.|  
|[CObArray::SetSize](#cobarray__setsize)|Sets the number of elements to be contained in this array.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::operator [ ]](#cobarray__operator_at)|Sets or gets the element at the specified index.|  
  
## Remarks  
 These object arrays are similar to C arrays, but they can dynamically shrink and grow as necessary.  
  
 Array indexes always start at position 0. You can decide whether to fix the upper bound or allow the array to expand when you add elements past the current bound. Memory is allocated contiguously to the upper bound, even if some elements are null.  
  
 Under Win32, the size of a `CObArray` object is limited only to available memory.  
  
 As with a C array, the access time for a `CObArray` indexed element is constant and is independent of the array size.  
  
 `CObArray` incorporates the `IMPLEMENT_SERIAL` macro to support serialization and dumping of its elements. If an array of `CObject` pointers is stored to an archive, either with the overloaded insertion operator or with the `Serialize` member function, each `CObject` element is, in turn, serialized along with its array index.  
  
 If you need a dump of individual `CObject` elements in an array, you must set the depth of the `CDumpContext` object to 1 or greater.  
  
 When a `CObArray` object is deleted, or when its elements are removed, only the `CObject` pointers are removed, not the objects they reference.  
  
> [!NOTE]
>  Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 Array class derivation is similar to list derivation. For details on the derivation of a special-purpose list class, see the article [Collections](../../mfc/collections.md).  
  
> [!NOTE]
>  You must use the `IMPLEMENT_SERIAL` macro in the implementation of your derived class if you intend to serialize the array.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CObArray`  
  
## Requirements  
 **Header:** afxcoll.h  
  
##  <a name="cobarray__add"></a>  CObArray::Add  
 Adds a new element to the end of an array, growing the array by 1.  
  
```  
INT_PTR Add(CObject* newElement);
```  
  
### Parameters  
 `newElement`  
 The `CObject` pointer to be added to this array.  
  
### Return Value  
 The index of the added element.  
  
### Remarks  
 If [SetSize](#cobarray__setsize) has been used with an `nGrowBy` value greater than 1, then extra memory may be allocated. However, the upper bound will increase by only 1.  
  
 The following table shows other member functions that are similar to `CObArray::Add`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR Add( BYTE** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR Add( DWORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR Add( void\*** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR Add( LPCTSTR** `newElement` **); throw( CMemoryException\* );**<br /><br /> **INT_PTR Add(const CString&** `newElement` **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR Add( UINT** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR Add( WORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
  
### Example  
  See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#75](../../mfc/codesnippet/cpp/cobarray-class_1.cpp)]  
  
 The results from this program are as follows:  
  
 `Add example: A CObArray with 2 elements`  
  
 `[0] = a CAge at $442A 21`  
  
 `[1] = a CAge at $4468 40`  
  
##  <a name="cobarray__append"></a>  CObArray::Append  
 Call this member function to add the contents of another array to the end of the given array.  
  
```  
INT_PTR Append(const CObArray& src);
```  
  
### Parameters  
 *src*  
 Source of the elements to be appended to the array.  
  
### Return Value  
 The index of the first appended element.  
  
### Remarks  
 The arrays must be of the same type.  
  
 If necessary, **Append** may allocate extra memory to accommodate the elements appended to the array.  
  
 The following table shows other member functions that are similar to `CObArray::Append`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR Append( const CByteArray&** *src* **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR Append( const CDWordArray&** *src* **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR Append( const CPtrArray&** *src* **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR Append( const CStringArray&** *src* **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR Append( const CUIntArray&** *src* **);**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR Append( const CWordArray&** *src* **);**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#76](../../mfc/codesnippet/cpp/cobarray-class_2.cpp)]  
  
##  <a name="cobarray__copy"></a>  CObArray::Copy  
 Call this member function to overwrite the elements of the given array with the elements of another array of the same type.  
  
```  
void Copy(const CObArray& src);
```  
  
### Parameters  
 *src*  
 Source of the elements to be copied to the array.  
  
### Remarks  
 **Copy** does not free memory; however, if necessary, **Copy** may allocate extra memory to accommodate the elements copied to the array.  
  
 The following table shows other member functions that are similar to `CObArray::Copy`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void Copy( const CByteArray&** *src* **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void Copy( const CDWordArray&** *src* **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void Copy( const CPtrArray&** *src* **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void Copy( const CStringArray&** *src* **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void Copy( const CUIntArray&** *src* **);**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void Copy( const CWordArray&** *src* **);**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#77](../../mfc/codesnippet/cpp/cobarray-class_3.cpp)]  
  
##  <a name="cobarray__cobarray"></a>  CObArray::CObArray  
 Constructs an empty `CObject` pointer array.  
  
```  
CObArray();
```  
  
### Remarks  
 The array grows one element at a time.  
  
 The following table shows other constructors that are similar to `CObArray::CObArray`.  
  
|Class|Constructor|  
|-----------|-----------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**CByteArray( );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**CDWordArray( );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**CPtrArray( );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CStringArray( );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**CUIntArray( );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**CWordArray( );**|  
  
### Example  
 [!code-cpp[NVC_MFCCollections#78](../../mfc/codesnippet/cpp/cobarray-class_4.cpp)]  
  
##  <a name="cobarray__elementat"></a>  CObArray::ElementAt  
 Returns a temporary reference to the element pointer within the array.  
  
```  
CObject*& ElementAt(INT_PTR nIndex);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by `GetUpperBound`.  
  
### Return Value  
 A reference to a `CObject` pointer.  
  
### Remarks  
 It is used to implement the left-side assignment operator for arrays. Note that this is an advanced function that should be used only to implement special array operators.  
  
 The following table shows other member functions that are similar to `CObArray::ElementAt`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE& ElementAt( INT_PTR** `nIndex` **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD& ElementAt( INT_PTR** `nIndex` **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\*& ElementAt( INT_PTR** `nIndex` **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString& ElementAt( INT_PTR** `nIndex` **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT& ElementAt( INT_PTR** `nIndex` **);**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD& ElementAt( INT_PTR** `nIndex` **);**|  
  
### Example  
  See the example for [CObArray::GetSize](#cobarray__getsize).  
  
##  <a name="cobarray__freeextra"></a>  CObArray::FreeExtra  
 Frees any extra memory that was allocated while the array was grown.  
  
```  
void FreeExtra();
```  
  
### Remarks  
 This function has no effect on the size or upper bound of the array.  
  
 The following table shows other member functions that are similar to `CObArray::FreeExtra`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void FreeExtra( );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void FreeExtra( );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void FreeExtra( );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void FreeExtra( );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void FreeExtra( );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void FreeExtra( );**|  
  
### Example  
  See the example for [CObArray::GetData](#cobarray__getdata).  
  
##  <a name="cobarray__getat"></a>  CObArray::GetAt  
 Returns the array element at the specified index.  
  
```  
CObject* GetAt(INT_PTR nIndex) const;

 
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by `GetUpperBound`.  
  
### Return Value  
 The `CObject` pointer element currently at this index.  
  
### Remarks  
  
> [!NOTE]
>  Passing a negative value or a value greater than the value returned by `GetUpperBound` will result in a failed assertion.  
  
 The following table shows other member functions that are similar to `CObArray::GetAt`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE GetAt( INT_PTR** `nIndex` **) const;**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD GetAt( INT_PTR** `nIndex` **) const;**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\* GetAt( INT_PTR** `nIndex` **) const;**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString GetAt( INT_PTR** `nIndex` **) const;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT GetAt( INT_PTR** `nIndex` **) const;**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD GetAt( INT_PTR** `nIndex` **) const;**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#79](../../mfc/codesnippet/cpp/cobarray-class_5.cpp)]  
  
##  <a name="cobarray__getcount"></a>  CObArray::GetCount  
 Returns the number of array elements.  
  
```  
INT_PTR GetCount() const;

 
```  
  
### Return Value  
 The number of items in the array.  
  
### Remarks  
 Call this method to retrieve the number of elements in the array. Because indexes are zero-based, the size is 1 greater than the largest index.  
  
 The following table shows other member functions that are similar to `CObArray::GetCount`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetCount( ) const;**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetCount( ) const;**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetCount( ) const;**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetCount( ) const;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetCount( ) const;**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetCount( ) const;**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#80](../../mfc/codesnippet/cpp/cobarray-class_6.cpp)]  
  
##  <a name="cobarray__getdata"></a>  CObArray::GetData  
 Use this member function to gain direct access to the elements in the array.  
  
```  
const CObject** GetData() const;

 
 
    CObject** GetData();
```  
  
### Return Value  
 A pointer to the array of `CObject` pointers.  
  
### Remarks  
 If no elements are available, `GetData` returns a null value.  
  
 While direct access to the elements of an array can help you work more quickly, use caution when calling `GetData`; any errors you make directly affect the elements of your array.  
  
 The following table shows other member functions that are similar to `CObArray::GetData`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**const BYTE\* GetData( ) const;BYTE\* GetData( );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**const DWORD\* GetData( ) const;DWORD\* GetData( );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**const void\*\* GetData( ) const;void\*\* GetData( );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**const CString\* GetData( ) const;CString\* GetData( );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**const UINT\* GetData( ) const;UINT\* GetData( );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**const WORD\* GetData( ) const;WORD\* GetData( );**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#81](../../mfc/codesnippet/cpp/cobarray-class_7.cpp)]  
  
##  <a name="cobarray__getsize"></a>  CObArray::GetSize  
 Returns the size of the array.  
  
```  
INT_PTR GetSize() const;

 
```  
  
### Remarks  
 Since indexes are zero-based, the size is 1 greater than the largest index.  
  
 The following table shows other member functions that are similar to `CObArray::GetSize`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetSize( ) const;**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetSize( ) const;**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetSize( ) const;**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetSize( ) const;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetSize( ) const;**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetSize( ) const;**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#82](../../mfc/codesnippet/cpp/cobarray-class_8.cpp)]  
  
##  <a name="cobarray__getupperbound"></a>  CObArray::GetUpperBound  
 Returns the current upper bound of this array.  
  
```  
INT_PTR GetUpperBound() const;

 
```  
  
### Return Value  
 The index of the upper bound (zero-based).  
  
### Remarks  
 Because array indexes are zero-based, this function returns a value 1 less than `GetSize`.  
  
 The condition **GetUpperBound( )** = –1 indicates that the array contains no elements.  
  
 The following table shows other member functions that are similar to `CObArray::GetUpperBound`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetUpperBound( ) const;**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetUpperBound( ) const;**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetUpperBound( ) const;**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetUpperBound( ) const;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetUpperBound( ) const;**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetUpperBound( ) const;**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#83](../../mfc/codesnippet/cpp/cobarray-class_9.cpp)]  
  
##  <a name="cobarray__insertat"></a>  CObArray::InsertAt  
 Inserts an element (or all the elements in another array) at a specified index.  
  
```  
void InsertAt(
    INT_PTR nIndex,  
    CObject* newElement,  
    INT_PTR nCount = 1);

 
void InsertAt(
    INT_PTR nStartIndex,  
    CObArray* pNewArray);
```  
  
### Parameters  
 `nIndex`  
 An integer index that may be greater than the value returned by `GetUpperBound`.  
  
 `newElement`  
 The `CObject` pointer to be placed in this array. A `newElement` of value **NULL** is allowed.  
  
 `nCount`  
 The number of times this element should be inserted (defaults to 1).  
  
 `nStartIndex`  
 An integer index that may be greater than the value returned by `GetUpperBound`.  
  
 `pNewArray`  
 Another array that contains elements to be added to this array.  
  
### Remarks  
 The first version of `InsertAt` inserts one element (or multiple copies of an element) at a specified index in an array. In the process, it shifts up (by incrementing the index) the existing element at this index, and it shifts up all the elements above it.  
  
 The second version inserts all the elements from another `CObArray` collection, starting at the `nStartIndex` position.  
  
 The `SetAt` function, in contrast, replaces one specified array element and does not shift any elements.  
  
 The following table shows other member functions that are similar to `CObArray::InsertAt`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, BYTE** `newElement` **, int** `nCount` **= 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CByteArray\*** `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, DWORD** `newElement` **, int** `nCount` **= 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CDWordArray\*** `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, void\*** `newElement` **, int** `nCount` **= 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CPtrArray\*** `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, LPCTSTR** `newElement` **, int** `nCount` **= 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CStringArray\*** `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, UINT** `newElement` **, int** `nCount` **= 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CUIntArray\*** `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, WORD** `newElement` **, int** `nCount` **= 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CWordArray\*** `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|  
  
### Example  
  See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#84](../../mfc/codesnippet/cpp/cobarray-class_10.cpp)]  
  
 The results from this program are as follows:  
  
 `InsertAt example: A CObArray with 3 elements`  
  
 `[0] = a CAge at $45C8 21`  
  
 `[1] = a CAge at $4646 30`  
  
 `[2] = a CAge at $4606 40`  
  
##  <a name="cobarray__isempty"></a>  CObArray::IsEmpty  
 Determines if the array is empty.  
  
```  
BOOL IsEmpty() const;

 
```  
  
### Return Value  
 Nonzero if the array is empty; otherwise 0.  
  
##  <a name="cobarray__operator_at"></a>  CObArray::operator [ ]  
 These subscript operators are a convenient substitute for the `SetAt` and `GetAt` functions.  
  
```  
CObject*& operator[](int_ptr nindex);

 
CObject* operator[](int_ptr nindex) const;

 
```  
  
### Remarks  
 The first operator, called for arrays that are not **const**, may be used on either the right (r-value) or the left (l-value) of an assignment statement. The second, called for **const** arrays, may be used only on the right.  
  
 The Debug version of the library asserts if the subscript (either on the left or right side of an assignment statement) is out of bounds.  
  
 The following table shows other operators that are similar to **CObArray::operator []**.  
  
|Class|Operator|  
|-----------|--------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE& operator [](int_ptr** `nindex` **\);**<br /><br /> **BYTE operator [](int_ptr** `nindex` **\) const;**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD& operator [](int_ptr** `nindex` **\);**<br /><br /> **DWORD operator [](int_ptr** `nindex` **\) const;**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\*& operator [](int_ptr** `nindex` **\);**<br /><br /> **void\* operator [](int_ptr** `nindex` **\) const;**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString& operator [](int_ptr** `nindex` **\);**<br /><br /> **CString operator [](int_ptr** `nindex` **\) const;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT& operator [](int_ptr** `nindex` **\);**<br /><br /> **UINT operator [](int_ptr** `nindex` **\) const;**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD& operator [](int_ptr** `nindex` **\);**<br /><br /> **WORD operator [](int_ptr** `nindex` **\) const;**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#88](../../mfc/codesnippet/cpp/cobarray-class_11.cpp)]  
  
##  <a name="cobarray__removeall"></a>  CObArray::RemoveAll  
 Removes all the pointers from this array but does not actually delete the `CObject` objects.  
  
```  
void RemoveAll();
```  
  
### Remarks  
 If the array is already empty, the function still works.  
  
 The `RemoveAll` function frees all memory used for pointer storage.  
  
 The following table shows other member functions that are similar to `CObArray::RemoveAll`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void RemoveAll( );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void RemoveAll( );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void RemoveAll( );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void RemoveAll( );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void RemoveAll( );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void RemoveAll( );**|  
  
### Example  
 See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#85](../../mfc/codesnippet/cpp/cobarray-class_12.cpp)]  
  
##  <a name="cobarray__removeat"></a>  CObArray::RemoveAt  
 Removes one or more elements starting at a specified index in an array.  
  
```  
void RemoveAt(
    INT_PTR nIndex,  
    INT_PTR nCount = 1);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by `GetUpperBound`.  
  
 `nCount`  
 The number of elements to remove.  
  
### Remarks  
 In the process, it shifts down all the elements above the removed element(s). It decrements the upper bound of the array but does not free memory.  
  
 If you try to remove more elements than are contained in the array above the removal point, then the Debug version of the library asserts.  
  
 The `RemoveAt` function removes the `CObject` pointer from the array, but it does not delete the object itself.  
  
 The following table shows other member functions that are similar to `CObArray::RemoveAt`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1 );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1 );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1 );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1 );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1 );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** *nCount* **= 1 );**|  
  
### Example  
  See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#112](../../mfc/codesnippet/cpp/cobarray-class_13.cpp)]  
  
 The results from this program are as follows:  
  
 `RemoveAt example: A CObArray with 1 elements`  
  
 `[0] = a CAge at $4606 40`  
  
##  <a name="cobarray__setat"></a>  CObArray::SetAt  
 Sets the array element at the specified index.  
  
```  
void SetAt(
    INT_PTR nIndex,  
    CObject* newElement);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by `GetUpperBound`.  
  
 `newElement`  
 The object pointer to be inserted in this array. A **NULL** value is allowed.  
  
### Remarks  
 `SetAt` will not cause the array to grow. Use `SetAtGrow` if you want the array to grow automatically.  
  
 You must ensure that your index value represents a valid position in the array. If it is out of bounds, then the Debug version of the library asserts.  
  
 The following table shows other member functions that are similar to `CObArray::SetAt`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetAt( INT_PTR** `nIndex` **, BYTE** `newElement` **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, DWORD** `newElement` **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, void\*** `newElement` **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, UINT** `newElement` **);**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, WORD** `newElement` **);**|  
  
### Example  
  See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#86](../../mfc/codesnippet/cpp/cobarray-class_14.cpp)]  
  
 The results from this program are as follows:  
  
 `SetAt example: A CObArray with 2 elements`  
  
 `[0] = a CAge at $47E0 30`  
  
 `[1] = a CAge at $47A0 40`  
  
##  <a name="cobarray__setatgrow"></a>  CObArray::SetAtGrow  
 Sets the array element at the specified index.  
  
```  
void SetAtGrow(
    INT_PTR nIndex,  
    CObject* newElement);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0.  
  
 `newElement`  
 The object pointer to be added to this array. A **NULL** value is allowed.  
  
### Remarks  
 The array grows automatically if necessary (that is, the upper bound is adjusted to accommodate the new element).  
  
 The following table shows other member functions that are similar to `CObArray::SetAtGrow`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, BYTE** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, DWORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, void\*** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, UINT** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, WORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|  
  
### Example  
  See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist) for a listing of the `CAge` class used in all collection examples.  
  
 [!code-cpp[NVC_MFCCollections#87](../../mfc/codesnippet/cpp/cobarray-class_15.cpp)]  
  
 The results from this program are as follows:  
  
 `SetAtGrow example: A CObArray with 4 elements`  
  
 `[0] = a CAge at $47C0 21`  
  
 `[1] = a CAge at $4800 40`  
  
 `[2] = NULL`  
  
 `[3] = a CAge at $4840 65`  
  
##  <a name="cobarray__setsize"></a>  CObArray::SetSize  
 Establishes the size of an empty or existing array; allocates memory if necessary.  
  
```  
void SetSize(
    INT_PTR nNewSize,  
    INT_PTR nGrowBy = -1);
```  
  
### Parameters  
 `nNewSize`  
 The new array size (number of elements). Must be greater than or equal to 0.  
  
 `nGrowBy`  
 The minimum number of element slots to allocate if a size increase is necessary.  
  
### Remarks  
 If the new size is smaller than the old size, then the array is truncated and all unused memory is released. For efficiency, call `SetSize` to set the size of the array before using it. This prevents the need to reallocate and copy the array each time an item is added.  
  
 The `nGrowBy` parameter affects internal memory allocation while the array is growing. Its use never affects the array size as reported by `GetSize` and `GetUpperBound`.  
  
 If the size of the array has grown, all newly allocated **CObject \*** pointers are set to NULL.  
  
 The following table shows other member functions that are similar to `CObArray::SetSize`.  
  
|Class|Member Function|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1 );**<br /><br /> **throw( CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1 );**<br /><br /> **throw( CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1 );**<br /><br /> **throw( CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1 );**<br /><br /> **throw( CMemoryException\* );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1 );**<br /><br /> **throw( CMemoryException\* );**|  
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1 );**<br /><br /> **throw( CMemoryException\* );**|  
  
### Example  
  See the example for [CObArray::GetData](#cobarray__getdata).  
  
## See Also  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CStringArray Class](../../mfc/reference/cstringarray-class.md)   
 [CPtrArray Class](../../mfc/reference/cptrarray-class.md)   
 [CByteArray Class](../../mfc/reference/cbytearray-class.md)   
 [CWordArray Class](../../mfc/reference/cwordarray-class.md)   
 [CDWordArray Class](../../mfc/reference/cdwordarray-class.md)
