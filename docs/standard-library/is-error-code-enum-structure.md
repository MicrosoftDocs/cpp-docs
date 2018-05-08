---
title: "is_error_code_enum Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["future/std::is_error_code_enum"]
dev_langs: ["C++"]
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<future>](../standard-library/future.md)<br/>
