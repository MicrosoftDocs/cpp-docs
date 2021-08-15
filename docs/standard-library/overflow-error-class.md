---
description: "Learn more about: overflow_error Class"
title: "overflow_error Class"
ms.date: "11/04/2016"
f1_keywords: ["stdexcept/std::overflow_error"]
helpviewer_keywords: ["overflow_error class"]
ms.assetid: bae7128d-e36b-4a45-84f1-2f89da441d20
---
# overflow_error Class

The class serves as the base class for all exceptions thrown to report an arithmetic overflow.

## Syntax

```cpp
class overflow_error : public runtime_error {
public:
    explicit overflow_error(const string& message);

    explicit overflow_error(const char *message);

};
```

## Remarks

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](../standard-library/exception-class.md) and [`data`](../standard-library/basic-string-class.md#data).

## Example

```cpp
// overflow_error.cpp
// compile with: /EHsc /GR
#include <bitset>
#include <iostream>

using namespace std;

int main( )
{
   try
   {
      bitset< 33 > bitset;
      bitset[32] = 1;
      bitset[0] = 1;
      unsigned long x = bitset.to_ulong( );
   }
   catch ( exception &e )
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type " << typeid( e ).name( ) << endl;
   };
}
/* Output:
Caught bitset<N> overflow
Type class std::overflow_error
*/
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[runtime_error Class](../standard-library/runtime-error-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
