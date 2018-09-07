---
title: "money_base Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xlocmon/std::money_base"]
dev_langs: ["C++"]
helpviewer_keywords: ["money_base class"]
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# money_base Class

The class describes an enumeration and a structure common to all specializations of template class [moneypunct](../standard-library/moneypunct-class.md).

## Syntax

```cpp
struct pattern
{
   char field[_PATTERN_FIELD_SIZE];
};
```

## Remarks

The enumeration `part` describes the possible values in elements of the array field in the structure pattern. The values of `part` are:

- `none` to match zero or more spaces or generate nothing.

- `sign` to match or generate a positive or negative sign.

- `space` to match zero or more spaces or generate a space.

- `symbol` to match or generate a currency symbol.

- `value` to match or generate a monetary value.

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
