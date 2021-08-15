---
description: "Learn more about: L-Value and R-Value Expressions"
title: "L-Value and R-Value Expressions"
ms.date: "11/04/2016"
helpviewer_keywords: ["L-values", "member-selection expressions", "R-value expressions", "subscript expressions"]
ms.assetid: b790303e-ec6f-4d0d-bc55-df42da267172
---
# L-Value and R-Value Expressions

Expressions that refer to memory locations are called "l-value" expressions. An l-value represents a storage region's "locator" value, or a "left" value, implying that it can appear on the left of the equal sign (**=**). L-values are often identifiers.

Expressions referring to modifiable locations are called "modifiable l-values." A modifiable l-value cannot have an array type, an incomplete type, or a type with the **`const`** attribute. For structures and unions to be modifiable l-values, they must not have any members with the **`const`** attribute. The name of the identifier denotes a storage location, while the value of the variable is the value stored at that location.

An identifier is a modifiable l-value if it refers to a memory location and if its type is arithmetic, structure, union, or pointer. For example, if `ptr` is a pointer to a storage region, then `*ptr` is a modifiable l-value that designates the storage region to which `ptr` points.

Any of the following C expressions can be l-value expressions:

- An identifier of integral, floating, pointer, structure, or union type

- A subscript (**[ ]**) expression that does not evaluate to an array

- A member-selection expression (**->** or **.**)

- A unary-indirection (<strong>\*</strong>) expression that does not refer to an array

- An l-value expression in parentheses

- A **`const`** object (a nonmodifiable l-value)

The term "r-value" is sometimes used to describe the value of an expression and to distinguish it from an l-value. All l-values are r-values but not all r-values are l-values.

**Microsoft Specific**

Microsoft C includes an extension to the ANSI C standard that allows casts of l-values to be used as l-values, as long as the size of the object is not lengthened through the cast. (See [Type-Cast Conversions](../c-language/type-cast-conversions.md) for more information.) The following example illustrates this feature:

```
char *p ;
short  i;
long l;

(long *) p = &l ;       /* Legal cast   */
(long) i = l ;          /* Illegal cast */
```

The default for Microsoft C is that the Microsoft extensions are enabled. Use the /Za compiler option to disable these extensions.

**END Microsoft Specific**

## See also

[Operands and Expressions](../c-language/operands-and-expressions.md)
