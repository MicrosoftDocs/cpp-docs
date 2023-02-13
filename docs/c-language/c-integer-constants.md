---
description: "Learn more about: C Integer Constants"
title: "C Integer Constants"
ms.date: "02/27/2018"
helpviewer_keywords: ["integer constants"]
ms.assetid: fcf6b83c-2038-49ec-91ca-3d5ca1f83037
---
# C Integer Constants

An *integer constant* is a decimal (base 10), octal (base 8), or hexadecimal (base 16) number that represents an integral value. Use integer constants to represent integer values that can't be changed.

## Syntax

*`integer-constant`*:\
&emsp;*`decimal-constant`* *`integer-suffix`*<sub>opt</sub>\
&emsp;*`octal-constant`* *`integer-suffix`*<sub>opt</sub>\
&emsp;*`hexadecimal-constant`* *`integer-suffix`*<sub>opt</sub>

*`decimal-constant`*:\
&emsp;*`nonzero-digit`*\
&emsp;*`decimal-constant`* *`digit`*

*`octal-constant`*:\
&emsp;**`0`**\
&emsp;*`octal-constant`* *`octal-digit`*

*`hexadecimal-constant`*:\
&emsp;*`hexadecimal-prefix`* *`hexadecimal-digit`*\
&emsp;*`hexadecimal-constant`* *`hexadecimal-digit`*

*`hexadecimal-prefix`*: one of\
&emsp;**`0x`**  **`0X`**

*`nonzero-digit`*: one of\
&emsp;**`1 2 3 4 5 6 7 8 9`**

*`octal-digit`*: one of\
&emsp;**`0 1 2 3 4 5 6 7`**

*`hexadecimal-digit`*: one of\
&emsp;**`0 1 2 3 4 5 6 7 8 9`**\
&emsp;**`a b c d e f`**\
&emsp;**`A B C D E F`**

*`integer-suffix`*:\
&emsp;*`unsigned-suffix`* *`long-suffix`*<sub>opt</sub>\
&emsp;*`unsigned-suffix`* *`long-long-suffix`*\
&emsp;*`unsigned-suffix`* *`64-bit-integer-suffix`*\
&emsp;*`long-suffix`* *`unsigned-suffix`*<sub>opt</sub>\
&emsp;*`long-long-suffix`* *`unsigned-suffix`*<sub>opt</sub>\
&emsp;*`64-bit-integer-suffix`*

*`unsigned-suffix`*: one of\
&emsp;**`u U`**

*`long-suffix`*: one of\
&emsp;**`l L`**

*`long-long-suffix`*: one of\
&emsp;**`ll LL`**

*`64-bit-integer-suffix`*: one of\
&emsp;**`i64 I64`**

The **`i64`** and **`I64`** suffixes are Microsoft-specific.

Integer constants are positive unless they're preceded by a minus sign (**`-`**). The minus sign is interpreted as the unary arithmetic negation operator. (See [Unary Arithmetic Operators](../c-language/unary-arithmetic-operators.md) for information about this operator.)

If an integer constant begins with **`0x`** or **`0X`**, it's hexadecimal. If it begins with the digit **`0`**, it's octal. Otherwise, it's assumed to be decimal.

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
