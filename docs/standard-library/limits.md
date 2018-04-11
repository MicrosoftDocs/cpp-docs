---
title: "&lt;limits&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["limits/std::<limits>", "<limits>"]
dev_langs: ["C++"]
helpviewer_keywords: ["limits header"]
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# &lt;limits&gt;

Defines the template class `numeric_limits` and two enumerations concerning floating-point representations and rounding.

## Syntax

```cpp
#include <limits>

```

## Remarks

Explicit specializations of the `numeric_limits` class describe many properties of the fundamental types, including the character, integer, and floating-point types and `bool` that are implementation defined rather than fixed by the rules of the C++ language. Properties described in \<limits> include accuracy, minimum and maximum sized representations, rounding, and signaling type errors.

### Enumerations

|||
|-|-|
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|The enumeration describes the various methods that an implementation can choose for representing a denormalized floating-point value — one too small to represent as a normalized value:|
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|The enumeration describes the various methods that an implementation can choose for rounding a floating-point value to an integer value.|

### Classes

|||
|-|-|
|[numeric_limits Class](../standard-library/numeric-limits-class.md)|The template class describes arithmetic properties of built-in numerical types.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
