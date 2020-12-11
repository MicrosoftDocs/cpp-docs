---
description: "Learn more about: CComHeapPtr Class"
title: "CComHeapPtr Class"
ms.date: "11/04/2016"
f1_keywords: ["CComHeapPtr", "ATLBASE/ATL::CComHeapPtr", "ATLBASE/ATL::CComHeapPtr::CComHeapPtr"]
helpviewer_keywords: ["CComHeapPtr class"]
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
---
# CComHeapPtr Class

A smart pointer class for managing heap pointers.

## Syntax

```
template<typename T>
class CComHeapPtr : public CHeapPtr<T, CComAllocator>
```

#### Parameters

*T*<br/>
The object type to be stored on the heap.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComHeapPtr::CComHeapPtr](#ccomheapptr)|The constructor.|

## Remarks

`CComHeapPtr` derives from `CHeapPtr`, but uses [CComAllocator](../../atl/reference/ccomallocator-class.md) to allocate memory using COM routines. See [CHeapPtr](../../atl/reference/cheapptr-class.md) and [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) for the methods available.

## Inheritance Hierarchy

[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)

[CHeapPtr](../../atl/reference/cheapptr-class.md)

`CComHeapPtr`

## Requirements

**Header:** atlbase.h

## <a name="ccomheapptr"></a> CComHeapPtr::CComHeapPtr

The constructor.

```
CComHeapPtr() throw();
explicit CComHeapPtr(T* pData) throw();
```

### Parameters

*pData*<br/>
An existing `CComHeapPtr` object.

### Remarks

The heap pointer can optionally be created using an existing `CComHeapPtr` object. If so, the new `CComHeapPtr` object assumes responsibility for managing the new pointer and resources.

## See also

[CHeapPtr Class](../../atl/reference/cheapptr-class.md)<br/>
[CHeapPtrBase Class](../../atl/reference/cheapptrbase-class.md)<br/>
[CComAllocator Class](../../atl/reference/ccomallocator-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
