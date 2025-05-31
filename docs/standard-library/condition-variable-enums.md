---
title: "<condition_variable> enums"
description: "Learn more about: <condition_variable> enums"
ms.date: 11/04/2016
f1_keywords: ["condition_variable/std::cv_status"]
---
# `<condition_variable>` enums

The `<condition_variable>` header provides the following enums:

## <a name="cv_status"></a> cv_status

Supplies symbolic names for the return values of the methods of class template [condition_variable](../standard-library/condition-variable-class.md).

```cpp
enum class cv_status
{
    no_timeout,
    timeout
};
```
