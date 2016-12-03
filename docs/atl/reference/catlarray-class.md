---
title: "CAtlArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAtlArray"
  - "ATL.CAtlArray"
  - "CAtlArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlArray class"
ms.assetid: 0b503aa8-2357-40af-a326-6654bf1da098
caps.latest.revision: 21
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
# CAtlArray Class
This class implements an array object.  
  
## Syntax  
  
```
template<typename E,  class ETraits = CElementTraits<E>>  class CAtlArray
```  
  
#### Parameters  
 *E*  
 The type of data to be stored in the array.  
  
 *ETraits*  
 The code used to copy or move elements.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Add](#catlarray__add)|Call this method to add an element to the array object.|  
|[Append](#catlarray__append)|Call this method to add the contents of one array to the end of another.|  
|[AssertValid](#catlarray__assertvalid)|Call this method to confirm that the array object is valid.|  
|[CAtlArray](#catlarray__catlarray)|The constructor.|  
|[~CAtlArray](#catlarray___dtorcatlarray)|The destructor.|  
|[Copy](#catlarray__copy)|Call this method to copy the elements of one array to another.|  
|[FreeExtra](#catlarray__freeextra)|Call this method to remove any empty elements from the array.|  
|[GetAt](#catlarray__getat)|Call this method to retrieve a single element from the array object.|  
|[GetCount](#catlarray__getcount)|Call this method to return the number of elements stored in the array.|  
|[GetData](#catlarray__getdata)|Call this method to return a pointer to the first element in the array.|  
|[InsertArrayAt](#catlarray__insertarrayat)|Call this method to insert one array into another.|  
|[InsertAt](#catlarray__insertat)|Call this method to insert a new element (or multiple copies of an element) into the array object.|  
|[IsEmpty](#catlarray__isempty)|Call this method to test if the array is empty.|  
|[RemoveAll](#catlarray__removeall)|Call this method to remove all elements from the array object.|  
|[RemoveAt](#catlarray__removeat)|Call this method to remove one or more elements from the array.|  
|[SetAt](#catlarray__setat)|Call this method to set the value of an element in the array object.|  
|[SetAtGrow](#catlarray__setatgrow)|Call this method to set the value of an element in the array object, expanding the array as required.|  
|[SetCount](#catlarray__setcount)|Call this method to set the size of the array object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator &#91;&#93;](#catlarray__operator_at)|Call this operator to return a reference to an element in the array.|  

  
### Typedefs  
  
|||  
|-|-|  
|[INARGTYPE](#catlarray__inargtype)|The data type to use for adding elements to the array.|  
|[OUTARGTYPE](#catlarray__outargtype)|The data type to use for retrieving elements from the array.|  
  
## Remarks  
 **CAtlArray** provides methods for creating and managing an array of elements of a user-defined type. Although similar to standard C arrays, the **CAtlArray** object can dynamically shrink and grow as necessary. The array index always starts at position 0, and the upper bound can be fixed, or allowed to expand as new elements are added.  
  
 For arrays with a small number of elements, the ATL class [CSimpleArray](../../atl/reference/csimplearray-class.md) can be used.  
  
 **CAtlArray** is closely related to MFC's **CArray** class and will work in an MFC project, albeit without serialization support.  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="catlarray__add"></a>  CAtlArray::Add  
 Call this method to add an element to the array object.  
  
```
size_t Add(INARGTYPE element);

    size_t Add();
```  
  
### Parameters  
 `element`  
 The element to be added to the array.  
  
### Return Value  
 Returns the index of the added element.  
  
### Remarks  
 The new element is added to the end of the array. If no element is provided, an empty element is added; that is, the array is increased in size as though a real element has been added. If the operation fails, [AtlThrow](http://msdn.microsoft.com/library/2bd111da-8170-488d-914a-c9bf6b6765f7) is called with the argument E_OUTOFMEMORY.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#1](../../atl/codesnippet/cpp/catlarray-class_1.cpp)]  
  
##  <a name="catlarray__append"></a>  CAtlArray::Append  
 Call this method to add the contents of one array to the end of another.  
  
```
size_t Append(const CAtlArray<E, ETraits>& aSrc);
```  
  
### Parameters  
 `aSrc`  
 The array to append.  
  
### Return Value  
 Returns the index of the first appended element.  
  
### Remarks  
 The elements in the supplied array are added to the end of the existing array. If necessary, memory will be allocated to accommodate the new elements.  
  
 The arrays must be of the same type, and it is not possible to append an array to itself.  
  
 In debug builds, an ATLASSERT will be raised if the `CAtlArray` argument is not a valid array or if `aSrc` refers to the same object. In release builds, invalid arguments may lead to unpredictable behavior.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#2](../../atl/codesnippet/cpp/catlarray-class_2.cpp)]  
  
##  <a name="catlarray__assertvalid"></a>  CAtlArray::AssertValid  
 Call this method to confirm that the array object is valid.  
  
```
void AssertValid() const;
```  
  
### Remarks  
 If the array object is not valid, `ATLASSERT` will throw an assertion. This method is available only if _DEBUG is defined.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#3](../../atl/codesnippet/cpp/catlarray-class_3.cpp)]  
  
##  <a name="catlarray__catlarray"></a>  CAtlArray::CAtlArray  
 The constructor.  
  
```
CAtlArray() throw();
```  
  
### Remarks  
 Initializes the array object.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#4](../../atl/codesnippet/cpp/catlarray-class_4.cpp)]  
  
##  <a name="catlarray___dtorcatlarray"></a>  CAtlArray::~CAtlArray  
 The destructor.  
  
```
~CAtlArray() throw();
```  
  
### Remarks  
 Frees up any resources used by the array object.  
  
##  <a name="catlarray__copy"></a>  CAtlArray::Copy  
 Call this method to copy the elements of one array to another.  
  
```
void Copy(const CAtlArray<E, ETraits>& aSrc);
```  
  
### Parameters  
 `aSrc`  
 The source of the elements to copy to an array.  
  
### Remarks  
 Call this method to overwrite elements of one array with the elements of another array. If necessary, memory will be allocated to accommodate the new elements. It is not possible to copy elements of an array to itself.  
  
 If the existing contents of the array are to be retained, use [CAtlArray::Append](#catlarray__append) instead.  
  
 In debug builds, an ATLASSERT will be raised if the existing `CAtlArray` object is not valid, or if `aSrc` refers to the same object. In release builds, invalid arguments may lead to unpredictable behavior.  
  
> [!NOTE]
> `CAtlArray::Copy` does not support arrays consisting of elements created with the [CAutoPtr](../../atl/reference/cautoptr-class.md) class.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#5](../../atl/codesnippet/cpp/catlarray-class_5.cpp)]  
  
##  <a name="catlarray__freeextra"></a>  CAtlArray::FreeExtra  
 Call this method to remove any empty elements from the array.  
  
```
void FreeExtra() throw();
```  
  
### Remarks  
 Any empty elements are removed, but the size and upper bound of the array remain unchanged.  
  
 In debug builds, an ATLASSERT will be raised if the CAtlArray object is not valid, or if the array would exceed its maximum size.  
  
##  <a name="catlarray__getat"></a>  CAtlArray::GetAt  
 Call this method to retrieves a single element from the array object.  
  
```
const E& GetAt(size_t iElement) const throw();
E& GetAt(size_t iElement) throw();
```  
  
### Parameters  
 `iElement`  
 The index value of the array element to return.  
  
### Return Value  
 Returns a reference to the required array element.  
  
### Remarks  
 In debug builds, an ATLASSERT will be raised if `iElement` exceeds the number of elements in the array. In release builds, an invalid argument may lead to unpredictable behavior.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#6](../../atl/codesnippet/cpp/catlarray-class_6.cpp)]  
  
##  <a name="catlarray__getcount"></a>  CAtlArray::GetCount  
 Call this method to return the number of elements stored in the array.  
  
```
size_t GetCount() const throw();
```  
  
### Return Value  
 Returns the number of elements stored in the array.  
  
### Remarks  
 As the first element in the array is at position 0, the value returned by `GetCount` is always 1 greater than the largest index.  
  
### Example  
 See the example for [CAtlArray::GetAt](#catlarray__getat).  
  
##  <a name="catlarray__getdata"></a>  CAtlArray::GetData  
 Call this method to return a pointer to the first element in the array.  
  
```
E* GetData() throw();

const E* GetData() const throw();
```  
  
### Return Value  
 Returns a pointer to the memory location storing the first element in the array. If no elements are available, NULL is returned.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#7](../../atl/codesnippet/cpp/catlarray-class_7.cpp)]  
  
##  <a name="catlarray__inargtype"></a>  CAtlArray::INARGTYPE  
 The data type to use for adding elements to the array.  
  
```
typedef ETraits::INARGTYPE INARGTYPE;
```  
  
##  <a name="catlarray__insertarrayat"></a>  CAtlArray::InsertArrayAt  
 Call this method to insert one array into another.  
  
```
void InsertArrayAt(size_t iStart,
    const CAtlArray<E,
    ETraits>* paNew);
```  
  
### Parameters  
 `iStart`  
 The index at which the array is to be inserted.  
  
 `paNew`  
 The array to be inserted.  
  
### Remarks  
 Elements from the array `paNew` are copied into the array object, beginning at element `iStart`. The existing array elements are moved to avoid being overwritten.  
  
 In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is not valid, or if the `paNew` pointer is NULL or invalid.  
  
> [!NOTE]
> `CAtlArray::InsertArrayAt` does not support arrays consisting of elements created with the [CAutoPtr](../../atl/reference/cautoptr-class.md) class.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#8](../../atl/codesnippet/cpp/catlarray-class_8.cpp)]  
  
##  <a name="catlarray__insertat"></a>  CAtlArray::InsertAt  
 Call this method to insert a new element (or multiple copies of an element) into the array object.  
  
```
void InsertAt(size_t iElement,
    INARGTYPE element,
    size_t nCount = 1);
```  
  
### Parameters  
 `iElement`  
 The index where the element or elements are to be inserted.  
  
 `element`  
 The value of the element or elements to be inserted.  
  
 `nCount`  
 The number of elements to add.  
  
### Remarks  
 Inserts one or more elements into the array, starting at index `iElement`. Existing elements are moved to avoid being overwritten.  
  
 In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is invalid, the number of elements to be added is zero, or the combined number of elements is too large for the array to contain. In retail builds, passing invalid parameters may cause unpredictable results.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#9](../../atl/codesnippet/cpp/catlarray-class_9.cpp)]  
  
##  <a name="catlarray__isempty"></a>  CAtlArray::IsEmpty  
 Call this method to test if the array is empty.  
  
```
bool IsEmpty() const throw();
```  
  
### Return Value  
 Returns true if the array is empty, false otherwise.  
  
### Remarks  
 The array is said to be empty if it contains no elements. Therefore, even if the array contains empty elements, it is not empty.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#10](../../atl/codesnippet/cpp/catlarray-class_10.cpp)]  
  
##  <a name="catlarray__operator_at"></a>  CAtlArray::operator []  
 Call this operator to return a reference to an element in the array.  
  
```
E& operator[](size_t ielement) throw();

const E& operator[](size_t ielement) const throw();
```  
  
### Parameters  
 `iElement`  
 The index value of the array element to return.  
  
### Return Value  
 Returns a reference to the required array element.  
  
### Remarks  
 Performs a similar function to [CAtlArray::GetAt](#catlarray__getat). Unlike the MFC class [CArray](../../mfc/reference/carray-class.md), this operator cannot be used as a substitute for [CAtlArray::SetAt](#catlarray__setat).  
  
 In debug builds, an ATLASSERT will be raised if `iElement` exceeds the total number of elements in the array. In retail builds, an invalid parameter may cause unpredictable results.  
  
##  <a name="catlarray__outargtype"></a>  CAtlArray::OUTARGTYPE  
 The data type to use for retrieving elements from the array.  
  
```
typedef ETraits::OUTARGTYPE OUTARGTYPE;
```  
  
##  <a name="catlarray__removeall"></a>  CAtlArray::RemoveAll  
 Call this method to remove all elements from the array object.  
  
```
void RemoveAll() throw();
```  
  
### Remarks  
 Removes all of the elements from the array object.  
  
 This method calls [CAtlArray::SetCount](#catlarray__setcount) to resize the array and subsequently frees any allocated memory.  
  
### Example  
 See the example for [CAtlArray::IsEmpty](#catlarray__isempty).  
  
##  <a name="catlarray__removeat"></a>  CAtlArray::RemoveAt  
 Call this method to remove one or more elements from the array.  
  
```
void RemoveAt(size_t iElement,  size_t nCount = 1);
```  
  
### Parameters  
 `iElement`  
 The index of the first element to remove.  
  
 `nCount`  
 The number of elements to remove.  
  
### Remarks  
 Removes one or more elements from the array. Any remaining elements are shifted down. The upper bound is decremented, but memory is not freed until a call to [CAtlArray::FreeExtra](#catlarray__freeextra) is made.  
  
 In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is not valid, or if the combined total of `iElement` and `nCount` exceeds the total number of elements in the array. In retail builds, invalid parameters may cause unpredictable results.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#11](../../atl/codesnippet/cpp/catlarray-class_11.cpp)]  
  
##  <a name="catlarray__setat"></a>  CAtlArray::SetAt  
 Call this method to set the value of an element in the array object.  
  
```
void SetAt(size_t iElement,  INARGTYPE element);
```  
  
### Parameters  
 `iElement`  
 The index pointing to the array element to set.  
  
 `element`  
 The new value of the specified element.  
  
### Remarks  
 In debug builds, an ATLASSERT will be raised if `iElement` exceeds the number of elements in the array. In retail builds, an invalid parameter may result in unpredictable results.  
  
### Example  
 See the example for [CAtlArray::GetAt](#catlarray__getat).  
  
##  <a name="catlarray__setcount"></a>  CAtlArray::SetCount  
 Call this method to set the size of the array object.  
  
```
bool SetCount(size_t nNewSize,  int nGrowBy = - 1);
```  
  
### Parameters  
 `nNewSize`  
 The required size of the array.  
  
 `nGrowBy`  
 A value used to determine how large to make the buffer. A value of -1 causes an internally calculated value to be used.  
  
### Return Value  
 Returns true if the array is successfully resized, false otherwise.  
  
### Remarks  
 The array can be increased or decreased in size. If increased, extra empty elements are added to the array. If decreased, the elements with the largest indices will be deleted and memory freed.  
  
 Use this method to set the size of the array before using it. If `SetCount` is not used, the process of adding elements — and the subsequent memory allocation performed — will reduce performance and fragment memory.  
  
### Example  
 See the example for [CAtlArray::GetData](#catlarray__getdata).  
  
##  <a name="catlarray__setatgrow"></a>  CAtlArray::SetAtGrow  
 Call this method to set the value of an element in the array object, expanding the array as required.  
  
```
void SetAtGrow(size_t iElement,  INARGTYPE element);
```  
  
### Parameters  
 `iElement`  
 The index pointing to the array element to set.  
  
 `element`  
 The new value of the specified element.  
  
### Remarks  
 Replaces the value of the element pointed to by the index. If `iElement` is larger than the current size of the array, the array is automatically increased using a call to [CAtlArray::SetCount](#catlarray__setcount). In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is not valid. In retail builds, invalid parameters may cause unpredictable results.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#12](../../atl/codesnippet/cpp/catlarray-class_12.cpp)]  
  
## See Also  
 [MMXSwarm Sample](../../visual-cpp-samples.md)   
 [DynamicConsumer Sample](../../visual-cpp-samples.md)   
 [UpdatePV Sample](../../visual-cpp-samples.md)   
 [Marquee Sample](../../visual-cpp-samples.md)   
 [CArray Class](../../mfc/reference/carray-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
