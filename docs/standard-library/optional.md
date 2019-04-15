---
title: "&lt;optional&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<optional>"]
helpviewer_keywords: ["<optional>"]
ms.assetid: 8b4ab09e-1475-434a-b4e0-fdbc07a08b5b
---
# &lt;optional&gt;

Defines the container template class optional and several supporting templates.

## Syntax

```cpp
#include <optional>
```

### Operators

|Operator|Description|
|-|-|
|[operator==](../standard-library/optional-operators.md#op_eq_eq)|Tests if the `optional` object on the left side of the operator is equal to the `optional` object on the right side.|
|[operator!=](../standard-library/optional-operators.md#op_neq)|Tests if the `optional` object on the left side of the operator is not equal to the `optional` object on the right side.|
|[operator<](../standard-library/optional-operators.md#op_lt)|Tests if the `optional` object on the left side of the operator is less than the `optional` object on the right side.|
|[operator<=](../standard-library/optional-operators.md#op_lt_eq)|Tests if the `optional` object on the left side of the operator is less than or equal to the `optional` object on the right side.|
|[operator>](../standard-library/optional-operators.md#op_gt)|Tests if the `optional` object on the left side of the operator is greater than the `optional` object on the right side.|
|[operator>=](../standard-library/optional-operators.md#op_lt_eq)|Tests if the `optional` object on the left side of the operator is greater than or equal to the `optional` object on the right side.|

> [!NOTE]
> In addition to relational compares, \<optional> operators also support comparison with **nullopt** and `T`.

### Functions

|Function|Description|
|-|-|
|[make_optional](../standard-library/optional-functions.md#make_optional)|Makes an object optional.|

### Classes and Structs

|Class or Struct|Description|
|-|-|
|[optional Class](../standard-library/optional-class.md)|Describes an object that may or may not hold a value.|
|[nullopt_t Struct](../standard-library/nullopt-t-structure.md)|Describes an object not holding a value.|
|[bad_optional_access Class](../standard-library/bad-optional-access-class.md)|Describes an object thrown as an exception to report an attempt to access a value not there.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
