---
title: "Handle structured exceptions in C++"
description: How to handle structured exceptions using the C++ exception handling model.
ms.date: "09/19/2019"
helpviewer_keywords: ["structured exception handling [C++], vs. C++ exception handling", "structured exception handling [C++], vs. unstructured", "exceptions [C++], wrapper class", "C++ exception handling [C++], vs. structured exception handling", "wrapper classes [C++], C exception"]
ms.assetid: f21d1944-4810-468e-b02a-9f77da4138c9
---
# Handle structured exceptions in C++

The major difference between C structured exception handling (SEH) and C++ exception handling is that the C++ exception handling model deals in types, while the C structured exception handling model deals with exceptions of one type; specifically, **`unsigned int`**. That is, C exceptions are identified by an unsigned integer value, whereas C++ exceptions are identified by data type. When a structured exception is raised in C, each possible handler executes a filter that examines the C exception context and determines whether to accept the exception, pass it to some other handler, or ignore it. When an exception is thrown in C++, it may be of any type.

A second difference is that the C structured exception handling model is referred to as *asynchronous*, because exceptions occur secondary to the normal flow of control. The C++ exception handling mechanism is fully *synchronous*, which means that exceptions occur only when they are thrown.

When you use the [/EHs or /EHsc](../build/reference/eh-exception-handling-model.md) compiler option, no C++ exception handlers handle structured exceptions. These exceptions are handled only by **`__except`** structured exception handlers or **`__finally`** structured termination handlers. For information, see [Structured Exception Handling (C/C++)](structured-exception-handling-c-cpp.md).

Under the [/EHa](../build/reference/eh-exception-handling-model.md) compiler option, if a C exception is raised in a C++ program, it can be handled by a structured exception handler with its associated filter or by a C++ **`catch`** handler, whichever is dynamically nearer to the exception context. For example, this sample C++ program raises a C exception inside a C++ **`try`** context:

## Example - Catch a C exception in a C++ catch block

```cpp
// exceptions_Exception_Handling_Differences.cpp
// compile with: /EHa
#include <iostream>

using namespace std;
void SEHFunc( void );

int main() {
   try {
      SEHFunc();
   }
   catch( ... ) {
      cout << "Caught a C exception."<< endl;
   }
}

void SEHFunc() {
   __try {
      int x, y = 0;
      x = 5 / y;
   }
   __finally {
      cout << "In finally." << endl;
   }
}
```

```Output
In finally.
Caught a C exception.
```

## C exception wrapper classes

In a simple example like the above, the C exception can be caught only by an ellipsis (**...**) **`catch`** handler. No information about the type or nature of the exception is communicated to the handler. While this method works, in some cases you may want to define a transformation between the two exception handling models so that each C exception is associated with a specific class. To transform one, you can define a C exception "wrapper" class, which can be used or derived from in order to attribute a specific class type to a C exception. By doing so, each C exception can be handled separately by a specific C++ **`catch`** handler, instead of all of them in a single handler.

Your wrapper class might have an interface consisting of some member functions that determine the value of the exception, and that access the extended exception context information provided by the C exception model. You might also want to define a default constructor and a constructor that accepts an **`unsigned int`** argument (to provide for the underlying C exception representation), and a bitwise copy constructor. Here is a possible implementation of a C exception wrapper class:

```cpp
// exceptions_Exception_Handling_Differences2.cpp
// compile with: /c
class SE_Exception {
private:
   SE_Exception() {}
   SE_Exception( SE_Exception& ) {}
   unsigned int nSE;
public:
   SE_Exception( unsigned int n ) : nSE( n ) {}
   ~SE_Exception() {}
   unsigned int getSeNumber() {
      return nSE;
   }
};
```

To use this class, install a custom C exception translation function that is called by the internal exception handling mechanism each time a C exception is thrown. Within your translation function, you can throw any typed exception (perhaps an `SE_Exception` type, or a class type derived from `SE_Exception`) that can be caught by an appropriate matching C++ **`catch`** handler. The translation function can instead return, which indicates that it did not handle the exception. If the translation function itself raises a C exception, [terminate](../c-runtime-library/reference/terminate-crt.md) is called.

To specify a custom translation function, call the [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) function with the name of your translation function as its single argument. The translation function that you write is called once for each function invocation on the stack that has **`try`** blocks. There is no default translation function; if you do not specify one by calling **_set_se_translator**, the C exception can only be caught by an ellipsis **`catch`** handler.

## Example - Use a custom translation function

For example, the following code installs a custom translation function, and then raises a C exception that is wrapped by the `SE_Exception` class:

```cpp
// exceptions_Exception_Handling_Differences3.cpp
// compile with: /EHa
#include <stdio.h>
#include <eh.h>
#include <windows.h>

class SE_Exception {
private:
   SE_Exception() {}
   unsigned int nSE;
public:
   SE_Exception( SE_Exception& e) : nSE(e.nSE) {}
   SE_Exception(unsigned int n) : nSE(n) {}
   ~SE_Exception() {}
   unsigned int getSeNumber() { return nSE; }
};

void SEFunc() {
    __try {
        int x, y = 0;
        x = 5 / y;
    }
    __finally {
        printf_s( "In finally\n" );
    }
}

void trans_func( unsigned int u, _EXCEPTION_POINTERS* pExp ) {
    printf_s( "In trans_func.\n" );
    throw SE_Exception( u );
}

int main() {
    _set_se_translator( trans_func );
    try {
        SEFunc();
    }
    catch( SE_Exception e ) {
        printf_s( "Caught a __try exception with SE_Exception.\n" );
        printf_s( "nSE = 0x%x\n", e.getSeNumber() );
    }
}
```

```Output
In trans_func.
In finally
Caught a __try exception with SE_Exception.
nSE = 0xc0000094
```

## See also

[Mixing C (Structured) and C++ exceptions](../cpp/mixing-c-structured-and-cpp-exceptions.md)
