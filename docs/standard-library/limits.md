---
description: "Learn more about: &lt;limits&gt;"
title: "&lt;limits&gt;"
ms.date: "11/04/2016"
f1_keywords: ["limits/std::<limits>", "<limits>"]
helpviewer_keywords: ["limits header"]
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
---
# &lt;limits&gt;

Defines the class template `numeric_limits` and two enumerations concerning floating-point representations and rounding.

## Requirements

**Header:** \<limits>

**Namespace:** std

## Remarks

Explicit specializations of the `numeric_limits` class describe many properties of the fundamental types, including the character, integer, and floating-point types and **`bool`** that are implementation defined rather than fixed by the rules of the C++ language. Properties described in \<limits> include accuracy, minimum and maximum sized representations, rounding, and signaling type errors.

## Members

### Enumerations

|Name|Description|
|-|-|
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|The enumeration describes the various methods that an implementation can choose for representing a denormalized floating-point value — one too small to represent as a normalized value:|
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|The enumeration describes the various methods that an implementation can choose for rounding a floating-point value to an integer value.|

### Classes

|Name|Description|
|-|-|
|[numeric_limits Class](../standard-library/numeric-limits-class.md)|The class template describes arithmetic properties of built-in numerical types.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
