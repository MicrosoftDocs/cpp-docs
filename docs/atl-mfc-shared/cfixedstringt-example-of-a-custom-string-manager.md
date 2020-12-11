---
description: "Learn more about: CFixedStringT: Example of a Custom String Manager"
title: "CFixedStringT: Example of a Custom String Manager"
ms.date: "11/04/2016"
helpviewer_keywords: ["CFixedStringT class, using a custom string manager"]
ms.assetid: 1cf11fd7-51b8-4b94-87af-02bc25f47dd6
---
# CFixedStringT: Example of a Custom String Manager

The ATL library implements one example of a custom string manager used by class [CFixedStringT](../atl-mfc-shared/reference/cfixedstringt-class.md), called **CFixedStringMgr**. `CFixedStringT` is derived from [CStringT](../atl-mfc-shared/reference/cstringt-class.md) and implements a string that allocates its character data as part of the `CFixedStringT` object itself as long as the string is less than the length specified by the `t_nChars` template parameter of `CFixedStringT`. With this approach, the string does not need the heap at all, unless the length of the string grows beyond the size of the fixed buffer. Because `CFixedStringT` does not always use a heap to allocate its string data, it cannot use `CAtlStringMgr` as its string manager. It uses a custom string manager (`CFixedStringMgr`), implementing the [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) interface. This interface is discussed in [Implementation of a Custom String Manager (Advanced Method)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md).

The constructor for `CFixedStringMgr` takes three parameters:

- *pData:* A pointer to the fixed `CStringData` structure to be used.

- *nChars:* The maximum number of characters the `CStringData` structure can hold.

- *pMgr:* A pointer to the `IAtlStringMgr` interface of a "backup string manager."

The constructor stores the values of *pData* and *pMgr* in their respective member variables (`m_pData` and `m_pMgr`). It then sets the length of the buffer to zero, the available length equal to the maximum size of the fixed buffer, and the reference count to -1. The reference count value indicates the buffer is locked and to use this instance of `CFixedStringMgr` as the string manager.

Marking the buffer as locked prevents other `CStringT` instances from holding a shared reference to the buffer. If other `CStringT` instances were allowed to share the buffer it would be possible for the buffer contained by `CFixedStringT` to be deleted while other strings were still using the buffer.

`CFixedStringMgr` is a full implementation of the `IAtlStringMgr` interface. The implementation of each method is discussed separately.

## Implementation of CFixedStringMgr::Allocate

The implementation of `CFixedStringMgr::Allocate` first checks to see if the requested size of the string is less than or equal to the size of the fixed buffer (stored in the `m_pData` member). If the fixed buffer is large enough, `CFixedStringMgr` locks the fixed buffer with a length of zero. As long as the string length does not grow beyond the size of the fixed buffer, `CStringT` will not have to reallocate the buffer.

If the requested size of the string is greater than the fixed buffer `CFixedStringMgr` forwards the request to the backup string manager. The backup string manager is presumed to allocate the buffer from the heap. However, before returning this buffer `CFixedStringMgr` locks the buffer and replaces the buffer's string manager pointer with a pointer to the `CFixedStringMgr` object. This ensures that attempts to reallocate or free the buffer by `CStringT` will call into `CFixedStringMgr`.

## Implementation of CFixedStringMgr::ReAllocate

The implementation of `CFixedStringMgr::ReAllocate` is very similar to its implementation of `Allocate`.

If the buffer being reallocated is the fixed buffer and the requested buffer size is smaller than the fixed buffer, no allocation is done. However, if the buffer being reallocated is not the fixed buffer, it must be a buffer allocated with the backup manager. In this case the backup manager is used to reallocate the buffer.

If the buffer being reallocated is the fixed buffer and the new buffer size is too large to fit within the fixed buffer, `CFixedStringMgr` allocates a new buffer using the backup manager. The contents of the fixed buffer are then copied into the new buffer.

## Implementation of CFixedStringMgr::Free

The implementation of `CFixedStringMgr::Free` follows the same pattern as `Allocate` and `ReAllocate`. If the buffer being freed is the fixed buffer, the method sets it to a zero-length locked buffer. If the buffer being freed was allocated with the backup manager, `CFixedStringMgr` uses the backup manager to free it.

## Implementation of CFixedStringMgr::Clone

The implementation of `CFixedStringMgr::Clone` always returns a pointer to the backup manager rather than the `CFixedStringMgr` itself. This happens because every instance of `CFixedStringMgr` can only be associated with a single instance of `CStringT`. Any other instances of `CStringT` trying to clone the manager should get the backup manager instead. This is because the backup manager supports being shared.

## Implementation of CFixedStringMgr::GetNilString

The implementation of `CFixedStringMgr::GetNilString` returns the fixed buffer. Because of the one-on-one correspondence of `CFixedStringMgr` and `CStringT`, a given instance of `CStringT` never uses more than one buffer at a time. Therefore, a nil string and a real string buffer are never needed at the same time.

Whenever the fixed buffer is not in use, `CFixedStringMgr` ensures that it is initialized with a zero length. This allows it to be used as the nil string. As an added bonus, the `nAllocLength` member of the fixed buffer is always set to the full size of the fixed buffer. This means that `CStringT` can grow the string without calling [IAtlStringMgr::Reallocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#reallocate), even for the nil string.

## Requirements

**Header:** cstringt.h

## See also

[Memory Management with CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)
