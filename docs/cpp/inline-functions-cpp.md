---
title: "Inline Functions (C++)"
description: "The C++ inline keyword can be used to suggest inline functions to the compiler."
ms.date: 12/07/2023
f1_keywords: ["__forceinline_cpp", "__inline_cpp", "inline_cpp", "__inline", "_inline", "__forceinline", "_forceinline"]
helpviewer_keywords: ["inline functions [C++], class members"]
---
# Inline functions (C++)

The **`inline`** keyword suggests that the compiler substitute the code within the function definition in place of each call to that function.

In theory, using inline functions can make your program faster because they eliminate the overhead associated with function calls. Calling a function requires pushing the return address on the stack, pushing arguments onto the stack, jumping to the function body, and then executing a return instruction when the function finishes. This process is eliminated by inlining the function. The compiler also has different opportunities to optimize functions expanded inline versus those that aren't. A tradeoff of inline functions is that the overall size of your program can increase.

Inline code substitution is done at the compiler's discretion. For example, the compiler won't inline a function if its address is taken or if the compiler decides it's too large.

A function defined in the body of a class declaration is implicitly an inline function.

## Example

In the following class declaration, the `Account` constructor is an inline function because it is defined in the body of the class declaration. The member functions `GetBalance`, `Deposit`, and `Withdraw` are specified `inline` in their definitions. The `inline` keyword is optional in the function declarations in the class declaration.

```cpp
// account.h
class Account
{
public:
    Account(double initial_balance)
    {
        balance = initial_balance;
    }

    double GetBalance() const;
    double Deposit(double amount);
    double Withdraw(double amount);

private:
    double balance;
};

inline double Account::GetBalance() const
{
    return balance;
}

inline double Account::Deposit(double amount)
{
    balance += amount;
    return balance;
}

inline double Account::Withdraw(double amount)
{
    balance -= amount;
    return balance;
}
```

> [!NOTE]
> In the class declaration, the functions were declared without the **`inline`** keyword. The **`inline`** keyword can be specified in the class declaration; the result is the same.

A given inline member function must be declared the same way in every compilation unit. There must be exactly one definition of an inline function.

A class member function defaults to external linkage unless a definition for that function contains the **`inline`** specifier. The preceding example shows that you don't have to declare these functions explicitly with the **`inline`** specifier. Using **`inline`** in the function definition suggests to the compiler that it be treated as an inline function. However, you can't redeclare a function as **`inline`** after a call to that function.

## `inline`, `__inline`, and `__forceinline`

The **`inline`** and **`__inline`** specifiers suggest to the compiler that it insert a copy of the function body into each place the function is called.

The insertion, called *inline expansion* or *inlining*, occurs only if the compiler's own cost-benefit analysis shows it's worthwhile. Inline expansion minimizes the function-call overhead at the potential cost of larger code size.

The **`__forceinline`** keyword overrides the cost-benefit analysis and relies on the judgment of the programmer instead. Exercise caution when using **`__forceinline`**. Indiscriminate use of **`__forceinline`** can result in larger code with only marginal performance gains or, in some cases, even performance losses (because of the increased paging of a larger executable, for example).

The compiler treats the inline expansion options and keywords as suggestions. There's no guarantee that functions will be inlined. You can't force the compiler to inline a particular function, even with the **`__forceinline`** keyword. When you compile with **`/clr`**, the compiler won't inline a function if there are security attributes applied to the function.

For compatibility with previous versions, **`_inline`** and **`_forceinline`** are synonyms for **`__inline`** and **`__forceinline`**, respectively, unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

The **`inline`** keyword tells the compiler that inline expansion is preferred. However, the compiler can ignore it. Two cases where this behavior can happen are:

- Recursive functions.
- Functions that are referred to through a pointer elsewhere in the translation unit.

These reasons may interfere with inlining, *as may others*, as determined by the compiler. Don't depend on the **`inline`** specifier to cause a function to be inlined.

Rather than expand an inline function defined in a header file, the compiler may create it as a callable function in more than one translation unit. The compiler marks the generated function for the linker to prevent one-definition-rule (ODR) violations.

As with normal functions, there's no defined order for argument evaluation in an inline function. In fact, it could be different from the argument evaluation order when passed using the normal function-call protocol.

Use the [`/Ob`](../build/reference/ob-inline-function-expansion.md) compiler optimization option to influence whether inline function expansion actually occurs.\
[`/LTCG`](../build/reference/ltcg-link-time-code-generation.md) does cross-module inlining whether it's requested in source code or not.

### Example 1

```cpp
// inline_keyword1.cpp
// compile with: /c
inline int max(int a, int b)
{
    return a < b ? b : a;
}
```

A class's member functions can be declared inline, either by using the **`inline`** keyword or by placing the function definition within the class definition.

### Example 2

```cpp
// inline_keyword2.cpp
// compile with: /EHsc /c
#include <iostream>

class MyClass
{
public:
    void print() { std::cout << i; }   // Implicitly inline

private:
    int i;
};
```

**Microsoft-specific**

The **`__inline`** keyword is equivalent to **`inline`**.

Even with **`__forceinline`**, the compiler can't inline a function if:

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

Inline functions are best used for small functions, such as those that provide access to data members. Short functions are sensitive to the overhead of function calls. Longer functions spend proportionately less time in the calling and returning sequence and benefit less from inlining.

A `Point` class can be defined as follows:

```cpp
// when_to_use_inline_functions.cpp
// compile with: /c
class Point
{
public:
    // Define "accessor" functions
    // as reference types.
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
```

Assuming coordinate manipulation is a relatively common operation in a client of such a class, specifying the two accessor functions (`x` and `y` in the preceding example) as **`inline`** typically saves the overhead on:

- Function calls (including parameter passing and placing the object's address on the stack)
- Preservation of caller's stack frame
- New stack frame setup
- Return-value communication
- Restoring the old stack frame
- Return

## Inline functions vs. macros

A macro has some things in common with an `inline` function. But there are important differences. Consider the following example:

```cpp
#include <iostream>

#define mult1(a, b) a * b
#define mult2(a, b) (a) * (b)
#define mult3(a, b) ((a) * (b))

inline int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    std::cout << (48 / mult1(2 + 2, 3 + 3)) << std::endl; // outputs 33
    std::cout << (48 / mult2(2 + 2, 3 + 3)) << std::endl; // outputs 72
    std::cout << (48 / mult3(2 + 2, 3 + 3)) << std::endl; // outputs 2
    std::cout << (48 / multiply(2 + 2, 3 + 3)) << std::endl; // outputs 2

    std::cout << mult3(2, 2.2) << std::endl; // no warning
    std::cout << multiply(2, 2.2); // Warning C4244	'argument': conversion from 'double' to 'int', possible loss of data
}
```

```Output
33
72
2
2
4.4
4
```

Here are some of the differences between the macro and the inline function:

- Macros are always expanded inline. However, an inline function is only inlined when the compiler determines it is the optimal thing to do.
- The macro may result in unexpected behavior, which can lead to subtle bugs. For example, the expression `mult1(2 + 2, 3 + 3)` expands to `2 + 2 * 3 + 3` which evaluates to 11, but the expected result is 24. A seemingly valid fix is to add parentheses around both arguments of the function macro, resulting in `#define mult2(a, b) (a) * (b)`, which will solve the issue at hand but can still cause surprising behavior when part of a larger expression. That was demonstrated in the preceding example, and the problem could be addressed by defining the macro as such `#define mult3(a, b) ((a) * (b))`.
- An inline function is subject to semantic processing by the compiler, whereas the preprocessor expands macros without that same benefit. Macros aren't type-safe, whereas functions are.
- Expressions passed as arguments to inline functions are evaluated once. In some cases, expressions passed as arguments to macros can be evaluated more than once. For example, consider the following:

```cpp
#include <iostream>

#define sqr(a) ((a) * (a))

int increment(int& number)
{
    return number++;
}

inline int square(int a)
{
    return a * a;
}

int main()
{
    int c = 5;
    std::cout << sqr(increment(c)) << std::endl; // outputs 30
    std::cout << c << std::endl; // outputs 7

    c = 5;
    std::cout << square(increment(c)) << std::endl; // outputs 25
    std::cout << c; // outputs 6
}
```

```Output
30
7
25
6
```

In this example, the function `increment` is called twice as the expression `sqr(increment(c))` expands to `((increment(c)) * (increment(c)))`. This caused the second invocation of `increment` to return 6, hence the expression evaluates to 30. Any expression that contains side effects may affect the result when used in a macro, examine the fully expanded macro to check if the behavior is intended. Instead, if the inline function `square` was used, the function `increment` would only be called once and the correct result of 25 will be obtained.

## See also

[`noinline`](../cpp/noinline.md)\
[`auto_inline`](../preprocessor/auto-inline.md)
