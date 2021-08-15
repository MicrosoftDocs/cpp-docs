---
title: "How to: Catch exceptions in native code thrown from MSIL"
description: "Examples of how to catch exceptions in native code thrown from MSIL."
ms.date: "11/04/2016"
helpviewer_keywords: ["exceptions, catching", "catching exceptions, thrown from MSIL", "MSIL, catching exceptions in native code"]
ms.assetid: c15afd2b-8505-43bf-8a4a-f1d41532a124
---
# How to: Catch exceptions in native code thrown from MSIL

In native code, you can catch native C++ exception from MSIL.  You can catch CLR exceptions with **`__try`** and **`__except`**.

For more information, see [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md) and [Modern C++ best practices for exceptions and error handling](../cpp/errors-and-exception-handling-modern-cpp.md).

## Example 1

The following sample defines a module with two functions, one that throws a native exception, and another that throws an MSIL exception.

```cpp
// catch_MSIL_in_native.cpp
// compile with: /clr /c
void Test() {
   throw ("error");
}

void Test2() {
   throw (gcnew System::Exception("error2"));
}
```

## Example 2

The following sample defines a module that catches a native and MSIL exception.

```cpp
// catch_MSIL_in_native_2.cpp
// compile with: /clr catch_MSIL_in_native.obj
#include <iostream>
using namespace std;
void Test();
void Test2();

void Func() {
   // catch any exception from MSIL
   // should not catch Visual C++ exceptions like this
   // runtime may not destroy the object thrown
   __try {
      Test2();
   }
   __except(1) {
      cout << "caught an exception" << endl;
   }

}

int main() {
   // catch native C++ exception from MSIL
   try {
      Test();
   }
   catch(char * S) {
      cout << S << endl;
   }
   Func();
}
```

```Output
error
caught an exception
```

## See also

[Exception handling](../extensions/exception-handling-cpp-component-extensions.md)
