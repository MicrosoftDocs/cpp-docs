---
description: "Learn more about: future_error Class"
title: "future_error Class"
ms.date: "11/04/2016"
f1_keywords: ["future/std::future_error"]
ms.assetid: 6071c545-ac2a-49ef-9967-07b0125da861
---
# future_error Class

Describes an exception object that can be thrown by methods of types that manage [future](../standard-library/future-class.md) objects.

## Syntax

```cpp
class future_error : public logic_error {
public:
    future_error(error_code code);

const error_code& code() const throw();

const char *what() const throw();

};
```

## Requirements

**Header:** \<future>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[logic_error Class](../standard-library/logic-error-class.md)\
[error_code Class](../standard-library/error-code-class.md)
