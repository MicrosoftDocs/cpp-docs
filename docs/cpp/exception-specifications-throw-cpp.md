---
title: "Exception Specifications (throw) (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-language"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exceptions, exception specifications"
  - "throwing exceptions, throw keyword"
  - "C++ exception handling, throwing exceptions"
  - "throw keyword [C++], throw() vs. throw(...)"
  - "throw keyword [C++], exception specifications"
ms.assetid: 4d3276df-6f31-4c7f-8cab-b9d2d003a629
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Exception Specifications (throw, noexcept) (C++)
Exception specifications are a C++ language feature that indicate the programmer's intent about the exception types that can be propagated by a function. You can specify that a function may or may not exit by an exception by using an *exception specification*. The compiler can use this information to optimize calls to the function, and to terminate the program if an unexpected exception escapes the function. There are two kinds of exception specification. The *noexcept specification* is new in C++11. It specifies whether the set of potential exceptions that can escape the function is empty. The *dynamic exception specification*, or `throw(optional_type_list)` specification, is deprecated in C++11 and is only partially supported by Visual Studio. This exception specification was designed to provide summary information about what exceptions can be thrown out of a function, but in practice it was found to be problematic. The one dynamic exception specification that did prove to be somewhat useful was the unconditional `throw()` specification. For example, the function declaration:  
  
```cpp  
void MyFunction(int i) throw();  
```  
  
 tells the compiler that the function does not throw any exceptions. It is the equivalent to using [__declspec(nothrow)](../cpp/nothrow-cpp.md). Its use is considered optional.  
  
In the ISO C++11 Standard, the [noexcept](../cpp/noexcept-cpp.md) operator was introduced as a replacement. It is supported in Visual Studio 2015 and later. Whenever possible, use a `noexcept` expression to specify whether a function might throw exceptions. For example, use this function declaration instead of the one above:  
  
```cpp  
void MyFunction(int i) noexcept;  
```  
  
While Visual C++ fully supports the `noexcept` expression, it departs from the ISO C++ Standard in its implementation of dynamic exception specifications.  The following table summarizes the Visual C++ implementation of exception specifications:  
  
|Exception specification|Meaning|  
|-----------------------------|-------------|  
|`noexcept`<br/>`noexcept(true)`<br/>`throw()`|The function does not throw an exception. However, if an exception is thrown out of a function marked `throw()`, the Visual C++ compiler calls `std::terminate`, not `std::unexpected`. See [std::unexpected](../c-runtime-library/reference/unexpected-crt.md) for more information. If a function is marked `noexcept`, `noexcept(true)`, or `throw()`, the Visual C++ compiler assumes that the function does not throw C++ exceptions and generates code accordingly. Because code optimizations might be performed by the C++ compiler based on the assumption that the function does not throw any C++ exceptions, if a function does throw an exception, the program may not execute correctly.|  
|`noexcept(false)`<br/>`throw(...)`<br/>No specification|The function can throw an exception of any type.|  
|`throw(type)`|The function can throw an exception of type `type`. In Visual C++, this syntax is accepted, but it is interpreted as `noexcept(false)`.|  
  
 If exception handling is used in an application, there must be a function in the call stack that handles thrown exceptions before they exit the outer scope of a function marked `noexcept`, `noexcept(true)`, or `throw()`. If any functions called between the one that throws an exception and the one that handles the exception are specified as `noexcept`, `noexcept(true)`, or `throw()`, the program is terminated when the noexcept function propagates the exception.  
  
 The exception behavior of a function depends on the following factors:  
  
-   Whether you are compiling the function under C or C++.  
  
-   Which [/EH](../build/reference/eh-exception-handling-model.md) compiler option you use.  
  
-   Whether you explicitly specify the exception specification.  
  
 Explicit exception specifications are not allowed on C functions. A C function is assumed not to throw exceptions under **/EHsc**, and may throw structured exceptions under **/EHs**, **/EHa**, or **/EHac**.  
  
 The following table summarizes whether a C++ function may potentially throw under various compiler exception handling options:  
  
|Function|/EHsc|/EHs|/EHa|/EHac|  
|--------------|------------|-----------|-----------|------------|  
|C++ function with no exception specification|Yes|Yes|Yes|Yes|  
|C++ function with `noexcept`, `noexcept(true)`, or `throw()` exception specification|No|No|Yes|Yes|  
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
  
## See Also  
 [try, throw, and catch Statements (C++)](../cpp/try-throw-and-catch-statements-cpp.md)   
 [C++ Exception Handling](../cpp/cpp-exception-handling.md)