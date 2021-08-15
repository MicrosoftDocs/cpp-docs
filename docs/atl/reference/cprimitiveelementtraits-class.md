---
description: "Learn more about: CPrimitiveElementTraits Class"
title: "CPrimitiveElementTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CPrimitiveElementTraits", "ATLCOLL/ATL::CPrimitiveElementTraits", "ATLCOLL/ATL::CPrimitiveElementTraits::INARGTYPE", "ATLCOLL/ATL::CPrimitiveElementTraits::OUTARGTYPE"]
helpviewer_keywords: ["CPrimitiveElementTraits class"]
ms.assetid: 21c1cea8-2c5a-486c-b65c-85490f3ed4e6
---
# CPrimitiveElementTraits Class

This class provides default methods and functions for a collection class composed of primitive data types.

## Syntax

```
template <typename T>
class CPrimitiveElementTraits : public CDefaultElementTraits<T>
```

#### Parameters

*T*<br/>
The type of data to be stored in the collection class object.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CPrimitiveElementTraits::INARGTYPE](#inargtype)|The data type to use for adding elements to the collection class object.|
|[CPrimitiveElementTraits::OUTARGTYPE](#outargtype)|The data type to use for retrieving elements from the collection class object.|

## Remarks

This class provides default static functions and methods for moving, copying, comparing, and hashing primitive data type elements stored in a collection class object.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CPrimitiveElementTraits`

## Requirements

**Header:** atlcoll.h

## <a name="inargtype"></a> CPrimitiveElementTraits::INARGTYPE

The data type to use for adding elements to the collection class object.

```
typedef T INARGTYPE;
```

## <a name="outargtype"></a> CPrimitiveElementTraits::OUTARGTYPE

The data type to use for retrieving elements from the collection class object.

```
typedef T& OUTARGTYPE;
```

## See also

[CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
