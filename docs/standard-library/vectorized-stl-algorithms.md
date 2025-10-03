---
title: "Vectorized STL Algorithms"
description: "Learn more about: Vectorized STL Algorithms"
ms.date: 10/03/2025
f1_keywords: ["_USE_STD_VECTOR_ALGORITHMS", "_USE_STD_VECTOR_FLOATING_ALGORITHMS"]
helpviewer_keywords: ["_USE_STD_VECTOR_ALGORITHMS", "_USE_STD_VECTOR_FLOATING_ALGORITHMS", "Vector Algorithms", "Vectorization", "SIMD"]
---
# Vectorized STL Algorithms

Under specific conditions, algorithms in the MSVC Standard Template Library (STL) can process multiple elements simultaneously on a single CPU core, rather than handling each element individually. This optimization uses single instruction, multiple data (SIMD) instructions provided by the CPU, a technique called vectorization. When this optimization isn't applied, the implementation is referred to as scalar.

The conditions required for vectorization are:
 - The container or range must be contiguous. Examples include `array`, `vector`, and `basic_string`. Types like `span` and `basic_string_view` provide contiguous ranges. Built-in arrays also form contiguous ranges. Containers like `list` and `map` aren't contiguous.
 - The target platform must support the necessary SIMD instructions to implement the algorithm for the element types. This is typically true for arithmetic types and simple operations.
 - One of these conditions must be met:
    - The compiler can emit vectorized machine code for an implementation written as scalar code (auto-vectorization).
    - The algorithm's implementation explicitly uses vectorized code (manual vectorization).

## Auto-vectorization in the STL

For more information about automatic vectorization, see [Auto-Vectorizer](../parallel/auto-parallelization-and-auto-vectorization.md#auto-vectorizer) and the discussion in that article about the [`/arch`](../build/reference/arch-minimum-cpu-architecture.md) switch. This applies to the STL implementation code the same way it applies to user code.

Algorithms like `transform`, `reduce`, and `accumulate` benefit heavily from auto-vectorization.

## Manual vectorization in the STL

Certain algorithms for x64 and x86 include manual vectorization. This implementation is separately compiled and relies on runtime CPU dispatch, so it applies only to suitable CPUs.

Manually vectorized algorithms use template metaprogramming to detect if the element type is suitable for vectorization. As a result, they're only vectorized for simple types such as standard integer types.

Programs either benefit in performance from manual vectorization or remain unaffected by it. Disable manual vectorization by defining `_USE_STD_VECTOR_ALGORITHMS=0` in your project. Manually vectorized algorithms are enabled by default on x64 and x86 because `_USE_STD_VECTOR_ALGORITHMS` defaults to 1 on those platforms.

Assign the same value to `_USE_STD_VECTOR_ALGORITHMS` for all linked translation units that use algorithms. Configure it in the project properties instead of in the source code for consistency. For more information about how to configure it, see [/D (Preprocessor Definitions)](../build/reference/d-preprocessor-definitions.md).


The `_USE_STD_VECTOR_ALGORITHMS` macro controls the behavior of these manually vectorized algorithms:
 - `contains`, `contains_subrange`
 - `find`, `find_last`, `find_end`, `find_first_of`, `adjacent_find`
 - `count`
 - `mismatch`
 - `search`, `search_n`
 - `swap_ranges`
 - `replace`
 - `remove`, `remove_copy`
 - `unique`, `unique_copy`
 - `reverse`, `reverse_copy`
 - `rotate`
 - `is_sorted`, `is_sorted_until`
 - `lexicographical_compare`, `lexicographical_compare_three_way`
 - `max`, `min`, `minmax`
 - `max_element`, `min_element`, `minmax_element`

The `_USE_STD_VECTOR_ALGORITHMS` macro also controls the manual vectorization of:

 - `basic_string` and `basic_string_view` members:
   - `find`
   - `rfind`
   - `find_first_of`, `find_first_not_of`
   - `find_last_of`, `find_last_not_of`
 - `bitset` constructors from string and `bitset::to_string`

## Manually vectorized algorithms for floating point types

Vectorization of floating-point types involves specific considerations:
 - Vectorization might reorder operations, which can affect the precision of floating-point results.
 - Floating-point types might contain `NaN` values, which don't behave transitively in comparisons.
 - Floating-point operations might raise exceptions.

The STL addresses the first two considerations safely. Only `max_element`, `min_element`, `minmax_element`, `max`, `min`, `minmax`, `is_sorted`, and `is_sorted_until` are manually vectorized. These algorithms:
- Don’t compute new floating-point values. Instead, they compare existing values to ensure that differences in operation order don't impact precision.
- Because these are sorting algorithms, `NaN` values aren't allowed as inputs.

Use `_USE_STD_VECTOR_FLOATING_ALGORITHMS` to control the use of these vectorized algorithms for floating-point types. Set it to 0 to disable vectorization. `_USE_STD_VECTOR_FLOATING_ALGORITHMS` doesn't affect anything if `_USE_STD_VECTOR_ALGORITHMS` is set to 0.

The `_USE_STD_VECTOR_FLOATING_ALGORITHMS` macro defaults to 0 when [`/fp:except`](../build/reference/fp-specify-floating-point-behavior.md#except) is set.

Assign the same value to `_USE_STD_VECTOR_FLOATING_ALGORITHMS` for all linked translation units that use algorithms. Configure it in the project properties instead of in the source code for consistency. For more information about how to configure it, see [/D (Preprocessor Definitions)](../build/reference/d-preprocessor-definitions.md).

## See also

[Auto-Vectorizer](../parallel/auto-parallelization-and-auto-vectorization.md#auto-vectorizer)
