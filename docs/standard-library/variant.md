---
title: "<variant>"
description: "Learn more about: <variant>"
ms.date: 04/04/2019
f1_keywords: ["<variant>"]
helpviewer_keywords: ["<variant>"]
---
# `<variant>`

A variant object holds and manages a value. If the variant holds a value, that value's type has to be one of the template argument types given to variant. These template arguments are called alternatives.

## Requirements

**Header:** `<variant>`

**Namespace:** `std`

## Members

### Operators

|Name|Description|
|-|-|
|[`operator==`](variant-operators.md#op_eq_eq)|Tests if the variant object on the left side of the operator is equal to the variant object on the right side.|
|[`operator!=`](variant-operators.md#op_neq)|Tests if the variant object on the left side of the operator is not equal to the variant object on the right side.|
|[`operator<`](variant-operators.md#op_lt)|Tests if the variant object on the left side of the operator is less than the variant object on the right side.|
|[`operator<=`](variant-operators.md#op_lt_eq)|Tests if the variant object on the left side of the operator is less than or equal to the variant object on the right side.|
|[`operator>`](variant-operators.md#op_gt)|Tests if the variant object on the left side of the operator is greater than the variant object on the right side.|
|[`operator>=`](variant-operators.md#op_gt_eq)|Tests if the variant object on the left side of the operator is greater than or equal to the variant object on the right side.|

### Functions

|Name|Description|
|-|-|
|[`get`](variant-functions.md#get)|Gets the variant of an object.|
|[`get_if`](variant-functions.md#get_if)|Gets the variant of an object if it exists.|
|[`holds_alternative`](variant-functions.md#holds_alternative)|Return **`true`** if a variant exists.|
|[`swap`](variant-functions.md#swap)|Swaps a **variant**.|
|[`visit`](variant-functions.md#visit)|Moves to the next **variant**.|

### Classes

|Name|Description|
|-|-|
|[`bad_variant_access`](bad-variant-access-class.md)|Objects thrown to report invalid accesses to the value of a variant object.|
|[`variant`](variant-class.md)|An object to either hold a value of one of its alternative types, or no value.|

### Structs

|Name|Description|
|-|-|
|[`hash`](hash-structure.md)||
|[`monostate`](monostate-structure.md)|An alternative type for a variant to make the variant type default constructible.|
|[`uses_allocator`](uses-allocator-structure.md)||
|[`variant_alternative`](variant-alternative-structure.md)|Assists the variant objects.|
|[`variant_size`](variant-size-structure.md)|Assists the variant objects.|

### Objects

|Name|Description|
|-|-|
|[`variant_npos`](variant-functions.md#variant_npos)||

## See also

[Header Files Reference](cpp-standard-library-header-files.md)
