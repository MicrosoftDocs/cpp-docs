---
description: "Learn more about: bad_optional_access Class"
title: "bad_optional_access Class"
ms.date: "08/06/2019"
f1_keywords: ["optional/std::bad_optional_access"]
---
# bad_optional_access Class

Defines the type of objects thrown as exceptions to report the situation where an attempt is made to access the value of an `optional` object that doesn't contain a value.

## Syntax

```cpp
class bad_optional_access : public exception
{
public:
    bad_optional_access() noexcept;
    bad_optional_access(const bad_optional_access&) noexcept;
    bad_optional_access& operator=(const bad_optional_access&) noexcept;
    const char* what() const noexcept override;
};
```

## See also

[\<optional>](optional.md)\
[optional class](optional-class.md)
