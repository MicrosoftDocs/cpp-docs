---
description: "Vectorized STL Algorithms"
title: "Vectorized STL Algorithms"
ms.date: "09/19/2025"
helpviewer_keywords: ["Vector Algorithms", "Vectorization", "SIMD"]
---
# Vectorized STL Algorithms

Under certain conditions, STL algorithms execute not element-wise, but multiple element at once on a single CPU core. This is possible due to SIMD (single instruction, multiple data). The use of such approach instead of 
element-wise approach is called vectorization. The implementation that is not vectorized is called scalar.

The conditions for vectorization are:
 - The container or range is contigous. `array`, `vector`, and `basic_string` are contigous containers, `span` and `basic_string_view` provide conditions ranges.
 - There are such SIMD insstructions available for the target platform that implement the particular algorithm on particular element types efficiently. Usually this is true for plain types (like built-in integers) and simple operations.
 - Either of the following:
     - The compiler is capable emiting vectorized machine code for an implementation written as scalar code (auto-vectorization)
     - The implementation itself is written as vectorized code (manual vectorization)

## Auto-vectorization in STL

See [Auto-Vectorizer](../parallel/auto-parallelization-and-auto-vectorization.md#auto-vectorizer). It applies to the STL implementation code the same way as to user code.

Algorithms like `transform`, `reduce`, `accumulate` heavily benefit from auto-vectorization.

## Manual vectorization in STL

For x64 and x86 targets, certain algorithms have manual vectorization implemented. This implementation is pre-compiled, and uses runtime CPU dispatch, so it is engaged on suitable CPUs only.

The manually vectorized algorithms use template meta-programming to detect the suitable element types, so they only vectorized for simple types, like standard integer types.

Generally, programs either benefit in performance from this manual vectorization or are unaffected by it. In case of any problem, you can disable manual vectorization by defining `_USE_STD_VECTOR_ALGORITHMS` macro set to 0.

The following algorithms have manual vectorization controlled via `_USE_STD_VECTOR_ALGORITHMS` macro:
 - `contains`
 - `contains_subrange`
 - `find`
 - `find_last`
 - `find_end`
 - `find_first_of`
 - `adjacent_find`
 - `count`
 - `mismatch`
 - `search`
 - `search_n`
 - `swap_ranges`
 - `replace`
 - `remove`
 - `remove_copy`
 - `unique`
 - `unique_copy`
 - `reverse`
 - `rotate`
 - `is_sorted` 
 - `is_sorted_until`
 - `minmax_element`
 - `minmax`
 - `lexicographical_compare`
 - `lexicographical_compare_three_way`

In addition to algorithms, the macro controls the manual vectorization of:
 - `basic_string` and `basic_string_view` members:
   - `find`
   - `rfind`
   - `find_first_of`
   - `find_first_not_of`
   - `find_last_of`
   - `find_last_not_of`
 - `bitset` constructors from string and `bitset::to_string`

## Manually vectorized algorithms for floating point types

Vectorization of floating point types is connected with extra difficulties:
 - For floating point results, the order of operations may matter. Some reordering may yield a different result, whether more precise, or less precise. Vecotization may need operations reordering, so it may affect that.
 - Floating point types may contain NaN values, which don't behave transitively while comparing.
 - Floating point operations may raise exceptions.

The STL deals with the first two difficulties safely. Only `minmax_element`, `minmax`, `is_sorted`, and `is_sorted_until` are manually vectorized. These algorithms:
 - Do not compute new floating point values, only compare the existing values, so different order does not affect precision.
 - As sorting algorithms, require elements transitivity, so NaNs are not allowed as elements.

There's `_USE_STD_VECTOR_FLOATING_ALGORITHMS` to control the use of these vectorized algorithms for floating point types. Set it to 0 to disable the vectorization. The macro has no effect if `_USE_STD_VECTOR_ALGORITHMS` is set to 0.

`_USE_STD_VECTOR_FLOATING_ALGORITHMS` defaults to 0 when `/fp:except` option is set. This is to avoid problems with exceptions.

## See also

[Auto-Vectorizer](../parallel/auto-parallelization-and-auto-vectorization.md#auto-vectorizer)
