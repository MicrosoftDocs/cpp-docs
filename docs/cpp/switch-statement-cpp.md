---
title: "switch statement (C++)"
description: "Reference to the Standard C++ switch statement in Microsoft Visual Studio C++."
ms.date: "04/25/2020"
f1_keywords: ["default_cpp", "switch_cpp", "case_cpp"]
helpviewer_keywords: ["switch keyword [C++]", "case keyword [C++], in switch statements", "default keyword [C++]"]
no-loc: [switch, case, default, break, while, opt]
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
---
# `switch` statement (C++)

Allows selection among multiple sections of code, depending on the value of an integral expression.

## Syntax

> *`selection-statement`*:\
> &emsp; **`switch`**&nbsp;**`(`**&nbsp;*`init-statement`*<sub>opt</sub><sup>C++17</sup>&nbsp;*`condition`*&nbsp;**`)`**&nbsp;*`statement`*

> *`init-statement`*:\
> &emsp; *`expression-statement`*\
> &emsp; *`simple-declaration`*

> *`condition`*:\
> &emsp; *`expression`*\
> &emsp; *`attribute-specifier-seq`*<sub>opt</sub>&nbsp;*`decl-specifier-seq`*&nbsp;*`declarator`*&nbsp;*`brace-or-equal-initializer`*

> *`labeled-statement`*:\
> &emsp; **`case`**&nbsp;*`constant-expression`*&nbsp;**`:`**&nbsp;*`statement`*\
> &emsp; **`default`**&nbsp;**`:`**&nbsp;*`statement`*

## Remarks

A **`switch`** statement causes control to transfer to one *`labeled-statement`* in its statement body, depending on the value of *`condition`*.

The *`condition`* must have an integral type, or be a class type that has an unambiguous conversion to integral type. Integral promotion takes place as described in [Standard conversions](standard-conversions.md).

The **`switch`** statement body consists of a series of **`case`** labels and an optional **`default`** label. A *`labeled-statement`* is one of these labels and the statements that follow. The labeled statements aren't syntactic requirements, but the **`switch`** statement is meaningless without them. No two *`constant-expression`* values in **`case`** statements may evaluate to the same value. The **`default`** label may appear only once. The **`default`** statement is often placed at the end, but it can appear anywhere in the **`switch`** statement body. A **`case`** or **`default`** label can only appear inside a **`switch`** statement.

The *`constant-expression`* in each **`case`** label is converted to a constant value that's the same type as *`condition`*. Then, it's compared with *`condition`* for equality. Control passes to the first statement after the **`case`** *`constant-expression`* value that matches the value of *`condition`*. The resulting behavior is shown in the following table.

### `switch` statement behavior

| Condition | Action |
|--|--|
| Converted value matches that of the promoted controlling expression. | Control is transferred to the statement following that label. |
| None of the constants match the constants in the **`case`** labels; a **`default`** label is present. | Control is transferred to the **`default`** label. |
| None of the constants match the constants in the **`case`** labels; no **`default`** label is present. | Control is transferred to the statement after the **`switch`** statement. |

If a matching expression is found, execution can continue through later **`case`** or **`default`** labels. The [`break`](../cpp/break-statement-cpp.md) statement is used to stop execution and transfer control to the statement after the **`switch`** statement. Without a **`break`** statement, every statement from the matched **`case`** label to the end of the **`switch`**, including the **`default`**, is executed. For example:

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

In the above example, `uppercase_A` is incremented if `c` is an uppercase `'A'`. The **`break`** statement after `uppercase_A++` terminates execution of the **`switch`** statement body and control passes to the **`while`** loop. Without the **`break`** statement, execution would "fall through" to the next labeled statement, so that `lowercase_a` and `other` would also be incremented. A similar purpose is served by the **`break`** statement for `case 'a'`. If `c` is a lowercase `'a'`, `lowercase_a` is incremented and the **`break`** statement terminates the **`switch`** statement body. If `c` isn't an `'a'` or `'A'`, the **`default`** statement is executed.

**Visual Studio 2017 and later** (available in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) mode and later): The `[[fallthrough]]` attribute is specified in the C++17 standard. You can use it in a **`switch`** statement. It's a hint to the compiler, or anyone who reads the code, that fall-through behavior is intentional. The Microsoft C++ compiler currently doesn't warn on fallthrough behavior, so this attribute has no effect on compiler behavior. In the example, the attribute gets applied to an empty statement within the unterminated labeled statement. In other words, the semicolon is necessary.

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

**Visual Studio 2017 version 15.3 and later** (available in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) mode and later): A **`switch`** statement may have an *`init-statement`* clause, which ends with a semicolon. It introduces and initializes a variable whose scope is limited to the block of the **`switch`** statement:

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

An inner block of a **`switch`** statement can contain definitions with initializers as long as they're *reachable*, that is, not bypassed by all possible execution paths. Names introduced using these declarations have local scope. For example:

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

A **`switch`** statement can be nested. When nested, the **`case`** or **`default`** labels associate with the closest **`switch`** statement that encloses them.

### Microsoft-specific behavior

Microsoft C++ doesn't limit the number of **`case`** values in a **`switch`** statement. The number is limited only by the available memory.

## See also

[Selection Statements](../cpp/selection-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
