---
description: "Learn more about: CStringRefElementTraits Class"
title: "CStringRefElementTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CStringRefElementTraits", "ATLCOLL/ATL::CStringRefElementTraits", "ATLCOLL/ATL::CStringRefElementTraits::CompareElements", "ATLCOLL/ATL::CStringRefElementTraits::CompareElementsOrdered", "ATLCOLL/ATL::CStringRefElementTraits::Hash"]
helpviewer_keywords: ["CStringRefElementTraits class"]
ms.assetid: cc15062d-5627-46cc-ac2b-1744afdc2dbd
---
# CStringRefElementTraits Class

This class provides static functions related to strings stored in collection class objects. The string objects are dealt with as references.

## Syntax

```
template <typename T>
class CStringRefElementTraits : public CElementTraitsBase<T>
```

#### Parameters

*T*<br/>
The type of data to be stored in the collection.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStringRefElementTraits::CompareElements](#compareelements)|Call this static function to compare two string elements for equality.|
|[CStringRefElementTraits::CompareElementsOrdered](#compareelementsordered)|Call this static function to compare two string elements.|
|[CStringRefElementTraits::Hash](#hash)|Call this static function to calculate a hash value for the given string element.|

## Remarks

This class provides static functions for comparing strings and for creating a hash value. These functions are useful when using a collection class to store string-based data. Unlike [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md) and [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md), `CStringRefElementTraits` causes the `CString` arguments to be passed as **`const`** `CString&` references.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringRefElementTraits`

## Requirements

**Header:** atlcoll.h

## <a name="compareelements"></a> CStringRefElementTraits::CompareElements

Call this static function to compare two string elements for equality.

```
static bool CompareElements(INARGTYPE element1, INARGTYPE element2) throw();
```

### Parameters

*element1*<br/>
The first string element.

*element2*<br/>
The second string element.

### Return Value

Returns true if the elements are equal, false otherwise.

## <a name="compareelementsordered"></a> CStringRefElementTraits::CompareElementsOrdered

Call this static function to compare two string elements.

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

## <a name="hash"></a> CStringRefElementTraits::Hash

Call this static function to calculate a hash value for the given string element.

```
static ULONG Hash(INARGTYPE str) throw();
```

### Parameters

*str*<br/>
The string element.

### Return Value

Returns a hash value, calculated using the string's contents.

## See also

[CElementTraitsBase Class](../../atl/reference/celementtraitsbase-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
