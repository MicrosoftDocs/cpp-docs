---
description: "Learn more about: overflow_error class"
title: "overflow_error class"
ms.date: "09/09/2021"
f1_keywords: ["stdexcept/std::overflow_error"]
helpviewer_keywords: ["overflow_error class"]
ms.assetid: bae7128d-e36b-4a45-84f1-2f89da441d20
---
# `overflow_error` class

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

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](exception-class.md) and [`data`](basic-string-class.md#data).

## Example

```cpp
// overflow_error.cpp
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
      bitset<33> b;
      b[32] = 1;
      b[0] = 1;
      unsigned long x = b.to_ulong();
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}
```

```Output
Caught: bitset overflow
Type: class std::overflow_error
```

## Requirements

**Header:** `<stdexcept>`

**Namespace:** `std`

## See also

[`runtime_error` class](runtime-error-class.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)
