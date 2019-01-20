---
title: "switch Statement (C++)"
ms.date: "11/04/2016"
f1_keywords: ["default_cpp", "switch_cpp", "case_cpp"]
helpviewer_keywords: ["switch keyword [C++]", "case keyword [C++], in switch statements", "default keyword [C++]"]
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
---
# switch Statement (C++)

Allows selection among multiple sections of code, depending on the value of an integral expression.

## Syntax

```
   switch ( init; expression )
   case constant-expression : statement
   [default  : statement]
```

## Remarks

The *expression* must be of an integral type or of a class type for which there is an unambiguous conversion to integral type. Integral promotion is performed as described in [Standard Conversions](standard-conversions.md).

The **switch** statement body consists of a series of **case** labels and an optional **default** label. No two constant expressions in **case** statements can evaluate to the same value. The **default** label can appear only once. The labeled statements are not syntactic requirements, but the **switch** statement is meaningless without them.   The default statement need not come at the end; it can appear anywhere in the body of the switch statement. A case or default label can only appear inside a switch statement.

The *constant-expression* in each **case** label is converted to the type of *expression* and compared with *expression* for equality. Control passes to the statement whose **case** *constant-expression* matches the value of *expression*. The resulting behavior is shown in the following table.

### Switch Statement Behavior

|Condition|Action|
|---------------|------------|
|Converted value matches that of the promoted controlling expression.|Control is transferred to the statement following that label.|
|None of the constants match the constants in the **case** labels; a **default** label is present.|Control is transferred to the **default** label.|
|None of the constants match the constants in the **case** labels; **default** label is not present.|Control is transferred to the statement after the **switch** statement.|

If a matching expression is found, control is not impeded by subsequent **case** or **default** labels. The [break](../cpp/break-statement-cpp.md) statement is used to stop execution and transfer control to the statement after the **switch** statement. Without a **break** statement, every statement from the matched **case** label to the end of the **switch**, including the **default**, is executed. For example:

```cpp
// switch_statement1.cpp
#include <stdio.h>

int main() {
   char *buffer = "Any character stream";
   int capa, lettera, nota;
   char c;
   capa = lettera = nota = 0;

   while ( c = *buffer++ )   // Walks buffer until NULL
   {
      switch ( c )
      {
         case 'A':
            capa++;
            break;
         case 'a':
            lettera++;
            break;
         default:
            nota++;
      }
   }
   printf_s( "\nUppercase a: %d\nLowercase a: %d\nTotal: %d\n",
      capa, lettera, (capa + lettera + nota) );
}
```

In the above example, `capa` is incremented if `c` is an uppercase `A`. The **break** statement after `capa++` terminates execution of the **switch** statement body and control passes to the **while** loop. Without the **break** statement, execution would "fall through" to the next labeled statement, so that `lettera` and `nota` would also be incremented. A similar purpose is served by the **break** statement for `case 'a'`. If `c` is a lowercase `a`, `lettera` is incremented and the **break** statement terminates the **switch** statement body. If `c` is not an `a` or `A`, the **default** statement is executed.

**Visual Studio 2017 and later:** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)) The `[[fallthrough]]` attribute is specified in the C++17 standard. It can be used in a **switch** statement as a hint to the compiler (or to anyone reading the code) that fall-through behavior is intended. The Visual C++ compiler currently does not warn on fallthrough behavior, so this attribute has no effect on compiler behavior. Note that the attribute is applied to an empty statement within the labeled statement; in other words the semicolon is necessary.

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

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)):  A switch statement may introduce and initialize a variable whose scope is limited to the block of the switch statement:

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

An inner block of a **switch** statement can contain definitions with initializations as long as they are reachable — that is, not bypassed by all possible execution paths. Names introduced using these declarations have local scope. For example:

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

A **switch** statement can be nested. In such cases, **case** or **default** labels associate with the closest **switch** statement that encloses them.

**Microsoft Specific**

Microsoft C does not limit the number of case values in a **switch** statement. The number is limited only by the available memory. ANSI C requires at least 257 case labels be allowed in a **switch** statement.

The default for Microsoft C is that the Microsoft extensions are enabled. Use the [/Za](../build/reference/za-ze-disable-language-extensions.md) compiler option to disable these extensions.

**END Microsoft Specific**

## See also

- [Selection Statements](../cpp/selection-statements-cpp.md)
- [Keywords](../cpp/keywords-cpp.md)
