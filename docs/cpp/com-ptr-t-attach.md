---
description: "Learn more about: _com_ptr_t::Attach"
title: "_com_ptr_t::Attach"
ms.date: "11/04/2016"
f1_keywords: ["_com_ptr_t::Attach"]
helpviewer_keywords: ["COM interfaces, attach pointer", "Attach method [C++]"]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
---
# _com_ptr_t::Attach

**Microsoft Specific**

Encapsulates a raw interface pointer of this smart pointer's type.

## Syntax

```cpp
void Attach( Interface* pInterface ) throw( );
void Attach( Interface* pInterface, bool fAddRef ) throw( );
```

#### Parameters

*pInterface*<br/>
A raw interface pointer.

*fAddRef*<br/>
If it is **`true`**, then `AddRef` is called. If it is **`false`**, the `_com_ptr_t` object takes ownership of the raw interface pointer without calling `AddRef`.

## Remarks

- **Attach(**  *pInterface*  **)** `AddRef` is not called. The ownership of the interface is passed to this `_com_ptr_t` object. `Release` is called to decrement the reference count for the previously encapsulated pointer.

- **Attach(**  *pInterface* **,**  *fAddRef*  **)** If *fAddRef* is **`true`**, `AddRef` is called to increment the reference count for the encapsulated interface pointer. If *fAddRef* is **`false`**, this `_com_ptr_t` object takes ownership of the raw interface pointer without calling `AddRef`. `Release` is called to decrement the reference count for the previously encapsulated pointer.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)
