---
description: "Learn more about: &lt;optional&gt;"
title: "&lt;optional&gt;"
ms.date: "08/06/2019"
f1_keywords: ["<optional>"]
helpviewer_keywords: ["<optional>"]
---
# &lt;optional&gt;

Defines the container class template `optional` and several supporting templates.

## Requirements

**Header:** \<optional>

**Namespace:** std

## Members

### Operators

|Name|Description|
|-|-|
|[operator==](../standard-library/optional-operators.md#op_eq_eq)|Tests if an object is equal to another object.|
|[operator!=](../standard-library/optional-operators.md#op_neq)|Tests if an object is not equal to another object.|
|[operator<](../standard-library/optional-operators.md#op_lt)|Tests if the object on the left is less than the object on the right.|
|[operator<=](../standard-library/optional-operators.md#op_lt_eq)|Tests if the object on the left is less than or equal to the object on the right.|
|[operator>](../standard-library/optional-operators.md#op_gt)|Tests if the object on the left is greater than the object on the right.|
|[operator>=](../standard-library/optional-operators.md#op_lt_eq)|Tests if the object on the left is greater than or equal to the object on the right.|

> [!NOTE]
> In addition to relational compares, \<optional> operators also support comparison with **nullopt** and `T`.

### Functions

|Name|Description|
|-|-|
|[make_optional](../standard-library/optional-functions.md#make_optional)|Makes an object optional.|
|[swap](../standard-library/optional-functions.md#swap)|Swaps the contained values of two `optional` objects.|

### Classes and Structs

|Name|Description|
|-|-|
|hash|Returns a hash of the contained object.|
|[optional class](../standard-library/optional-class.md)|Describes an object that may or may not hold a value.|
|[nullopt_t struct](../standard-library/nullopt-t-structure.md)|Describes an object not holding a value.|
|[bad_optional_access class](../standard-library/bad-optional-access-class.md)|Describes an object thrown as an exception to report an attempt to access a value not there.|

### Objects

|Name|Description|
|-|-|
|[nullopt](../standard-library/optional-functions.md#nullopt)|An instance of `nullopt_t` for comparisons.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
