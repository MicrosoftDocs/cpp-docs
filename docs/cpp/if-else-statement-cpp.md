---
title: "if-else statement (C++)"
description: "Use if-else, if-else with initializer, and if-constexpr statements to control conditional branching."
ms.date: 10/02/2020
f1_keywords: ["else_cpp", "if_cpp"]
helpviewer_keywords: ["if keyword [C++]", "else keyword [C++]"]
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
---
# if-else statement (C++)

An if-else statement controls conditional branching. Statements in the *`if-branch`* are executed only if the *`condition`* evaluates to a non-zero value (or **`true`**). If the value of *`condition`* is nonzero, the following statement gets executed, and the statement following the optional **`else`** gets skipped. Otherwise, the following statement gets skipped, and if there's an **`else`** then the statement following the **`else`** gets executed.

*`condition`* expressions that evaluate to non-zero are:

- **`true`**
- a non-null pointer,
- any non-zero arithmetic value, or
- a class type that defines an unambiguous conversion to an arithmetic, boolean, or pointer type. (For information about conversions, see [Standard Conversions](../cpp/standard-conversions.md).)

## Syntax

*`init-statement`*:\
&emsp; *`expression-statement`*\
&emsp; *`simple-declaration`*

*`condition`*:\
&emsp; *`expression`*\
&emsp; *`attribute-specifier-seq`*<sub>*opt*</sub> *`decl-specifier-seq`* *`declarator`* *`brace-or-equal-initializer`*

*`statement`*:\
&emsp; *`expression-statement`*\
&emsp; *`compound-statement`*

*`expression-statement`*:\
&emsp; *`expression`*<sub>*opt*</sub> **`;`**

*`compound-statement`*:\
&emsp; **`{`** *`statement-seq`*<sub>*opt*</sub> **`}`**

*`statement-seq`*:\
&emsp; *`statement`*\
&emsp; *`statement-seq`* *`statement`*

*`if-branch`*:\
&emsp; *`statement`*

*`else-branch`*:\
&emsp; *`statement`*

*`selection-statement`*:\
&emsp; **`if`** **`constexpr`**<sub>*opt*</sub><sup>17</sup> **`(`** *`init-statement`*<sub>*opt*</sub><sup>17</sup> *`condition`* **`)`** *`if-branch`*\
&emsp; **`if`** **`constexpr`**<sub>*opt*</sub><sup>17</sup> **`(`** *`init-statement`*<sub>*opt*</sub><sup>17</sup> *`condition`* **`)`** *`if-branch`* **`else`** *`else-branch`*

<sup>17</sup> This optional element is available starting in C++17.

## if-else statements

In all forms of the **`if`** statement, *`condition`*, which can have any value except a structure, is evaluated, including all side effects. Control passes from the **`if`** statement to the next statement in the program unless the executed *`if-branch`* or *`else-branch`* contains a [`break`](../cpp/break-statement-cpp.md), [`continue`](../cpp/continue-statement-cpp.md), or [`goto`](../cpp/goto-statement-cpp.md).

The **`else`** clause of an `if...else` statement is associated with the closest previous **`if`** statement in the same scope that doesn't have a corresponding **`else`** statement.

### Example

This sample code shows several **`if`** statements in use, both with and without **`else`**:

```cpp
// if_else_statement.cpp
#include <iostream>

using namespace std;

class C
{
    public:
    void do_something(){}
};
void init(C){}
bool is_true() { return true; }
int x = 10;

int main()
{
    if (is_true())
    {
        cout << "b is true!\n";  // executed
    }
    else
    {
        cout << "b is false!\n";
    }

    // no else statement
    if (x == 10)
    {
        x = 0;
    }

    C* c;
    init(c);
    if (c)
    {
        c->do_something();
    }
    else
    {
        cout << "c is null!\n";
    }
}
```

## <a name="if_with_init"></a> if statement with an initializer

Starting in C++17, an **`if`** statement may also contain an *`init-statement`* expression that declares and initializes a named variable. Use this form of the if-statement when the variable is only needed within the scope of the if-statement. **Microsoft-specific**: This form is available starting in Visual Studio 2017 version 15.3, and requires at least the [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) compiler option.

### Example

```cpp
#include <iostream>
#include <mutex>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<int, string> m;
mutex mx;
bool shared_flag; // guarded by mx
void unsafe_operation() {}

int main()
{

    if (auto it = m.find(10); it != m.end())
    {
        cout << it->second;
        return 0;
    }

    if (char buf[10]; fgets(buf, 10, stdin))
    {
        m[0] += buf;
    }

    if (lock_guard<mutex> lock(mx); shared_flag)
    {
        unsafe_operation();
        shared_flag = false;
    }

    string s{ "if" };
    if (auto keywords = { "if", "for", "while" }; any_of(keywords.begin(), keywords.end(), [&s](const char* kw) { return s == kw; }))
    {
        cout << "Error! Token must not be a keyword\n";
    }
}
```

## <a name="if_constexpr"> if constexpr statements

Starting in C++17, you can use an **`if constexpr`** statement in function templates to make compile-time branching decisions without having to resort to multiple function overloads. **Microsoft-specific**: This form is available starting in Visual Studio 2017 version 15.3, and requires at least the [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) compiler option.

### Example

This example shows how you can write a single function that handles parameter unpacking. No zero-parameter overload is needed:

```cpp
template <class T, class... Rest>
void f(T&& t, Rest&&... r)
{
    // handle t
    do_something(t);

    // handle r conditionally
    if constexpr (sizeof...(r))
    {
        f(r...);
    }
    else
    {
        g(r...);
    }
}
```

## See also

[Selection Statements](../cpp/selection-statements-cpp.md)\
[Keywords](../cpp/keywords-cpp.md)\
[`switch` Statement (C++)](../cpp/switch-statement-cpp.md)
