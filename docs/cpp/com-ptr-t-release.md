---
description: "Learn more about: _com_ptr_t::Release"
title: "_com_ptr_t::Release"
ms.date: "11/04/2016"
f1_keywords: ["_com_ptr_t.Release", "_com_ptr_t::Release"]
helpviewer_keywords: ["Release method [C++]"]
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
---
# _com_ptr_t::Release

**Microsoft Specific**

Calls the **Release** member function of `IUnknown` on the encapsulated interface pointer.

## Syntax

```cpp
void Release( );
```

## Remarks

Calls `IUnknown::Release` on the encapsulated interface pointer, raising an `E_POINTER` error if this interface pointer is NULL.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)
