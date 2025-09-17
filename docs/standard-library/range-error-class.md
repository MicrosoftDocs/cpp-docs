---
title: "range_error class"
description: "Learn more about: range_error class"
ms.date: 09/09/2021
f1_keywords: ["stdexcept/std::range_error"]
helpviewer_keywords: ["range_error class"]
---
# `range_error` class

The class serves as the base class for all exceptions thrown to report a range error (as in mathematics, not iterators).

## Syntax

```cpp
class range_error : public runtime_error {
public:
    explicit range_error(const string& message);
    explicit range_error(const char *message);
};
```

## Remarks

The value returned by [`what`](exception-class.md) is a copy of `message.data()`. For more information, see [`basic_string::data`](basic-string-class.md#data).

## Example

```cpp
// range_error.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>
#include <stdexcept>
#include <typeinfo>
using namespace std;

int main()
{
   try
   {
      throw range_error("The range is in error!");
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
```

```Output
Caught: The range is in error!
Type: class std::range_error
```

## Requirements

**Header:** `<stdexcept>`

**Namespace:** `std`

## See also

[`runtime_error` class](runtime-error-class.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)
