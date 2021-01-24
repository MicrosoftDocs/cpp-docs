---
description: "Learn more about: &lt;valarray&gt;"
title: "&lt;valarray&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<valarray>"]
helpviewer_keywords: ["valarray header"]
ms.assetid: 30835415-21c1-4801-8f24-6bbef7dd8ecd
---
# &lt;valarray&gt;

Defines the class template valarray and numerous supporting class templates and functions.

## Requirements

**Header:** \<valarray>

**Namespace:** std

> [!NOTE]
> The \<valarray> library uses the `#include <initializer_list>' statement.

## Remarks

These class templates and functions are permitted unusual latitude in the interest of improved performance. Specifically, any function returning type `valarray<T1>` may return an object of some other type T2. In that case, any function that accepts one or more arguments of type `valarray<T2>` must have overloads that accept arbitrary combinations of those arguments, each replaced with an argument of type T2.

## Members

### Functions

|Name|Description|
|-|-|
|[abs](../standard-library/valarray-functions.md#abs)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the absolute value of the elements of the input valarray.|
|[acos](../standard-library/valarray-functions.md#acos)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the arccosine of the elements of the input valarray.|
|[asin](../standard-library/valarray-functions.md#asin)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the arcsine of the elements of the input valarray.|
|[atan](../standard-library/valarray-functions.md#atan)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the principal value of the arctangent of the elements of the input valarray.|
|[atan2](../standard-library/valarray-functions.md#atan2)|Returns a valarray whose elements are equal to the arctangent of the Cartesian components specified by a combination of constants and elements of valarrays.|
|[begin](../standard-library/valarray-functions.md#begin)||
|[cos](../standard-library/valarray-functions.md#cos)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the cosine of the elements of the input valarray.|
|[cosh](../standard-library/valarray-functions.md#cosh)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the hyperbolic cosine of the elements of the input valarray.|
|[end](../standard-library/valarray-functions.md#end)||
|[exp](../standard-library/valarray-functions.md#exp)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the natural exponential of the elements of the input valarray.|
|[log](../standard-library/valarray-functions.md#log)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the natural logarithm of the elements of the input valarray.|
|[log10](../standard-library/valarray-functions.md#log10)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the base 10 or common logarithm of the elements of the input valarray.|
|[pow](../standard-library/valarray-functions.md#pow)|Operates on the elements of input valarrays and constants, returning a valarray whose elements are equal to a base specified either by the elements of an input valarray or a constant raised to an exponent specified either by the elements of an input valarray or a constant.|
|[sin](../standard-library/valarray-functions.md#sin)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the sine of the elements of the input valarray.|
|[sinh](../standard-library/valarray-functions.md#sinh)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the hyperbolic sine of the elements of the input valarray.|
|[sqrt](../standard-library/valarray-functions.md#sqrt)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the square root of the elements of the input valarray.|
|[swap](../standard-library/valarray-functions.md#swap)||
|[tan](../standard-library/valarray-functions.md#tan)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the tangent of the elements of the input valarray.|
|[tanh](../standard-library/valarray-functions.md#tanh)|Operates on the elements of an input valarray, returning a valarray whose elements are equal to the hyperbolic tangent of the elements of the input valarray.|

### Operators

|Name|Description|
|-|-|
|[operator!=](../standard-library/valarray-operators.md#op_neq)|Tests whether the corresponding elements of two equally sized valarrays are unequal or whether all the elements of a valarray are unequal a specified value of the valarray's element type.|
|[operator%](../standard-library/valarray-operators.md#op_mod)|Obtains the remainder of dividing the corresponding elements of two equally sized valarrays or of dividing a valarray by a specified value of the valarray's element type or of dividing a specified value by a valarray.|
|[operator&](../standard-library/valarray-operators.md#op_amp)|Obtains the bitwise `AND` between corresponding elements of two equally sized valarrays or between a valarray and a specified value of the element type.|
|[operator&&](../standard-library/valarray-operators.md#op_amp_amp)|Obtains the logical `AND` between corresponding elements of two equally sized valarrays or between a valarray and a specified value of the valarray's element type.|
|[operator>](../standard-library/valarray-operators.md#op_gt)|Tests whether the elements of one valarray are greater than the elements of an equally sized valarray or whether all the elements of a valarray are greater or less than a specified value of the valarray's element type.|
|[operator>=](../standard-library/valarray-operators.md#op_gt_eq)|Tests whether the elements of one valarray are greater than or equal to the elements of an equally sized valarray or whether all the elements of a valarray are greater than or equal to or less than or equal to a specified value.|
|[operator>>](../standard-library/valarray-operators.md#op_gt_gt)|Right-shifts the bits for each element of a valarray a specified number of positions or by an element-wise amount specified by a second valarray.|
|[operator<](../standard-library/valarray-operators.md#op_lt)|Tests whether the elements of one valarray are less than the elements of an equally sized valarray or whether all the elements of a valarray are greater or less than a specified value.|
|[operator<=](../standard-library/valarray-operators.md#op_lt_eq)|Tests whether the elements of one valarray are less than or equal to the elements of an equally sized valarray or whether all the elements of a valarray are greater than or equal to or less than or equal to a specified value.|
|[operator<<](../standard-library/valarray-operators.md#op_lt_lt)|Left shifts the bits for each element of a valarray a specified number of positions or by an element-wise amount specified by a second valarray.|
|[operator*](../standard-library/valarray-operators.md#op_star)|Obtains the element-wise product between corresponding elements of two equally sized valarrays or of between a valarray a specified value of the valarray's element type.|
|[operator+](../standard-library/valarray-operators.md#op_add)|Obtains the element-wise sum between corresponding elements of two equally sized valarrays or of between a valarray a specified value of the valarray's element type.|
|[operator-](../standard-library/valarray-operators.md#operator-)|Obtains the element-wise difference between corresponding elements of two equally sized valarrays or of between a valarray a specified value of the valarray's element type.|
|[operator/](../standard-library/valarray-operators.md#op_div)|Obtains the element-wise quotient between corresponding elements of two equally sized valarrays or of between a valarray a specified value of the valarray's element type.|
|[operator==](../standard-library/valarray-operators.md#op_eq_eq)|Tests whether the corresponding elements of two equally sized valarrays are equal or whether all the elements of a valarray are equal a specified value of the valarray's element type.|
|[operator^](../standard-library/valarray-operators.md#op_xor)|Obtains the bitwise exclusive `OR` between corresponding elements of two equally sized valarrays or between a valarray and a specified value of the element type.|
|[operator&#124;](../standard-library/valarray-operators.md#op_or)|Obtains the bitwise `OR` between corresponding elements of two equally sized valarrays or between a valarray and a specified value of the element type.|
|[operator&#124;&#124;](../standard-library/valarray-operators.md#op_lor)|Obtains the logical `OR` between corresponding elements of two equally sized valarrays or between a valarray and a specified value of the valarray's element type.|

### Classes

|Name|Description|
|-|-|
|[gslice Class](../standard-library/gslice-class.md)|A utility class to valarray that is used to define multi-dimensional slices of a valarray.|
|[gslice_array Class](../standard-library/gslice-array-class.md)|An internal, auxiliary class template that supports general slice objects by providing operations between subset arrays defined by the general slice of a valarray.|
|[indirect_array Class](../standard-library/indirect-array-class.md)|An internal, auxiliary class template that supports objects that are subsets of valarrays by providing operations between subset arrays defined by specifying a subset of indices of a parent valarray.|
|[mask_array Class](../standard-library/mask-array-class.md)|An internal, auxiliary class template that supports objects that are subsets of parent valarrays, specified with a Boolean expression, by providing operations between the subset arrays.|
|[slice Class](../standard-library/slice-class.md)|A utility class to valarray that is used to define one-dimensional, vector-like subsets of a valarray.|
|[slice_array Class](../standard-library/slice-array-class.md)|An internal, auxiliary class template that supports slice objects by providing operations between subset arrays defined by the slice of a valarray.|
|[valarray Class](../standard-library/valarray-class.md)|The class template describes an object that controls a sequence of elements of type `Type` that are stored as an array and designed for performing high-speed mathematical operations, optimized for computational performance.|

### Specializations

|Name|Description|
|-|-|
|[valarray\<bool> Class](../standard-library/valarray-bool-class.md)|A specialized version of the class template valarray\<**Type**> to elements of type **`bool`**.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
