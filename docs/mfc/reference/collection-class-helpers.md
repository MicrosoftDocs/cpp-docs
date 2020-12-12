---
description: "Learn more about: Collection Class Helpers"
title: "Collection Class Helpers"
ms.date: "11/04/2016"
helpviewer_keywords: ["DestructElements function", "ConstructElements function", "SerializeElements function", "collection classes [MFC], helper functions", "helper functions collection class [MFC]"]
ms.assetid: bc3a2368-9edd-4748-9e6a-13cba79517ca
---
# Collection Class Helpers

The collection classes `CMap`, `CList`, and `CArray` use templated global helper functions for such purposes as comparing, copying, and serializing elements. As part of your implementation of classes based on `CMap`, `CList`, and `CArray`, you must override these functions as necessary with versions tailored to the type of data stored in your map, list, or array. For information on overriding helper functions such as `SerializeElements`, see the article [Collections: How to Make a Type-Safe Collection](../../mfc/how-to-make-a-type-safe-collection.md). Note that `ConstructElements` and `DestructElements` have been deprecated.

The Microsoft Foundation Class Library provides the following global functions in afxtempl.h to help you customize your collection classes:

### Collection Class Helpers

|Name|Description|
|-|-|
|[CompareElements](#compareelements)|Indicates whether elements are the same.|
|[CopyElements](#copyelements)|Copies elements from one array to another.|
|[DumpElements](#dumpelements)|Provides stream-oriented diagnostic output.|
|[HashKey](#hashkey)|Calculates a hash key.|
|[SerializeElements](#serializeelements)|Stores or retrieves elements to or from an archive.|

## <a name="compareelements"></a> CompareElements

Called directly by [CList::Find](clist-class.md#not_found.md#clist__find and indirectly by [cmap__lookup](cmap-class.md#lookup) and [cmap__operator &#91;&#93;](cmap-class.md#operator_at).

```
template<class TYPE, class ARG_TYPE>
BOOL AFXAPI
CompareElements(
    const TYPE* pElement1,
    const ARG_TYPE* pElement2);
```

### Parameters

*TYPE*<br/>
The type of the first element to be compared.

*pElement1*<br/>
Pointer to the first element to be compared.

*ARG_TYPE*<br/>
The type of the second element to be compared.

*pElement2*<br/>
Pointer to the second element to be compared.

### Return Value

Nonzero if the object pointed to by *pElement1* is equal to the object pointed to by *pElement2*; otherwise 0.

### Remarks

The `CMap` calls use the `CMap` template parameters *KEY* and *ARG_KEY*.

The default implementation returns the result of the comparison of *\*pElement1* and *\*pElement2*. Override this function so that it compares the elements in a way that is appropriate for your application.

The C++ language defines the comparison operator ( `==`) for simple types (**`char`**, **`int`**, **`float`**, and so on) but does not define a comparison operator for classes and structures. If you want to use `CompareElements` or to instantiate one of the collection classes that uses it, you must either define the comparison operator or overload `CompareElements` with a version that returns appropriate values.

### Requirements

   **Header:** afxtempl.h

## <a name="copyelements"></a> CopyElements

This function is called directly by [CArray::Append](carray-class.md#append) and [CArray::Copy](carray-class.md#copy).

```
template<class TYPE>
void AFXAPI CopyElements(
    TYPE* pDest,
    const TYPE* pSrc,
    INT_PTR nCount);
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of elements to be copied.

*pDest*<br/>
Pointer to the destination where the elements will be copied.

*pSrc*<br/>
Pointer to the source of the elements to be copied.

*nCount*<br/>
Number of elements to be copied.

### Remarks

The default implementation uses the simple assignment operator ( **=** ) to perform the copy operation. If the type being copied does not have an overloaded operator=, then the default implementation performs a bitwise copy.

For information on implementing this and other helper functions, see the article [Collections: How to Make a Type-Safe Collection](../how-to-make-a-type-safe-collection.md).

### Requirements

  **Header** afxtempl.h

## <a name="dumpelements"></a> DumpElements

Provides stream-oriented diagnostic output in text form for the elements of your collection when overridden.

```
template<class TYPE>
void  AFXAPI DumpElements(
    CDumpContext& dc,
    const TYPE* pElements,
    INT_PTR nCount);
```

### Parameters

*dc*<br/>
Dump context for dumping elements.

*TYPE*<br/>
Template parameter specifying the type of the elements.

*pElements*<br/>
Pointer to the elements to be dumped.

*nCount*<br/>
Number of elements to be dumped.

### Remarks

The `CArray::Dump`, `CList::Dump`, and `CMap::Dump` functions call this if the depth of the dump is greater than 0.

The default implementation does nothing. If the elements of your collection are derived from `CObject`, your override will typically iterate through the collection's elements, calling `Dump` for each element in turn.

### Requirements

  **Header** afxtempl.h

## <a name="hashkey"></a> HashKey

Calculates a hash value for the given key.

```
template<class ARG_KEY>
AFX_INLINE UINT AFXAPI HashKey(ARG_KEY  key);
```

### Parameters

*ARG_KEY*<br/>
Template parameter specifying the data type used to access map keys.

*key*<br/>
The key whose hash value is to be calculated.

### Return Value

The key's hash value.

### Remarks

This function is called directly by [CMap::RemoveKey](cmap-class.md#removekey) and indirectly by [CMap::Lookup](cmap-class.md#lookup) and [CMap::Operator &#91;&#93;](cmap-class.md#operator_at).

The default implementation creates a hash value by shifting *key* right by four positions. Override this function so that it returns hash values appropriate for your application.

### Example

```cpp
template <> UINT AFXAPI HashKey(unsigned __int64 key)
{
   // Generate the hash value by XORing the lower 32 bits of the number
   // with the upper 32 bits
   return(UINT(key) ^ UINT(key >> 32));
}
```

### Requirements

  **Header** afxtempl.h

## <a name="serializeelements"></a> SerializeElements

[CArray](carray-class.md), [CList](clist-class.md), and [CMap](cmap-class.md) call this function to serialize elements.

```
template<class TYPE>
void AFXAPI SerializeElements(CArchive& ar, TYPE* pElements, INT_PTR nCount);
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of the elements.

*ar*<br/>
An archive object to archive to or from.

*pElements*<br/>
Pointer to the elements being archived.

*nCount*<br/>
Number of elements being archived

### Remarks

The default implementation does a bitwise read or write.

For information on implementing this and other helper functions, see the article [Collections: How to Make a Type-Safe Collection](../how-to-make-a-type-safe-collection.md).

### Example

See the example in the article [Collections: How to Make a Type-Safe Collection](../how-to-make-a-type-safe-collection.md).

### Requirements

  **Header** afxtempl.h

## See also

[Macros and Globals](mfc-macros-and-globals.md)<br/>
[CMap Class](cmap-class.md)<br/>
[CList Class](clist-class.md)<br/>
[CArray Class](carray-class.md)
