---
description: "Learn more about: length_error Class"
title: "length_error Class"
ms.date: "09/09/2021"
f1_keywords: ["stdexcept/std::length_error"]
helpviewer_keywords: ["length_error class"]
ms.assetid: d53c46c5-4626-400d-bd76-bf3e1e0f64ae
---
# length_error Class

The class serves as the base class for all exceptions thrown to report an attempt to generate an object too long to be specified.

## Syntax

```cpp
class length_error : public logic_error {
public:
    explicit length_error(const string& message);

    explicit length_error(const char *message);

};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](../standard-library/exception-class.md) and [`data`](../standard-library/basic-string-class.md#data).

## Example

```cpp
// length_error.cpp
// compile with: /EHsc
#include <cstddef>
#include <exception>
#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

int main()
{
   try
   {
      vector<int> v(100 + static_cast<size_t>(-1) / sizeof(int));
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
/* Output:
Caught: vector too long
Type: class std::length_error
*/
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[logic_error Class](../standard-library/logic-error-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
