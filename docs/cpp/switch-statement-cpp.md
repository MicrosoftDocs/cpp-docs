---
title: "switch statement (C++)"
description: "Reference to the Standard C++ switch statement in Microsoft Visual Studio C++."
ms.date: "04/15/2020"
f1_keywords: ["default_cpp", "switch_cpp", "case_cpp"]
helpviewer_keywords: ["switch keyword [C++]", "case keyword [C++], in switch statements", "default keyword [C++]"]
no-loc: [switch, case, default, break, while, C++, opt]
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
---
# `switch` statement (C++)

Allows selection among multiple sections of code, depending on the value of an integral expression.

## Syntax

> *`selection-statement`*:<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; __`switch`__&nbsp;__`(`__&nbsp;*`init-statement`*<sub>opt</sub><sup>C++17</sup>&nbsp;*`condition`*&nbsp;__`)`__&nbsp;*`statement`*

> *`init-statement`*:<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; *`expression-statement`*<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; *`simple-declaration`*

> *`condition`*:<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; *`expression`*<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; *`attribute-specifier-seq`*<sub>opt</sub>&nbsp;*`decl-specifier-seq`*&nbsp;*`declarator`*&nbsp;*`brace-or-equal-initializer`*

> *`labeled-statement`*:<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; __`case`__&nbsp;*`constant-expression`*&nbsp;__`:`__&nbsp;*`statement`*<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; __`default`__&nbsp;__`:`__&nbsp;*`statement`*

## Remarks

A __`switch`__ statement causes control to transfer to one *`labeled-statement`* in its statement body, depending on the value of *`condition`*.

The *`condition`* must have an integral type, or be a class type that has an unambiguous conversion to integral type. Integral promotion takes place as described in [Standard conversions](standard-conversions.md).

The __`switch`__ statement body consists of a series of __`case`__ labels and an optional __`default`__ label. A *`labeled-statement`* is one of these labels and the statements that follow. The labeled statements aren't syntactic requirements, but the __`switch`__ statement is meaningless without them. No two *`constant-expression`* values in __`case`__ statements may evaluate to the same value. The __`default`__ label may appear only once. The __`default`__ statement is often placed at the end, but it can appear anywhere in the __`switch`__ statement body. A __`case`__ or __`default`__ label can only appear inside a __`switch`__ statement.

The *`constant-expression`* in each __`case`__ label is converted to a constant value that's the same type as *`condition`*. Then, it's compared with *`condition`* for equality. Control passes to the first statement after the __`case`__ *`constant-expression`* value that matches the value of *`condition`*. The resulting behavior is shown in the following table.

### `switch` statement behavior

| Condition | Action |
|--|--|
| Converted value matches that of the promoted controlling expression. | Control is transferred to the statement following that label. |
| None of the constants match the constants in the __`case`__ labels; a __`default`__ label is present. | Control is transferred to the __`default`__ label. |
| None of the constants match the constants in the __`case`__ labels; no __`default`__ label is present. | Control is transferred to the statement after the __`switch`__ statement. |

If a matching expression is found, execution can continue through later __`case`__ or __`default`__ labels. The [`break`](../cpp/break-statement-cpp.md) statement is used to stop execution and transfer control to the statement after the __`switch`__ statement. Without a __`break`__ statement, every statement from the matched __`case`__ label to the end of the __`switch`__, including the __`default`__, is executed. For example:

```cpp
// switch_statement1.cpp
#include <stdio.h>

int main() {
   const char *buffer = "Any character stream";
   int uppercase_A, lowercase_a, other;
   char c;
   uppercase_A = lowercase_a = other = 0;

   while ( c = *buffer++ )   // Walks buffer until NULL
   {
      switch ( c )
      {
         case 'A':
            uppercase_A++;
            break;
         case 'a':
            lowercase_a++;
            break;
         default:
            other++;
      }
   }
   printf_s( "\nUppercase A: %d\nLowercase a: %d\nTotal: %d\n",
      uppercase_A, lowercase_a, (uppercase_A + lowercase_a + other) );
}
```

In the above example, `uppercase_A` is incremented if `c` is an uppercase `'A'`. The __`break`__ statement after `uppercase_A++` terminates execution of the __`switch`__ statement body and control passes to the __`while`__ loop. Without the __`break`__ statement, execution would "fall through" to the next labeled statement, so that `lowercase_a` and `other` would also be incremented. A similar purpose is served by the __`break`__ statement for `case 'a'`. If `c` is a lowercase `'a'`, `lowercase_a` is incremented and the __`break`__ statement terminates the __`switch`__ statement body. If `c` isn't an `'a'` or `'A'`, the __`default`__ statement is executed.

**Visual Studio 2017 and later:** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)) The `[[fallthrough]]` attribute is specified in the C++17 standard. You can use it in a __`switch`__ statement. It's a hint to the compiler, or anyone who reads the code, that fall-through behavior is intentional. The Microsoft C++ compiler currently doesn't warn on fallthrough behavior, so this attribute has no effect on compiler behavior. In the example, the attribute gets applied to an empty statement within the unterminated labeled statement. In other words, the semicolon is necessary.

```cpp
int main()
{
    int n = 5;
    switch (n)
    {

    case 1:
        a();
        break;
    case 2:
        b();
        d();
        [[fallthrough]]; // I meant to do this!
    case 3:
        c();
        break;
    default:
        d();
        break;
    }

    return 0;
}
```

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)). A __`switch`__ statement may have an *`init-statement`* clause, which ends with a semicolon. It introduces and initializes a variable whose scope is limited to the block of the __`switch`__ statement:

```cpp
    switch (Gadget gadget(args); auto s = gadget.get_status())
    {
    case status::good:
        gadget.zip();
        break;
    case status::bad:
        throw BadGadget();
    };
```

An inner block of a __`switch`__ statement can contain definitions with initializers as long as they're *reachable*, that is, not bypassed by all possible execution paths. Names introduced using these declarations have local scope. For example:

```cpp
// switch_statement2.cpp
// C2360 expected
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    switch( tolower( *argv[1] ) )
    {
        // Error. Unreachable declaration.
        char szChEntered[] = "Character entered was: ";

    case 'a' :
        {
        // Declaration of szChEntered OK. Local scope.
        char szChEntered[] = "Character entered was: ";
        cout << szChEntered << "a\n";
        }
        break;

    case 'b' :
        // Value of szChEntered undefined.
        cout << szChEntered << "b\n";
        break;

    default:
        // Value of szChEntered undefined.
        cout << szChEntered << "neither a nor b\n";
        break;
    }
}
```

A __`switch`__ statement can be nested. When nested, the __`case`__ or __`default`__ labels associate with the closest __`switch`__ statement that encloses them.

### Microsoft-specific behavior

Microsoft C++ doesn't limit the number of __`case`__ values in a __`switch`__ statement. The number is limited only by the available memory.

## See also

[Selection Statements](../cpp/selection-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
