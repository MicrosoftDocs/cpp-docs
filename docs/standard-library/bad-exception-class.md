---
description: "Learn more about: bad_exception Class"
title: "bad_exception Class"
ms.date: "11/04/2016"
f1_keywords: ["exception/std::bad_exception"]
helpviewer_keywords: ["bad_exception class"]
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
---
# bad_exception Class

The class describes an exception that can be thrown from an unexpected handler.

## Syntax

```cpp
class bad_exception : public exception {};

bad_exception();
bad_exception(const bad_exception&);
bad_exception& operator=(const bad_exception&);
const char* what() const override;
```

## Remarks

[unexpected](../standard-library/exception-functions.md#unexpected) will throw a `bad_exception` instead of terminating or instead of calling another function specified with [set_unexpected](../standard-library/exception-functions.md#set_unexpected) if `bad_exception` is included in the throw list of a function.

The value returned by `what` is an implementation-defined C string. None of the member functions throw any exceptions.

For a list of members inherited by the `bad_exception` class, see [exception Class](../standard-library/exception-class.md).

## Example

See [set_unexpected](../standard-library/exception-functions.md#set_unexpected) for an example of the use of [unexpected](../standard-library/exception-functions.md#unexpected) throwing a `bad_exception`.
