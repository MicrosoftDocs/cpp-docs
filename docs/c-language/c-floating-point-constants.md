---
description: "Learn more about: C Floating-Point Constants"
title: "C Floating-Point Constants"
ms.date: "11/04/2016"
helpviewer_keywords: ["types [C], constants", "floating-point numbers, floating-point constants", "constants, floating-point", "floating-point constants", "floating-point constants, about floating-point constants", "double data type, floating-point constants"]
ms.assetid: e1bd9b44-d6ab-470c-93e5-07142c7a2062
---
# C Floating-Point Constants

A "floating-point constant" is a decimal number that represents a signed real number. The representation of a signed real number includes an integer portion, a fractional portion, and an exponent. Use floating-point constants to represent floating-point values that cannot be changed.

## Syntax

*floating-point-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*fractional-constant* *exponent-part*<sub>opt</sub> *floating-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *exponent-part* *floating-suffix*<sub>opt</sub>

*fractional-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence*<sub>opt</sub> **.** *digit-sequence*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence*  **.**

*exponent-part*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**e** *sign*<sub>opt</sub> *digit-sequence*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**E** *sign*<sub>opt</sub> *digit-sequence*

*sign*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**+ -**

*digit-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *digit*

*floating-suffix*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**f l F L**

You can omit either the digits before the decimal point (the integer portion of the value) or the digits after the decimal point (the fractional portion), but not both. You can leave out the decimal point only if you include an exponent. No white-space characters can separate the digits or characters of the constant.

The following examples illustrate some forms of floating-point constants and expressions:

```C
15.75
1.575E1   /* = 15.75   */
1575e-2   /* = 15.75   */
-2.5e-3   /* = -0.0025 */
25E-4     /* =  0.0025 */
```

Floating-point constants are positive unless they are preceded by a minus sign (**-**). In this case, the minus sign is treated as a unary arithmetic negation operator. Floating-point constants have type **`float`**, **`double`**, or **`long double`**.

A floating-point constant without an **f**, **F**, **l**, or **L** suffix has type **`double`**. If the letter **f** or **F** is the suffix, the constant has type **`float`**. If suffixed by the letter **l** or **L**, it has type **`long double`**. For example:

```C
10.0L  /* Has type long double  */
10.0F  /* Has type float        */
```

Note that the Microsoft C compiler internally represents **`long double`** the same as type **`double`**. See [Storage of Basic Types](../c-language/storage-of-basic-types.md) for information about type **`double`**, **`float`**, and **`long double`**.

You can omit the integer portion of the floating-point constant, as shown in the following examples. The number .75 can be expressed in many ways, including the following:

```C
.0075e2
0.075e1
.075e1
75e-2
```

## See also

[C Constants](../c-language/c-constants.md)
