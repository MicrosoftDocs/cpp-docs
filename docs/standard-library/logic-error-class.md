---
description: "Learn more about: logic_error Class"
title: "logic_error Class"
ms.date: "11/04/2016"
f1_keywords: ["stdexcept/std::logic_error"]
helpviewer_keywords: ["logic_error class"]
ms.assetid: b290d73d-94e1-4288-af86-2bb5d71f677a
---
# logic_error Class

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

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](../standard-library/exception-class.md) and [`data`](../standard-library/basic-string-class.md#data).

## Example

```cpp
// logic_error.cpp
// compile with: /EHsc /GR
#include <iostream>
using namespace std;

int main( )
{
   try
   {
      throw logic_error( "logic error" );
   }
   catch ( exception &e )
   {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid( e ).name( ) << endl;
   };
}
```

```Output
Caught: logic error
Type: class std::logic_error
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[exception Class](../standard-library/exception-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
