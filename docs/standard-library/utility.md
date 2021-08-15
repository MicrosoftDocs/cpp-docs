---
description: "Learn more about: &lt;utility&gt;"
title: "&lt;utility&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<utility>"]
helpviewer_keywords: ["utility header"]
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
---
# &lt;utility&gt;

Defines C++ Standard Library types, functions, and operators that help to construct and manage pairs of objects, which are useful whenever two objects need to be treated as if they were one.

## Requirements

**Header:** \<utility>

**Namespace:** std

## Remarks

Pairs are widely used in the C++ Standard Library. They are required both as the arguments and return values for various functions and as element types for containers such as [map class](../standard-library/map-class.md) and [multimap class](../standard-library/multimap-class.md). The \<utility> header is automatically included by \<map> to assist in managing their key/value pair type elements.

> [!NOTE]
> The \<utility> header uses the statement `#include <initializer_list>`. It also refers to `class tuple` as defined in \<tuple>.

## Members

### Classes

|Type|Description|
|-|-|
|[chars_format](../standard-library/chars-format-class.md)|Floating-point format for primitive numerical conversion.|
|[tuple_element](../standard-library/tuple-element-class-tuple.md)|A class that wraps the type of a `pair` element.|
|[tuple_size](../standard-library/tuple-size-class-tuple.md)|A class that wraps `pair` element count.|

### Objects

|Template|Description|
|-|-|
|[index_sequence](../standard-library/utility-functions.md#index_sequence)|An alias template defined for the common case where `T` is `std::size_t`  |
|[index_sequence_for](../standard-library/utility-functions.md#index_sequence_for)|Helper alias template to convert any type parameter pack into an index sequence of the same length|
|[make_index_sequence](../standard-library/utility-functions.md#make_index_sequence)| Helper alias template to simplify the creation of a `std::index_sequence` type. |
|[make_integer_sequence](../standard-library/utility-functions.md#make_integer_sequence)|Helper alias template to simplify the creation of a `std::integer_sequence` type.|

### Functions

|Function|Description|
|-|-|
|[as_const](../standard-library/utility-functions.md#asconst)|Returns type.|
|[declval](../standard-library/utility-functions.md#declval)|Shorthand expression evaluation.|
|[exchange](../standard-library/utility-functions.md#exchange)|Assigns a new value to an object and returns its old value.|
|[forward](../standard-library/utility-functions.md#forward)|Preserves the reference type (either `lvalue` or `rvalue`) of the argument from being obscured by perfect forwarding.|
|[from_chars](../standard-library/utility-functions.md#from_chars)||
|[get](../standard-library/utility-functions.md#get)|A function that gets an element from a `pair` object.|
|[make_pair](../standard-library/utility-functions.md#make_pair)|A template helper function used to construct objects of type `pair`, where the component types are based on the data types passed as parameters.|
|[move](../standard-library/utility-functions.md#move)|Returns the passed in argument as an `rvalue` reference.|
|[move_if_noexcept](../standard-library/utility-functions.md#moveif)||
|[swap](../standard-library/utility-functions.md#swap)|Exchanges the elements of two `pair` objects.|
|[to_chars](../standard-library/utility-functions.md#to_chars)|Converts value into a character string.|

### Operators

|Operator|Description|
|-|-|
|[operator!=](../standard-library/utility-operators.md#op_neq)|Tests if the pair object on the left side of the operator is not equal to the pair object on the right side.|
|[operator==](../standard-library/utility-operators.md#op_eq_eq)|Tests if the pair object on the left side of the operator is equal to the pair object on the right side.|
|[operator\<](../standard-library/utility-operators.md#op_lt)|Tests if the pair object on the left side of the operator is less than the pair object on the right side.|
|[operator\<=](../standard-library/utility-operators.md#op_gt_eq)|Tests if the pair object on the left side of the operator is less than or equal to the pair object on the right side.|
|[operator>](../standard-library/utility-operators.md#op_gt)|Tests if the pair object on the left side of the operator is greater than the pair object on the right side.|
|[operator>=](../standard-library/utility-operators.md#op_gt_eq)|Tests if the pair object on the left side of the operator is greater than or equal to the pair object on the right side.|

### Structs

|Struct|Description|
|-|-|
|[from_chars_result](../standard-library/from-chars-result-structure.md)|A struct used for `from_chars`.|
|[identity](../standard-library/identity-structure.md)|A struct that provides a type definition as the template parameter.|
|[in_place_t](../standard-library/in-place-t-struct.md)|Also includes structs `in_place_type_t` and `in_place_index_t`.|
|[integer_sequence](../standard-library/integer-sequence-class.md)|Represents an integer sequence.|
|[pair](../standard-library/pair-structure.md)|A type that provides for the ability to treat two objects as a single object.|
|[piecewise_construct_t](../standard-library/piecewise-construct-t-structure.md)|A type used to keep separate constructor and function overloading.|
|[to_chars_result](../standard-library/to-chars-result-structure.md)|A struct used for `to_chars`.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
