---
description: "Learn more about how to write a structured exception filter."
title: "Writing an exception filter"
ms.date: 12/16/2020
helpviewer_keywords: ["exception handling [C++], filters"]
---
# Writing an exception filter

You can handle an exception either by jumping to the level of the exception handler or by continuing execution. Instead of using the exception handler code to handle the exception and falling through, you can use a *filter* expression to clean up the problem. Then, by returning `EXCEPTION_CONTINUE_EXECUTION` (-1), you may resume normal flow without clearing the stack.

> [!NOTE]
> Some exceptions cannot be continued. If *filter* evaluates to -1 for such an exception, the system raises a new exception. When you call [`RaiseException`](/windows/win32/api/errhandlingapi/nf-errhandlingapi-raiseexception), you determine whether the exception will continue.

For example, the following code uses a function call in the *filter* expression: this function handles the problem and then returns -1 to resume normal flow of control:

```cpp
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

It's a good idea to use a function call in the *filter* expression whenever *filter* needs to do anything complex. Evaluating the expression causes execution of the function, in this case, `Eval_Exception`.

Note the use of [`GetExceptionCode`](/windows/win32/Debug/getexceptioncode) to determine the exception. This function must be called inside the filter expression of the **`__except`** statement. `Eval_Exception` can't call `GetExceptionCode`, but it must have the exception code passed to it.

This handler passes control to another handler unless the exception is an integer or floating-point overflow. If it is, the handler calls a function (`ResetVars` is only an example, not an API function) to reset some global variables. The **`__except`** statement block, which in this example is empty, can never be executed because `Eval_Exception` never returns `EXCEPTION_EXECUTE_HANDLER` (1).

Using a function call is a good general-purpose technique for dealing with complex filter expressions. Two other C language features that are useful are:

- The conditional operator

- The comma operator

The conditional operator is frequently useful here. It can be used to check for a specific return code and then return one of two different values. For example, the filter in the following code recognizes the exception only if the exception is `STATUS_INTEGER_OVERFLOW`:

```cpp
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ? 1 : 0 ) {
```

The purpose of the conditional operator in this case is mainly to provide clarity, because the following code produces the same results:

```cpp
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ) {
```

The conditional operator is more useful in situations where you might want the filter to evaluate to -1, `EXCEPTION_CONTINUE_EXECUTION`.

The comma operator lets you execute multiple expressions in sequence. It then returns the value of the last expression. For example, the following code stores the exception code in a variable and then tests it:

```cpp
__except( nCode = GetExceptionCode(), nCode == STATUS_INTEGER_OVERFLOW )
```

## See also

[Writing an exception handler](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
