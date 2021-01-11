---
description: "Learn more about: CStringElementTraitsI Class"
title: "CStringElementTraitsI Class"
ms.date: "11/04/2016"
f1_keywords: ["CStringElementTraitsI", "ATLCOLL/ATL::CStringElementTraitsI", "ATLCOLL/ATL::CStringElementTraitsI::INARGTYPE", "ATLCOLL/ATL::CStringElementTraitsI::OUTARGTYPE", "ATLCOLL/ATL::CStringElementTraitsI::CompareElements", "ATLCOLL/ATL::CStringElementTraitsI::CompareElementsOrdered", "ATLCOLL/ATL::CStringElementTraitsI::Hash"]
helpviewer_keywords: ["CStringElementTraitsI class"]
ms.assetid: c23f92b1-91e5-400f-96ed-258b02622b7a
---
# CStringElementTraitsI Class

This class provides static functions related to strings stored in collection class objects. It is similar to [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), but performs case-insensitive comparisons.

## Syntax

```
template <typename T, class CharTraits = CDefaultCharTraits<T ::XCHAR>>
class CStringElementTraitsI : public CElementTraitsBase<T>
```

#### Parameters

*T*<br/>
The type of data to be stored in the collection.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CStringElementTraitsI::INARGTYPE](#inargtype)|The data type to use for adding elements to the collection class object.|
|[CStringElementTraitsI::OUTARGTYPE](#outargtype)|The data type to use for retrieving elements from the collection class object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStringElementTraitsI::CompareElements](#compareelements)|Call this static function to compare two string elements for equality, ignoring differences in case.|
|[CStringElementTraitsI::CompareElementsOrdered](#compareelementsordered)|Call this static function to compare two string elements, ignoring differences in case.|
|[CStringElementTraitsI::Hash](#hash)|Call this static function to calculate a hash value for the given string element.|

## Remarks

This class provides static functions for comparing strings and for creating a hash value. These functions are useful when using a collection class to store string-based data. Use [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) when the string objects are to be with dealt with as references.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringElementTraitsI`

## Requirements

**Header:** atlcoll.h

## <a name="compareelements"></a> CStringElementTraitsI::CompareElements

Call this static function to compare two string elements for equality, ignoring differences in case.

```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2) throw();
```

### Parameters

*str1*<br/>
The first string element.

*str2*<br/>
The second string element.

### Return Value

Returns true if the elements are equal, false otherwise.

### Remarks

Comparisons are case insensitive.

## <a name="compareelementsordered"></a> CStringElementTraitsI::CompareElementsOrdered

Call this static function to compare two string elements, ignoring differences in case.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2) throw();
```

### Parameters

*str1*<br/>
The first string element.

*str2*<br/>
The second string element.

### Return Value

Zero if the strings are identical, < 0 if *str1* is less than *str2*, or > 0 if *str1* is greater than *str2*. The [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) method is used to perform the comparisons.

### Remarks

Comparisons are case insensitive.

## <a name="hash"></a> CStringElementTraitsI::Hash

Call this static function to calculate a hash value for the given string element.

```
static ULONG Hash(INARGTYPE str) throw();
```

### Parameters

*str*<br/>
The string element.

### Return Value

Returns a hash value, calculated using the string's contents.

## <a name="inargtype"></a> CStringElementTraitsI::INARGTYPE

The data type to use for adding elements to the collection class object.

```
typedef T::PCXSTR INARGTYPE;
```

## <a name="outargtype"></a> CStringElementTraitsI::OUTARGTYPE

The data type to use for retrieving elements from the collection class object.

```
typedef T& OUTARGTYPE;
```

## See also

[CElementTraitsBase Class](../../atl/reference/celementtraitsbase-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[CStringElementTraits Class](../../atl/reference/cstringelementtraits-class.md)
