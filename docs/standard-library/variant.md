---
title: "&lt;variant&gt;"
ms.date: "04/04/2019"
f1_keywords: ["<variant>"]
helpviewer_keywords: ["<variant>"]
---
# &lt;variant&gt;

A variant object holds and manages a value. If the variant holds a value, that value’s type has to be one of the template argument types given to variant. These template arguments are called alternatives.

## Syntax

```cpp
#include <variant>

namespace std {
    inline constexpr size_t variant_npos = -1;
}
```

### Operators

|Operator|Description|
|-|-|
|[operator==](../standard-library/forward-list-operators.md#op_eq_eq)|Tests if the variant object on the left side of the operator is equal to the variant object on the right side.|
|[operator!=](../standard-library/forward-list-operators.md#op_neq)|Tests if the variant object on the left side of the operator is not equal to the variant object on the right side.|
|[operator<](../standard-library/forward-list-operators.md#op_lt)|Tests if the variant object on the left side of the operator is less than the variant object on the right side.|
|[operator<=](../standard-library/forward-list-operators.md#op_lt_eq)|Tests if the variant object on the left side of the operator is less than or equal to the variant object on the right side.|
|[operator>](../standard-library/forward-list-operators.md#op_gt)|Tests if the variant object on the left side of the operator is greater than the variant object on the right side.|
|[operator>=](../standard-library/forward-list-operators.md#op_lt_eq)|Tests if the variant object on the left side of the operator is greater than or equal to the variant object on the right side.|

### Functions

|Function|Description|
|-|-|
|[get](../standard-library/variant-functions.md#get)|Gets the variant of an object.|
|[get_if](../standard-library/variant-functions.md#get_if)|Gets the variant of an object if it exists.|
|[holds_alternative](../standard-library/variant-functions.md#holds_alternative)|Return **true** if a variant exists.|
|[visit](../standard-library/variant-functions.md#visit)|Moves to the next **variant**.|

### Classes and Structs

|Class or Struct|Description|
|-|-|
|[bad_variant_access Class](../standard-library/bad-variant-access-class.md)||
|[monostate Struct](../standard-library/monostate-structure.md)||
|[variant Class](../standard-library/variant.md)||
|[variant_alternative Struct](../standard-library/variant-alternative-structure.md)|Describes an object that controls a varying-length sequence of elements. The sequence is stored as a singly-linked list of elements, each containing a member of type `Type`.|
|[variant_size Struct](../standard-library/variant-size-structure.md)|Describes an object that controls a varying-length sequence of elements. The sequence is stored as a singly-linked list of elements, each containing a member of type `Type`.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
