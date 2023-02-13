---
description: "Learn more about: C Floating-Point Constants"
title: "C Floating-Point Constants"
ms.date: 04/14/2021
helpviewer_keywords: ["types [C], constants", "floating-point numbers, floating-point constants", "constants, floating-point", "floating-point constants", "floating-point constants, about floating-point constants", "double data type, floating-point constants"]
---
# C Floating-Point Constants

A "floating-point constant" is a decimal number that represents a signed real number. The representation of a signed real number includes an integer portion, a fractional portion, and an exponent. Use floating-point constants to represent floating-point values that can't be changed.

## Syntax

*`floating-point-constant`*:\
&emsp;*`fractional-constant`* *`exponent-part`*<sub>opt</sub> *`floating-suffix`*<sub>opt</sub>\
&emsp;*`digit-sequence`* *`exponent-part`* *`floating-suffix`*<sub>opt</sub>

*`fractional-constant`*:\
&emsp;*`digit-sequence`*<sub>opt</sub> **.** *`digit-sequence`*\
&emsp;*`digit-sequence`*  **.**

*`exponent-part`*:\
&emsp;**e** *`sign`*<sub>opt</sub> *`digit-sequence`*\
&emsp;**E** *`sign`*<sub>opt</sub> *`digit-sequence`*

*`sign`*: one of\
&emsp;**`+`** **`-`**

*`digit-sequence`*:\
&emsp;*`digit`*\
&emsp;*`digit-sequence`* *`digit`*

*`floating-suffix`*: one of\
&emsp;**`f`** **`l`** **`F`** **`L`**

You can omit either the digits before the decimal point (the integer portion of the value) or the digits after the decimal point (the fractional portion), but not both. You may leave out the decimal point only if you include an exponent. No white-space characters can separate the digits or characters of the constant.

The following examples illustrate some forms of floating-point constants and expressions:

```C
15.75
1.575E1   /* = 15.75   */
1575e-2   /* = 15.75   */
-2.5e-3   /* = -0.0025 */
25E-4     /* =  0.0025 */
```

Floating-point constants are positive unless they're preceded by a minus sign (**`-`**). In this case, the minus sign is treated as a unary arithmetic negation operator. Floating-point constants have type **`float`**, **`double`**, or **`long double`**.

A floating-point constant without an **`f`**, **`F`**, **`l`**, or **`L`** suffix has type **`double`**. If the letter **`f`** or **`F`** is the suffix, the constant has type **`float`**. If suffixed by the letter **`l`** or **`L`**, it has type **`long double`**. For example:

```C
10.0L  /* Has type long double  */
10.0   /* Has type double       */
10.0F  /* Has type float        */
```

The Microsoft C compiler internally represents **`long double`** the same as type **`double`**. However, the types are distinct. See [Storage of basic types](../c-language/storage-of-basic-types.md) for information about type **`double`**, **`float`**, and **`long double`**.

You can omit the integer portion of the floating-point constant, as shown in the following examples. The number 0.75 can be expressed in many ways, including the following examples:

```C
.0075e2
0.075e1
.075e1
75e-2
```

## See also

[C constants](../c-language/c-constants.md)
