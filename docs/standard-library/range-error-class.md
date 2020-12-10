---
description: "Learn more about: range_error Class"
title: "range_error Class"
ms.date: "08/14/2018"
f1_keywords: ["stdexcept/std::range_error"]
helpviewer_keywords: ["range_error class"]
ms.assetid: 8afb3e88-fc49-4213-b096-ed63d7aea37c
---
# range_error Class

The class serves as the base class for all exceptions thrown to report a range error.

## Syntax

```cpp
class range_error : public runtime_error {
public:
    explicit range_error(const string& message);
    explicit range_error(const char *message);
};
```

## Remarks

The value returned by [what](../standard-library/exception-class.md) is a copy of `message.data`. For more information, see [basic_string::data](../standard-library/basic-string-class.md#data).

## Example

```cpp
// range_error.cpp
// compile with: /EHsc /GR
#include <iostream>
using namespace std;
int main()
{
   try
   {
      throw range_error( "The range is in error!" );
   }
   catch (range_error &e)
   {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid( e ).name( ) << endl;
   };
}
/* Output:
Caught: The range is in error!
Type: class std::range_error
*/
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[runtime_error Class](../standard-library/runtime-error-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
