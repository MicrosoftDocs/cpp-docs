---
description: "Learn more about: is_error_code_enum Structure"
title: "is_error_code_enum Structure"
ms.date: "11/04/2016"
f1_keywords: ["future/std::is_error_code_enum"]
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
---
# is_error_code_enum Structure

Specialization that indicates that [future_errc](../standard-library/future-enums.md#future_errc) is suitable for storing an [error_code](../standard-library/error-code-class.md).

## Syntax

```cpp
template <>
struct is_error_code_enum<Future_errc> : public true_type;
```

## Requirements

**Header:** \<future>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<future>](../standard-library/future.md)
