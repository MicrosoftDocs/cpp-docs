---
description: "Learn more about: invalid_argument Class"
title: "invalid_argument Class"
ms.date: "09/09/2021"
f1_keywords: ["stdexcept/std::invalid_argument"]
helpviewer_keywords: ["invalid_argument class"]
ms.assetid: af6c227d-ad7c-4e63-9dee-67af81d83506
---
# invalid_argument Class

The class serves as the base class for all exceptions thrown to report an invalid argument.

## Syntax

```cpp
class invalid_argument : public logic_error {
public:
    explicit invalid_argument(const string& message);

    explicit invalid_argument(const char *message);

};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](../standard-library/exception-class.md) and [`data`](../standard-library/basic-string-class.md#data).

## Example

```cpp
// invalid_argument.cpp
// compile with: /EHsc
#include <bitset>
#include <exception>
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
   try
   {
      bitset<32> b("11001010101100001b100101010110000");
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
/* Output:
Caught: invalid bitset char
Type: class std::invalid_argument
*/
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[logic_error Class](../standard-library/logic-error-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
