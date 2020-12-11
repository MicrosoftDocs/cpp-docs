---
description: "Learn more about: _variant_t::ChangeType"
title: "_variant_t::ChangeType"
ms.date: "11/04/2016"
f1_keywords: ["_variant_t::ChangeType", "_variant_t.ChangeType"]
helpviewer_keywords: ["ChangeType method [C++]", "VARIANT object [C++], ChangeType", "VARIANT object"]
ms.assetid: 829d2eeb-3338-4a88-9dce-0ca145f47aac
---
# _variant_t::ChangeType

**Microsoft Specific**

Changes the type of the `_variant_t` object to the indicated `VARTYPE`.

## Syntax

```cpp
void ChangeType(
   VARTYPE vartype,
   const _variant_t* pSrc = NULL
);
```

#### Parameters

*vartype*<br/>
The `VARTYPE` for this `_variant_t` object.

*pSrc*<br/>
A pointer to the `_variant_t` object to be converted. If this value is NULL, conversion is done in place.

## Remarks

This member function converts a `_variant_t` object into the indicated `VARTYPE`. If *pSrc* is NULL, the conversion is done in place, otherwise this `_variant_t` object is copied from *pSrc* and then converted.

**END Microsoft Specific**

## See also

[_variant_t Class](../cpp/variant-t-class.md)
