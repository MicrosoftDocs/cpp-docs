---
title: "if-else Statement (C++)"
ms.date: "07/17/2017"
f1_keywords: ["else_cpp", "if_cpp"]
helpviewer_keywords: ["if keyword [C++]", "else keyword [C++]", "if keyword [C++], if-else"]
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
---
# if-else Statement (C++)

Controls conditional branching. Statements in the *if-block* are executed only if the *if-expression* evaluates to a non-zero value (or TRUE). If the value of *expression* is nonzero, *statement1* and any other statements in the block are executed and the else-block, if present, is skipped. If the value of *expression* is zero, then the if-block is skipped and the else-block, if present, is executed. Expressions that evaluate to non-zero are

- TRUE
- a non-null pointer,
- any non-zero arithmetic value, or
- a class type that defines an unambiguous conversion to an arithmetic, boolean or pointer type. (For information about conversions, see [Standard Conversions](../cpp/standard-conversions.md).)

## Syntax

```cpp
if ( expression )
{
   statement1;
   ...
}
else  // optional
{
   statement2;
   ...
}

// Visual Studio 2017 version 15.3 and later:
if ( initialization; expression )
{
   statement1;
   ...
}
else  // optional
{
   statement2;
   ...
}

// Visual Studio 2017 version 15.3 and later:
if constexpr (expression)
{
    statement1;
    ...
}
else  // optional
{
   statement2;
   ...
}
```

## Example

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

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): An **if** statement may also contain an expression that declares and initializes a named variable. Use this form of the if-statement when the variable is only needed within the scope of the if-block.

## Example

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

In all forms of the **if** statement, *expression*, which can have any value except a structure, is evaluated, including all side effects. Control passes from the **if** statement to the next statement in the program unless one of the *statement*s contains a [break](../cpp/break-statement-cpp.md), [continue](../cpp/continue-statement-cpp.md), or [goto](../cpp/goto-statement-cpp.md).

The **else** clause of an `if...else` statement is associated with the closest previous **if** statement in the same scope that does not have a corresponding **else** statement.

## <a name="if_constexpr"> if constexpr statements

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): In function templates, you can use an **if constexpr** statement to make compile-time branching decisions without having to resort to multiple function overloads. For example, you can write a single function that handles parameter unpacking (no zero-parameter overload is needed):

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

- [Selection Statements](../cpp/selection-statements-cpp.md)
- [Keywords](../cpp/keywords-cpp.md)
- [switch Statement (C++)](../cpp/switch-statement-cpp.md)
