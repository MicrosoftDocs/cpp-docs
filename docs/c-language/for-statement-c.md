---
description: "Learn more about: for Statement (C)"
title: "for Statement (C)"
ms.date: "11/04/2016"
helpviewer_keywords: ["for keyword [C]"]
ms.assetid: 560a8de4-19db-4868-9f18-dbe51b17900d
---
# for Statement (C)

The **`for`** statement lets you repeat a statement or compound statement a specified number of times. The body of a **`for`** statement is executed zero or more times until an optional condition becomes false. You can use optional expressions within the **`for`** statement to initialize and change values during the **`for`** statement's execution.

## Syntax

*iteration-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`for`** **(** *init-expression*<sub>opt</sub> **;** *cond-expression*<sub>opt</sub> **;** *loop-expression*<sub>opt</sub> **)** *statement*

Execution of a **`for`** statement proceeds as follows:

1. The *init-expression*, if any, is evaluated. This specifies the initialization for the loop. There is no restriction on the type of *init-expression*.

1. The *cond-expression*, if any, is evaluated. This expression must have arithmetic or pointer type. It is evaluated before each iteration. Three results are possible:

   - If *cond-expression* is **`true`** (nonzero), *statement* is executed; then *loop-expression*, if any, is evaluated. The *loop-expression* is evaluated after each iteration. There is no restriction on its type. Side effects will execute in order. The process then begins again with the evaluation of *cond-expression*.

   - If *cond-expression* is omitted, *cond-expression* is considered true, and execution proceeds exactly as described in the previous paragraph. A **`for`** statement without a *cond-expression* argument terminates only when a **`break`** or **`return`** statement within the statement body is executed, or when a **`goto`** (to a labeled statement outside the **`for`** statement body) is executed.

   - If *cond-expression* is **`false`** (0), execution of the **`for`** statement terminates and control passes to the next statement in the program.

A **`for`** statement also terminates when a **`break`**, **`goto`**, or **`return`** statement within the statement body is executed. A **`continue`** statement in a **`for`** loop causes *loop-expression* to be evaluated. When a **`break`** statement is executed inside a **`for`** loop, *loop-expression* is not evaluated or executed. This statement

```C
for( ; ; )
```

is the customary way to produce an infinite loop which can only be exited with a **`break`**, **`goto`**, or **`return`** statement.

## Example

This example illustrates the **`for`** statement:

```C
// c_for.c
int main()
{
   char* line = "H e  \tl\tlo World\0";
   int space = 0;
   int tab = 0;
   int i;
   int max = strlen(line);
   for (i = 0; i < max; i++ )
   {
      if ( line[i] == ' ' )
      {
          space++;
      }
      if ( line[i] == '\t' )
      {
          tab++;
      }
   }

   printf("Number of spaces: %i\n", space);
   printf("Number of tabs: %i\n", tab);
   return 0;
}
```

## Output

```Output
Number of spaces: 4
Number of tabs: 2
```

## See also

[Statements](../c-language/statements-c.md)
