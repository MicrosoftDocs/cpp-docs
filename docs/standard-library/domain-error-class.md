---
title: "domain_error class"
description: "Learn more about: domain_error class"
ms.date: 09/09/2021
f1_keywords: ["stdexcept/std::domain_error"]
helpviewer_keywords: ["domain_error class"]
---
# `domain_error` class

The class serves as the base class for all exceptions thrown to report a domain error (as in mathematics, not networking).

## Syntax

```cpp
class domain_error : public logic_error {
public:
    explicit domain_error(const string& message);

    explicit domain_error(const char *message);
};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](exception-class.md) and [`data`](basic-string-class.md#data).

`domain_error` isn't thrown by any functions in the Microsoft implementation of the C++ Standard Library, but it might be thrown by third-party libraries or user code.

## Example

```cpp
// domain_error.cpp
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
      throw domain_error("Your domain is in error!");
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
```

```Output
Caught: Your domain is in error!
Type: class std::domain_error
```

## Requirements

**Header:** `<stdexcept>`

**Namespace:** `std`

## See also

[`logic_error` class](logic-error-class.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)
