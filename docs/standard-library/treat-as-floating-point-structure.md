---
title: "treat_as_floating_point Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["chrono/std::chrono::treat_as_floating_point"]
dev_langs: ["C++"]
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# treat_as_floating_point Structure

Specifies whether `Rep` can be treated as a floating-point type.

## Syntax

```cpp
template <class Rep>
struct treat_as_floating_point : is_floating_point<Rep>;
```

## Remarks

`Rep` can be treated as a floating-point type only when the specialization `treat_as_floating_point<Rep>` is derived from [true_type](../standard-library/type-traits-typedefs.md#true_type). The template class can be specialized for a user-defined type.

## Requirements

**Header:** \<chrono>

**Namespace:** std::chrono

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<chrono>](../standard-library/chrono.md)<br/>
