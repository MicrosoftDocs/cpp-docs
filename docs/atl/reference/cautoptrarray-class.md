---
title: "CAutoPtrArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAutoPtrArray", "ATLCOLL/ATL::CAutoPtrArray", "ATLCOLL/ATL::CAutoPtrArray::CAutoPtrArray"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAutoPtrArray class"]
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAutoPtrArray Class

This class provides methods useful when constructing an array of smart pointers.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <typename E>
class CAutoPtrArray : public CAtlArray<
                        ATL::CAutoPtr<E>,
                        CAutoPtrElementTraits<E>>
```

#### Parameters

`E`  
The pointer type.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAutoPtrArray::CAutoPtrArray](#cautoptrarray)|The constructor.|

## Remarks

This class provides a constructor and derives methods from [CAtlArray](../../atl/reference/catlarray-class.md) and [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) to aid the creation of a collection class object storing smart pointers.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

`CAtlArray`

`CAutoPtrArray`

## Requirements

**Header:** atlcoll.h

##  <a name="cautoptrarray"></a>  CAutoPtrArray::CAutoPtrArray

The constructor.

```
CAutoPtrArray() throw();
```

### Remarks

Initializes the smart pointer array.

## See Also

[CAtlArray Class](../../atl/reference/catlarray-class.md)   
[CAutoPtrElementTraits Class](../../atl/reference/cautoptrelementtraits-class.md)   
[CAutoPtrList Class](../../atl/reference/cautoptrlist-class.md)   
[Class Overview](../../atl/atl-class-overview.md)
