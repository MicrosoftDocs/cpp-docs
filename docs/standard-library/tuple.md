---
description: "Learn more about: &lt;tuple&gt;"
title: "&lt;tuple&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<tuple>"]
helpviewer_keywords: ["tuple header"]
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
---
# &lt;tuple&gt;

Defines a template `tuple` whose instances hold objects of varying types.

## Requirements

**Header:** \<tuple>

**Namespace:** std

## Members

### Classes and Structs

|Name|Description|
|-|-|
|[tuple Class](../standard-library/tuple-class.md)|Wraps a fixed-length sequence of elements.|
|[tuple_element Class](../standard-library/tuple-element-class-tuple.md)|Wraps the type of a `tuple` element.|
|[tuple_size Class](../standard-library/tuple-size-class-tuple.md)|Wraps `tuple` element count.|
|[uses_allocator](../standard-library/uses-allocator-structure.md)||

### Objects

|Name|Description|
|-|-|
|[tuple_element_t](../standard-library/tuple-functions.md#tuple_element_t)||
|[tuple_size_v](../standard-library/tuple-functions.md#tuple_size_v)||

### Operators

|Name|Description|
|-|-|
|[operator==](../standard-library/tuple-operators.md#op_eq_eq)|Comparison of `tuple` objects, equal.|
|[operator!=](../standard-library/tuple-operators.md#op_neq)|Comparison of `tuple` objects, not equal.|
|[operator<](../standard-library/tuple-operators.md#op_lt)|Comparison of `tuple` objects, less than.|
|[operator<=](../standard-library/tuple-operators.md#op_lt_eq)|Comparison of `tuple` objects, less than or equal.|
|[operator>](../standard-library/tuple-operators.md#op_gt)|Comparison of `tuple` objects, greater than.|
|[operator>=](../standard-library/tuple-operators.md#op_gt_eq)|Comparison of `tuple` objects, greater than or equal.|

### Functions

|Name|Description|
|-|-|
|[apply](../standard-library/tuple-functions.md#apply)|Calls a function with a tuple.|
|[forward_as_tuple](../standard-library/tuple-functions.md#forward)|Constructs a tuple of references.|
|[get](../standard-library/tuple-functions.md#get)|Gets an element from a `tuple` object.|
|[make_from_tuple](../standard-library/tuple-functions.md#make_from_tuple)|Shorthand to make a `tuple`.|
|[make_tuple](../standard-library/tuple-functions.md#make_tuple)|Makes a `tuple` from element values.|
|[swap](../standard-library/tuple-functions.md#swap)||
|[tie](../standard-library/tuple-functions.md#tie)|Makes a `tuple` from element references.|
|[tuple_cat](../standard-library/tuple-functions.md#tuple_cat)|Constructs a tuple object with a range of the type elements.|

## See also

[\<array>](../standard-library/array.md)
