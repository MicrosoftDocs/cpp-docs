---
description: "Learn more about: runtime_error class"
title: "runtime_error class"
ms.date: "09/09/2021"
f1_keywords: ["stdexcept/std::runtime_error"]
helpviewer_keywords: ["runtime_error class"]
ms.assetid: 4d0227bf-847b-45a2-a320-2351ebf98368
---
# `runtime_error` class

The class serves as the base class for all exceptions thrown to report errors presumably detectable only when the program executes.

## Syntax

```cpp
class runtime_error : public exception {
public:
    explicit runtime_error(const string& message);

    explicit runtime_error(const char *message);

};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](../standard-library/exception-class.md) and [`data`](../standard-library/basic-string-class.md#data).

## Example

```cpp
// runtime_error.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>
#include <locale>
#include <typeinfo>
using namespace std;

int main()
{
   try
   {
      locale loc("test");
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
```

```Output
Caught: bad locale name
Type: class std::runtime_error
```

## Requirements

**Header:** `<stdexcept>`

**Namespace:** `std`

## See also

[`exception` class](../standard-library/exception-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
