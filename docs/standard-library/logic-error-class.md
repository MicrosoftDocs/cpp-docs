---
title: "logic_error class"
description: "Learn more about: logic_error class"
ms.date: 09/09/2021
f1_keywords: ["stdexcept/std::logic_error"]
helpviewer_keywords: ["logic_error class"]
---
# `logic_error` class

The class serves as the base class for all exceptions thrown to report errors presumably detectable before the program executes, such as violations of logical preconditions.

## Syntax

```cpp
class logic_error : public exception {
public:
    explicit logic_error(const string& message);

    explicit logic_error(const char *message);
};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](exception-class.md) and [`data`](basic-string-class.md#data).

## Example

```cpp
// logic_error.cpp
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
      throw logic_error("Does not compute!");
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
```

```Output
Caught: Does not compute!
Type: class std::logic_error
```

## Requirements

**Header:** `<stdexcept>`

**Namespace:** `std`

## See also

[`exception` class](exception-class.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)
