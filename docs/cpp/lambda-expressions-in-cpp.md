---
description: "Learn more about: Lambda Expressions in C++"
title: "Lambda expressions in C++"
ms.date: 01/30/2023
helpviewer_keywords: ["lambda expressions [C++]", "lambda expressions [C++], overview", "lambda expressions [C++], vs. function objects"]
---
# Lambda expressions in C++

In C++11 and later, a lambda expression—often called a *lambda*—is a convenient way of defining an anonymous function object (a *closure*) right at the location where it's invoked or passed as an argument to a function. Typically lambdas are used to encapsulate a few lines of code that are passed to algorithms or asynchronous functions. This article defines what lambdas are, and compares them to other programming techniques. It describes their advantages, and provides some basic examples.

## Related articles

- [Lambda expressions vs. function objects](lambda-expression-syntax.md)
- [Working with lambda expressions](examples-of-lambda-expressions.md)
- [constexpr lambda expressions](lambda-expressions-constexpr.md)

## Parts of a lambda expression

Here is a simple lambda that is passed as the third argument to the `std::sort()` function:

```cpp
#include <algorithm>
#include <cmath>

void abssort(float* x, unsigned n) {
    std::sort(x, x + n,
        // Lambda expression begins
        [](float a, float b) {
            return (std::abs(a) < std::abs(b));
        } // end of lambda expression
    );
}
```

This illustration shows the parts of lambda syntax:

:::image type="complex" source="../cpp/media/lambdaexpsyntax.png" alt-text="Diagram that identifies the various parts of a lambda expression.":::
The lambda expression example is [=]() mutable throw() -> int { return x+y; } The [=] is the capture clause; also known as the lambda-introducer in the C++ specification. The parenthesis are for the parameter list. The mutable keyword is optional. throw() is the optional exception specification. -> int is the optional trailing return type. The lambda body consists of the statement inside the curly braces, or return x+y; These are explained in more detail following the image.
:::image-end:::

1. *capture clause* (Also known as the *lambda-introducer* in the C++ specification.)

1. *parameter list* Optional. (Also known as the *lambda declarator*)

1. *mutable specification* Optional.

1. *exception-specification* Optional.

1. *trailing-return-type* Optional.

1. *lambda body*.

### Capture clause

A lambda can introduce new variables in its body (in **C++14**), and it can also access, or *capture*, variables from the surrounding scope. A lambda begins with the capture clause. It specifies which variables are captured, and whether the capture is by value or by reference. Variables that have the ampersand (`&`) prefix are accessed by reference and variables that don't have it are accessed by value.

An empty capture clause, `[ ]`, indicates that the body of the lambda expression accesses no variables in the enclosing scope.

You can use a capture-default mode to indicate how to capture any outside variables referenced in the lambda body: `[&]` means all variables that you refer to are captured by reference, and `[=]` means they're captured by value. You can use a default capture mode, and then specify the opposite mode explicitly for specific variables. For example, if a lambda body accesses the external variable `total` by reference and the external variable `factor` by value, then the following capture clauses are equivalent:

```cpp
[&total, factor]
[factor, &total]
[&, factor]
[=, &total]
```

Only variables that are mentioned in the lambda body are captured when a capture-default is used.

If a capture clause includes a capture-default `&`, then no identifier in a capture of that capture clause can have the form `&identifier`. Likewise, if the capture clause includes a capture-default `=`, then no capture of that capture clause can have the form `=identifier`. An identifier or **`this`** can't appear more than once in a capture clause. The following code snippet illustrates some examples:

```cpp
struct S { void f(int i); };

void S::f(int i) {
    [&, i]{};      // OK
    [&, &i]{};     // ERROR: i preceded by & when & is the default
    [=, this]{};   // ERROR: this when = is the default
    [=, *this]{ }; // OK: captures this by value. See below.
    [i, i]{};      // ERROR: i repeated
}
```

A capture followed by an ellipsis is a pack expansion, as shown in this [variadic template](../cpp/ellipses-and-variadic-templates.md) example:

```cpp
template<class... Args>
void f(Args... args) {
    auto x = [args...] { return g(args...); };
    x();
}
```

To use lambda expressions in the body of a class member function, pass the **`this`** pointer to the capture clause to provide access to the member functions and data members of the enclosing class.

**Visual Studio 2017 version 15.3 and later** (available in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) mode and later): The **`this`** pointer may be captured by value by specifying **`*this`** in the capture clause. Capture by value copies the entire closure to every call site where the lambda is invoked. (A closure is the anonymous function object that encapsulates the lambda expression.) Capture by value is useful when the lambda executes in parallel or asynchronous operations. It's especially useful on certain hardware architectures, such as NUMA.

For an example that shows how to use lambda expressions with class member functions, see "Example: Using a lambda expression in a method" in [Examples of lambda expressions](../cpp/examples-of-lambda-expressions.md).

When you use the capture clause, we recommend that you keep these points in mind, particularly when you use lambdas with multi-threading:

- Reference captures can be used to modify variables outside, but value captures can't. (**`mutable`** allows copies to be modified, but not originals.)

- Reference captures reflect updates to variables outside, but value captures don't.

- Reference captures introduce a lifetime dependency, but value captures have no lifetime dependencies. It's especially important when the lambda runs asynchronously. If you capture a local by reference in an async lambda, that local could easily be gone by the time the lambda runs. Your code could cause an access violation at run time.

### Generalized capture (C++14)

In C++14, you can introduce and initialize new variables in the capture clause, without the need to have those variables exist in the lambda function's enclosing scope. The initialization can be expressed as any arbitrary expression; the type of the new variable is deduced from the type produced by the expression. This feature lets you capture move-only variables (such as `std::unique_ptr`) from the surrounding scope and use them in a lambda.

```cpp
pNums = make_unique<vector<int>>(nums);
//...
      auto a = [ptr = move(pNums)]()
        {
           // use ptr
        };
```

### Parameter list

Lambdas can both capture variables and accept input parameters. A parameter list (*lambda declarator* in the Standard syntax) is optional and in most aspects resembles the parameter list for a function.

```cpp
auto y = [] (int first, int second)
{
    return first + second;
};
```

In **C++14**, if the parameter type is generic, you can use the **`auto`** keyword as the type specifier. This keyword tells the compiler to create the function call operator as a template. Each instance of **`auto`** in a parameter list is equivalent to a distinct type parameter.

```cpp
auto y = [] (auto first, auto second)
{
    return first + second;
};
```

A lambda expression can take another lambda expression as its argument. For more information, see "Higher-Order Lambda Expressions" in the article [Examples of lambda expressions](../cpp/examples-of-lambda-expressions.md).

Because a parameter list is optional, you can omit the empty parentheses if you don't pass arguments to the lambda expression and its lambda-declarator doesn't contain *exception-specification*, *trailing-return-type*, or **`mutable`**.

### Mutable specification

Typically, a lambda's function call operator is const-by-value, but use of the **`mutable`** keyword cancels this out. It doesn't produce mutable data members. The **`mutable`** specification enables the body of a lambda expression to modify variables that are captured by value. Some of the examples later in this article show how to use **`mutable`**.

### Exception specification

You can use the **`noexcept`** exception specification to indicate that the lambda expression doesn't throw any exceptions. As with ordinary functions, the Microsoft C++ compiler generates warning [C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md) if a lambda expression declares the **`noexcept`** exception specification and the lambda body throws an exception, as shown here:

```cpp
// throw_lambda_expression.cpp
// compile with: /W4 /EHsc
int main() // C4297 expected
{
   []() noexcept { throw 5; }();
}
```

For more information, see [Exception specifications (throw)](../cpp/exception-specifications-throw-cpp.md).

### Return type

The return type of a lambda expression is automatically deduced. You don't have to use the [`auto`](../cpp/auto-cpp.md) keyword unless you specify a *trailing-return-type*. The *trailing-return-type* resembles the return-type part of an ordinary function or member function. However, the return type must follow the parameter list, and you must include the trailing-return-type keyword **`->`** before the return type.

You can omit the return-type part of a lambda expression if the lambda body contains just one return statement. Or, if the expression doesn't return a value. If the lambda body contains one return statement, the compiler deduces the return type from the type of the return expression. Otherwise, the compiler deduces the return type as **`void`**. Consider the following example code snippets that illustrate this principle:

```cpp
auto x1 = [](int i){ return i; }; // OK: return type is int
auto x2 = []{ return{ 1, 2 }; };  // ERROR: return type is void, deducing
                                  // return type from braced-init-list isn't valid
```

A lambda expression can produce another lambda expression as its return value. For more information, see "Higher-order lambda expressions" in [Examples of lambda expressions](../cpp/examples-of-lambda-expressions.md).

### Lambda body

The lambda body of a lambda expression is a compound statement. It can contain anything that's allowed in the body of an ordinary function or member function. The body of both an ordinary function and a lambda expression can access these kinds of variables:

- Captured variables from the enclosing scope, as described previously.

- Parameters.

- Locally declared variables.

- Class data members, when declared inside a class and **`this`** is captured.

- Any variable that has static storage duration—for example, global variables.

The following example contains a lambda expression that explicitly captures the variable `n` by value and implicitly captures the variable `m` by reference:

```cpp
// captures_lambda_expression.cpp
// compile with: /W4 /EHsc
#include <iostream>
using namespace std;

int main()
{
   int m = 0;
   int n = 0;
   [&, n] (int a) mutable { m = ++n + a; }(4);
   cout << m << endl << n << endl;
}
```

```Output
5
0
```

Because the variable `n` is captured by value, its value remains `0` after the call to the lambda expression. The **`mutable`** specification allows `n` to be modified within the lambda.

A lambda expression can only capture variables that have automatic storage duration. However, you can use variables that have static storage duration in the body of a lambda expression. The following example uses the `generate` function and a lambda expression to assign a value to each element in a `vector` object. The lambda expression modifies the static variable to generate the value of the next element.

```cpp
void fillVector(vector<int>& v)
{
    // A local static variable.
    static int nextValue = 1;

    // The lambda expression that appears in the following call to
    // the generate function modifies and uses the local static
    // variable nextValue.
    generate(v.begin(), v.end(), [] { return nextValue++; });
    //WARNING: this isn't thread-safe and is shown for illustration only
}
```

For more information, see [generate](../standard-library/algorithm-functions.md#generate).

The following code example uses the function from the previous example, and adds an example of a lambda expression that uses the C++ Standard Library algorithm `generate_n`. This lambda expression assigns an element of a `vector` object to the sum of the previous two elements. The **`mutable`** keyword is used so that the body of the lambda expression can modify its copies of the external variables `x` and `y`, which the lambda expression captures by value. Because the lambda expression captures the original variables `x` and `y` by value, their values remain `1` after the lambda executes.

```cpp
// compile with: /W4 /EHsc
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename C> void print(const string& s, const C& c) {
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

void fillVector(vector<int>& v)
{
    // A local static variable.
    static int nextValue = 1;

    // The lambda expression that appears in the following call to
    // the generate function modifies and uses the local static
    // variable nextValue.
    generate(v.begin(), v.end(), [] { return nextValue++; });
    //WARNING: this isn't thread-safe and is shown for illustration only
}

int main()
{
    // The number of elements in the vector.
    const int elementCount = 9;

    // Create a vector object with each element set to 1.
    vector<int> v(elementCount, 1);

    // These variables hold the previous two elements of the vector.
    int x = 1;
    int y = 1;

    // Sets each element in the vector to the sum of the
    // previous two elements.
    generate_n(v.begin() + 2,
        elementCount - 2,
        [=]() mutable throw() -> int { // lambda is the 3rd parameter
        // Generate current value.
        int n = x + y;
        // Update previous two values.
        x = y;
        y = n;
        return n;
    });
    print("vector v after call to generate_n() with lambda: ", v);

    // Print the local variables x and y.
    // The values of x and y hold their initial values because
    // they are captured by value.
    cout << "x: " << x << " y: " << y << endl;

    // Fill the vector with a sequence of numbers
    fillVector(v);
    print("vector v after 1st call to fillVector(): ", v);
    // Fill the vector with the next sequence of numbers
    fillVector(v);
    print("vector v after 2nd call to fillVector(): ", v);
}
```

```Output
vector v after call to generate_n() with lambda: 1 1 2 3 5 8 13 21 34
x: 1 y: 1
vector v after 1st call to fillVector(): 1 2 3 4 5 6 7 8 9
vector v after 2nd call to fillVector(): 10 11 12 13 14 15 16 17 18
```

For more information, see [generate_n](../standard-library/algorithm-functions.md#generate_n).

## `constexpr` lambda expressions

**Visual Studio 2017 version 15.3 and later** (available in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) mode and later): You may declare a lambda expression as **`constexpr`** (or use it in a constant expression) when the initialization of each captured or introduced data member is allowed within a constant expression.

```cpp
    int y = 32;
    auto answer = [y]() constexpr
    {
        int x = 10;
        return y + x;
    };

    constexpr int Increment(int n)
    {
        return [n] { return n + 1; }();
    }
```

A lambda is implicitly **`constexpr`** if its result satisfies the requirements of a **`constexpr`** function:

```cpp
    auto answer = [](int n)
    {
        return 32 + n;
    };

    constexpr int response = answer(10);
```

If a lambda is implicitly or explicitly **`constexpr`**, conversion to a function pointer produces a **`constexpr`** function:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```

## Microsoft-specific

Lambdas aren't supported in the following common language runtime (CLR) managed entities: **`ref class`**, **`ref struct`**, **`value class`**, or **`value struct`**.

If you're using a Microsoft-specific modifier such as [`__declspec`](../cpp/declspec.md), you can insert it into a lambda expression immediately after the `parameter-declaration-clause`. For example:

```cpp
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };
```

To determine whether a particular modifier is supported by lambdas, see the article about the modifier in the [Microsoft-specific modifiers](../cpp/microsoft-specific-modifiers.md) section.

Visual Studio supports C++11 Standard lambda functionality, and *stateless lambdas*. A stateless lambda is convertible to a function pointer that uses an arbitrary calling convention.

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Function Objects in the C++ Standard Library](../standard-library/function-objects-in-the-stl.md)<br/>
[Function Call](../cpp/function-call-cpp.md)<br/>
[`for_each`](../standard-library/algorithm-functions.md#for_each)
