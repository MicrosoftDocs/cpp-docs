---
description: "Learn more about: _variant_t Class"
title: "_variant_t Class"
ms.date: "11/04/2016"
f1_keywords: ["_variant_t"]
helpviewer_keywords: ["_variant_t class [C++], operators", "_variant_t class", "_variant_t class [C++], member functions", "VARIANT object", "VARIANT object [C++], COM encapsulation"]
ms.assetid: 6a3cbd4e-0ae8-425e-b4cf-ca0df894c93f
---
# _variant_t Class

**Microsoft Specific**

A **_variant_t** object encapsulates the `VARIANT` data type. The class manages resource allocation and deallocation and makes function calls to `VariantInit` and `VariantClear` as appropriate.

### Construction

| Name | Description |
|--|--|
| [_variant_t](../cpp/variant-t-variant-t.md) | Constructs a **_variant_t** object. |

### Operations

| Name | Description |
|--|--|
| [Attach](../cpp/variant-t-attach.md) | Attaches a `VARIANT` object into the **_variant_t** object. |
| [Clear](../cpp/variant-t-clear.md) | Clears the encapsulated `VARIANT` object. |
| [ChangeType](../cpp/variant-t-changetype.md) | Changes the type of the **_variant_t** object to the indicated `VARTYPE`. |
| [Detach](../cpp/variant-t-detach.md) | Detaches the encapsulated `VARIANT` object from this **_variant_t** object. |
| [SetString](../cpp/variant-t-setstring.md) | Assigns a string to this **_variant_t** object. |

### Operators

| Name | Description |
|--|--|
| [Operator =](../cpp/variant-t-operator-equal.md) | Assigns a new value to an existing **_variant_t** object. |
| [operator ==, !=](../cpp/variant-t-relational-operators.md) | Compare two **_variant_t** objects for equality or inequality. |
| [Extractors](../cpp/variant-t-extractors.md) | Extract data from the encapsulated `VARIANT` object. |

**END Microsoft Specific**

## Requirements

**Header:** \<comutil.h>

**Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) for more information)

## See also

[Compiler COM Support Classes](../cpp/compiler-com-support-classes.md)
