---
title: "CArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArray class"
  - "arrays [C++], classes"
  - "templates, collection classes"
  - "collection classes, template-based"
ms.assetid: fead8b00-4cfd-4625-ad0e-251df62ba92f
caps.latest.revision: 33
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
# CArray Class
Supports arrays that are like C arrays, but can dynamically reduce and grow as necessary.  
  
## Syntax  
  
```  
template <class TYPE, class ARG_TYPE = const TYPE&>  
class CArray :  
    public CObject  
```  
  
#### Parameters  
 `TYPE`  
 Template parameter that specifies the type of objects stored in the array. `TYPE` is a parameter that is returned by `CArray`.  
  
 `ARG` *_* `TYPE`  
 Template parameter that specifies the argument type that is used to access objects stored in the array. Often a reference to `TYPE`. `ARG_TYPE` is a parameter that is passed to `CArray`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CArray::CArray](#carray__carray)|Constructs an empty array.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CArray::Add](#carray__add)|Adds an element to the end of the array; grows the array if necessary.|  
|[CArray::Append](#carray__append)|Appends another array to the array; grows the array if necessary|  
|[CArray::Copy](#carray__copy)|Copies another array to the array; grows the array if necessary.|  
|[CArray::ElementAt](#carray__elementat)|Returns a temporary reference to the element pointer within the array.|  
|[CArray::FreeExtra](#carray__freeextra)|Frees all unused memory above the current upper bound.|  
|[CArray::GetAt](#carray__getat)|Returns the value at a given index.|  
|[CArray::GetCount](#carray__getcount)|Gets the number of elements in this array.|  
|[CArray::GetData](#carray__getdata)|Allows access to elements in the array. Can be **NULL**.|  
|[CArray::GetSize](#carray__getsize)|Gets the number of elements in this array.|  
|[CArray::GetUpperBound](#carray__getupperbound)|Returns the largest valid index.|  
|[CArray::InsertAt](#carray__insertat)|Inserts an element (or all the elements in another array) at a specified index.|  
|[CArray::IsEmpty](#carray__isempty)|Determines whether the array is empty.|  
|[CArray::RemoveAll](#carray__removeall)|Removes all the elements from this array.|  
|[CArray::RemoveAt](#carray__removeat)|Removes an element at a specific index.|  
|[CArray::SetAt](#carray__setat)|Sets the value for a given index; array not allowed to grow.|  
|[CArray::SetAtGrow](#carray__setatgrow)|Sets the value for a given index; grows the array if necessary.|  
|[CArray::SetSize](#carray__setsize)|Sets the number of elements to be contained in this array.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator&#91;&#93;](#carray__operator_at)|Sets or gets the element at the specified index.|  
  
## Remarks  
 Array indexes always start at position 0. You can decide whether to fix the upper bound or enable the array to expand when you add elements past the current bound. Memory is allocated contiguously to the upper bound, even if some elements are null.  
  
> [!NOTE]
>  Most methods that resize a `CArray` object or add elements to it use [memcpy_s](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md) to move elements. This is a problem because `memcpy_s` is not compatible with any objects that require the constructor to be called. If the items in the `CArray` are not compatible with `memcpy_s`, you must create a new `CArray` of the appropriate size. You must then use [CArray::Copy](#carray__copy) and [CArray::SetAt](#carray__setat) to populate the new array because those methods use an assignment operator instead of `memcpy_s`.  
  
 As with a C array, the access time for a `CArray` indexed element is constant and is independent of the array size.  
  
> [!TIP]
>  Before using an array, use [SetSize](#carray__setsize) to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 If you need a dump of individual elements in an array, you must set the depth of the [CDumpContext](../../mfc/reference/cdumpcontext-class.md) object to 1 or larger.  
  
 Certain member functions of this class call global helper functions that must be customized for most uses of the `CArray` class. See the topic [Collection Class Helpers](../../mfc/reference/collection-class-helpers.md) in the MFC Macros and Globals section.  
  
 Array class derivation is like list derivation.  
  
 For more information about how to use `CArray`, see the article [Collections](../../mfc/collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CArray`  
  
## Requirements  
 `Header:` afxtempl.h  
  
##  <a name="carray__add"></a>  CArray::Add  
 Adds a new element to the end of an array, growing the array by 1.  
  
```  
INT_PTR Add(ARG_TYPE newElement);
```  
  
### Parameters  
 `ARG_TYPE`  
 Template parameter specifying the type of arguments referencing elements in this array.  
  
 `newElement`  
 The element to be added to this array.  
  
### Return Value  
 The index of the added element.  
  
### Remarks  
 If [SetSize](#carray__setsize) has been used with an `nGrowBy` value greater than 1, then extra memory may be allocated. However, the upper bound will increase by only 1.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#22](../../mfc/codesnippet/cpp/carray-class_1.cpp)]  
  
##  <a name="carray__append"></a>  CArray::Append  
 Call this member function to add the contents of one array to the end of another.  
  
```  
INT_PTR Append(const CArray& src);
```  
  
### Parameters  
 *src*  
 Source of the elements to be appended to an array.  
  
### Return Value  
 The index of the first appended element.  
  
### Remarks  
 The arrays must be of the same type.  
  
 If necessary, **Append** may allocate extra memory to accommodate the elements appended to the array.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#23](../../mfc/codesnippet/cpp/carray-class_2.cpp)]  
  
##  <a name="carray__carray"></a>  CArray::CArray  
 Constructs an empty array.  
  
```  
CArray();
```  
  
### Remarks  
 The array grows one element at a time.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#24](../../mfc/codesnippet/cpp/carray-class_3.cpp)]  
  
##  <a name="carray__copy"></a>  CArray::Copy  
 Use this member function to copy the elements of one array to another.  
  
```  
void Copy(const CArray& src);
```  
  
### Parameters  
 *src*  
 Source of the elements to be copied to an array.  
  
### Remarks  
 Call this member function to overwrite the elements of one array with the elements of another array.  
  
 **Copy** does not free memory; however, if necessary, **Copy** may allocate extra memory to accommodate the elements copied to the array.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#25](../../mfc/codesnippet/cpp/carray-class_4.cpp)]  
  
##  <a name="carray__elementat"></a>  CArray::ElementAt  
 Returns a temporary reference to the specified element within the array.  
  
```  
TYPE& ElementAt(INT_PTR nIndex);

 
const TYPE& ElementAt(INT_PTR nIndex) const;

 
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#carray__getupperbound).  
  
### Return Value  
 A reference to an array element.  
  
### Remarks  
 It is used to implement the left-side assignment operator for arrays.  
  
### Example  
  See the example for [GetSize](#carray__getsize).  
  
##  <a name="carray__freeextra"></a>  CArray::FreeExtra  
 Frees any extra memory that was allocated while the array was grown.  
  
```  
void FreeExtra();
```  
  
### Remarks  
 This function has no effect on the size or upper bound of the array.  
  
### Example  
  See the example for [GetData](#carray__getdata).  
  
##  <a name="carray__getat"></a>  CArray::GetAt  
 Returns the array element at the specified index.  
  
```  
TYPE& GetAt(INT_PTR nIndex);

 
const TYPE& GetAt(INT_PTR nIndex) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of the array elements.  
  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#carray__getupperbound).  
  
### Return Value  
 The array element currently at this index.  
  
### Remarks  
 Passing a negative value or a value greater than the value returned by `GetUpperBound` will result in a failed assertion.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#26](../../mfc/codesnippet/cpp/carray-class_5.cpp)]  
  
##  <a name="carray__getcount"></a>  CArray::GetCount  
 Returns the number of array elements.  
  
```  
INT_PTR GetCount() const;

 
```  
  
### Return Value  
 The number of items in the array.  
  
### Remarks  
 Call this method to retrieve the number of elements in the array. Because indexes are zero-based, the size is 1 greater than the largest index. Calling this method will generate the same result as the [CArray::GetSize](#carray__getsize) method.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#27](../../mfc/codesnippet/cpp/carray-class_6.cpp)]  
  
##  <a name="carray__getdata"></a>  CArray::GetData  
 Use this member function to gain direct access to the elements in an array.  
  
```  
const TYPE* GetData() const;

 
 
TYPE* GetData();
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of the array elements.  
  
### Return Value  
 A pointer to an array element.  
  
### Remarks  
 If no elements are available, `GetData` returns a null value.  
  
 While direct access to the elements of an array can help you work more quickly, use caution when calling `GetData`; any errors you make directly affect the elements of your array.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#28](../../mfc/codesnippet/cpp/carray-class_7.cpp)]  
  
##  <a name="carray__getsize"></a>  CArray::GetSize  
 Returns the size of the array.  
  
```  
INT_PTR GetSize() const;

 
```  
  
### Remarks  
 Because indexes are zero-based, the size is 1 greater than the largest index. Calling this method will generate the same result as the [CArray::GetCount](#carray__getcount) method.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#29](../../mfc/codesnippet/cpp/carray-class_8.cpp)]  
  
##  <a name="carray__getupperbound"></a>  CArray::GetUpperBound  
 Returns the current upper bound of this array.  
  
```  
INT_PTR GetUpperBound() const;

 
```  
  
### Remarks  
 Because array indexes are zero-based, this function returns a value 1 less than `GetSize`.  
  
 The condition **GetUpperBound( )** = –1 indicates that the array contains no elements.  
  
### Example  
  See the example for [CArray::GetAt](#carray__getat).  
  
##  <a name="carray__insertat"></a>  CArray::InsertAt  
 The first version of `InsertAt` inserts one element (or multiple copies of an element) at a specified index in an array.  
  
```  
void InsertAt(
    INT_PTR nIndex,
    ARG_TYPE newElement,  
    INT_PTR nCount = 1);

 
void InsertAt(
    INT_PTR nStartIndex,  
    CArray* pNewArray);
```  
  
### Parameters  
 `nIndex`  
 An integer index that may be greater than the value returned by `GetUpperBound`.  
  
 `ARG_TYPE`  
 Template parameter specifying the type of elements in this array.  
  
 `newElement`  
 The element to be placed in this array.  
  
 `nCount`  
 The number of times this element should be inserted (defaults to 1).  
  
 `nStartIndex`  
 An integer index that may be greater than the value returned by [GetUpperBound](#carray__getupperbound).  
  
 `pNewArray`  
 Another array that contains elements to be added to this array.  
  
### Remarks  
 In the process, it shifts up (by incrementing the index) the existing element at this index, and it shifts up all the elements above it.  
  
 The second version inserts all the elements from another `CArray` collection, starting at the `nStartIndex` position.  
  
 The `SetAt` function, in contrast, replaces one specified array element and does not shift any elements.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#30](../../mfc/codesnippet/cpp/carray-class_9.cpp)]  
  
##  <a name="carray__isempty"></a>  CArray::IsEmpty  
 Determines whether the array is empty.  
  
```  
BOOL IsEmpty() const;

 
```  
  
### Return Value  
 Nonzero if the array contains no elements; otherwise 0.  
  
##  <a name="carray__operator_at"></a>  CArray::operator \[\]  
 These subscript operators are a convenient substitute for the [SetAt](#carray__setat) and [GetAt](#carray__getat) functions.  
  
```  
TYPE& operator[](int_ptr nindex);

 
const TYPE& operator[](int_ptr nindex) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements in this array.  
  
 `nIndex`  
 Index of the element to be accessed.  
  
### Remarks  
 The first operator, called for arrays that are not **const**, may be used on either the right (r-value) or the left (l-value) of an assignment statement. The second, called for **const** arrays, may be used only on the right.  
  
 The Debug version of the library asserts if the subscript (either on the left or right side of an assignment statement) is out of bounds.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#34](../../mfc/codesnippet/cpp/carray-class_10.cpp)]  
  
##  <a name="carray__relocateelements"></a>  CArray::RelocateElements  
 Relocates data to a new buffer when the array should grow or shrink.  
  
```  
template<class TYPE, class ARG_TYPE>  
AFX_INLINE void CArray<TYPE, ARG_TYPE>::RelocateElements(
    TYPE* pNewData,  
    const TYPE* pData,  
    INT_PTR nCount);
```  
  
### Parameters  
 `pNewData`  
 A new buffer for the array of elements.  
  
 `pData`  
 The old array of elements.  
  
 `nCount`  
 Number of elements in the old array.  
  
### Remarks  
 `pNewData` is always large enough to hold all the `pData` elements.  
  
 The [CArray](../../mfc/reference/carray-class.md) implementation uses this method to copy the old data to a new buffer when the array should grow or shrink (when [SetSize](#carray__setsize) or [FreeExtra](#carray__freeextra) are called). The default implementation just copies the data.  
  
 For arrays in which an element contains a pointer to one of its own members, or another structure contains a pointer to one of the array elements, the pointers are not updated in plain copy. In this case, you can correct pointers by implementing a specialization of `RelocateElements` with the relevant types. You are also responsible for data copying.  
  
##  <a name="carray__removeall"></a>  CArray::RemoveAll  
 Removes all the elements from this array.  
  
```  
void RemoveAll();
```  
  
### Remarks  
 If the array is already empty, the function still works.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#31](../../mfc/codesnippet/cpp/carray-class_11.cpp)]  
  
##  <a name="carray__removeat"></a>  CArray::RemoveAt  
 Removes one or more elements starting at a specified index in an array.  
  
```  
void RemoveAt(
    INT_PTR nIndex,  
    INT_PTR nCount = 1);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#carray__getupperbound).  
  
 `nCount`  
 The number of elements to remove.  
  
### Remarks  
 In the process, it shifts down all the elements above the removed element(s). It decrements the upper bound of the array but does not free memory.  
  
 If you try to remove more elements than are contained in the array above the removal point, then the Debug version of the library asserts.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#32](../../mfc/codesnippet/cpp/carray-class_12.cpp)]  
  
##  <a name="carray__setat"></a>  CArray::SetAt  
 Sets the array element at the specified index.  
  
```  
void SetAt(
    INT_PTR nIndex, ARG_TYPE newElement);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#carray__getupperbound).  
  
 `ARG_TYPE`  
 Template parameter specifying the type of arguments used for referencing array elements.  
  
 `newElement`  
 The new element value to be stored at the specified position.  
  
### Remarks  
 `SetAt` will not cause the array to grow. Use [SetAtGrow](#carray__setatgrow) if you want the array to grow automatically.  
  
 You must ensure that your index value represents a valid position in the array. If it is out of bounds, then the Debug version of the library asserts.  
  
### Example  
  See the example for [GetAt](#carray__getat).  
  
##  <a name="carray__setatgrow"></a>  CArray::SetAtGrow  
 Sets the array element at the specified index.  
  
```  
void SetAtGrow(
    INT_PTR nIndex, ARG_TYPE newElement);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0.  
  
 `ARG_TYPE`  
 Template parameter specifying the type of elements in the array.  
  
 `newElement`  
 The element to be added to this array. A **NULL** value is allowed.  
  
### Remarks  
 The array grows automatically if necessary (that is, the upper bound is adjusted to accommodate the new element).  
  
### Example  
 [!code-cpp[NVC_MFCCollections#33](../../mfc/codesnippet/cpp/carray-class_13.cpp)]  
  
##  <a name="carray__setsize"></a>  CArray::SetSize  
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
 If the new size is smaller than the old size, then the array is truncated and all unused memory is released.  
  
 Use this function to set the size of your array before you begin using the array. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 The `nGrowBy` parameter affects internal memory allocation while the array is growing. Its use never affects the array size as reported by [GetSize](#carray__getsize) and [GetUpperBound](#carray__getupperbound). If the default value is used, MFC allocates memory in a way calculated to avoid memory fragmentation and optimize efficiency for most cases.  
  
### Example  
  See the example for [GetData](#carray__getdata).  
  
## See Also  
 [MFC Sample COLLECT](../../visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CObArray Class](../../mfc/reference/cobarray-class.md)   
 [Collection Class Helpers](../../mfc/reference/collection-class-helpers.md)
