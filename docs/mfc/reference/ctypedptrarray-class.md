---
title: "CTypedPtrArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTypedPtrArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointer arrays"
  - "CTypedPtrArray class"
ms.assetid: e3ecdf1a-a889-4156-92dd-ddbd36ccd919
caps.latest.revision: 22
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
# CTypedPtrArray Class
Provides a type-safe "wrapper" for objects of class `CPtrArray` or `CObArray`.  
  
## Syntax  
  
```  
 
template<class BASE_CLASS, class TYPE>  
class CTypedPtrArray : public BASE_CLASS  
```  
  
#### Parameters  
 `BASE_CLASS`  
 Base class of the typed pointer array class; must be an array class ( `CObArray` or `CPtrArray`).  
  
 `TYPE`  
 Type of the elements stored in the base-class array.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTypedPtrArray::Add](#ctypedptrarray__add)|Adds a new element to the end of an array. Grows the array if necessary|  
|[CTypedPtrArray::Append](#ctypedptrarray__append)|Adds the contents of one array to the end of another. Grows the array if necessary|  
|[CTypedPtrArray::Copy](#ctypedptrarray__copy)|Copies another array to the array; grows the array if necessary.|  
|[CTypedPtrArray::ElementAt](#ctypedptrarray__elementat)|Returns a temporary reference to the element pointer within the array.|  
|[CTypedPtrArray::GetAt](#ctypedptrarray__getat)|Returns the value at a given index.|  
|[CTypedPtrArray::InsertAt](#ctypedptrarray__insertat)|Inserts an element (or all the elements in another array) at a specified index.|  
|[CTypedPtrArray::SetAt](#ctypedptrarray__setat)|Sets the value for a given index; array not allowed to grow.|  
|[CTypedPtrArray::SetAtGrow](#ctypedptrarray__setatgrow)|Sets the value for a given index; grows the array if necessary.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CTypedPtrArray::operator [ ]](#ctypedptrarray__operator_at)|Sets or gets the element at the specified index.|  
  
## Remarks  
 When you use `CTypedPtrArray` rather than `CPtrArray` or `CObArray`, the C++ type-checking facility helps eliminate errors caused by mismatched pointer types.  
  
 In addition, the `CTypedPtrArray` wrapper performs much of the casting that would be required if you used `CObArray` or `CPtrArray`.  
  
 Because all `CTypedPtrArray` functions are inline, use of this template does not significantly affect the size or speed of your code.  
  
 For more information on using `CTypedPtrArray`, see the articles [Collections](../../mfc/collections.md) and [Template-Based Classes](../../mfc/template-based-classes.md).  
  
## Inheritance Hierarchy  
 `BASE_CLASS`  
  
 `CTypedPtrArray`  
  
## Requirements  
 **Header:** afxtempl.h  
  
##  <a name="ctypedptrarray__add"></a>  CTypedPtrArray::Add  
 This member function calls `BASE_CLASS`**::Add**.  
  
```  
INT_PTR Add(TYPE newElement);
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of element to be added to the array.  
  
 `newElement`  
 The element to be added to this array.  
  
### Return Value  
 The index of the added element.  
  
### Remarks  
 For more detailed remarks, see [CObArray::Add](../../mfc/reference/cobarray-class.md#cobarray__add).  
  
##  <a name="ctypedptrarray__append"></a>  CTypedPtrArray::Append  
 This member function calls `BASE_CLASS`**::Append**.  
  
```  
INT_PTR Append(
    const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```  
  
### Parameters  
 `BASE_CLASS`  
 Base class of the typed pointer array class; must be an array class ( [CObArray](../../mfc/reference/cobarray-class.md) or [CPtrArray](../../mfc/reference/cptrarray-class.md)).  
  
 *TYPE*  
 Type of the elements stored in the base-class array.  
  
 *src*  
 Source of the elements to be appended to an array.  
  
### Return Value  
 The index of the first appended element.  
  
### Remarks  
 For more detailed remarks, see [CObArray::Append](../../mfc/reference/cobarray-class.md#cobarray__append).  
  
##  <a name="ctypedptrarray__copy"></a>  CTypedPtrArray::Copy  
 This member function calls `BASE_CLASS`**::Copy**.  
  
```  
void Copy(
    const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```  
  
### Parameters  
 `BASE_CLASS`  
 Base class of the typed pointer array class; must be an array class ( [CObArray](../../mfc/reference/cobarray-class.md) or [CPtrArray](../../mfc/reference/cptrarray-class.md)).  
  
 *TYPE*  
 Type of the elements stored in the base-class array.  
  
 *src*  
 Source of the elements to be copied to an array.  
  
### Remarks  
 For more detailed remarks, see [CObArray::Copy](../../mfc/reference/cobarray-class.md#cobarray__copy).  
  
##  <a name="ctypedptrarray__elementat"></a>  CTypedPtrArray::ElementAt  
 This inline function calls `BASE_CLASS`**::ElementAt**.  
  
```  
TYPE& ElementAt(INT_PTR nIndex);
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in this array.  
  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by `BASE_CLASS`**::GetUpperBound**.  
  
### Return Value  
 A temporary reference to the element at the location specified by `nIndex`. This element is of the type specified by the template parameter *TYPE*.  
  
### Remarks  
 For more detailed remarks, see [CObArray::ElementAt](../../mfc/reference/cobarray-class.md#cobarray__elementat).  
  
##  <a name="ctypedptrarray__getat"></a>  CTypedPtrArray::GetAt  
 This inline function calls `BASE_CLASS`**::GetAt**.  
  
```  
TYPE GetAt(INT_PTR nIndex) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in the array.  
  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by `BASE_CLASS`**::GetUpperBound**.  
  
### Return Value  
 A copy of the element at the location specified by `nIndex`. This element is of the type specified by the template parameter *TYPE*.  
  
### Remarks  
 For more detailed remarks, see [CObArray::GetAt](../../mfc/reference/cobarray-class.md#cobarray__getat)  
  
##  <a name="ctypedptrarray__insertat"></a>  CTypedPtrArray::InsertAt  
 This member function calls `BASE_CLASS`**::InsertAt**.  
  
```  
void InsertAt(
    INT_PTR nIndex,  
    TYPE newElement,  
    INT_PTR nCount = 1);

 
void InsertAt(
    INT_PTR nStartIndex,  
    CTypedPtrArray<BASE_CLASS, TYPE>* pNewArray);
```  
  
### Parameters  
 `nIndex`  
 An integer index that may be greater than the value returned by [CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#cobarray__getupperbound).  
  
 *TYPE*  
 Type of the elements stored in the base-class array.  
  
 `newElement`  
 The object pointer to be placed in this array. A `newElement` of value **NULL** is allowed.  
  
 `nCount`  
 The number of times this element should be inserted (defaults to 1).  
  
 `nStartIndex`  
 An integer index that may be greater than the value returned by `CObArray::GetUpperBound`.  
  
 `BASE_CLASS`  
 Base class of the typed pointer array class; must be an array class ( [CObArray](../../mfc/reference/cobarray-class.md) or [CPtrArray](../../mfc/reference/cptrarray-class.md)).  
  
 `pNewArray`  
 Another array that contains elements to be added to this array.  
  
### Remarks  
 For more detailed remarks, see [CObArray::InsertAt](../../mfc/reference/cobarray-class.md#cobarray__insertat).  
  
##  <a name="ctypedptrarray__operator_at"></a>  CTypedPtrArray::operator [ ]  
 These inline operators call `BASE_CLASS`**::operator [ ]**.  
  
```  
TYPE& operator[ ](int_ptr nindex);

 
TYPE operator[ ](int_ptr nindex) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in the array.  
  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by `BASE_CLASS`**::GetUpperBound**.  
  
### Remarks  
 The first operator, called for arrays that are not **const**, can be used on either the right (r-value) or the left (l-value) of an assignment statement. The second, invoked for **const** arrays, can be used only on the right.  
  
 The Debug version of the library asserts if the subscript (either on the left or right side of an assignment statement) is out of bounds.  
  
##  <a name="ctypedptrarray__setat"></a>  CTypedPtrArray::SetAt  
 This member function calls `BASE_CLASS`**::SetAt**.  
  
```  
void SetAt(
    INT_PTR nIndex,  
    TYPE ptr);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0 and less than or equal to the value returned by [CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#cobarray__getupperbound).  
  
 *TYPE*  
 Type of the elements stored in the base-class array.  
  
 *ptr*  
 A pointer to the element to be inserted in the array at the nIndex. A NULL value is allowed.  
  
### Remarks  
 For more detailed remarks, see [CObArray::SetAt](../../mfc/reference/cobarray-class.md#cobarray__setat).  
  
##  <a name="ctypedptrarray__setatgrow"></a>  CTypedPtrArray::SetAtGrow  
 This member function calls `BASE_CLASS`**::SetAtGrow**.  
  
```  
void SetAtGrow(
    INT_PTR nIndex,  
    TYPE newElement);
```  
  
### Parameters  
 `nIndex`  
 An integer index that is greater than or equal to 0.  
  
 *TYPE*  
 Type of the elements stored in the base-class array.  
  
 `newElement`  
 The object pointer to be added to this array. A **NULL** value is allowed.  
  
### Remarks  
 For more detailed remarks, see [CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#cobarray__setatgrow).  
  
## See Also  
 [MFC Sample COLLECT](../../visual-cpp-samples.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CPtrArray Class](../../mfc/reference/cptrarray-class.md)   
 [CObArray Class](../../mfc/reference/cobarray-class.md)
