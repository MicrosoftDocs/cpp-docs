---
description: "Learn more about: C Constant Expressions"
title: "C Constant Expressions"
ms.date: 04/14/2021
helpviewer_keywords: ["constant expressions, syntax", "constant expressions", "expressions [C++], constant"]
---
# C Constant Expressions

A constant expression gets evaluated at compile time, not run time, and can be used in any place that a constant can be used. The constant expression must evaluate to a constant that is in the range of representable values for that type. The operands of a constant expression can be integer constants, character constants, floating-point constants, enumeration constants, type casts, **`sizeof`** expressions, and other constant expressions.

## Syntax

*`constant-expression`*:\
&emsp;*`conditional-expression`*

*`conditional-expression`*:\
&emsp;*`logical-OR-expression`*\
&emsp;*`logical-OR-expression`* **`?`** *`expression`* **`:`** *`conditional-expression`*

*`expression`*:\
&emsp;*`assignment-expression`*\
&emsp;*`expression`* **`,`** *`assignment-expression`*

*`assignment-expression`*:\
&emsp;*`conditional-expression`*\
&emsp;*`unary-expression`* *`assignment-operator`* *`assignment-expression`*

*`assignment-operator`*: one of\
&emsp;**`=`** **`*=`** **`/=`** **`%=`** **`+=`** **`-=`** **`<<=`** **`>>=`** **`&=`** **`^=`** **`|=`**

The nonterminals for struct declarator, enumerator, direct declarator, direct-abstract declarator, and labeled statement contain the *`constant-expression`* nonterminal.

An integral constant expression must be used to specify the size of a bit-field member of a structure, the value of an enumeration constant, the size of an array, or the value of a **`case`** constant.

Constant expressions used in preprocessor directives are subject to several restrictions. They're known as *restricted* constant expressions. A restricted constant expression can't contain **`sizeof`** expressions, enumeration constants, type casts to any type, or floating-type constants. It can, however, contain the special constant expression **`defined (`** _identifier_ **`)`**.

## See also

[Operands and Expressions](../c-language/operands-and-expressions.md)
