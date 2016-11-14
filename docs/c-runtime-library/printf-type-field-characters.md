---
title: "printf Type Field Characters | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "printf function, format specification fields"
  - "printf function, type field characters"
ms.assetid: 699cb438-cd14-402e-9f81-c7a32acc3317
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
# printf Type Field Characters
In a format specification, the `type` character is a conversion specifier that specifies whether the corresponding argument is to be interpreted as a character, a string, a pointer, an integer, or a floating-point number. The `type` character is the only required format specification field, and it appears after any optional fields.  
  
 The arguments that follow the format string are interpreted according to the corresponding `type` character and the optional [size](../c-runtime-library/size-specification.md) prefix. Conversions for character types `char` and `wchar_t` are specified by using `c` or `C`, and single-byte and multi-byte or wide character strings are specified by using `s` or `S`, depending on which formatting function is being used. Character and string arguments that are specified by using `c` and `s` are interpreted as `char` and `char*` by `printf` family functions, or as `wchar_t` and `wchar_t*` by `wprintf` family functions. Character and string arguments that are specified by using `C` and `S` are interpreted as `wchar_t` and `wchar_t*` by `printf` family functions, or as `char` and `char*` by `wprintf` family functions.  
  
 Integer types such as `short`, `int`, `long`, `long long`, and their `unsigned` variants, are specified by using `d`, `i`, `o`, `u`, `x`, and `X`. Floating-point types such as `float`, `double`, and `long double`, are specified by using `a`, `A`, `e`, `E`, `f`, `g`, and `G`. By default, unless they are modified by a `size` field length prefix, integer arguments are coerced to `int` type, and floating-point arguments are coerced to `double`. On 64-bit systems, an `int` is a 32-bit value; therefore, 64-bit integers will be truncated when they are formatted for output unless a `size` prefix of `ll` or `I64` is used. Pointer types that are specified by `p` use the default length for the platform.  
  
> [!NOTE]
>  The `C`, `S`, and `Z` type characters, and the behavior of the `c` and `s` type characters when they are used with the `printf` and `wprintf` functions, are Microsoft extensions and are not ANSI compatible. [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] does not support the `F` type character.  
  
### printf Type Field Characters  
  
|Type Character|Argument|Output format|  
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
|`g`|Floating-point|Signed values are displayed in `f` or `e` format, whichever is more compact for the given value and precision. The `e` format is used only when the exponent of the value is less than –4 or greater than or equal to the `precision` argument. Trailing zeros are truncated, and the decimal point appears only if one or more digits follow it.|  
|`G`|Floating-point|Identical to the `g` format, except that **E**, rather than **e**, introduces the exponent (where appropriate).|  
|`a`|Floating-point|Signed hexadecimal double-precision floating-point value that has the form [−]0x*h.hhhh* **p±**`dd`, where *h.hhhh* are the hex digits (using lower case letters) of the mantissa, and `dd` are one or more digits for the exponent. The precision specifies the number of digits after the point.|  
|`A`|Floating-point|Signed hexadecimal double-precision floating-point value that has the form [−]0X*h.hhhh* **P±**`dd`, where *h.hhhh* are the hex digits (using capital letters) of the mantissa, and `dd` are one or more digits for the exponent. The precision specifies the number of digits after the point.|  
|`n`|Pointer to integer|Number of characters that are successfully written so far to the stream or buffer. This value is stored in the integer whose address is given as the argument. See the Security Note later in this article.|  
|`p`|Pointer type|Displays the argument as an address in hexadecimal digits.|  
|`s`|String|When used with `printf` functions, specifies a single-byte or multi-byte character string; when used with `wprintf` functions, specifies a wide-character string. Characters are displayed up to the first null character or until the `precision` value is reached.|  
|`S`|String|When used with `printf` functions, specifies a wide-character string; when used with `wprintf` functions, specifies a single-byte or multi-byte character string. Characters are displayed up to the first null character or until the `precision` value is reached.|  
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
  
## See Also  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Format Specification Syntax: printf and wprintf Functions](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Flag Directives](../c-runtime-library/flag-directives.md)   
 [printf Width Specification](../c-runtime-library/printf-width-specification.md)   
 [Precision Specification](../c-runtime-library/precision-specification.md)   
 [Size Specification](../c-runtime-library/size-specification.md)   
 [_set_output_format](../c-runtime-library/set-output-format.md)