---
description: "Learn more about: _variant_t::Detach"
title: "_variant_t::Detach"
ms.date: "11/04/2016"
f1_keywords: ["_variant_t::Detach", "_variant_t.Detach"]
helpviewer_keywords: ["VARIANT object [C++], detatch", "Detach method [C++]", "VARIANT object"]
ms.assetid: c348ac08-62cf-4657-a16f-974a79c12158
---
# _variant_t::Detach

**Microsoft Specific**

Detaches the encapsulated `VARIANT` object from this `_variant_t` object.

## Syntax

```
VARIANT Detach( );
```

## Return Value

The encapsulated `VARIANT`.

## Remarks

Extracts and returns the encapsulated `VARIANT`, then clears this `_variant_t` object without destroying it. This member function removes the `VARIANT` from encapsulation and sets the `VARTYPE` of this `_variant_t` object to VT_EMPTY. It is up to you to release the returned `VARIANT` by calling the [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear) function.

**END Microsoft Specific**

## See also

[_variant_t Class](../cpp/variant-t-class.md)
