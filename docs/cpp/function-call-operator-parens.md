---
description: "Learn more about: Function Call Operator: ()"
title: "Function-call operator: ()"
ms.date: "06/11/2020"
helpviewer_keywords: ["( ) function call operator", "function calls, C++ functions", "() function call operator", "postfix operators [C++]", "function calls, operator", "functions [C++], function-call operator", "function call operator ()"]
ms.assetid: 50c92e59-a4bf-415a-a6ab-d66c679ee80a
no-loc: [ opt ]
---
# Function Call Operator: ()

A function call is a kind of *`postfix-expression`*, formed by an expression that evaluates to a function or callable object followed by the function-call operator, **`()`**. An object can declare an `operator ()` function, which provides function call semantics for the object.

## Syntax

> *`postfix-expression`*:\
> &emsp;*`postfix-expression`* **`(`** *`argument-expression-list`* <sub>opt</sub> **`)`**

## Remarks

The arguments to the function-call operator come from an *`argument-expression-list`*, a comma-separated list of expressions. The values of these expressions are passed to the function as arguments. The *argument-expression-list* can be empty. Before C++ 17, the order of evaluation of the function expression and the argument expressions is unspecified and may occur in any order. In C++17 and later, the function expression is evaluated before any argument expressions or default arguments. The argument expressions are evaluated in an indeterminate sequence.

The *`postfix-expression`* evaluates to the function to call. It can take any of several forms:

- a function identifier, visible in the current scope or in the scope of any of the function arguments provided,
- an expression that evaluates to a function, a function pointer, a callable object, or to a reference to one,
- a member function accessor, either explicit or implied,
- a dereferenced pointer to a member function.

The *`postfix-expression`* may be an overloaded function identifier or overloaded member function accessor. The rules for overload resolution determine the actual function to call. If the member function is virtual, the function to call is determined at run time.

Some example declarations:

- Function returning type `T`. An example declaration is

    ```cpp
    T func( int i );
    ```

- Pointer to a function returning type `T`. An example declaration is

    ```cpp
    T (*func)( int i );
    ```

- Reference to a function returning type `T`. An example declaration is

    ```cpp
    T (&func)(int i);
    ```

- Pointer-to-member function dereference returning type `T`. Example function calls are

    ```cpp
    (pObject->*pmf)();
    (Object.*pmf)();
    ```

## Example

The following example calls the standard library function `strcat_s` with three arguments:

```cpp
// expre_Function_Call_Operator.cpp
// compile with: /EHsc

#include <iostream>
#include <string>

// C++ Standard Library name space
using namespace std;

int main()
{
    enum
    {
        sizeOfBuffer = 20
    };

    char s1[ sizeOfBuffer ] = "Welcome to ";
    char s2[ ] = "C++";

    strcat_s( s1, sizeOfBuffer, s2 );

    cout << s1 << endl;
}
```

```Output
Welcome to C++
```

## Function call results

A function call evaluates to an rvalue unless the function is declared as a reference type. Functions with reference return types evaluate to lvalues. These functions can be used on the left side of an assignment statement, as seen here:

```cpp
// expre_Function_Call_Results.cpp
// compile with: /EHsc
#include <iostream>
class Point
{
public:
    // Define "accessor" functions as
    // reference types.
    unsigned& x() { return _x; }
    unsigned& y() { return _y; }
private:
    unsigned _x;
    unsigned _y;
};

using namespace std;
int main()
{
    Point ThePoint;

    ThePoint.x() = 7;           // Use x() as an l-value.
    unsigned y = ThePoint.y();  // Use y() as an r-value.

    // Use x() and y() as r-values.
    cout << "x = " << ThePoint.x() << "\n"
         << "y = " << ThePoint.y() << "\n";
}
```

The preceding code defines a class called `Point`, which contains private data objects that represent *x* and *y* coordinates. These data objects must be modified and their values retrieved. This program is only one of several designs for such a class; use of the `GetX` and `SetX` or `GetY` and `SetY` functions is another possible design.

Functions that return class types, pointers to class types, or references to class types can be used as the left operand to member-selection operators. The following code is legal:

```cpp
// expre_Function_Results2.cpp
class A {
public:
   A() {}
   A(int i) {}
   int SetA( int i ) {
      return (I = i);
   }

   int GetA() {
      return I;
   }

private:
   int I;
};

A func1() {
   A a = 0;
   return a;
}

A* func2() {
   A *a = new A();
   return a;
}

A& func3() {
   A *a = new A();
   A &b = *a;
   return b;
}

int main() {
   int iResult = func1().GetA();
   func2()->SetA( 3 );
   func3().SetA( 7 );
}
```

Functions can be called recursively. For more information about function declarations, see [Functions](functions-cpp.md). Related material is in [Translation units and linkage](../cpp/program-and-linkage-cpp.md).

## See also

[Postfix expressions](../cpp/postfix-expressions.md)<br/>
[C++ built-in operators, precedence, and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Function call](../c-language/function-call-c.md)
