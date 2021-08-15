---
description: "Learn more about: CHeapPtrList Class"
title: "CHeapPtrList Class"
ms.date: "11/04/2016"
f1_keywords: ["CHeapPtrList", "ATLCOLL/ATL::CHeapPtrList", "ATLCOLL/ATL::CHeapPtrList::CHeapPtrList"]
helpviewer_keywords: ["CHeapPtrList class"]
ms.assetid: cc70e585-362a-4007-81db-c705eb181226
---
# CHeapPtrList Class

This class provides methods useful when constructing a list of heap pointers.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<typename E, class Allocator = ATL::CCRTAllocator>
class CHeapPtrList
   : public CAtlList<ATL::CHeapPtr<E, Allocator>,
                     CHeapPtrElementTraits<E, Allocator>>
```

#### Parameters

*E*<br/>
The object type to be stored in the collection class.

*Allocator*<br/>
The memory allocation class to use. The default is [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CHeapPtrList::CHeapPtrList](#cheapptrlist)|The constructor.|

## Remarks

This class provides a constructor and derives methods from [CAtlList](../../atl/reference/catllist-class.md) and [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md) to aid the creation of a collection class object storing heap pointers.

## Inheritance Hierarchy

[CAtlList](../../atl/reference/catllist-class.md)

`CHeapPtrList`

## Requirements

**Header:** atlcoll.h

## <a name="cheapptrlist"></a> CHeapPtrList::CHeapPtrList

The constructor.

```
CHeapPtrList(UINT nBlockSize = 10) throw();
```

### Parameters

*nBlockSize*<br/>
The block size.

### Remarks

The block size is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources.

## See also

[CAtlList Class](../../atl/reference/catllist-class.md)<br/>
[CHeapPtr Class](../../atl/reference/cheapptr-class.md)<br/>
[CHeapPtrElementTraits Class](../../atl/reference/cheapptrelementtraits-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
