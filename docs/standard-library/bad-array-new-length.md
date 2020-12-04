---
description: "Learn more about: bad_array_new_length Class"
title: "bad_array_new_length Class"
ms.date: "11/04/2016"
f1_keywords: ["new/std::bad_array_new_length"]
helpviewer_keywords: ["bad_alloc class"]
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
---
# bad_array_new_length Class

The class describes an exception thrown to indicate that an allocation request did not succeed due to array size less than zero or greater than its limit.

## Syntax

```cpp
class bad_array_new_length : public bad_alloc {
    public: bad_array_new_length() noexcept;
    const char* what() const noexcept override;
};
```

## Remarks

The value returned by `what` is an implementation-defined C string. None of the member functions throw any exceptions.

## Requirements

**Header:** \<new>

## See also

[exception Class](../standard-library/exception-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
