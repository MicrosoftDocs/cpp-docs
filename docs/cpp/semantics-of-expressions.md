---
description: "Learn more about: Semantics of Expressions"
title: "Semantics of Expressions"
ms.date: "11/19/2018"
helpviewer_keywords: ["grammar, expressions", "expressions [C++], semantics", "expression evaluation", "expression evaluation, about expression evaluation"]
ms.assetid: 4a792154-533b-48b9-8709-31bfc170f0a7
---
# Semantics of Expressions

Expressions are evaluated according to the precedence and grouping of their operators. ([Operator Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md) in [Lexical Conventions](../cpp/lexical-conventions.md), shows the relationships the C++ operators impose on expressions.)

## Order of evaluation

Consider this example:

```cpp
// Order_of_Evaluation.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 4, c = 9;

    cout << a + b * c << "\n";
    cout << a + (b * c) << "\n";
    cout << (a + b) * c << "\n";
}
```

```Output
38
38
54
```

![Evaluation order in an expression](../cpp/media/vc38zv1.gif "Evaluation order in an expression") <br/>
Expression-evaluation order

The order in which the expression shown in the above figure is evaluated is determined by the precedence and associativity of the operators:

1. Multiplication (*) has the highest precedence in this expression; hence the subexpression `b * c` is evaluated first.

1. Addition (+) has the next highest precedence, so `a` is added to the product of `b` and `c`.

1. Left shift (<<) has the lowest precedence in the expression, but there are two occurrences. Because the left-shift operator groups left-to-right, the left subexpression is evaluated first and then the right one.

When parentheses are used to group the subexpressions, they alter the precedence and also the order in which the expression is evaluated, as shown in the following figure.

![Evaluation order of expression with parentheses](../cpp/media/vc38zv2.gif "Evaluation order of expression with parentheses") <br/>
Expression-evaluation order with parentheses

Expressions such as those in the above figure are evaluated purely for their side effects — in this case, to transfer information to the standard output device.

## Notation in expressions

The C++ language specifies certain compatibilities when specifying operands. The following table shows the types of operands acceptable to operators that require operands of type *type*.

### Operand Types Acceptable to Operators

|Type expected|Types allowed|
|-------------------|-------------------|
|*type*|**`const`** *type*<br /> **`volatile`** *type*<br /> *type*&<br /> **`const`** *type*&<br /> **`volatile`** *type*&<br /> `volatile const` *type*<br /> `volatile const` *type*&|
|*type* \*|*type* \*<br /> **`const`** *type* \*<br /> **`volatile`** *type* \*<br /> `volatile const` *type* \*|
|**`const`** *type*|*type*<br /> **`const`** *type*<br />**`const`** *type*&|
|**`volatile`** *type*|*type*<br /> **`volatile`** *type*<br /> **`volatile`** *type*&|

Because the preceding rules can always be used in combination, a const pointer to a volatile object can be supplied where a pointer is expected.

## Ambiguous expressions

Certain expressions are ambiguous in their meaning. These expressions occur most frequently when an object's value is modified more than once in the same expression. These expressions rely on a particular order of evaluation where the language does not define one. Consider the following example:

```
int i = 7;

func( i, ++i );
```

The C++ language does not guarantee the order in which arguments to a function call are evaluated. Therefore, in the preceding example, `func` could receive the values 7 and 8, or 8 and 8 for its parameters, depending on whether the parameters are evaluated from left to right or from right to left.

## C++ sequence points (Microsoft-specific)

An expression can modify an object's value only once between consecutive "sequence points."

The C++ language definition does not currently specify sequence points. Microsoft C++ uses the same sequence points as ANSI C for any expression involving C operators and not involving overloaded operators. When operators are overloaded, the semantics change from operator sequencing to function-call sequencing. Microsoft C++ uses the following sequence points:

- Left operand of the logical AND operator (&&). The left operand of the logical AND operator is completely evaluated and all side effects completed before continuing. There is no guarantee that the right operand of the logical AND operator will be evaluated.

- Left operand of the logical OR operator (&#124;&#124;). The left operand of the logical OR operator is completely evaluated and all side effects completed before continuing. There is no guarantee that the right operand of the logical OR operator will be evaluated.

- Left operand of the comma operator. The left operand of the comma operator is completely evaluated and all side effects completed before continuing. Both operands of the comma operator are always evaluated.

- Function-call operator. The function-call expression and all arguments to a function, including default arguments, are evaluated and all side effects completed prior to entry to the function. There is no specified order of evaluation among the arguments or the function-call expression.

- First operand of the conditional operator. The first operand of the conditional operator is completely evaluated and all side effects completed before continuing.

- The end of a full initialization expression, such as the end of an initialization in a declaration statement.

- The expression in an expression statement. Expression statements consist of an optional expression followed by a semicolon (;). The expression is completely evaluated for its side effects.

- The controlling expression in a selection (if or switch) statement. The expression is completely evaluated and all side effects completed before the code dependent on the selection is executed.

- The controlling expression of a while or do statement. The expression is completely evaluated and all side effects completed before any statements in the next iteration of the while or do loop are executed.

- Each of the three expressions of a for statement. Each expression is completely evaluated and all side effects completed before moving to the next expression.

- The expression in a return statement. The expression is completely evaluated and all side effects completed before control returns to the calling function.

## See also

[Expressions](../cpp/expressions-cpp.md)
