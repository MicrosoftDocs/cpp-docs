---
title: "Primary expressions"
description: "Primary expressions in the C++ programming language."
ms.date: 12/11/2023
helpviewer_keywords: ["primary expressions", "expressions [C++], name", "expressions [C++], literal", "expressions [C++], primary", "expressions [C++], qualified names"]
---
# Primary Expressions

Primary expressions are the building blocks of more complex expressions. They may be literals, names, and names qualified by the scope-resolution operator (`::`). A primary expression may have any of the following forms:

*`primary-expression`*\
&emsp;*`literal`*\
&emsp;**`this`**\
&emsp;*`name`*\
&emsp;**`::`** *`name`* **`(`** *`expression`* **`)`**

A *`literal`* is a constant primary expression. Its type depends on the form of its specification. For more information about specifying literals, see [Literals](../cpp/numeric-boolean-and-pointer-literals-cpp.md) .

The **`this`** keyword is a pointer to an instance of the class. It's available within nonstatic member functions and points to the instance of the class the function was invoked from. The **`this`** keyword can't be used outside the body of a class-member function.

For more information about the type of the **`this`** pointer, see [`this` pointer](this-pointer.md).

The scope-resolution operator (**`::`**) followed by a name is a primary expression.  Such names must be names at global scope, not member names. The declaration of the name determines the type of the expression. It's an l-value (that is, it can appear on the left-hand side of an assignment expression) if the declaring name is an l-value. The scope-resolution operator allows a global name to be referred to, even if that name is hidden in the current scope. See [Scope](../cpp/scope-visual-cpp.md) for an example of how to use the scope-resolution operator.

An expression enclosed in parentheses is a primary expression. Its type and value are identical to the type and value of the unparenthesized expression. It's an l-value if the unparenthesized expression is an l-value.

Examples of primary expressions include:

```cpp
100 // literal
'c' // literal
this // in a member function, a pointer to the class instance
::func // a global function
::operator + // a global operator function
::A::B // a global qualified name
( i + 1 ) // a parenthesized expression
```

These examples are all considered *names*, and as such, primary expressions, in various forms:

```cpp
MyClass // an identifier
MyClass::f // a qualified name
operator = // an operator function name
operator char* // a conversion operator function name
~MyClass // a destructor name
A::B   // a qualified name
A<int> // a template id
```

## See also

[Types of Expressions](../cpp/types-of-expressions.md)
