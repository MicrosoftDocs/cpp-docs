---
title: "bad_optional_access Class"
ms.date: "11/04/2016"
f1_keywords: ["optional/std::bad_optional_access"]
ms.assetid: 89a3b805-ab60-4858-b772-5855130c11b1
---
# bad_optional_access Class

Defines the type of objects thrown as exceptions to report the situation where an attempt is made to access the value of an `optional` object that doesn't contain a value.

## Syntax

```cpp
class bad_optional_access : public exception
{
    public: bad_optional_access();
};
```
