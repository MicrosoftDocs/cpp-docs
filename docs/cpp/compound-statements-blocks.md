---
description: "Learn more about: Compound Statements (Blocks)"
title: "Compound Statements (Blocks)"
ms.date: "11/04/2016"
f1_keywords: ["}", "{"]
helpviewer_keywords: ["blocks, about blocks", "compound statements"]
ms.assetid: 23855939-7430-498e-8936-0c70055ea701
---
# Compound Statements (Blocks)

A compound statement consists of zero or more statements enclosed in curly braces (**{ }**). A compound statement can be used anywhere a statement is expected. Compound statements are commonly called "blocks."

## Syntax

```
{ [ statement-list ] }
```

## Remarks

The following example uses a compound statement as the *statement* part of the **`if`** statement (see [The if Statement](../cpp/if-else-statement-cpp.md) for details about the syntax):

```cpp
if( Amount > 100 )
{
    cout << "Amount was too large to handle\n";
    Alert();
}
else
{
    Balance -= Amount;
}
```

> [!NOTE]
> Because a declaration is a statement, a declaration can be one of the statements in the *statement-list*. As a result, names declared inside a compound statement, but not explicitly declared as static, have local scope and (for objects) lifetime. See [Scope](../cpp/scope-visual-cpp.md) for details about treatment of names with local scope.

## See also

[Overview of C++ Statements](../cpp/overview-of-cpp-statements.md)
