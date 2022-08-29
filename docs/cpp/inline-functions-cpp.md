---
title: "Inline Functions (C++)"
description: "The C++ inline keyword can be used to suggest inline functions to the compiler."
ms.date: 08/24/2022
f1_keywords: ["__forceinline_cpp", "__inline_cpp", "inline_cpp", "__inline", "_inline", "__forceinline", "_forceinline"]
helpviewer_keywords: ["inline functions [C++], class members"]
ms.assetid: 355f120c-2847-4608-ac04-8dda18ffe10c
---
# Inline functions (C++)

The **`inline`** keyword tells the compiler to substitute the code within the function definition for every instance of a function call.

Using inline functions can make your program faster because they eliminate the overhead associated with function calls. The compiler can optimize functions expanded inline in ways that aren't available to normal functions.

Inline code substitution occurs at the compiler's discretion. For example, the compiler won't inline a function if its address is taken or if it's too large to inline.

A function defined in the body of a class declaration is implicitly an inline function.

## Example

In the following class declaration, the `Account` constructor is an inline function. The member functions `GetBalance`, `Deposit`, and `Withdraw` aren't specified as **`inline`** but can be implemented as inline functions.

```cpp
// Inline_Member_Functions.cpp
class Account
{
public:
    Account(double initial_balance) { balance = initial_balance; }
    double GetBalance();
    double Deposit( double Amount );
    double Withdraw( double Amount );
private:
    double balance;
};

inline double Account::GetBalance()
{
    return balance;
}

inline double Account::Deposit( double Amount )
{
    return ( balance += Amount );
}

inline double Account::Withdraw( double Amount )
{
    return ( balance -= Amount );
}
int main()
{
}
```

> [!NOTE]
> In the class declaration, the functions were declared without the **`inline`** keyword. The **`inline`** keyword can be specified in the class declaration; the result is the same.

A given inline member function must be declared the same way in every compilation unit. This constraint causes inline functions to behave as if they were instantiated functions. Additionally, there must be exactly one definition of an inline function.

A class member function defaults to external linkage unless a definition for that function contains the **`inline`** specifier. The preceding example shows that you don't have to declare these functions explicitly with the **`inline`** specifier. Using **`inline`** in the function definition causes it to be an inline function. However, you can't redeclare a function as **`inline`** after a call to that function.

## `inline`, `__inline`, and `__forceinline`

The **`inline`** and **`__inline`** specifiers instruct the compiler to insert a copy of the function body into each place the function is called.

The insertion, called *inline expansion* or *inlining*, occurs only if the compiler's cost-benefit analysis shows it's worthwhile. Inline expansion minimizes the function-call overhead at the potential cost of larger code size.

The **`__forceinline`** keyword overrides the cost-benefit analysis and relies on the judgment of the programmer instead. Exercise caution when using **`__forceinline`**. Indiscriminate use of **`__forceinline`** can result in larger code with only marginal performance gains or, in some cases, even performance losses (because of the increased paging of a larger executable, for example).

The compiler treats the inline expansion options and keywords as suggestions. There's no guarantee that functions will be inlined. You can't force the compiler to inline a particular function, even with the **`__forceinline`** keyword. When you compile with **`/clr`**, the compiler won't inline a function if there are security attributes applied to the function.

For compatibility with previous versions, **`_inline`** and **`_forceinline`** are synonyms for **`__inline`** and **`__forceinline`**, respectively, unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

The **`inline`** keyword tells the compiler that inline expansion is preferred. However, the compiler can create a separate instance of the function (instantiate) and create standard calling linkages instead of inserting the code inline. Two cases where this behavior can happen are:

- Recursive functions.

- Functions that are referred to through a pointer elsewhere in the translation unit.

These reasons may interfere with inlining, *as may others*, at the discretion of the compiler; you shouldn't depend on the **`inline`** specifier to cause a function to be inlined.

Rather than expand an inline function defined in a header file, the compiler may create it as a callable function in more than one translation unit. The compiler marks the generated function for the linker to prevent one-definition-rule (ODR) violations.

As with normal functions, there's no defined order for argument evaluation in an inline function. In fact, it could be different from the argument evaluation order when passed using the normal function-call protocol.

The [`/Ob`](../build/reference/ob-inline-function-expansion.md) compiler optimization option helps to determine whether inline function expansion actually occurs.

[`/LTCG`](../build/reference/ltcg-link-time-code-generation.md) does cross-module inlining whether it's requested in source code or not.

### Example 1

```cpp
// inline_keyword1.cpp
// compile with: /c
inline int max( int a , int b ) {
   if( a > b )
      return a;
   return b;
}
```

A class's member functions can be declared inline, either by using the **`inline`** keyword or by placing the function definition within the class definition.

### Example 2

```cpp
// inline_keyword2.cpp
// compile with: /EHsc /c
#include <iostream>
using namespace std;

class MyClass {
public:
   void print() { cout << i << ' '; }   // Implicitly inline
private:
   int i;
};
```

**Microsoft-specific**

The **`__inline`** keyword is equivalent to **`inline`**.

Even with **`__forceinline`**, the compiler can't inline code in all circumstances. The compiler can't inline a function if:

- The function or its caller is compiled with **`/Ob0`** (the default option for debug builds).

- The function and the caller use different types of exception handling (C++ exception handling in one, structured exception handling in the other).

- The function has a variable argument list.

- The function uses inline assembly, unless compiled with **`/Ox`**, **`/O1`**, or **`/O2`**.

- The function is recursive and doesn't have **`#pragma inline_recursion(on)`** set. With the pragma, recursive functions are inlined to a default depth of 16 calls. To reduce the inlining depth, use [`inline_depth`](../preprocessor/inline-depth.md) pragma.

- The function is virtual and is called virtually. Direct calls to virtual functions can be inlined.

- The program takes the address of the function and the call is made via the pointer to the function. Direct calls to functions that have had their address taken can be inlined.

- The function is also marked with the [`naked`](../cpp/naked-cpp.md) [`__declspec`](../cpp/declspec.md) modifier.

If the compiler can't inline a function declared with **`__forceinline`**, it generates a level 1 warning, except when:

- The function is compiled by using /Od or /Ob0. No inlining is expected in these cases.

- The function is defined externally, in an included library or another translation unit, or is a virtual call target or indirect call target. The compiler can't identify non-inlined code that it can't find in the current translation unit.

Recursive functions can be replaced with inline code to a depth specified by the [`inline_depth`](../preprocessor/inline-depth.md) pragma, up to a maximum of 16 calls. After that depth, recursive function calls are treated as calls to an instance of the function.  The depth to which recursive functions are examined by the inline heuristic can't exceed 16. The [`inline_recursion`](../preprocessor/inline-recursion.md) pragma controls the inline expansion of a function currently under expansion. See the [Inline-Function Expansion](../build/reference/ob-inline-function-expansion.md) (/Ob) compiler option for related information.

**END Microsoft Specific**

For more information on using the **`inline`** specifier, see:

- [Inline Class Member Functions](../cpp/inline-functions-cpp.md)

- [Defining Inline C++ Functions with dllexport and dllimport](../cpp/defining-inline-cpp-functions-with-dllexport-and-dllimport.md)

## When to use inline functions

Inline functions are best used for small functions such as accessing private data members. The main purpose of these one- or two-line "accessor" functions is to return state information about objects. Short functions are sensitive to the overhead of function calls. Longer functions spend proportionately less time in the calling and returning sequence and benefit less from inlining.

A `Point` class can be defined as follows:

```cpp
// when_to_use_inline_functions.cpp
class Point
{
public:
    // Define "accessor" functions as
    //  reference types.
    unsigned& x();
    unsigned& y();
private:
    unsigned _x;
    unsigned _y;
};

inline unsigned& Point::x()
{
    return _x;
}
inline unsigned& Point::y()
{
    return _y;
}
int main()
{
}
```

Assuming coordinate manipulation is a relatively common operation in a client of such a class, specifying the two accessor functions (`x` and `y` in the preceding example) as **`inline`** typically saves the overhead on:

- Function calls (including parameter passing and placing the object's address on the stack)

- Preservation of caller's stack frame

- New stack frame setup

- Return-value communication

- Restoring the old stack frame

- Return

## Inline functions vs. macros

Inline functions are similar to macros, because the function code is expanded at the point of the call at compile time. However, inline functions are parsed by the compiler, and macros are expanded by the preprocessor. As a result, there are several important differences:

- Inline functions follow all the protocols of type safety enforced on normal functions.

- Inline functions are specified using the same syntax as any other function except that they include the **`inline`** keyword in the function declaration.

- Expressions passed as arguments to inline functions are evaluated once. In some cases, expressions passed as arguments to macros can be evaluated more than once.

The following example shows a macro that converts lowercase letters to uppercase:

```cpp
// inline_functions_macro.c
#include <stdio.h>
#include <conio.h>

#define toupper(a) ((a) >= 'a' && ((a) <= 'z') ? ((a)-('a'-'A')):(a))

int main() {
   char ch;
   printf_s("Enter a character: ");
   ch = toupper( getc(stdin) );
   printf_s( "%c", ch );
}
//  Sample Input:  xyz
// Sample Output:  Z
```

The intent of the expression `toupper(getc(stdin))` is that a character should be read from the console device (`stdin`) and, if necessary, converted to uppercase.

Because of the implementation of the macro, `getc` is executed once to determine whether the character is greater than or equal to "a," and once to determine whether it's less than or equal to "z." If it is in that range, `getc` is executed again to convert the character to uppercase. It means the program waits for two or three characters when, ideally, it should wait for only one.

Inline functions remedy the problem previously described:

```cpp
// inline_functions_inline.cpp
#include <stdio.h>
#include <conio.h>

inline char toupper( char a ) {
   return ((a >= 'a' && a <= 'z') ? a-('a'-'A') : a );
}

int main() {
   printf_s("Enter a character: ");
   char ch = toupper( getc(stdin) );
   printf_s( "%c", ch );
}
```

```Output
Sample Input: a
Sample Output: A
```

## See also

[`noinline`](../cpp/noinline.md)\
[`auto_inline`](../preprocessor/auto-inline.md)
