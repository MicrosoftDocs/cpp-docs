---
description: "Learn more about: C Integer Constants"
title: "C Integer Constants"
ms.date: "02/27/2018"
helpviewer_keywords: ["integer constants"]
ms.assetid: fcf6b83c-2038-49ec-91ca-3d5ca1f83037
---
# C Integer Constants

An *integer constant* is a decimal (base 10), octal (base 8), or hexadecimal (base 16) number that represents an integral value. Use integer constants to represent integer values that cannot be changed.

## Syntax

*integer-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*decimal-constant* *integer-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*octal-constant* *integer-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-constant* *integer-suffix*<sub>opt</sub>

*decimal-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*nonzero-digit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*decimal-constant* *digit*

*octal-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*octal-constant* *octal-digit*

*hexadecimal-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-prefix* *hexadecimal-digit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-constant* *hexadecimal-digit*

*hexadecimal-prefix*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0x**  **0X**

*nonzero-digit*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**1 2 3 4 5 6 7 8 9**

*octal-digit*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7**

*hexadecimal-digit*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**a b c d e f**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**A B C D E F**

*integer-suffix*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unsigned-suffix* *long-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unsigned-suffix* *long-long-suffix*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unsigned-suffix* *64-bit-integer-suffix*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*long-suffix* *unsigned-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*long-long-suffix* *unsigned-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*64-bit-integer-suffix*

*unsigned-suffix*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**u U**

*long-suffix*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**l L**

*long-long-suffix*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ll LL**

*64-bit-integer-suffix*: one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**i64 I64**

The **i64** and **I64** suffixes are Microsoft-specific.

Integer constants are positive unless they are preceded by a minus sign (**-**). The minus sign is interpreted as the unary arithmetic negation operator. (See [Unary Arithmetic Operators](../c-language/unary-arithmetic-operators.md) for information about this operator.)

If an integer constant begins with **0x** or **0X**, it is hexadecimal. If it begins with the digit **0**, it is octal. Otherwise, it is assumed to be decimal.

The following integer constants are equivalent:

```C
28
0x1C   /* = Hexadecimal representation for decimal 28 */
034    /* = Octal representation for decimal 28 */
```

No white-space characters can separate the digits of an integer constant. These examples show some valid decimal, octal, and hexadecimal constants.

```C
    /* Decimal Constants */
    int                 dec_int    = 28;
    unsigned            dec_uint   = 4000000024u;
    long                dec_long   = 2000000022l;
    unsigned long       dec_ulong  = 4000000000ul;
    long long           dec_llong  = 9000000000LL;
    unsigned long long  dec_ullong = 900000000001ull;
    __int64             dec_i64    = 9000000000002I64;
    unsigned __int64    dec_ui64   = 90000000000004ui64;

    /* Octal Constants */
    int                 oct_int    = 024;
    unsigned            oct_uint   = 04000000024u;
    long                oct_long   = 02000000022l;
    unsigned long       oct_ulong  = 04000000000UL;
    long long           oct_llong  = 044000000000000ll;
    unsigned long long  oct_ullong = 044400000000000001Ull;
    __int64             oct_i64    = 04444000000000000002i64;
    unsigned __int64    oct_ui64   = 04444000000000000004uI64;

    /* Hexadecimal Constants */
    int                 hex_int    = 0x2a;
    unsigned            hex_uint   = 0XA0000024u;
    long                hex_long   = 0x20000022l;
    unsigned long       hex_ulong  = 0XA0000021uL;
    long long           hex_llong  = 0x8a000000000000ll;
    unsigned long long  hex_ullong = 0x8A40000000000010uLL;
    __int64             hex_i64    = 0x4a44000000000020I64;
    unsigned __int64    hex_ui64   = 0x8a44000000000040Ui64;
```

## See also

[C Constants](../c-language/c-constants.md)<br/>
