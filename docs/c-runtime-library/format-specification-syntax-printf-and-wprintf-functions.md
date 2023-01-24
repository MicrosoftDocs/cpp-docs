---
title: "Format Specification Syntax: `printf` and `wprintf` Functions"
description: "Describes the format specifier syntax for the Microsoft C runtime `printf` and `wprintf` functions" 
ms.date: "10/26/2020"
helpviewer_keywords: ["format specification fields for printf function", "printf function format specification fields", "flag directives, printf function", "type fields, printf function", "width fields, printf function", "precision fields, printf function"]
ms.assetid: 664b1717-2760-4c61-bd9c-22eee618d825
---
# Format specification syntax: `printf` and `wprintf` functions

The various `printf` and `wprintf` functions take a format string and optional arguments and produce a formatted sequence of characters for output. The format string contains zero or more *directives*, which are either literal characters for output or encoded *conversion specifications* that describe how to format an argument in the output. This article describes the syntax used to encode conversion specifications in the format string. For a listing of these functions, see [Stream I/O](./stream-i-o.md).

A conversion specification consists of optional and required fields in this form:

> **%**\[[*flags*](#flags)\]\[[*width*](#width)\]\[.[*precision*](#precision)\]\[[*size*](#size)\][*type*](#type)

Each field of the conversion specification is a character or a number that signifies a particular format option or conversion specifier. The required *type* field specifies the kind of conversion to be applied to an argument. The optional *flags*, *width*, and *precision* fields control other format aspects such as leading spaces or zeroes, justification, and displayed precision. The *size* field specifies the size of the argument consumed and converted.

A basic conversion specification contains only the percent sign and a *type* character. For example, `%s` specifies a string conversion. To print a percent-sign character, use `%%`. If a percent sign is followed by a character that has no meaning as a format field, the invalid parameter handler is invoked. For more information, see [Parameter validation](./parameter-validation.md).

> [!IMPORTANT]
> For security and stability, ensure that format conversion specification strings aren't end-user defined. For example, consider a program that prompts the user to enter a name and stores the input in a string variable that's named `user_name`. To print `user_name`, never do this:
>
> `printf( user_name ); /* Danger!  If user_name contains "%s", program will crash */`
>
> Instead, do this:
>
> `printf( "%s", user_name );`

> [!NOTE]
> In Visual Studio 2015 The `printf` and `scanf` family of functions were declared as **`inline`** and moved to the `<stdio.h>` and `<conio.h>` headers. If you are migrating older code you might see LNK2019 in connection with these functions. For more information, see [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md#stdio_and_conio).

## <a name="type"></a> Type conversion specifier

The *type* conversion specifier character specifies whether to interpret the corresponding argument as a character, a string, a pointer, an integer, or a floating-point number. The *type* character is the only required conversion specification field, and it appears after any optional fields.

The arguments that follow the format string are interpreted according to the corresponding *type* character and the optional [*size*](#size) prefix. Conversions for character types `char` and `wchar_t` are specified by using **`c`** or **`C`**, and single-byte and multi-byte or wide character strings are specified by using **`s`** or **`S`**, depending on which formatting function is being used. Character and string arguments that are specified by using **`c`** and **`s`** are interpreted as `char` and `char*` by `printf` family functions, or as `wchar_t` and `wchar_t*` by `wprintf` family functions. Character and string arguments that are specified by using **`C`** and **`S`** are interpreted as `wchar_t` and `wchar_t*` by `printf` family functions, or as `char` and `char*` by `wprintf` family functions. This behavior is Microsoft-specific. For historical reasons, the `wprintf` functions use **`c`** and **`s`** to refer to `wchar_t` characters, and **`C`** and **`S`** specify narrow characters.

Integer types such as `short`, `int`, `long`, `long long`, and their `unsigned` variants, are specified by using **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, and **`X`**. Floating-point types such as `float`, `double`, and `long double`, are specified by using **`a`**, **`A`**, **`e`**, **`E`**, **`f`**, **`F`**, **`g`**, and **`G`**. By default, unless they're modified by a *size* prefix, integer arguments are coerced to `int` type, and floating-point arguments are coerced to `double`. On 64-bit systems, an `int` is a 32-bit value; so, 64-bit integers will be truncated when they're formatted for output unless a *size* prefix of **`ll`** or **`I64`** is used. Pointer types that are specified by **`p`** use the default pointer size for the platform.

> [!NOTE]
> **Microsoft-specific:**\
> The **`Z`** type character, and the behavior of the **`c`**, **`C`**, **`s`**, and  **`S`** type characters when they're used with the `printf` and `wprintf` functions, are Microsoft extensions. The ISO C standard uses **`c`** and **`s`** consistently for narrow characters and strings, and **`C`** and **`S`** for wide characters and strings, in all formatting functions.

### Type field characters

| Type character | Argument | Output format |
|---|---|---|
| **`c`** | Character | When used with `printf` functions, specifies a single-byte character; when used with `wprintf` functions, specifies a wide character. |
| **`C`** | Character | When used with `printf` functions, specifies a wide character; when used with `wprintf` functions, specifies a single-byte character. |
| **`d`** | Integer | Signed decimal integer. |
| **`i`** | Integer | Signed decimal integer. |
| **`o`** | Integer | Unsigned octal integer. |
| **`u`** | Integer | Unsigned decimal integer. |
| **`x`** | Integer | Unsigned hexadecimal integer; uses "`abcdef`". |
| **`X`** | Integer | Unsigned hexadecimal integer; uses "`ABCDEF`". |
| **`e`** | Floating-point | Signed value that has the form [`-`]*d.dddd*`e`\[`+`\|`-`]*dd*\[*d*], where *d* is one decimal digit, *dddd* is one or more decimal digits depending on the specified precision, or six by default, and *dd*\[*d*] is two or three decimal digits depending on the [output format](./set-output-format.md) and size of the exponent. |
| **`E`** | Floating-point | Identical to the **`e`** format except that **`E`** rather than **`e`** introduces the exponent. |
| **`f`** | Floating-point | Signed value that has the form [`-`]*dddd*`.`*dddd*, where *dddd* is one or more decimal digits. The number of digits before the decimal point depends on the magnitude of the number, and the number of digits after the decimal point depends on the requested precision, or six by default. |
| **`F`** | Floating-point | Identical to the **`f`** format except that infinity and NaN output is capitalized. |
| **`g`** | Floating-point | Signed values are displayed in **`f`** or **`e`** format, whichever is more compact for the given value and precision. The **`e`** format is used only when the exponent of the value is less than -4 or greater than or equal to the *precision* argument. Trailing zeros are truncated, and the decimal point appears only if one or more digits follow it. |
| **`G`** | Floating-point | Identical to the **`g`** format, except that **`E`**, rather than **`e`**, introduces the exponent (where appropriate). |
| **`a`** | Floating-point | Signed hexadecimal double-precision floating-point value that has the form [`-`]`0x`*h.hhhh*`p`\[`+`\|`-`]*dd*, where *h.hhhh* are the hex digits (using lower case letters) of the mantissa, and *dd* are one or more digits for the exponent. The precision specifies the number of digits after the point. |
| **`A`** | Floating-point | Signed hexadecimal double-precision floating-point value that has the form \[`-`]`0X`*h.hhhh*`P`\[`+`\|`-`]*dd*, where *h.hhhh* are the hex digits (using capital letters) of the mantissa, and *dd* are one or more digits for the exponent. The precision specifies the number of digits after the point. |
| **`n`** | Pointer to integer | Number of characters that are successfully written so far to the stream or buffer. This value is stored in the integer whose address is given as the argument. The size of the integer pointed at can be controlled by an argument size specification prefix. The **`n`** specifier is disabled by default; for information see the important security note. |
| **`p`** | Pointer type | Display the argument as an address in hexadecimal digits. |
| **`s`** | String | When used with `printf` functions, specifies a single-byte or multi-byte character string; when used with `wprintf` functions, specifies a wide-character string. Characters are displayed up to the first null character or until the *precision* value is reached. |
| **`S`** | String | When used with `printf` functions, specifies a wide-character string; when used with `wprintf` functions, specifies a single-byte or multi-byte character string. Characters are displayed up to the first null character or until the *precision* value is reached. |
| **`Z`** | `ANSI_STRING` or `UNICODE_STRING` structure | **VS 2013 and earlier** <br /> When the address of an [`ANSI_STRING`](/windows/win32/api/ntdef/ns-ntdef-string) or [`UNICODE_STRING`](/windows/win32/api/ntdef/ns-ntdef-_unicode_string) structure is passed as the argument, display the string contained in the buffer pointed to by the `Buffer` field of the structure. Use a *size* modifier prefix of **`w`** to specify a `UNICODE_STRING` argument—for example, `%wZ`. The `Length` field of the structure must be set to the length, in bytes, of the string. The `MaximumLength` field of the structure must be set to the length, in bytes, of the buffer.<br /><br /> **Universal C Runtime (UCRT)**<br />There is a known issue in the UCRT that is currently maintained for compatibility. Like the **`S`** specifier, the **`Z`** specifier without a size modifier prefix refers to a `UNICODE_STRING` when using a narrow printing function (like `printf`) and an `ANSI_STRING` when using a wide printing function (like `wprintf`).<br /> Instead of **`Z`**, use **`hZ`** to specify an `ANSI_STRING`. **`wZ`** (or **`lZ`**) can still be used to specify a `UNICODE_STRING`. <br /><br />Typically, the **`Z`** type character is used only in driver debugging functions that use a conversion specification, such as `dbgPrint` and `kdPrint`. |

In Visual Studio 2015 and later versions, if the argument that corresponds to a floating-point conversion specifier (**`a`**, **`A`**, **`e`**, **`E`**, **`f`**, **`F`**, **`g`**, **`G`**) is infinite, indefinite, or NaN, the formatted output conforms to the C99 standard. This table lists the formatted output:

| Value | Output |
|---|---|
| Infinity | `inf` |
| Quiet NaN | `nan` |
| Signaling NaN | `nan(snan)` |
| Indefinite NaN | `nan(ind)` |

Any of these strings may be prefixed by a sign. If a floating-point *type* conversion specifier character is a capital letter, then the output is also formatted in capital letters. For example, if the format specifier is `%F` instead of `%f`, an infinity is formatted as `INF` instead of `inf`. The `scanf` functions can also parse these strings, so these values can make a round trip through `printf` and `scanf` functions.

Before Visual Studio 2015, the CRT used a different, non-standard format for output of infinite, indefinite, and NaN values:

| Value | Output |
|---|---|
| + Infinity | `1.#INF` *random-digits* |
| - Infinity | `-1.#INF` *random-digits* |
| Indefinite (same as quiet NaN) | *digit* `.#IND` *random-digits* |
| NaN | *digit* `.#NAN` *random-digits* |

Any of these strings may have been prefixed by a sign, and may have been formatted differently depending on field width and precision, sometimes with unusual effects. For example, `printf("%.2f\n", INFINITY)` prints `1.#J` because the *#INF* would be "rounded" to two digits of precision.

> [!NOTE]
> If the argument that corresponds to `%s` or `%S`, or the `Buffer` field of the argument that corresponds to `%Z`, is a null pointer, "(null)" is displayed.

> [!NOTE]
> In all exponential formats, the minimum number of digits of exponent to display is two, using three only if necessary. By using the [`_set_output_format`](./set-output-format.md) function, you can set the number of digits displayed to three for backward compatibility with code written for Visual Studio 2013 and before.

> [!IMPORTANT]
> Because the `%n` format is inherently insecure, it's disabled by default. If `%n` is encountered in a format string, the invalid parameter handler is invoked, as described in [Parameter validation](./parameter-validation.md). To enable `%n` support, see [`_set_printf_count_output`](./reference/set-printf-count-output.md).

## <a name="flags"></a> Flag directives

The first optional field in a conversion specification contains *flag directives*. This field contains zero or more flag characters that specify output justification and control output of signs, blanks, leading zeros, decimal points, and octal and hexadecimal prefixes. More than one flag directive may appear in a conversion specification, and the flag characters can appear in any order.

### Flag characters

| Flag | Meaning | Default |
|---|---|---|
| **`-`** | Left align the result within the given field width. | Right align. |
| **`+`** | Use a sign (+ or -) to prefix the output value if it's of a signed type. | Sign appears only for negative signed values (-). |
| **`0`** | If *width* is prefixed by **`0`**, leading zeros are added until the minimum width is reached. If both **`0`** and **`-`** appear, the **`0`** is ignored. If **`0`** is specified for an integer format (**`i`**, **`u`**, **`x`**, **`X`**, **`o`**, **`d`**) and a precision specification is also present—for example, `%04.d`—the **`0`** is ignored. If **`0`** is specified for the **`a`** or **`A`** floating-point format, leading zeros are prepended to the mantissa, after the `0x` or `0X` prefix. | No padding. |
| **blank (' ')** | Use a blank to prefix the output value if it's signed and positive. The blank is ignored if both the blank and + flags appear. | No blank appears. |
| **`#`** | When it's used with the **`o`**, **`x`**, or **`X`** format, the **`#`** flag uses `0`, `0x`, or `0X`, respectively, to prefix any nonzero output value. | No prefix appears. |
|  | When it's used with the **`e`**, **`E`**, **`f`**, **`F`**, **`a`**, or **`A`** format, the **`#`** flag forces the output value to contain a decimal point. | Decimal point appears only if digits follow it. |
|  | When it's used with the **`g`** or **`G`** format, the **`#`** flag forces the output value to contain a decimal point and prevents the truncation of trailing zeros.<br /><br /> Ignored when used with **`c`**, **`d`**, **`i`**, **`u`**, or **`s`**. | Decimal point appears only if digits follow it. Trailing zeros are truncated. |

## <a name="width"></a> Width specification

In a conversion specification, the optional width specification field appears after any *flags* characters. The *`width`* argument is a non-negative decimal integer that controls the minimum number of characters that are output. If the number of characters in the output value is less than the specified width, blanks are added to the left or the right of the values—depending on whether the left-alignment flag (**`-`**) is specified—until the minimum width is reached. If *`width`* is prefixed by 0, leading zeros are added to integer or floating-point conversions until the minimum width is reached, except when conversion is to an infinity or `NaN`.

The width specification never causes a value to be truncated. If the number of characters in the output value is greater than the specified width, or if *`width`* isn't provided, all characters of the value are output, subject to the precision specification.

If the width specification is an asterisk (`*`), an `int` argument from the argument list supplies the value. The *`width`* argument must precede the value that's being formatted in the argument list, as shown in this example:

`printf("%0*d", 5, 3);  /* 00003 is output */`

A missing or small *`width`* value in a conversion specification doesn't cause the truncation of an output value. If the result of a conversion is wider than the *`width`* value, the field expands to contain the conversion result.

## <a name="precision"></a> Precision specification

In a conversion specification, the third optional field is the precision specification. It consists of a period (`.`) followed by a non-negative decimal integer that, depending on the conversion type, specifies the number of string characters, the number of decimal places, or the number of significant digits to be output.

Unlike the width specification, the precision specification can cause either truncation of the output value or rounding of a floating-point value. If *`precision`* is specified as 0, and the value to be converted is 0, the result is no characters output, as shown in this example:

`printf( "%.0d", 0 );      /* No characters output */`

If the precision specification is an asterisk (`*`), an `int` argument from the argument list supplies the value. In the argument list, the *`precision`* argument must precede the value that's being formatted, as shown in this example:

`printf( "%.*f", 3, 3.14159265 );  /* 3.142 output */`

The *`type`* character determines either the interpretation of *`precision`* or the default precision when *`precision`* is omitted, as shown in the following table.

### How precision values affect type

| Type | Meaning | Default |
|---|---|---|
| **`a`**, **`A`** | The precision specifies the number of digits after the point. | Default precision is 13. If precision is 0, no decimal point is printed unless the **`#`** flag is used. |
| **`c`**, **`C`** | The precision has no effect. | Character is printed. |
| **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, **`X`** | The precision specifies the minimum number of digits to be printed. If the number of digits in the argument is less than *precision*, the output value is padded on the left with zeros. The value isn't truncated when the number of digits exceeds *precision*. | Default precision is 1. |
| **`e`**, **`E`** | The precision specifies the number of digits to be printed after the decimal point. The last printed digit is rounded. | Default precision is 6. If *precision* is 0 or the period (`.`) appears without a number following it, no decimal point is printed. |
| **`f`**, **`F`** | The precision value specifies the number of digits after the decimal point. If a decimal point appears, at least one digit appears before it. The value is rounded to the appropriate number of digits. | Default precision is 6. If *precision* is 0, or if the period (`.`) appears without a number following it, no decimal point is printed. |
| **`g`**, **`G`** | The precision specifies the maximum number of significant digits printed. | Six significant digits are printed, and any trailing zeros are truncated. |
| **`s`**, **`S`** | The precision specifies the maximum number of characters to be printed. Characters in excess of *precision* aren't printed. | Characters are printed until a null character is found. |

## <a name="size"></a> Argument size specification

In a conversion specification, the *size* field is an argument length modifier for the *type* conversion specifier. The *size* field prefixes to the *type* field—**`hh`**, **`h`**, **`j`**, **`l`** (lowercase L), **`L`**, **`ll`**, **`t`**, **`w`**, **`z`**, **`I`** (uppercase i), **`I32`**, and **`I64`**—specify the "size" of the corresponding argument—long or short, 32-bit or 64-bit, single-byte character or wide character—depending on the conversion specifier that they modify. These size prefixes are used with *type* characters in the `printf` and `wprintf` families of functions to specify the interpretation of argument sizes, as shown in the following table. The *size* field is optional for some argument types. When no size prefix is specified, the formatter consumes integer arguments—for example, signed or unsigned `char`, `short`, `int`, `long`, and enumeration types—as 32-bit `int` types, and `float`, `double`, and `long double` floating-point arguments are consumed as 64-bit `double` types. This behavior matches the default argument promotion rules for variable argument lists. For more information about argument promotion, see Ellipsis and Default Arguments in [Postfix expressions](../cpp/postfix-expressions.md). On both 32-bit and 64-bit systems, the conversion specification of a 64-bit integer argument must include a size prefix of **`ll`** or **`I64`**. Otherwise, the behavior of the formatter is undefined.

Some types are different sizes in 32-bit and 64-bit code. For example, `size_t` is 32 bits long in code compiled for x86, and 64 bits in code compiled for x64. To create platform-agnostic formatting code for variable-width types, you can use a variable-width argument size modifier. Instead, use a 64-bit argument size modifier and explicitly promote the variable-width argument type to 64 bits. The Microsoft-specific **`I`** (uppercase i) argument size modifier handles variable-width integer arguments, but we recommend the type-specific **`j`**, **`t`**, and **`z`** modifiers for portability.

### Size prefixes for printf and wprintf format-type specifiers

| To specify | Use prefix | With type specifier |
|---|---|---|
| `char`<br />`unsigned char` | **`hh`** | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `short int`<br />`short unsigned int` | **`h`** | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `__int32`<br />`unsigned __int32` | **`I32`** | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `__int64`<br />`unsigned __int64` | **`I64`** | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `intmax_t`<br />`uintmax_t` | **`j`** or **`I64`** | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `long double` | **`l`** (lowercase L) or **`L`** | **`a`**, **`A`**, **`e`**, **`E`**, **`f`**, **`F`**, **`g`**, or **`G`** |
| `long int`<br />`long unsigned int` | **`l`** (lowercase L) | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `long long int`<br />`unsigned long long int` | **`ll`**  (lowercase LL) | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `ptrdiff_t` | **`t`** or **`I`** (uppercase i) | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| `size_t` | **`z`** or **`I`** (uppercase i) | **`d`**, **`i`**, **`o`**, **`u`**, **`x`**, or **`X`** |
| Single-byte character | **`h`** | **`c`** or **`C`** |
| Wide character | **`l`** (lowercase L) or **`w`** | **`c`** or **`C`** |
| Single-byte character string | **`h`** | **`s`**, **`S`**, or **`Z`** |
| Wide-character string | **`l`** (lowercase L) or **`w`** | **`s`**, **`S`**, or **`Z`** |

The `ptrdiff_t` and `size_t` types are `__int32` or `unsigned __int32` on 32-bit platforms, and `__int64` or `unsigned __int64` on 64-bit platforms. The **`I`** (uppercase i), **`j`**, **`t`**, and **`z`** size prefixes take the correct argument width for the platform.

In Visual C++, although `long double` is a distinct type, it has the same internal representation as `double`.

An **`hc`** or **`hC`** type specifier is synonymous with **`c`** in `printf` functions and with **`C`** in `wprintf` functions. A **`lc`**, **`lC`**, **`wc`**, or **`wC`** type specifier is synonymous with **`C`** in `printf` functions and with **`c`** in `wprintf` functions. An **`hs`** or **`hS`** type specifier is synonymous with **`s`** in `printf` functions and with **`S`** in `wprintf` functions. An **`ls`**, **`lS`**, **`ws`**, or **`wS`** type specifier is synonymous with **`S`** in `printf` functions and with **`s`** in `wprintf` functions.

> [!NOTE]
> **Microsoft-specific:**\
> The **`I`** (uppercase i), **`I32`**, **`I64`**, and **`w`** argument size modifier prefixes are Microsoft extensions and are not ISO C-compatible. The **`h`** prefix when it's used with data of type `char` and the **`l`** (lowercase L) prefix when it's used with data of type `double` are Microsoft extensions.

## See also

[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](./reference/printf-printf-l-wprintf-wprintf-l.md)\
[`printf_s`, `_printf_s_l`, `wprintf_s`, `_wprintf_s_l`](./reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)\
[`printf_p` Positional Parameters](./printf-p-positional-parameters.md)
