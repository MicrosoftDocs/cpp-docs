---
title: "underflow_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["stdexcept/std::underflow_error"]
dev_langs: ["C++"]
helpviewer_keywords: ["underflow_error class"]
ms.assetid: d632f1f9-9c6c-4954-b96b-03041bfab22d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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

The value returned by [what](../standard-library/exception-class.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#data).

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
\* Output:
Caught: The number's a bit small, captain!
Type: class std::underflow_error
*\
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[runtime_error Class](../standard-library/runtime-error-class.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
