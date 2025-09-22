---
title: "Vectorized STL Algorithms"
description: "Learn more about: Vectorized STL Algorithms"
ms.date: 09/19/2025
f1_keywords: ["_USE_STD_VECTOR_ALGORITHMS", "_USE_STD_VECTOR_FLOATING_ALGORITHMS"]
helpviewer_keywords: ["_USE_STD_VECTOR_ALGORITHMS", "_USE_STD_VECTOR_FLOATING_ALGORITHMS", "Vector Algorithms", "Vectorization", "SIMD"]
---
# Vectorized STL Algorithms

Under certain conditions, STL algorithms execute not element-wise, but multiple element at once on a single CPU core. This is possible due to SIMD (single instruction, multiple data). The use of such approach instead of element-wise approach is called vectorization. An implementation that is not vectorized is called scalar.

The conditions for vectorization are:
 - The container or range is contiguous. `array`, `vector`, and `basic_string` are contiguous containers, `span` and `basic_string_view` provide contiguous ranges.
 - There are such SIMD instructions available for the target platform that implement the particular algorithm on particular element types efficiently. Often this is true for plain types (like built-in integers) and simple operations.
 - Either of the following:
     - The compiler is capable of emitting vectorized machine code for an implementation written as scalar code (auto-vectorization)
     - The implementation itself is written as vectorized code (manual vectorization)

## Auto-vectorization in STL

See [Auto-Vectorizer](../parallel/auto-parallelization-and-auto-vectorization.md#auto-vectorizer). It applies to the STL implementation code the same way as to user code.

Algorithms like `transform`, `reduce`, `accumulate` heavily benefit from auto-vectorization.

## Manual vectorization in STL

For x64 and x86 targets, certain algorithms have manual vectorization implemented. This implementation is pre-compiled, and uses runtime CPU dispatch, so it is engaged on suitable CPUs only.

The manually vectorized algorithms use template meta-programming to detect the suitable element types, so they only vectorized for simple types, like standard integer types.

Generally, programs either benefit in performance from this manual vectorization or are unaffected by it. In case of any problem, you can disable manual vectorization by defining `_USE_STD_VECTOR_ALGORITHMS` macro set to 0. It defaults to 1 on x64 and x86, which means that manually vectorized algorithms are enabled by default.

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
 - `reverse_copy`
 - `rotate`
 - `is_sorted`
 - `is_sorted_until`
 - `max_element`
 - `min_element`
 - `minmax_element`
 - `max`
 - `min`
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
 - Vectorization may reorder operations, which can affect the precision of floating point results.
 - Floating point types may contain NaN values, which don't behave transitively while comparing.
 - Floating point operations may raise exceptions.

The STL deals with the first two difficulties safely. Only `max_element`, `min_element`, `minmax_element`, `max`, `min`, `minmax`, `is_sorted`, and `is_sorted_until` are manually vectorized. These algorithms:
 - Do not compute new floating point values, only compare the existing values, so different order does not affect precision.
 - As sorting algorithms, require transitivity of comparisons, so NaNs are not allowed as elements.

There's `_USE_STD_VECTOR_FLOATING_ALGORITHMS` to control the use of these vectorized algorithms for floating point types. Set it to 0 to disable the vectorization. The macro has no effect if `_USE_STD_VECTOR_ALGORITHMS` is set to 0.

`_USE_STD_VECTOR_FLOATING_ALGORITHMS` defaults to 0 when [`/fp:except`](../build/reference/fp-specify-floating-point-behavior.md#except) option is set. This is to avoid problems with exceptions.

## See also

[Auto-Vectorizer](../parallel/auto-parallelization-and-auto-vectorization.md#auto-vectorizer)
