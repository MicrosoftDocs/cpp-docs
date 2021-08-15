---
description: "Learn more about: decltype  (C++)"
title: "decltype  (C++)"
ms.date: "11/04/2016"
f1_keywords: ["decltype_cpp"]
helpviewer_keywords: ["operators [C++], decltype", "decltype operator", "operators [C++], type of an expression", "operators [C++], deduce expression type"]
ms.assetid: 6dcf8888-8196-4f13-af50-51e3797255d4
---
# decltype  (C++)

The **`decltype`** type specifier yields the type of a specified expression. The **`decltype`** type specifier, together with the [`auto` keyword](../cpp/auto-cpp.md), is useful primarily to developers who write template libraries. Use **`auto`** and **`decltype`** to declare a template function whose return type depends on the types of its template arguments. Or, use **`auto`** and **`decltype`** to declare a template function that wraps a call to another function, and then returns the return type of the wrapped function.

## Syntax

> **`decltype(`** *expression* **`)`**

### Parameters

*expression*\
An expression. For more information, see [Expressions](../cpp/expressions-cpp.md).

## Return Value

The type of the *expression* parameter.

## Remarks

The **`decltype`** type specifier is supported in Visual Studio 2010 or later versions, and can be used with native or managed code. `decltype(auto)` (C++14) is supported in Visual Studio 2015 and later.

The compiler uses the following rules to determine the type of the *expression* parameter.

- If the *expression* parameter is an identifier or a [class member access](../cpp/member-access-operators-dot-and.md), `decltype(expression)` is the type of the entity named by *expression*. If there is no such entity or the *expression* parameter names a set of overloaded functions, the compiler yields an error message.

- If the *expression* parameter is a call to a function or an overloaded operator function, `decltype(expression)` is the return type of the function. Parentheses around an overloaded operator are ignored.

- If the *expression* parameter is an [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` is the type of *expression*. If the *expression* parameter is an [lvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` is an [lvalue reference](../cpp/lvalue-reference-declarator-amp.md) to the type of *expression*.

The following code example demonstrates some uses of the **`decltype`** type specifier. First, assume that you have coded the following statements.

```cpp
int var;
const int&& fx();
struct A { double x; }
const A* a = new A();
```

Next, examine the types that are returned by the four **`decltype`** statements in the following table.

|Statement|Type|Notes|
|---------------|----------|-----------|
|`decltype(fx());`|`const int&&`|An [rvalue reference](../cpp/rvalue-reference-declarator-amp-amp.md) to a **`const int`**.|
|`decltype(var);`|**`int`**|The type of variable `var`.|
|`decltype(a->x);`|**`double`**|The type of the member access.|
|`decltype((a->x));`|`const double&`|The inner parentheses cause the statement to be evaluated as an expression instead of a member access. And because `a` is declared as a **`const`** pointer, the type is a reference to **`const double`**.|

## Decltype and Auto

In C++14, you can use `decltype(auto)` with no trailing return type to declare a template function whose return type depends on the types of its template arguments.

In C++11, you can use the **`decltype`** type specifier on a trailing return type, together with the **`auto`** keyword, to declare a template function whose return type depends on the types of its template arguments. For example, consider the following code example in which the return type of the template function depends on the types of the template arguments. In the code example, the *UNKNOWN* placeholder indicates that the return type cannot be specified.

```cpp
template<typename T, typename U>
UNKNOWN func(T&& t, U&& u){ return t + u; };
```

The introduction of the **`decltype`** type specifier enables a developer to obtain the type of the expression that the template function returns. Use the *alternative function declaration syntax* that is shown later, the **`auto`** keyword, and the **`decltype`** type specifier to declare a *late-specified* return type. The late-specified return type is determined when the declaration is compiled, instead of when it is coded.

The following prototype illustrates the syntax of an alternative function declaration. Note that the **`const`** and **`volatile`** qualifiers, and the **`throw`** [exception specification](../cpp/exception-specifications-throw-cpp.md) are optional. The *function_body* placeholder represents a compound statement that specifies what the function does. As a best coding practice, the *expression* placeholder in the **`decltype`** statement should match the expression specified by the **`return`** statement, if any, in the *function_body*.

**`auto`** *function_name* **`(`** *parameters*<sub>opt</sub> **`)`** **`const`**<sub>opt</sub> **`volatile`**<sub>opt</sub> **`->`** **`decltype(`** *expression* **`)`** **`noexcept`**<sub>opt</sub> **`{`** *function_body* **`};`**

In the following code example, the late-specified return type of the `myFunc` template function is determined by the types of the `t` and `u` template arguments. As a best coding practice, the code example also uses rvalue references and the `forward` function template, which support *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

```cpp
//C++11
template<typename T, typename U>
auto myFunc(T&& t, U&& u) -> decltype (forward<T>(t) + forward<U>(u))
        { return forward<T>(t) + forward<U>(u); };

//C++14
template<typename T, typename U>
decltype(auto) myFunc(T&& t, U&& u)
        { return forward<T>(t) + forward<U>(u); };
```

## Decltype and Forwarding Functions (C++11)

Forwarding functions wrap calls to other functions. Consider a function template that forwards its arguments, or the results of an expression that involves those arguments, to another function. Furthermore, the forwarding function returns the result of calling the other function. In this scenario, the return type of the forwarding function should be the same as the return type of the wrapped function.

In this scenario, you cannot write an appropriate type expression without the **`decltype`** type specifier. The **`decltype`** type specifier enables generic forwarding functions because it does not lose required information about whether a function returns a reference type. For a code example of a forwarding function, see the previous `myFunc` template function example.

## Examples

The following code example declares the late-specified return type of template function `Plus()`. The `Plus` function processes its two operands with the **`operator+`** overload. Consequently, the interpretation of the plus operator (**`+`**) and the return type of the `Plus` function depends on the types of the function arguments.

```cpp
// decltype_1.cpp
// compile with: cl /EHsc decltype_1.cpp

#include <iostream>
#include <string>
#include <utility>
#include <iomanip>

using namespace std;

template<typename T1, typename T2>
auto Plus(T1&& t1, T2&& t2) ->
   decltype(forward<T1>(t1) + forward<T2>(t2))
{
   return forward<T1>(t1) + forward<T2>(t2);
}

class X
{
   friend X operator+(const X& x1, const X& x2)
   {
      return X(x1.m_data + x2.m_data);
   }

public:
   X(int data) : m_data(data) {}
   int Dump() const { return m_data;}
private:
   int m_data;
};

int main()
{
   // Integer
   int i = 4;
   cout <<
      "Plus(i, 9) = " <<
      Plus(i, 9) << endl;

   // Floating point
   float dx = 4.0;
   float dy = 9.5;
   cout <<
      setprecision(3) <<
      "Plus(dx, dy) = " <<
      Plus(dx, dy) << endl;

   // String
   string hello = "Hello, ";
   string world = "world!";
   cout << Plus(hello, world) << endl;

   // Custom type
   X x1(20);
   X x2(22);
   X x3 = Plus(x1, x2);
   cout <<
      "x3.Dump() = " <<
      x3.Dump() << endl;
}
```

```Output
Plus(i, 9) = 13
Plus(dx, dy) = 13.5
Hello, world!
x3.Dump() = 42
```

**Visual Studio 2017 and later:** The compiler parses **`decltype`** arguments when the templates are declared rather than instantiated. Consequently, if a non-dependent specialization is found in the **`decltype`** argument, it will not be deferred to instantiation-time and will be processed immediately and any resulting errors will be diagnosed at that time.

The following example shows such a compiler error that is raised at the point of declaration:

```cpp
#include <utility>
template <class T, class ReturnT, class... ArgsT> class IsCallable
{
public:
   struct BadType {};
   template <class U>
   static decltype(std::declval<T>()(std::declval<ArgsT>()...)) Test(int); //C2064. Should be declval<U>
   template <class U>
   static BadType Test(...);
   static constexpr bool value = std::is_convertible<decltype(Test<T>(0)), ReturnT>::value;
};

constexpr bool test1 = IsCallable<int(), int>::value;
static_assert(test1, "PASS1");
constexpr bool test2 = !IsCallable<int*, int>::value;
static_assert(test2, "PASS2");
```

## Requirements

Visual Studio 2010 or later versions.

`decltype(auto)` requires Visual Studio 2015 or later.
