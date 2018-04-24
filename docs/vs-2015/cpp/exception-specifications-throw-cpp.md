---
title: "Exception Specifications (throw) (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
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
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Exception Specifications (throw) (C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Exception Specifications (throw) (C++)](https://docs.microsoft.com/cpp/cpp/exception-specifications-throw-cpp).  
  
Exception specifications are a C++ language feature that is deprecated in C++11. They were designed to provide summary information about what exceptions can be thrown out of a function, but in practice they were found to be problematic. The one exception specification that did prove to be somewhat useful was the throw() specification. For example:  
  
```  
void MyFunction(int i) throw();  
```  
  
 tells the compiler that the function does not throw any exceptions. It is the equivalent to using [__declspec(nothrow)](../cpp/nothrow-cpp.md). Its use is considered optional.  
  
 **(C++11)** In the ISO C++11 Standard, [noexcept](../cpp/noexcept-cpp.md) operator was introduced and is supported in Visual Studio 2015 and later. Whenever possible, use `noexcept` to specify whether a function might throw exceptions.  
  
 Visual C++ departs from the ISO C++ Standard in its implementation of exception specifications.  The following table summarizes the Visual C++ implementation of exception specifications:  
  
|Exception specification|Meaning|  
|-----------------------------|-------------|  
|throw()|The function does not throw an exception. However, if an exception is thrown out of a function marked throw(), the Visual C++ compiler will not call unexpected (see [unexpected](../c-runtime-library/reference/unexpected-crt.md) and [unexpected](http://msdn.microsoft.com/library/3d12f205-dc5d-4951-a3bc-61c0388835c3) for more information). If a function is marked with throw(), the Visual C++ compiler will assume that the function does not throw C++ exceptions and generate code accordingly. Due to code optimizations that might be performed by the C++ compiler (based on the assumption that the function does not throw any C++ exceptions) if a function does throw an exception, the program may not execute correctly.|  
|throw(...)|The function can throw an exception.|  
|throw(`type`)|The function can throw an exception of type `type`. However, in Visual C++ .NET, this is interpreted as throw(...).  See [Function Exception Specifiers](../misc/15-4-function-exception-specifiers.md).|  
  
 If exception handling is used in an application, there must be one or more functions that handle thrown exceptions. Any functions called between the one that throws an exception and the one that handles the exception must be capable of throwing the exception.  
  
 The throw behavior of a function depends on the following factors:  
  
-   Whether you are compiling the function under C or C++.  
  
-   Which [/EH](../build/reference/eh-exception-handling-model.md) compiler option you use.  
  
-   Whether you explicitly specify the exception specification.  
  
 Explicit exception specifications are not allowed on C functions.  
  
 The following table summarizes the throw behavior of a function:  
  
|Function|/EHsc|/EHs|/EHa|/EHac|  
|--------------|------------|-----------|-----------|------------|  
|C function|throw()|throw(...)|throw(...)|throw(...)|  
|C++ function with no exception specification|throw(...)|throw(...)|throw(...)|throw(...)|  
|C++ function with throw() exception specification|throw()|throw()|throw(...)|throw(...)|  
|C++ function with throw(...) exception specification|throw(...)|throw(...)|throw(...)|throw(...)|  
|C++ function with throw(`type`) exception specification|throw(...)|throw(...)|throw(...)|throw(...)|  
  
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





