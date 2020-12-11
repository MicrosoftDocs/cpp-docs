---
description: "Learn more about: `auto` (C++)"
title: "auto (C++)"
ms.date: "12/10/2019"
f1_keywords: ["auto_CPP", "auto"]
helpviewer_keywords: ["auto keyword [C++]"]
ms.assetid: e9d495d7-601c-4547-b897-998389a311f4
---
# `auto` (C++)

Deduces the type of a declared variable from its initialization expression.

> [!NOTE]
> The C++ standard defines an original and a revised meaning for this keyword. Before Visual Studio 2010, the **`auto`** keyword declares a variable in the *automatic* storage class; that is, a variable that has a local lifetime. Starting with Visual Studio 2010, the **`auto`** keyword declares a variable whose type is deduced from the initialization expression in its declaration. The [`/Zc:auto`&#91;-&#93;](../build/reference/zc-auto-deduce-variable-type.md) compiler option controls the meaning of the **`auto`** keyword.

## Syntax

> **`auto`** *declarator* *initializer* **`;`**

> **`[](auto`** *param1* **`, auto`** *param2* **`) {};`**

## Remarks

The **`auto`** keyword directs the compiler to use the initialization expression of a declared variable, or lambda expression parameter, to deduce its type.

We recommend that you use the **`auto`** keyword for most situations—unless you really want a conversion—because it provides these benefits:

- **Robustness:** If the expression’s type is changed—this includes when a function return type is changed—it just works.

- **Performance:** You’re guaranteed that there will be no conversion.

- **Usability:** You don't have to worry about type name spelling difficulties and typos.

- **Efficiency:** Your coding can be more efficient.

Conversion cases in which you might not want to use **`auto`**:

- When you want a specific type and nothing else will do.

- Expression template helper types—for example, `(valarray+valarray)`.

To use the **`auto`** keyword, use it instead of a type to declare a variable, and specify an initialization expression. In addition, you can modify the **`auto`** keyword by using specifiers and declarators such as **`const`**, **`volatile`**, pointer (**`*`**), reference (**`&`**), and rvalue reference (**`&&`**). The compiler evaluates the initialization expression and then uses that information to deduce the type of the variable.

The initialization expression can be an assignment (equal-sign syntax), a direct initialization (function-style syntax), an [`operator new`](new-operator-cpp.md) expression, or the initialization expression can be the *for-range-declaration* parameter in a [Range-based `for` Statement (C++)](../cpp/range-based-for-statement-cpp.md) statement. For more information, see [Initializers](../cpp/initializers.md) and the code examples later in this document.

The **`auto`** keyword is a placeholder for a type, but it is not itself a type. Therefore, the **`auto`** keyword cannot be used in casts or operators such as [`sizeof`](../cpp/sizeof-operator.md) and (for C++/CLI) [`typeid`](../extensions/typeid-cpp-component-extensions.md).

## Usefulness

The **`auto`** keyword is a simple way to declare a variable that has a complicated type. For example, you can use **`auto`** to declare a variable where the initialization expression involves templates, pointers to functions, or pointers to members.

You can also use **`auto`** to declare and initialize a variable to a lambda expression. You can't declare the type of the variable yourself because the type of a lambda expression is known only to the compiler. For more information, see [Examples of Lambda Expressions](../cpp/examples-of-lambda-expressions.md).

## Trailing Return Types

You can use **`auto`**, together with the **`decltype`** type specifier, to help write template libraries. Use **`auto`** and **`decltype`** to declare a template function whose return type depends on the types of its template arguments. Or, use **`auto`** and **`decltype`** to declare a template function that wraps a call to another function, and then returns whatever is the return type of that other function. For more information, see [`decltype`](../cpp/decltype-cpp.md).

## References and cv-qualifiers

Note that using **`auto`** drops references, **`const`** qualifiers, and **`volatile`** qualifiers. Consider the following example:

```cpp
// cl.exe /analyze /EHsc /W4
#include <iostream>

using namespace std;

int main( )
{
    int count = 10;
    int& countRef = count;
    auto myAuto = countRef;

    countRef = 11;
    cout << count << " ";

    myAuto = 12;
    cout << count << endl;
}
```

In the previous example, myAuto is an **`int`**, not an **`int`** reference, so the output is `11 11`, not `11 12` as would be the case if the reference qualifier had not been dropped by **`auto`**.

## Type deduction with braced initializers (C++14)

The following code example shows how to initialize an **`auto`** variable using braces. Note the difference between B and C and between A and E.

```cpp
#include <initializer_list>

int main()
{
    // std::initializer_list<int>
    auto A = { 1, 2 };

    // std::initializer_list<int>
    auto B = { 3 };

    // int
    auto C{ 4 };

    // C3535: cannot deduce type for 'auto' from initializer list'
    auto D = { 5, 6.7 };

    // C3518 in a direct-list-initialization context the type for 'auto'
    // can only be deduced from a single initializer expression
    auto E{ 8, 9 };

    return 0;
}
```

## Restrictions and Error Messages

The following table lists the restrictions on the use of the **`auto`** keyword, and the corresponding diagnostic error message that the compiler emits.

|Error number|Description|
|------------------|-----------------|
|[C3530](../error-messages/compiler-errors-2/compiler-error-c3530.md)|The **`auto`** keyword cannot be combined with any other type-specifier.|
|[C3531](../error-messages/compiler-errors-2/compiler-error-c3531.md)|A symbol that is declared with the **`auto`** keyword must have an initializer.|
|[C3532](../error-messages/compiler-errors-2/compiler-error-c3532.md)|You incorrectly used the **`auto`** keyword to declare a type. For example, you declared a method return type or an array.|
|[C3533](../error-messages/compiler-errors-2/compiler-error-c3533.md), [C3539](../error-messages/compiler-errors-2/compiler-error-c3539.md)|A parameter or template argument cannot be declared with the **`auto`** keyword.|
|[C3535](../error-messages/compiler-errors-2/compiler-error-c3535.md)|A method or template parameter cannot be declared with the **`auto`** keyword.|
|[C3536](../error-messages/compiler-errors-2/compiler-error-c3536.md)|A symbol cannot be used before it is initialized. In practice, this means that a variable cannot be used to initialize itself.|
|[C3537](../error-messages/compiler-errors-2/compiler-error-c3537.md)|You cannot cast to a type that is declared with the **`auto`** keyword.|
|[C3538](../error-messages/compiler-errors-2/compiler-error-c3538.md)|All the symbols in a declarator list that is declared with the **`auto`** keyword must resolve to the same type. For more information, see [Declarations and Definitions](declarations-and-definitions-cpp.md).|
|[C3540](../error-messages/compiler-errors-2/compiler-error-c3540.md), [C3541](../error-messages/compiler-errors-2/compiler-error-c3541.md)|The [sizeof](../cpp/sizeof-operator.md) and [typeid](../extensions/typeid-cpp-component-extensions.md) operators cannot be applied to a symbol that is declared with the **`auto`** keyword.|

## Examples

These code fragments illustrate some of the ways in which the **`auto`** keyword can be used.

The following declarations are equivalent. In the first statement, variable `j` is declared to be type **`int`**. In the second statement, variable `k` is deduced to be type **`int`** because the initialization expression (0) is an integer.

```cpp
int j = 0;  // Variable j is explicitly type int.
auto k = 0; // Variable k is implicitly type int because 0 is an integer.
```

The following declarations are equivalent, but the second declaration is simpler than the first. One of the most compelling reasons to use the **`auto`** keyword is simplicity.

```cpp
map<int,list<string>>::iterator i = m.begin();
auto i = m.begin();
```

The following code fragment declares the type of variables `iter` and `elem` when the **`for`** and range **`for`** loops start.

```cpp
// cl /EHsc /nologo /W4
#include <deque>
using namespace std;

int main()
{
    deque<double> dqDoubleData(10, 0.1);

    for (auto iter = dqDoubleData.begin(); iter != dqDoubleData.end(); ++iter)
    { /* ... */ }

    // prefer range-for loops with the following information in mind
    // (this applies to any range-for with auto, not just deque)

    for (auto elem : dqDoubleData) // COPIES elements, not much better than the previous examples
    { /* ... */ }

    for (auto& elem : dqDoubleData) // observes and/or modifies elements IN-PLACE
    { /* ... */ }

    for (const auto& elem : dqDoubleData) // observes elements IN-PLACE
    { /* ... */ }
}
```

The following code fragment uses the **`new`** operator and pointer declaration to declare pointers.

```cpp
double x = 12.34;
auto *y = new auto(x), **z = new auto(&x);
```

The next code fragment declares multiple symbols in each declaration statement. Notice that all of the symbols in each statement resolve to the same type.

```cpp
auto x = 1, *y = &x, **z = &y; // Resolves to int.
auto a(2.01), *b (&a);         // Resolves to double.
auto c = 'a', *d(&c);          // Resolves to char.
auto m = 1, &n = m;            // Resolves to int.
```

This code fragment uses the conditional operator (`?:`) to declare variable `x` as an integer that has a value of 200:

```cpp
int v1 = 100, v2 = 200;
auto x = v1 > v2 ? v1 : v2;
```

The following code fragment initializes variable `x` to type **`int`**, variable `y` to a reference to type **`const int`**, and variable `fp` to a pointer to a function that returns type **`int`**.

```cpp
int f(int x) { return x; }
int main()
{
    auto x = f(0);
    const auto& y = f(1);
    int (*p)(int x);
    p = f;
    auto fp = p;
    //...
}
```

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[`/Zc:auto` (Deduce Variable Type)](../build/reference/zc-auto-deduce-variable-type.md)<br/>
[`sizeof` Operator](../cpp/sizeof-operator.md)<br/>
[`typeid`](../extensions/typeid-cpp-component-extensions.md)<br/>
[`operator new`](new-operator-cpp.md)<br/>
[Declarations and Definitions](declarations-and-definitions-cpp.md)<br/>
[Examples of Lambda Expressions](../cpp/examples-of-lambda-expressions.md)<br/>
[Initializers](../cpp/initializers.md)<br/>
[`decltype`](../cpp/decltype-cpp.md)
