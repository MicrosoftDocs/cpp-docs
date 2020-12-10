---
description: "Learn more about: out_of_range Class"
title: "out_of_range Class"
ms.date: "11/04/2016"
f1_keywords: ["stdexcept/std::out_of_range"]
helpviewer_keywords: ["out_of_range class"]
ms.assetid: d0e14dc0-065e-4666-9ac9-51e52223c503
---
# out_of_range Class

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

The value returned by `what()` is a copy of `message.data()`. For more information, see [`what`](../standard-library/exception-class.md) and [`data`](../standard-library/basic-string-class.md#data).

## Example

```cpp
// out_of_range.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

using namespace std;

int main() {
// out_of_range
   try {
      string str( "Micro" );
      string rstr( "soft" );
      str.append( rstr, 5, 3 );
      cout << str << endl;
   }
   catch ( exception &e ) {
      cerr << "Caught: " << e.what( ) << endl;
   };
}
```

## Output

```cpp
Caught: invalid string position
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[logic_error Class](../standard-library/logic-error-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
