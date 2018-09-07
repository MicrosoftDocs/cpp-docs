---
title: "runtime_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["stdexcept/std::runtime_error"]
dev_langs: ["C++"]
helpviewer_keywords: ["runtime_error class"]
ms.assetid: 4d0227bf-847b-45a2-a320-2351ebf98368
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# runtime_error Class

The class serves as the base class for all exceptions thrown to report errors presumably detectable only when the program executes.

## Syntax

```cpp
class runtime_error : public exception {
public:
    explicit runtime_error(const string& message);

    explicit runtime_error(const char *message);

};
```

## Remarks

The value returned by [exception Class](../standard-library/exception-class.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#data).

## Example

```cpp
// runtime_error.cpp
// compile with: /EHsc /GR
#include <iostream>

using namespace std;

int main( )
{
// runtime_error
   try
   {
      locale loc( "test" );
   }
   catch ( exception &e )
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type " << typeid( e ).name( ) << endl;
   };
}
\* Output:
Caught bad locale name
Type class std::runtime_error
*\
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[exception Class](../standard-library/exception-class.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
