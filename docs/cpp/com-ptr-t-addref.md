---
description: "Learn more about: _com_ptr_t::AddRef"
title: "_com_ptr_t::AddRef"
ms.date: "11/04/2016"
f1_keywords: ["_com_ptr_t::AddRef"]
helpviewer_keywords: ["AddRef method [C++], interface pointers"]
ms.assetid: c104dac3-aad3-40bb-a298-75c6cd0e63a2
---
# _com_ptr_t::AddRef

**Microsoft Specific**

Calls the `AddRef` member function of `IUnknown` on the encapsulated interface pointer.

## Syntax

```cpp
void AddRef( );
```

## Remarks

Calls `IUnknown::AddRef` on the encapsulated interface pointer, raising an `E_POINTER` error if the pointer is NULL.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)
