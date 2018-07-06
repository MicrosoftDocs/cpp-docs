---
title: "Unhandled C++ Exceptions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["event handlers [C++], unhandled exceptions", "catch keyword [C++], handler not found", "exceptions [C++], unhandled", "C++ exception handling, unhandled exceptions", "unhandled exceptions [C++]"]
ms.assetid: 13f09c53-9254-4407-9db9-14e730e047cc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Unhandled C++ Exceptions
If a matching handler (or ellipsis **catch** handler) cannot be found for the current exception, the predefined `terminate` run-time function is called. (You can also explicitly call `terminate` in any of your handlers.) The default action of `terminate` is to call `abort`. If you want `terminate` to call some other function in your program before exiting the application, call the `set_terminate` function with the name of the function to be called as its single argument. You can call `set_terminate` at any point in your program. The `terminate` routine always calls the last function given as an argument to `set_terminate`.  
  
## Example  
 The following example throws a `char *` exception, but does not contain a handler designated to catch exceptions of type `char *`. The call to `set_terminate` instructs `terminate` to call `term_func`.  
  
```cpp 
// exceptions_Unhandled_Exceptions.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
void term_func() {  
   cout << "term_func was called by terminate." << endl;  
   exit( -1 );  
}  
int main() {  
   try  
   {  
      set_terminate( term_func );  
      throw "Out of memory!"; // No catch handler for this exception  
   }  
   catch( int )  
   {  
      cout << "Integer exception raised." << endl;  
   }  
   return 0;  
}  
```  
  
## Output  
  
```Output  
term_func was called by terminate.  
```  
  
 The `term_func` function should terminate the program or current thread, ideally by calling `exit`. If it doesn't, and instead returns to its caller, `abort` is called.  
  
## See Also  
 [C++ Exception Handling](../cpp/cpp-exception-handling.md)