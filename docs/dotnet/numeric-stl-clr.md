---
description: "Learn more about: numeric (STL/CLR)"
title: "numeric (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["<cliext/numeric>", "cliext::accumulate", "cliext::adjacent_difference", "cliext::inner_product", "cliext::partial_sum"]
helpviewer_keywords: ["numeric functions [STL/CLR]", "<cliext/numeric> header [STL/CLR]", "<numeric> header [STL/CLR]", "accumulate function [STL/CLR]", "adjacent_difference function [STL/CLR]", "inner_product function [STL/CLR]", "partial_sum function [STL/CLR]"]
ms.assetid: 1dc4d9a3-e734-459c-9678-5d9be0ef4c79
---
# numeric (STL/CLR)

Defines container template functions that perform algorithms provided for numerical processing.

## Syntax

```
#include <cliext/numeric>
```

## Requirements

**Header:** \<cliext/numeric>

**Namespace:** cliext

## Declarations

|Function|Description|
|--------------|-----------------|
|[accumulate (STL/CLR)](#accumulate)|Computes the sum of all the elements in a specified range including some initial value by computing successive partial sums or computes the result of successive partial results similarly obtained from using a specified binary operation other than the sum.|
|[adjacent_difference (STL/CLR)](#adjacent_difference)|Computes the successive differences between each element and its predecessor in an input range and outputs the results to a destination range or computes the result of a generalized procedure where the difference operation is replaced by another, specified binary operation.|
|[inner_product (STL/CLR)](#inner_product)|Computes the sum of the element-wise product of two ranges and adds it to a specified initial value or computes the result of a generalized procedure where the sum and product binary operations are replaced by other specified binary operations.|
|[partial_sum (STL/CLR)](#partial_sum)|Computes a series of sums in an input range from the first element through the `i`th element and stores the result of each such sum in `i`th element of a destination range or computes the result of a generalized procedure where the sum operation is replaced by another specified binary operation.|

## Members

## <a name="accumulate"></a> accumulate (STL/CLR)

Computes the sum of all the elements in a specified range including some initial value by computing successive partial sums or computes the result of successive partial results similarly obtained from using a specified binary operation other than the sum.

### Syntax

```cpp
template<class _InIt, class _Ty> inline
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val);
template<class _InIt, class _Ty, class _Fn2> inline
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val, _Fn2 _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library numeric function `accumulate`. For more information, see [accumulate](../standard-library/numeric-functions.md#accumulate).

## <a name="adjacent_difference"></a> adjacent_difference (STL/CLR)

Computes the successive differences between each element and its predecessor in an input range and outputs the results to a destination range or computes the result of a generalized procedure where the difference operation is replaced by another, specified binary operation.

### Syntax

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,
        _OutIt _Dest);
template<class _InIt, class _OutIt, class _Fn2> inline
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,
        _OutIt _Dest, _Fn2 _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library numeric function `adjacent_difference`. For more information, see [adjacent_difference](../standard-library/numeric-functions.md#adjacent_difference).

## <a name="inner_product"></a> inner_product (STL/CLR)

Computes the sum of the element-wise product of two ranges and adds it to a specified initial value or computes the result of a generalized procedure where the sum and product binary operations are replaced by other specified binary operations.

### Syntax

```cpp
template<class _InIt1, class _InIt2, class _Ty> inline
    _Ty inner_product(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _Ty _Val);
template<class _InIt1, class _InIt2, class _Ty, class _Fn21,
       class _Fn22> inline
    _Ty inner_product(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _Ty _Val, _Fn21 _Func1, _Fn22 _Func2);
```

### Remarks

This function behaves the same as the C++ Standard Library numeric function `inner_product`. For more information, see [inner_product](../standard-library/numeric-functions.md#inner_product).

## <a name="partial_sum"></a> partial_sum (STL/CLR)

Computes a series of sums in an input range from the first element through the `i`th element and stores the result of each such sum in `i`th element of a destination range or computes the result of a generalized procedure where the sum operation is replaced by another specified binary operation.

### Syntax

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt partial_sum(_InIt _First, _InIt _Last, _OutIt _Dest);
template<class _InIt, class _OutIt, class _Fn2> inline
    _OutIt partial_sum(_InIt _First, _InIt _Last,
        _OutIt _Dest, _Fn2 _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library numeric function `partial_sum`. For more information, see [partial_sum](../standard-library/numeric-functions.md#partial_sum).
