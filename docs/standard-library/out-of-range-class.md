---
title: "out_of_range class"
description: "Learn more about: out_of_range class"
ms.date: 09/09/2021
f1_keywords: ["stdexcept/std::out_of_range"]
helpviewer_keywords: ["out_of_range class"]
---
# `out_of_range` class

The class serves as the base class for all exceptions thrown to report an argument that is out of its valid range.

## Syntax

```cpp
class out_of_range : public logic_error {
public:
    explicit out_of_range(const string& message);

    explicit out_of_range(const char *message);
};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](exception-class.md) and [`data`](basic-string-class.md#data).

## Example

```cpp
// out_of_range.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
   try
   {
      string str("Micro");
      string rstr("soft");
      str.append(rstr, 5, 3);
      cout << str << endl;
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
```

```Output
Caught: invalid string position
Type: class std::out_of_range
```

## Requirements

**Header:** `<stdexcept>`

**Namespace:** `std`

## See also

[`logic_error` class](logic-error-class.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)
