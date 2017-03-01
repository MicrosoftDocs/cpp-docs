---
title: "Format Specification Syntax: printf and wprintf Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wprintf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "format specification fields for printf function"
  - "print flag directives"
  - "printf function, precision"
  - "type fields, printf function"
  - "precision fields"
  - "printf function, format specification fields"
  - "flag directives printf function"
  - "type fields"
ms.assetid: 664b1717-2760-4c61-bd9c-22eee618d825
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Format specification syntax: printf and wprintf functions
The printf family of functions take a format string and optional arguments and produce a formatted sequence of characters for output. The format string may contain both literal output and encoded *format specifications* that describe how to format an argument in the output. This topic describes the syntax used to encode format specifications in the format string. For a listing of these functions, see [Stream I/O](../c-runtime-library/stream-i-o.md).  
  
 A format specification consists of optional and required fields in this form:  
  
 **%**[[*flags*](#flags)][[*width*](#width)][.[*precision*](#precision)][{ `h` | `l` | `ll` | `w` | `I` | `I32` | `I64` }][*type*](#type)  
  
 Each field of the format specification is a character or a number that signifies a particular format option or conversion specifier. The required *type* character specifies the kind of conversion to be applied to an argument. The optional *flags*, *width*, and *precision* fields control additional format aspects. A basic format specification contains only the percent sign and a *type* character—for example, `%s`, which specifies a string conversion. In the secure versions of the functions, if a percent sign is followed by a character that has no meaning as a format field, the invalid parameter handler is invoked. For more information, see [Parameter Validation](../c-runtime-library/parameter-validation.md). In the non-secure versions, the character is copied to the output unchanged. To print a percent-sign character, use `%%`.  
  
 The fields of the format specification control the following aspects of argument conversion and formatting:  
  
 *type*  
 A required conversion specifier character that determines whether the associated argument is interpreted as a character, a string, an integer, or a floating-point number. For more information, see [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md).  
  
 *flags*  
 Optional character or characters that control output justification and output of signs, blanks, leading zeros, decimal points, and octal and hexadecimal prefixes. For more information, see [Flag Directives](../c-runtime-library/flag-directives.md). More than one flag can appear in a format specification, and flags can appear in any order.  
  
 *width*  
 Optional decimal number that specifies the minimum number of characters that are output. For more information, see [printf Width Specification](../c-runtime-library/printf-width-specification.md).  
  
 *precision*  
 Optional decimal number that specifies the maximum number of characters that are printed for strings, the number of significant digits or the number of digits after the decimal-point character for floating-point values, or the minimum number of digits that are printed for integer values. For more information, see "How Precision Values Affect Type" in [Precision Specification](../c-runtime-library/precision-specification.md).  
  
 `h` | `l` | `ll` | `w` | `I` | `I32` | `I64`  
 Optional prefixes to *type* that specify the size of the corresponding argument. For more information, see"Size Prefixes" in [Size Specification](../c-runtime-library/size-specification.md).  
  
> [!IMPORTANT]
>  Ensure that format specification strings are not user-defined. For example, consider a program that prompts the user to enter a name and stores the input in a string variable that's named `name`. To print `name`, do not do this:  
>   
>  `printf( name ); /* Danger!  If name contains "%s", program will crash */`  
>   
>  Instead, do this:  
>   
>  `printf( "%s", name );`  
  
## <a name="type"></a> Type field
In a format specification, the *type* character is a conversion specifier that specifies whether the corresponding argument is to be interpreted as a character, a string, a pointer, an integer, or a floating-point number. The *type* character is the only required format specification field, and it appears after any optional fields.  
  
 The arguments that follow the format string are interpreted according to the corresponding *type* character and the optional [size](../c-runtime-library/size-specification.md) prefix. Conversions for character types `char` and `wchar_t` are specified by using `c` or `C`, and single-byte and multi-byte or wide character strings are specified by using `s` or `S`, depending on which formatting function is being used. Character and string arguments that are specified by using `c` and `s` are interpreted as `char` and `char*` by `printf` family functions, or as `wchar_t` and `wchar_t*` by `wprintf` family functions. Character and string arguments that are specified by using `C` and `S` are interpreted as `wchar_t` and `wchar_t*` by `printf` family functions, or as `char` and `char*` by `wprintf` family functions.  
  
 Integer types such as `short`, `int`, `long`, `long long`, and their `unsigned` variants, are specified by using `d`, `i`, `o`, `u`, `x`, and `X`. Floating-point types such as `float`, `double`, and `long double`, are specified by using `a`, `A`, `e`, `E`, `f`, `g`, and `G`. By default, unless they are modified by a `size` field length prefix, integer arguments are coerced to `int` type, and floating-point arguments are coerced to `double`. On 64-bit systems, an `int` is a 32-bit value; therefore, 64-bit integers will be truncated when they are formatted for output unless a `size` prefix of `ll` or `I64` is used. Pointer types that are specified by `p` use the default length for the platform.  
  
> [!NOTE]
>  The `C`, `S`, and `Z` type characters, and the behavior of the `c` and `s` type characters when they are used with the `printf` and `wprintf` functions, are Microsoft extensions and are not ANSI compatible. [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] does not support the `F` type character.  
  
### Type field characters  
  
|Type character|Argument|Output format|  
|--------------------|--------------|-------------------|  
|`c`|Character|When used with `printf` functions, specifies a single-byte character; when used with `wprintf` functions, specifies a wide character.|  
|`C`|Character|When used with `printf` functions, specifies a wide character; when used with `wprintf` functions, specifies a single-byte character.|  
|`d`|Integer|Signed decimal integer.|  
|`i`|Integer|Signed decimal integer.|  
|`o`|Integer|Unsigned octal integer.|  
|`u`|Integer|Unsigned decimal integer.|  
|`x`|Integer|Unsigned hexadecimal integer; uses "abcdef."|  
|`X`|Integer|Unsigned hexadecimal integer; uses "ABCDEF."|  
|`e`|Floating-point|Signed value that has the form [ – ]`d`**.**`dddd` e [*sign*]`dd[d]` where `d` is one decimal digit, `dddd` is one or more decimal digits, `dd[d]` is two or three decimal digits depending on the [output format](../c-runtime-library/set-output-format.md) and size of the exponent, and *sign* is + or –.|  
|`E`|Floating-point|Identical to the `e` format except that **E** rather than **e** introduces the exponent.|  
|`f`|Floating-point|Signed value that has the form [ – ]`dddd`**.**`dddd`, where `dddd` is one or more decimal digits. The number of digits before the decimal point depends on the magnitude of the number, and the number of digits after the decimal point depends on the requested precision.|  
|`g`|Floating-point|Signed values are displayed in `f` or `e` format, whichever is more compact for the given value and precision. The `e` format is used only when the exponent of the value is less than –4 or greater than or equal to the *precision* argument. Trailing zeros are truncated, and the decimal point appears only if one or more digits follow it.|  
|`G`|Floating-point|Identical to the `g` format, except that **E**, rather than **e**, introduces the exponent (where appropriate).|  
|`a`|Floating-point|Signed hexadecimal double-precision floating-point value that has the form [−]0x*h.hhhh* **p±**`dd`, where *h.hhhh* are the hex digits (using lower case letters) of the mantissa, and `dd` are one or more digits for the exponent. The precision specifies the number of digits after the point.|  
|`A`|Floating-point|Signed hexadecimal double-precision floating-point value that has the form [−]0X*h.hhhh* **P±**`dd`, where *h.hhhh* are the hex digits (using capital letters) of the mantissa, and `dd` are one or more digits for the exponent. The precision specifies the number of digits after the point.|  
|`n`|Pointer to integer|Number of characters that are successfully written so far to the stream or buffer. This value is stored in the integer whose address is given as the argument. See the Security Note later in this article.|  
|`p`|Pointer type|Displays the argument as an address in hexadecimal digits.|  
|`s`|String|When used with `printf` functions, specifies a single-byte or multi-byte character string; when used with `wprintf` functions, specifies a wide-character string. Characters are displayed up to the first null character or until the *precision* value is reached.|  
|`S`|String|When used with `printf` functions, specifies a wide-character string; when used with `wprintf` functions, specifies a single-byte or multi-byte character string. Characters are displayed up to the first null character or until the *precision* value is reached.|  
|`Z`|`ANSI_STRING` or `UNICODE_STRING` structure|When the address of an [ANSI_STRING](http://msdn.microsoft.com/library/windows/hardware/ff540605.aspx) or [UNICODE_STRING](http://msdn.microsoft.com/library/windows/hardware/ff564879.aspx) structure is passed as the argument, displays the string that's contained in the buffer that's pointed to by the `Buffer` field of the structure. Use a length modifier prefix of `w` to specify a `UNICODE_STRING` argument—for example, `%wZ`. The `Length` field of the structure must be set to the length, in bytes, of the string. The `MaximumLength` field of the structure must be set to the length, in bytes, of the buffer.<br /><br /> Typically, the `Z` type character is used only in driver debugging functions that use a format specification, such as `dbgPrint` and `kdPrint`.|  
  
 If the argument that corresponds to a floating-point conversion specifier is infinite, indefinite, or NAN, the following table lists the formatted output.  
  
|Value|Output|  
|-----------|------------|  
|+ infinity|`1.#INF` *random-digits*|  
|– infinity|`–1.#INF` *random-digits*|  
|Indefinite (same as quiet NaN)|*digit* `.#IND` *random-digits*|  
|NAN|*digit* `.#NAN` *random-digits*|  
  
> [!NOTE]
>  If the the `Buffer` field of the argument that corresponds to `%Z`, or of the argument that corresponds to `%s` or `%S`, is a null pointer, "(null)" will be displayed.  
  
> [!NOTE]
>  In all exponential formats, the default number of digits of exponent to display is three. By using the [_set_output_format](../c-runtime-library/set-output-format.md) function, you can set the number of digits displayed to two but expanding to three if demanded by the size of exponent.  
  
> [!IMPORTANT]
>  Because the `%n` format is inherently insecure, it is disabled by default. If `%n` is encountered in a format string, the invalid parameter handler is invoked, as described in [Parameter Validation](../c-runtime-library/parameter-validation.md). To enable `%n` support, see [_set_printf_count_output](../c-runtime-library/reference/set-printf-count-output.md).  
  
## <a name="flags"></a> Flag directives
In a format specification, the first optional field is *flags*. A flag directive is a character that specifies output justification and output of signs, blanks, leading zeros, decimal points, and octal and hexadecimal prefixes. More than one flag directive may appear in a format specification, and flags can appear in any order.  
  
### Flag characters  
  
|Flag|Meaning|Default|  
|----------|-------------|-------------|  
|`–`|Left align the result within the given field width.|Right align.|  
|`+`|Use a sign (+ or –) to prefix the output value if it is of a signed type.|Sign appears only for negative signed values (–).|  
|`0`|If *width* is prefixed by `0`, leading zeros are added until the minimum width is reached. If both `0` and `–` appear, the `0` is ignored. If `0` is specified as an integer format (`i`, `u`, `x`, `X`, `o`, `d`) and a precision specification is also present—for example, `%04.d`—the `0` is ignored.|No padding.|  
|blank (' ')|Use a blank to prefix the output value if it is signed and positive. The blank is ignored if both the blank and + flags appear.|No blank appears.|  
|`#`|When it's used with the `o`, `x`, or `X` format, the `#` flag uses 0, 0x, or 0X, respectively, to prefix any nonzero output value.|No blank appears.|  
||When it's used with the `e`, `E`, `f`, `a` or `A` format, the `#` flag forces the output value to contain a decimal point.|Decimal point appears only if digits follow it.|  
||When it's used with the `g` or `G` format, the `#` flag forces the output value to contain a decimal point and prevents the truncation of trailing zeros.<br /><br /> Ignored when used with `c`, `d`, `i`, `u`, or `s`.|Decimal point appears only if digits follow it. Trailing zeros are truncated.|  
  
## <a name="width"></a> Width specification
In a format specification, the second optional field is the width specification. The *width* argument is a non-negative decimal integer that controls the minimum number of characters that are output. If the number of characters in the output value is less than the specified width, blanks are added to the left or the right of the values—depending on whether the left-alignment flag (`-`) is specified—until the minimum width is reached. If *width* is prefixed by 0, leading zeros are added to integer or floating-point conversions until the minimum width is reached, except when conversion is to an infinity or NAN.  
  
 The width specification never causes a value to be truncated. If the number of characters in the output value is greater than the specified width, or if *width* is not given, all characters of the value are output, subject to the [precision](../c-runtime-library/precision-specification.md) specification.  
  
 If the width specification is an asterisk (`*`), an `int` argument from the argument list supplies the value. The *width* argument must precede the value that's being formatted in the argument list, as shown in this example:  
  
 `printf("%0*f", 5, 3);  /* 00003 is output */`  
  
 A missing or small *width* value in a format specification does not cause the truncation of an output value. If the result of a conversion is wider than the *width* value, the field expands to contain the conversion result.  
  
## <a name="precision"></a> Precision specification
In a format specification, the third optional field is the precision specification. It consists of a period (.) followed by a non-negative decimal integer that, depending on the conversion type, specifies the number of string characters, the number of decimal places, or the number of significant digits to be output.  
  
 Unlike the width specification, the precision specification can cause either truncation of the output value or rounding of a floating-point value. If *precision* is specified as 0 and the value to be converted is 0, the result is no characters output, as shown in this example:  
  
 `printf( "%.0d", 0 );      /* No characters output */`  
  
 If the precision specification is an asterisk (*), an `int` argument from the argument list supplies the value. In the argument list, the *precision* argument must precede the value that's being formatted, as shown in this example:  
  
 `printf( "%.*f", 3, 3.14159265 );  /* 3.142 output */`  
  
 The type determines either the interpretation of *precision* or the default precision when *precision* is omitted, as shown in the following table.  
  
### How Precision Values Affect Type  
  
|Type|Meaning|Default|  
|----------|-------------|-------------|  
|`a`, `A`|The precision specifies the number of digits after the point.|Default precision is 6. If precision is 0, no decimal point is printed unless the `#` flag is used.|  
|`c`, `C`|The precision has no effect.|Character is printed.|  
|`d`, `i`, `u`, `o`, `x`, `X`|The precision specifies the minimum number of digits to be printed. If the number of digits in the argument is less than *precision*, the output value is padded on the left with zeros. The value is not truncated when the number of digits exceeds *precision*.|Default precision is 1.|  
|`e`, `E`|The precision specifies the number of digits to be printed after the decimal point. The last printed digit is rounded.|Default precision is 6. If *precision* is 0 or the period (.) appears without a number following it, no decimal point is printed.|  
|`f`|The precision value specifies the number of digits after the decimal point. If a decimal point appears, at least one digit appears before it. The value is rounded to the appropriate number of digits.|Default precision is 6. If *precision* is 0, or if the period (.) appears without a number following it, no decimal point is printed.|  
|`g`, `G`|The precision specifies the maximum number of significant digits printed.|Six significant digits are printed, and any trailing zeros are truncated.|  
|`s`, `S`|The precision specifies the maximum number of characters to be printed. Characters in excess of *precision* are not printed.|Characters are printed until a null character is encountered.|  
  

  
## See Also  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [printf_p Positional Parameters](../c-runtime-library/printf-p-positional-parameters.md)   
 [Flag Directives](../c-runtime-library/flag-directives.md)   
 [printf Width Specification](../c-runtime-library/printf-width-specification.md)   
 [Precision Specification](../c-runtime-library/precision-specification.md)   
 [Size Specification](../c-runtime-library/size-specification.md)   
 [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md)