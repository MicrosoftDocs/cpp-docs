---
description: "Learn more about: _variant_t Relational Operators"
title: "_variant_t Relational Operators"
ms.date: "11/04/2016"
f1_keywords: ["_variant_t::operator==", "_variant_t::operator!="]
helpviewer_keywords: ["!= operator", "relational operators [C++], _variant_t class", "operator!= [C++], variant", "operator!= [C++], relational operators", "operator != [C++], variant", "operator == [C++], variant", "operator== [C++], variant", "operator != [C++], relational operators", "== operator [C++], with specific Visual C++ objects"]
ms.assetid: 141bacb8-41a2-44dd-b3c0-4ad1f884f4ea
---
# _variant_t Relational Operators

**Microsoft Specific**

Compare two `_variant_t` objects for equality or inequality.

## Syntax

```
bool operator==(
   const VARIANT& varSrc) const;
bool operator==(
   const VARIANT* pSrc) const;
bool operator!=(
   const VARIANT& varSrc) const;
bool operator!=(
   const VARIANT* pSrc) const;
```

#### Parameters

*varSrc*<br/>
A `VARIANT` to be compared with the `_variant_t` object.

*pSrc*<br/>
Pointer to the `VARIANT` to be compared with the `_variant_t` object.

## Return Value

Returns **`true`** if comparison holds, **`false`** if not.

## Remarks

Compares a `_variant_t` object with a `VARIANT`, testing for equality or inequality.

**END Microsoft Specific**

## See also

[_variant_t Class](../cpp/variant-t-class.md)
