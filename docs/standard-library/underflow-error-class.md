---
description: "Learn more about: underflow_error Class"
title: "underflow_error Class"
ms.date: "11/04/2016"
f1_keywords: ["stdexcept/std::underflow_error"]
helpviewer_keywords: ["underflow_error class"]
ms.assetid: d632f1f9-9c6c-4954-b96b-03041bfab22d
---
# underflow_error Class

The class serves as the base class for all exceptions thrown to report an arithmetic underflow.

## Syntax

```cpp
class underflow_error : public runtime_error {
public:
    explicit underflow_error(const string& message);

    explicit underflow_error(const char *message);

};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](../standard-library/exception-class.md) and [`data`](../standard-library/basic-string-class.md#data).

## Example

```cpp
// underflow_error.cpp
// compile with: /EHsc /GR
#include <iostream>

using namespace std;

int main( )
{
   try
   {
      throw underflow_error( "The number's a bit small, captain!" );
   }
   catch ( exception &e ) {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid( e ).name( ) << endl;
   };
}
/* Output:
Caught: The number's a bit small, captain!
Type: class std::underflow_error
*/
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[runtime_error Class](../standard-library/runtime-error-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
