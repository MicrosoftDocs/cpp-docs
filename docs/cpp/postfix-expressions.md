---
description: "Learn more about: Postfix Expressions"
title: "Postfix Expressions"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [C++], postfix", "postfix expressions", "expressions [C++], postfix"]
ms.assetid: 7ac62a57-06df-422f-b012-a75b37d7cb9b
---
# Postfix Expressions

Postfix expressions consist of primary expressions or expressions in which postfix operators follow a primary expression. The postfix operators are listed in the following table.

### Postfix Operators

|Operator Name|Operator Notation|
|-------------------|-----------------------|
|[Subscript operator](../cpp/subscript-operator.md)|**[ ]**|
|[Function call operator](../cpp/function-call-operator-parens.md)|**( )**|
|[Explicit type conversion operator](../cpp/explicit-type-conversion-operator-parens.md)|*type-name* **( )**|
|[Member access operator](../cpp/member-access-operators-dot-and.md)|**.** or **->**|
|[Postfix increment operator](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|**++**|
|[Postfix decrement operator](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|**--**|

The following syntax describes possible postfix expressions:

```
primary-expression
postfix-expression[expression]postfix-expression(expression-list)simple-type-name(expression-list)postfix-expression.namepostfix-expression->namepostfix-expression++postfix-expression--cast-keyword < typename > (expression )typeid ( typename )
```

The *postfix-expression* above may be a [primary expression](primary-expressions.md) or another postfix expression. Postfix expressions group left to right, thus allowing the expressions to be chained together as follows:

```cpp
func(1)->GetValue()++
```

In the above expression, `func` is a primary expression, `func(1)` is a function postfix expression, `func(1)->GetValue` is a postfix expression specifying a member of the class, `func(1)->GetValue()` is another function postfix expression, and the entire expression is a postfix expression incrementing the return value of GetValue.  The meaning of the expression as a whole is "call func passing 1 as an argument and get a pointer to a class as a return value.  Then call `GetValue()` on that class, then increment the value returned.

The expressions listed above are assignment expressions, meaning that the result of these expressions must be an r-value.

The postfix expression form

```cpp
simple-type-name ( expression-list )
```

indicates the invocation of the constructor.  If the simple-type-name is a fundamental type, the expression list must be a single expression, and this expression indicates a cast of the expression's value to the fundamental type.  This type of cast expression mimics a constructor.  Because this form allows fundamental types and classes to be constructed using the same syntax, this form is especially useful when defining template classes.

The *cast-keyword* is one of **`dynamic_cast`**, **`static_cast`** or **`reinterpret_cast`**.  More information may be found in [`dynamic_cast`](dynamic-cast-operator.md), [`static_cast`](static-cast-operator.md) and [`reinterpet_cast`](reinterpret-cast-operator.md).

The **`typeid`** operator is considered a postfix expression.  See **typeid operator**.

## Formal and actual arguments

Calling programs pass information to called functions in "actual arguments." The called functions access the information using corresponding "formal arguments."

When a function is called, the following tasks are performed:

- All actual arguments (those supplied by the caller) are evaluated. There is no implied order in which these arguments are evaluated, but all arguments are evaluated and all side effects completed prior to entry to the function.

- Each formal argument is initialized with its corresponding actual argument in the expression list. (A formal argument is an argument that is declared in the function header and used in the body of a function.) Conversions are done as if by initialization — both standard and user-defined conversions are performed in converting an actual argument to the correct type. The initialization performed is illustrated conceptually by the following code:

    ```cpp
    void Func( int i ); // Function prototype
    ...
    Func( 7 );          // Execute function call
    ```

   The conceptual initializations prior to the call are:

    ```cpp
    int Temp_i = 7;
    Func( Temp_i );
    ```

   Note that the initialization is performed as if using the equal-sign syntax instead of the parentheses syntax. A copy of `i` is made prior to passing the value to the function. (For more information, see [Initializers](../cpp/initializers.md) and [Conversions](../cpp/user-defined-type-conversions-cpp.md)).

   Therefore, if the function prototype (declaration) calls for an argument of type **`long`**, and if the calling program supplies an actual argument of type **`int`**, the actual argument is promoted using a standard type conversion to type **`long`** (see [Standard Conversions](../cpp/standard-conversions.md)).

   It is an error to supply an actual argument for which there is no standard or user-defined conversion to the type of the formal argument.

   For actual arguments of class type, the formal argument is initialized by calling the class's constructor. (See [Constructors](../cpp/constructors-cpp.md) for more about these special class member functions.)

- The function call is executed.

The following program fragment demonstrates a function call:

```cpp
// expre_Formal_and_Actual_Arguments.cpp
void func( long param1, double param2 );

int main()
{
    long i = 1;
    double j = 2;

    // Call func with actual arguments i and j.
    func( i, j );
}

// Define func with formal parameters param1 and param2.
void func( long param1, double param2 )
{
}
```

When `func` is called from main, the formal parameter `param1` is initialized with the value of `i` (`i` is converted to type **`long`** to correspond to the correct type using a standard conversion), and the formal parameter `param2` is initialized with the value of `j` (`j` is converted to type **`double`** using a standard conversion).

## Treatment of argument types

Formal arguments declared as **`const`** types cannot be changed within the body of a function. Functions can change any argument that is not of type **`const`**. However, the change is local to the function and does not affect the actual argument's value unless the actual argument was a reference to an object not of type **`const`**.

The following functions illustrate some of these concepts:

```cpp
// expre_Treatment_of_Argument_Types.cpp
int func1( const int i, int j, char *c ) {
   i = 7;   // C3892 i is const.
   j = i;   // value of j is lost at return
   *c = 'a' + j;   // changes value of c in calling function
   return i;
}

double& func2( double& d, const char *c ) {
   d = 14.387;   // changes value of d in calling function.
   *c = 'a';   // C3892 c is a pointer to a const object.
    return d;
}
```

## Ellipsis and default arguments

Functions can be declared to accept fewer arguments than specified in the function definition, using one of two methods: ellipsis (`...`) or default arguments.

Ellipsis denotes that arguments may be required but that the number and types are not specified in the declaration. This is normally poor C++ programming practice because it defeats one of the benefits of C++: type safety. Different conversions are applied to functions declared with ellipsis than to those functions for which the formal and actual argument types are known:

- If the actual argument is of type **`float`**, it is promoted to type **`double`** prior to the function call.

- Any **`signed char`** or **`unsigned char`**, **`signed short`** or **`unsigned short`**, enumerated type, or bit field is converted to either a **`signed int`** or an **`unsigned int`** using integral promotion.

- Any argument of class type is passed by value as a data structure; the copy is created by binary copying instead of by invoking the class's copy constructor (if one exists).

Ellipsis, if used, must be declared last in the argument list. For more information about passing a variable number of arguments, see the discussion of [va_arg, va_start, and va_list](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) in the *Run-Time Library Reference*.

For information on default arguments in CLR programming, see [Variable Argument Lists (...) (C++/CLI)](../extensions/variable-argument-lists-dot-dot-dot-cpp-cli.md).

Default arguments enable you to specify the value an argument should assume if none is supplied in the function call. The following code fragment shows how default arguments work. For more information about restrictions on specifying default arguments, see [Default Arguments](../cpp/default-arguments.md).

```cpp
// expre_Ellipsis_and_Default_Arguments.cpp
// compile with: /EHsc
#include <iostream>

// Declare the function print that prints a string,
// then a terminator.
void print( const char *string,
            const char *terminator = "\n" );

int main()
{
    print( "hello," );
    print( "world!" );

    print( "good morning", ", " );
    print( "sunshine." );
}

using namespace std;
// Define print.
void print( const char *string, const char *terminator )
{
    if( string != NULL )
        cout << string;

    if( terminator != NULL )
        cout << terminator;
}
```

The preceding program declares a function, `print`, that takes two arguments. However, the second argument, *terminator*, has a default value, `"\n"`. In `main`, the first two calls to `print` allow the default second argument to supply a new line to terminate the printed string. The third call specifies an explicit value for the second argument. The output from the program is

```Output
hello,
world!
good morning, sunshine.
```

## See also

[Types of Expressions](../cpp/types-of-expressions.md)
