---
description: "Learn more about: _variant_t::Attach"
title: "_variant_t::Attach"
ms.date: "11/04/2016"
f1_keywords: ["_variant_t::Attach", "_variant_t.Attach"]
helpviewer_keywords: ["Attach method [C++]", "VARIANT object [C++], attach", "VARIANT object"]
ms.assetid: 2f02bd08-2306-4477-aa88-d2a5dee2b859
---
# _variant_t::Attach

**Microsoft Specific**

Attaches a `VARIANT` object into the **_variant_t** object.

## Syntax

```cpp
void Attach(VARIANT& varSrc);
```

#### Parameters

*varSrc*<br/>
A `VARIANT` object to be attached to this **_variant_t** object.

## Remarks

Takes ownership of the `VARIANT` by encapsulating it. This member function releases any existing encapsulated `VARIANT`, then copies the supplied `VARIANT`, and sets its `VARTYPE` to VT_EMPTY to make sure its resources can only be released by the **_variant_t** destructor.

**END Microsoft Specific**

## See also

[_variant_t Class](../cpp/variant-t-class.md)
