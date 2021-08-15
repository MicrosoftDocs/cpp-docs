---
description: "Learn more about: Exception specifications (throw, noexcept) (C++)"
title: "Exception specifications (throw, noexcept) (C++)"
ms.date: "01/18/2018"
helpviewer_keywords: ["exceptions [C++], exception specifications", "throwing exceptions [C++], throw keyword", "C++ exception handling [C++], throwing exceptions", "throw keyword [C++]", "noexcept keyword [C++]"]
ms.assetid: 4d3276df-6f31-4c7f-8cab-b9d2d003a629
---
# Exception specifications (throw, noexcept) (C++)

Exception specifications are a C++ language feature that indicate the programmer's intent about the exception types that can be propagated by a function. You can specify that a function may or may not exit by an exception by using an *exception specification*. The compiler can use this information to optimize calls to the function, and to terminate the program if an unexpected exception escapes the function.

Prior to C++17 there were two kinds of exception specification. The *noexcept specification* was new in C++11. It specifies whether the set of potential exceptions that can escape the function is empty. The *dynamic exception specification*, or `throw(optional_type_list)` specification, was deprecated in C++11 and removed in C++17, except for `throw()`, which is an alias for `noexcept(true)`. This exception specification was designed to provide summary information about what exceptions can be thrown out of a function, but in practice it was found to be problematic. The one dynamic exception specification that did prove to be somewhat useful was the unconditional `throw()` specification. For example, the function declaration:

```cpp
void MyFunction(int i) throw();
```

tells the compiler that the function does not throw any exceptions. However, in **/std:c++14** mode this could lead to undefined behavior if the function does throw an exception. Therefore we recommend using the [noexcept](../cpp/noexcept-cpp.md) operator instead of the one above:

```cpp
void MyFunction(int i) noexcept;
```

The following table summarizes the Microsoft C++ implementation of exception specifications:

|Exception specification|Meaning|
|-----------------------------|-------------|
|**`noexcept`**<br/>`noexcept(true)`<br/>`throw()`|The function does not throw an exception. In [/std:c++14](../build/reference/std-specify-language-standard-version.md) mode (which is the default), **`noexcept`** and `noexcept(true)` are equivalent. When an exception is thrown from a function that is declared **`noexcept`** or `noexcept(true)`, [std::terminate](../standard-library/exception-functions.md#terminate) is invoked. When an exception is thrown from a function declared as `throw()` in **/std:c++14** mode, the result is undefined behavior. No specific function is invoked. This is a divergence from the C++14 standard, which required the compiler to invoke [std::unexpected](../standard-library/exception-functions.md#unexpected).  <br/> **Visual Studio 2017 version 15.5 and later**: In **/std:c++17** mode , **`noexcept`**, `noexcept(true)`, and `throw()` are all equivalent. In **/std:c++17** mode, `throw()` is an alias for `noexcept(true)`. In **/std:c++17** mode, when an exception is thrown from a function declared with any of these specifications, [std::terminate](../standard-library/exception-functions.md#terminate)  is invoked as required by the C++17 standard.|
|`noexcept(false)`<br/>`throw(...)`<br/>No specification|The function can throw an exception of any type.|
|`throw(type)`| (**C++14 and earlier**) The function can throw an exception of type `type`. The compiler accepts the syntax, but interprets it as `noexcept(false)`. In **/std:c++17** mode the compiler issues warning C5040.|

If exception handling is used in an application, there must be a function in the call stack that handles thrown exceptions before they exit the outer scope of a function marked **`noexcept`**, `noexcept(true)`, or `throw()`. If any functions called between the one that throws an exception and the one that handles the exception are specified as **`noexcept`**, `noexcept(true)` (or `throw()` in **/std:c++17** mode), the program is terminated when the noexcept function propagates the exception.

The exception behavior of a function depends on the following factors:

- Which [language standard compilation mode](../build/reference/std-specify-language-standard-version.md) is set.
- Whether you are compiling the function under C or C++.

- Which [/EH](../build/reference/eh-exception-handling-model.md) compiler option you use.

- Whether you explicitly specify the exception specification.

Explicit exception specifications are not allowed on C functions. A C function is assumed not to throw exceptions under **/EHsc**, and may throw structured exceptions under **/EHs**, **/EHa**, or **/EHac**.

The following table summarizes whether a C++ function may potentially throw under various compiler exception handling options:

|Function|/EHsc|/EHs|/EHa|/EHac|
|--------------|------------|-----------|-----------|------------|
|C++ function with no exception specification|Yes|Yes|Yes|Yes|
|C++ function with **`noexcept`**, `noexcept(true)`, or `throw()` exception specification|No|No|Yes|Yes|
|C++ function with `noexcept(false)`, `throw(...)`, or `throw(type)` exception specification|Yes|Yes|Yes|Yes|

## Example

```cpp
// exception_specification.cpp
// compile with: /EHs
#include <stdio.h>

void handler() {
   printf_s("in handler\n");
}

void f1(void) throw(int) {
   printf_s("About to throw 1\n");
   if (1)
      throw 1;
}

void f5(void) throw() {
   try {
      f1();
   }
   catch(...) {
      handler();
    }
}

// invalid, doesn't handle the int exception thrown from f1()
// void f3(void) throw() {
//   f1();
// }

void __declspec(nothrow) f2(void) {
   try {
      f1();
   }
   catch(int) {
      handler();
    }
}

// only valid if compiled without /EHc
// /EHc means assume extern "C" functions don't throw exceptions
extern "C" void f4(void);
void f4(void) {
   f1();
}

int main() {
   f2();

   try {
      f4();
   }
   catch(...) {
      printf_s("Caught exception from f4\n");
   }
   f5();
}
```

```Output
About to throw 1
in handler
About to throw 1
Caught exception from f4
About to throw 1
in handler
```

## See also

[try, throw, and catch Statements (C++)](../cpp/try-throw-and-catch-statements-cpp.md)<br/>
[Modern C++ best practices for exceptions and error handling](errors-and-exception-handling-modern-cpp.md)
