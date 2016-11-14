---
title: "Writing an Exception Filter | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception handling, filters"
ms.assetid: 47fc832b-a707-4422-b60a-aaefe14189e5
caps.latest.revision: 9
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
# Writing an Exception Filter
You can handle an exception either by jumping to the level of the exception handler or by continuing execution. Instead of using the exception handler code to handle the exception and falling through, you can use *filter* to clean up the problem and then, by returning –1, resume normal flow without clearing the stack.  
  
> [!NOTE]
>  Some exceptions cannot be continued. If *filter* evaluates to –1 for such an exception, the system raises a new exception. When you call [RaiseException](http://msdn.microsoft.com/library/windows/desktop/ms680552), you determine whether the exception will continue.  
  
 For example, the following code uses a function call in the *filter* expression: this function handles the problem and then returns –1 to resume normal flow of control:  
  
```  
// exceptions_Writing_an_Exception_Filter.cpp  
#include <windows.h>  
int main() {  
   int Eval_Exception( int );  
  
   __try {}  
  
   __except ( Eval_Exception( GetExceptionCode( ))) {  
      ;  
   }  
  
}  
void ResetVars( int ) {}  
int Eval_Exception ( int n_except ) {  
   if ( n_except != STATUS_INTEGER_OVERFLOW &&   
      n_except != STATUS_FLOAT_OVERFLOW )   // Pass on most exceptions  
   return EXCEPTION_CONTINUE_SEARCH;  
  
   // Execute some code to clean up problem  
   ResetVars( 0 );   // initializes data to 0  
   return EXCEPTION_CONTINUE_EXECUTION;  
}  
```  
  
 It is a good idea to use a function call in the *filter* expression whenever *filter* needs to do anything complex. Evaluating the expression causes execution of the function, in this case, `Eval_Exception`.  
  
 Note the use of [GetExceptionCode](http://msdn.microsoft.com/library/windows/desktop/ms679356) to determine the exception. You must call this function inside the filter itself. `Eval_Exception` cannot call **GetExceptionCode**, but it must have the exception code passed to it.  
  
 This handler passes control to another handler unless the exception is an integer or floating-point overflow. If it is, the handler calls a function (`ResetVars` is only an example, not an API function) to reset some global variables. *Statement-block-2*, which in this example is empty, can never be executed because `Eval_Exception` never returns EXCEPTION_EXECUTE_HANDLER (1).  
  
 Using a function call is a good general-purpose technique for dealing with complex filter expressions. Two other C language features that are useful are:  
  
-   The conditional operator  
  
-   The comma operator  
  
 The conditional operator is frequently useful, because it can be used to check for a specific return code and then return one of two different values. For example, the filter in the following code recognizes the exception only if the exception is `STATUS_INTEGER_OVERFLOW`:  
  
```  
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ? 1 : 0 ) {  
```  
  
 The purpose of the conditional operator in this case is mainly to provide clarity, because the following code produces the same results:  
  
```  
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ) {  
```  
  
 The conditional operator is more useful in situations where you might want the filter to evaluate to –1, EXCEPTION_CONTINUE_EXECUTION.  
  
 The comma operator enables you to perform multiple, independent operations inside a single expression. The effect is roughly that of executing multiple statements and then returning the value of the last expression. For example, the following code stores the exception code in a variable and then tests it:  
  
```  
__except( nCode = GetExceptionCode(), nCode == STATUS_INTEGER_OVERFLOW )  
```  
  
## See Also  
 [Writing an Exception Handler](../cpp/writing-an-exception-handler.md)   
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)