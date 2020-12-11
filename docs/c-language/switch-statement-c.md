---
description: "Learn more about: `switch` Statement (C)"
title: "switch  Statement (C)"
ms.date: "04/25/2020"
f1_keywords: ["switch"]
helpviewer_keywords: ["switch keyword [C]"]
ms.assetid: fbede014-23bd-4ab1-8094-c8d9d9cb963a
no-loc: [ switch, case, default, break ]
---
# `switch` Statement (C)

The **`switch`** and **`case`** statements help control complex conditional and branching operations. The **`switch`** statement transfers control to a statement within its body.

## Syntax

> *`selection-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; **`switch (`**&nbsp;*`expression`* &nbsp;**`)`**&nbsp;*`statement`*

> *`labeled-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; **`case`**&nbsp;*`constant-expression`*&nbsp;**`:`**&nbsp;*`statement`*\
> &nbsp;&nbsp;&nbsp;&nbsp; **`default`**&nbsp;**`:`**&nbsp;*`statement`*

## Remarks

A **`switch`** statement causes control to transfer to one *`labeled-statement`* in its statement body, depending on the value of *`expression`*.

The values of *`expression`* and each *`constant-expression`* must have an integral type. A *`constant-expression`* must have an unambiguous constant integral value at compile time.

Control passes to the **`case`** statement whose *`constant-expression`* value matches the value of *`expression`*. The **`switch`** statement can include any number of **`case`** instances. However, no two *`constant-expression`* values within the same **`switch`** statement can have the same value. Execution of the **`switch`** statement body begins at the first statement in or after the matching *`labeled-statement`*. Execution proceeds until the end of the body, or until a **`break`** statement transfers control out of the body.

Use of the **`switch`** statement usually looks something like this:

```C
switch ( expression )
{
    // declarations
    // . . .
    case constant_expression:
        // statements executed if the expression equals the
        // value of this constant_expression
        break;
    default:
        // statements executed if expression does not equal
        // any case constant_expression
}
```

You can use the **`break`** statement to end processing of a particular labeled statement within the **`switch`** statement. It branches to the end of the **`switch`** statement. Without **`break`**, the program continues to the next labeled statement, executing the statements until a **`break`** or the end of the statement is reached. This continuation may be desirable in some situations.

The **`default`** statement is executed if no **`case`** *`constant-expression`* value is equal to the value of *`expression`*. If there's no **`default`** statement, and no **`case`** match is found, none of the statements in the **`switch`** body get executed. There can be at most one **`default`** statement. The **`default`** statement doesn't have to come at the end. It may appear anywhere in the body of the **`switch`** statement. A **`case`** or **`default`** label can only appear inside a **`switch`** statement.

The type of **`switch`** *`expression`* and **`case`** *`constant-expression`* must be integral. The value of each **`case`** *`constant-expression`* must be unique within the statement body.

The **`case`** and **`default`** labels of the **`switch`** statement's body are significant only in the initial test that determines where execution starts in the statement body. **`switch`** statements can be nested. Any static variables are initialized before executing into any **`switch`** statements.

> [!NOTE]
> Declarations can appear at the head of the compound statement forming the **`switch`** body, but initializations included in the declarations are not performed. The **`switch`** statement transfers control directly to an executable statement within the body, bypassing the lines that contain initializations.

The following examples illustrate **`switch`** statements:

```C
switch( c )
{
    case 'A':
        capital_a++;
    case 'a':
        letter_a++;
    default :
        total++;
}
```

All three statements of the **`switch`** body in this example are executed if `c` is equal to `'A'`, since no **`break`** statement appears before the following **`case`**. Execution control is transferred to the first statement (`capital_a++;`) and continues in order through the rest of the body. If `c` is equal to `'a'`, `letter_a` and `total` are incremented. Only `total` is incremented when `c` doesn't equal `'A'` or `'a'`.

```C
switch( i )
{
    case -1:
        n++;
        break;
    case 0 :
        z++;
        break;
    case 1 :
        p++;
        break;
}
```

In this example, a **`break`** statement follows each statement of the **`switch`** body. The **`break`** statement forces an exit from the statement body after one statement is executed. If `i` is equal to -1, only `n` is incremented. The **`break`** following the statement `n++;` causes execution control to pass out of the statement body, bypassing the remaining statements. Similarly, if `i` is equal to 0, only `z` is incremented; if `i` is equal to 1, only `p` is incremented. The final **`break`** statement isn't strictly necessary, since control passes out of the body at the end of the compound statement. It's included for consistency.

A single statement can carry multiple **`case`** labels, as the following example shows:

```C
switch( c )
{
    case 'a' :
    case 'b' :
    case 'c' :
    case 'd' :
    case 'e' :
    case 'f' :  convert_hex(c);
}
```

In this example, if *constant-expression* equals any letter between `'a'` and `'f'`, the `convert_hex` function is called.

### Microsoft-specific

Microsoft C doesn't limit the number of **`case`** values in a **`switch`** statement. The number is limited only by the available memory. ANSI C requires at least 257 **`case`** labels be allowed in a **`switch`** statement.

The default for Microsoft C is that the Microsoft extensions are enabled. Use the [/Za](../build/reference/za-ze-disable-language-extensions.md) compiler option to disable these extensions.

## See also

[switch Statement (C++)](../cpp/switch-statement-cpp.md)
