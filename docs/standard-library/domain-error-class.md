---
title: "domain_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["stdexcept/std::domain_error"]
dev_langs: ["C++"]
helpviewer_keywords: ["domain_error class"]
ms.assetid: a1d8245d-61c2-4d1e-973f-073bd5dd5fa3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# domain_error Class

The class serves as the base class for all exceptions thrown to report a domain error.

## Syntax

```cpp
class domain_error : public logic_error {
public:
    explicit domain_error(const string& message);

    explicit domain_error(const char *message);

};
```

## Remarks

The value returned by [what](../standard-library/exception-class.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#data).

## Example

```cpp
// domain_error.cpp
// compile with: /EHsc /GR
#include <iostream>

using namespace std;

int main( )
{
   try
   {
      throw domain_error( "Your domain is in error!" );
   }
   catch (exception &e)
   {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid(e).name( ) << endl;
   };
}
\* Output:
Caught: Your domain is in error!
Type: class std::domain_error
*\
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[logic_error Class](../standard-library/logic-error-class.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
