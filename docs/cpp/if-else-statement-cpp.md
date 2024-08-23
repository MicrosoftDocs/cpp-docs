---
title: "if-else statement (C++)"
description: "Use if-else, if-else with initializer, and if-constexpr statements to control conditional branching."
ms.date: 10/16/2023
f1_keywords: ["else_cpp", "if_cpp"]
helpviewer_keywords: ["if keyword [C++]", "else keyword [C++]"]
---
# if-else statement (C++)

An if-else statement controls conditional branching. Statements in the *`if-branch`* are executed only if the *`condition`* evaluates to a nonzero value (or **`true`**). If the value of *`condition`* is nonzero, the following statement gets executed, and the statement following the optional **`else`** gets skipped. Otherwise, the following statement gets skipped, and if there's an **`else`** then the statement following the **`else`** gets executed.

*`condition`* expressions that evaluate to nonzero are:

- **`true`**
- a non-null pointer,
- any nonzero arithmetic value, or
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

int main()
{
    int x = 10;

    if (x < 11)
    {
        cout << "x < 11 is true!\n";  // executed
    }
    else
    {
        cout << "x < 11 is false!\n"; // not executed
    }

    // no else statement
    bool flag = false;
    if (flag == true)
    {
        x = 100; // not executed
    }

    int *p = new int(25);
    if (p)
    {
        cout << *p << "\n"; // outputs 25
    }
    else
    {
        cout << "p is null!\n"; // executed if memory allocation fails
    }
}
```

Output:

```output
x < 11 is true!
25
```

## <a name="if_with_init"></a> if statement with an initializer

Starting in C++17, an **`if`** statement might also contain an *`init-statement`* expression that declares and initializes a named variable. Use this form of the if-statement when the variable is only needed within the scope of the if-statement. **Microsoft-specific**: This form is available starting in Visual Studio 2017 version 15.3, and requires at least the [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) compiler option.

### Example

```cpp
// Compile with /std:c++17

#include <iostream>
#include <mutex>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<int, string> m{ {1, "one"}, {2, "two"}, {10,"ten"} };
mutex mx;
bool shared_flag = true; // guarded by mx
int getValue() { return 42; }

int main()
{
    if (auto it = m.find(10); it != m.end())
    {
        cout << it->second << "\n";
    }

    if (int x = getValue(); x == 42)
    {
        cout << "x is 42\n";
    }

    if (lock_guard<mutex> lock(mx); shared_flag)
    {
        cout << "setting shared_flag to false\n";
        shared_flag = false;
    }

    string s{ "if" };
    if (auto keywords = { "if", "for", "while" }; any_of(keywords.begin(), keywords.end(), [&s](const char* kw) { return s == kw; }))
    {
        cout << "Error! Token must not be a keyword\n";
    }
}
```

Output:

```Output
ten
x is 42
setting shared_flag to false
Error! Token must not be a keyword
```

## <a name="if_constexpr"></a> if constexpr statements

Starting in C++17, you can use an **`if constexpr`** statement in function templates to make compile-time branching decisions without having to resort to multiple function overloads. **Microsoft-specific**: This form is available starting in Visual Studio 2017 version 15.3, and requires at least the [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) compiler option.

### Example

This example shows how you can conditionally compile a template based on the type sent to it:

```cpp
// Compile with /std:c++17
#include <iostream>

template<typename T>
auto Show(T t)
{
    //if (std::is_pointer_v<T>) // Show(a) results in compiler error for return *t. Show(b) results in compiler error for return t.
    if constexpr (std::is_pointer_v<T>) // This statement goes away for Show(a)
    {
        return *t;
    }
    else
    {
        return t;
    }
}

int main()
{
    int a = 42;
    int* pB = &a;

    std::cout << Show(a) << "\n"; // prints "42"
    std::cout << Show(pB) << "\n"; // prints "42"
}
```

The **`if constexpr`** statement is evaluated at compile time, and the compiler only generates code for the **`if`** branch that matches the type of the argument sent to the function template. If you comment out the **`if constexpr`** statement and uncomment the **`if`** statement, the compiler generates code for both branches. That means you get an error:
- If you call `ShowValue(a);` you get an error on `return *t` because `t` isn't a pointer, even though the **`if`** statement is false and the code is never executed. 
- If you call `ShowValue(pB);` you get an error on `return t` because `t` is a pointer, even though the **`if`** statement is true and the code is never executed.
 
Using `if constexpr` solves this problem because only the statement that matches the type of the argument sent to the function template is compiled.

Output:

```output
42
42
```

## See also

[Selection Statements](../cpp/selection-statements-cpp.md)\
[Keywords](../cpp/keywords-cpp.md)\
[`switch` Statement (C++)](../cpp/switch-statement-cpp.md)
