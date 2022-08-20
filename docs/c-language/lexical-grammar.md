---
title: "C lexical grammar"
description: "Describes the standard C language lexical grammar implemented by the Microsoft C/C++ compiler."
ms.date: 03/07/2022
helpviewer_keywords: ["lexical grammar"]
ms.assetid: cb5847fa-aef3-47f5-8825-97c2bf4a3d87
---
# C lexical grammar

## <a name="tokens"></a> Tokens

*`token`*:\
&emsp;*`keyword`*\
&emsp;*`identifier`*\
&emsp;*`constant`*\
&emsp;*`string-literal`*\
&emsp;*`punctuator`*

*`preprocessing-token`*:\
&emsp;*`header-name`*\
&emsp;*`identifier`*\
&emsp;*`pp-number`*\
&emsp;*`character-constant`*\
&emsp;*`string-literal`*\
&emsp;*`punctuator`*\
&emsp;each non-whitespace character that can't be one of the above

## <a name="keywords"></a> Keywords

*`keyword`*: one of\
&emsp;**`auto`** **`break`** **`case`** **`char`** **`const`** **`continue`**\
&emsp;**`default`** **`do`** **`double`** **`else`** **`enum`** **`extern`**\
&emsp;**`float`** **`for`** **`goto`** **`if`** **`inline`** **`int`** **`long`**\
&emsp;**`register`** **`restrict`** **`return`** **`short`** **`signed`**\
&emsp;**`sizeof`** **`static`** **`struct`** **`switch`** **`typedef`** **`union`**\
&emsp;**`unsigned`** **`void`** **`volatile`** **`while`** **`_Alignas`**\
&emsp;**`_Alignof`** **`_Atomic`** **`_Bool`** **`_Complex`** **`_Generic`**\
&emsp;**`_Imaginary`** **`_Noreturn`** **`_Static_assert`**\
&emsp;**`_Thread_local`**

For a list of additional Microsoft-specific keywords, see [C keywords](./c-keywords.md).

## <a name="identifiers"></a> Identifiers

*`identifier`*:\
&emsp;*`identifier-nondigit`*\
&emsp;*`identifier`* *`identifier-nondigit`*\
&emsp;*`identifier`* *`digit`*

*`identifier-nondigit`*:\
&emsp;*`nondigit`*\
&emsp;*`universal-character-name`*\
&emsp;other implementation-defined characters

*`nondigit`*: one of\
&emsp;**`_`** **`a`** **`b`** **`c`** **`d`** **`e`** **`f`** **`g`** **`h`** **`i`** **`j`** **`k`** **`l`** **`m`**\
&emsp;**`n`** **`o`** **`p`** **`q`** **`r`** **`s`** **`t`** **`u`** **`v`** **`w`** **`x`** **`y`** **`z`**\
&emsp;**`A`** **`B`** **`C`** **`D`** **`E`** **`F`** **`G`** **`H`** **`I`** **`J`** **`K`** **`L`** **`M`**\
&emsp;**`N`** **`O`** **`P`** **`Q`** **`R`** **`S`** **`T`** **`U`** **`V`** **`W`** **`X`** **`Y`** **`Z`**

*`digit`*: one of\
&emsp;**`0`** **`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`** **`8`** **`9`**

*`universal-character-name`*:\
&emsp;**`\u`** *`hex-quad`*\
&emsp;**`\U`** *`hex-quad`* *`hex-quad`*

*`hex-quad`*:\
&emsp;*`hexadecimal-digit`* *`hexadecimal-digit`* *`hexadecimal-digit`* *`hexadecimal-digit`*

## <a name="constants"></a> Constants

*`constant`*:\
&emsp;*`integer-constant`*\
&emsp;*`floating-constant`*\
&emsp;*`enumeration-constant`*\
&emsp;*`character-constant`*

*`integer-constant`*:\
&emsp;*`decimal-constant`* *`integer-suffix`*<sub>opt</sub>\
&emsp;*`binary-constant`*<sup>1</sup> *`integer-suffix`*<sub>opt</sub>\
&emsp;*`octal-constant`* *`integer-suffix`*<sub>opt</sub>\
&emsp;*`hexadecimal-constant`* *`integer-suffix`*<sub>opt</sub>

*`decimal-constant`*:\
&emsp;*`nonzero-digit`*\
&emsp;*`decimal-constant`* *`digit`*

*`binary-constant`*:<sup>1</sup>\
&emsp;*`binary-prefix`* *`binary-digit`*\
&emsp;*`binary-constant`* *`binary-digit`*

*`binary-prefix`*<sup>1</sup>: one of\
&emsp;**`0b`** **`0B`**

*`binary-digit`*<sup>1</sup>: one of\
&emsp;**`0`** **`1`**

*`octal-constant`*:\
&emsp;**`0`**\
&emsp;*`octal-constant`* *`octal-digit`*

*`hexadecimal-constant`*:\
&emsp;*`hexadecimal-prefix`* *`hexadecimal-digit`*\
&emsp;*`hexadecimal-constant`* *`hexadecimal-digit`*

*`hexadecimal-prefix`*: one of\
&emsp;**`0x`** **`0X`**

*`nonzero-digit`*: one of\
&emsp;**`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`** **`8`** **`9`**

*`octal-digit`*: one of\
&emsp;**`0`** **`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`**

*`hexadecimal-digit`*: one of\
&emsp;**`0`** **`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`** **`8`** **`9`**\
&emsp;**`a`** **`b`** **`c`** **`d`** **`e`** **`f`**\
&emsp;**`A`** **`B`** **`C`** **`D`** **`E`** **`F`**

*`integer-suffix`*:\
&emsp;*`unsigned-suffix`* *`long-suffix`*<sub>opt</sub>\
&emsp;*`unsigned-suffix`* *`long-long-suffix`*<sub>opt</sub>\
&emsp;*`long-suffix`* *`unsigned-suffix`*<sub>opt</sub>\
&emsp;*`long-long-suffix`* *`unsigned-suffix`*<sub>opt</sub>

*`unsigned-suffix`*: one of\
&emsp;**`u`** **`U`**

*`long-suffix`*: one of\
&emsp;**`l`** **`L`**

*`long-long-suffix`*: one of\
&emsp;**`ll`** **`LL`**

*`floating-constant`*:\
&emsp;*`decimal-floating-constant`*\
&emsp;*`hexadecimal-floating-constant`*

*`decimal-floating-constant`*:\
&emsp;*`fractional-constant`* *`exponent-part`*<sub>opt</sub> *`floating-suffix`*<sub>opt</sub>\
&emsp;*`digit-sequence`* *`exponent-part`* *`floating-suffix`*<sub>opt</sub>

*`hexadecimal-floating-constant`*:\
&emsp;*`hexadecimal-prefix`* *`hexadecimal-fractional-constant`* *`binary-exponent-part`*<sub>opt</sub> *`floating-suffix`*<sub>opt</sub>\
&emsp;*`hexadecimal-prefix`* *`hexadecimal-digit-sequence`* *`binary-exponent-part`* *`floating-suffix`*<sub>opt</sub>

*`fractional-constant`*:\
&emsp;*`digit-sequence`*<sub>opt</sub> **`.`** *`digit-sequence`*\
&emsp;*`digit-sequence`*  **`.`**

*`exponent-part`*:\
&emsp;**`e`** *`sign`*<sub>opt</sub> *`digit-sequence`*\
&emsp;**`E`** *`sign`*<sub>opt</sub> *`digit-sequence`*

*`sign`*: one of\
&emsp;**`+`** **`-`**

*`digit-sequence`*:\
&emsp;*`digit`*\
&emsp;*`digit-sequence`* *`digit`*

*`hexadecimal-fractional-constant`*:\
&emsp;*`hexadecimal-digit-sequence`*<sub>opt</sub> **`.`** *`hexadecimal-digit-sequence`*\
&emsp;*`hexadecimal-digit-sequence`*  **`.`**

*`binary-exponent-part`*:\
&emsp;**`p`** *`sign`*<sub>opt</sub> *`digit-sequence`*\
&emsp;**`P`** *`sign`*<sub>opt</sub> *`digit-sequence`*

*`hexadecimal-digit-sequence`*:\
&emsp;*`hexadecimal-digit`*\
&emsp;*`hexadecimal-digit-sequence`* *`hexadecimal-digit`*

*`floating-suffix`*: one of\
&emsp;**`f`** **`l`** **`F`** **`L`**

*`enumeration-constant`*:\
&emsp;*`identifier`*

*`character-constant`*:\
&emsp;**`'`** *`c-char-sequence`* **`'`**\
&emsp;**`L'`** *`c-char-sequence`* **`'`**

*`c-char-sequence`*:\
&emsp;*`c-char`*\
&emsp;*`c-char-sequence`* *`c-char`*

*`c-char`*:\
&emsp;Any member of the source character set except the single quotation mark (**`'`**), backslash (**`\`**), or new-line character\
&emsp;*`escape-sequence`*

*`escape-sequence`*:\
&emsp;*`simple-escape-sequence`*\
&emsp;*`octal-escape-sequence`*\
&emsp;*`hexadecimal-escape-sequence`*\
&emsp;*`universal-character-name`*

*`simple-escape-sequence`*: one of\
&emsp;**`\a`** **`\b`** **`\f`** **`\n`** **`\r`** **`\t`** **`\v`**\
&emsp;**`\'`** **`\"`** **`\\`** **`\?`**

*`octal-escape-sequence`*:\
&emsp;**`\`** *`octal-digit`*\
&emsp;**`\`** *`octal-digit`* *`octal-digit`*\
&emsp;**`\`** *`octal-digit`* *`octal-digit`* *`octal-digit`*

*`hexadecimal-escape-sequence`*:\
&emsp;**`\x`** *`hexadecimal-digit`*\
&emsp;*`hexadecimal-escape-sequence`* *`hexadecimal-digit`*

## <a name="string-literals"></a> String literals

*`string-literal`*:\
&emsp;*`encoding-prefix`* **`"`** *`s-char-sequence`*<sub>opt</sub> **`"`**

*`encoding-prefix`*:\
&emsp;**`u8`**\
&emsp;**`u`**\
&emsp;**`U`**\
&emsp;**`L`**

*`s-char-sequence`*:\
&emsp;*`s-char`*\
&emsp;*`s-char-sequence`* *`s-char`*

*`s-char`*:\
&emsp;any member of the source character set except the double-quotation mark (**`"`**), backslash (**`\`**), or new-line character\
&emsp;*`escape-sequence`*

## <a name="punctuators"></a> Punctuators

*`punctuator`*: one of\
&emsp;**`[`** **`]`** **`(`** **`)`** **`{`** **`}`** **`.`** **`->`**\
&emsp;**`++`** **`--`** **`&`** **`*`** **`+`** **`-`** **`~`** **`!`**\
&emsp;**`/`** **`%`** **`<<`** **`>>`** **`<`** **`>`** **`<=`** **`>=`** **`==`**\
&emsp;**`!=`** **`^`** **`|`** **`&&`** **`||`** **`?`** **`:`** **`;`** **`...`**\
&emsp;**`=`** **`*=`** **`/=`** **`%=`** **`+=`** **`-=`** **`<<=`** **`>>=`**\
&emsp;**`&=`** **`^=`** **`|=`** **`,`** **`#`** **`##`**\
&emsp;**`<:`** **`:>`** **`<%`** **`%>`** **`%:`** **`%:%:`**

## Header names

*`header-name`*:\
&emsp;**`<`** *`h-char-sequence`* **`>`**\
&emsp;**`"`** *`q-char-sequence`* **`"`**

*`h-char-sequence`*:\
&emsp;*`h-char`*\
&emsp;*`h-char-sequence`* *`h-char`*

*`h-char`*:\
&emsp;any member of the source character set except the new-line character and **`>`**

*`q-char-sequence`*:\
&emsp;*`q-char`*\
&emsp;*`q-char-sequence`* *`q-char`*

*`q-char`*:\
&emsp;any member of the source character set except the new-line character and **`"`**

## Preprocessing numbers

*`pp-number`*:\
&emsp;*`digit`*\
&emsp;**`.`** *`digit`*\
&emsp;*`pp-number`* *`digit`* \
&emsp;*`pp-number`* *`identifier-nondigit`*\
&emsp;*`pp-number`* **`e`** *`sign`*\
&emsp;*`pp-number`* **`E`** *`sign`*\
&emsp;*`pp-number`* **`p`** *`sign`*\
&emsp;*`pp-number`* **`P`** *`sign`*\
&emsp;*`pp-number`* **`.`**

<sup>1</sup> *`binary-constant`*, *`binary-prefix`*, and *`binary-digit`* are Microsoft-specific extensions.

## See also

[C Language Syntax Summary](../c-language/c-language-syntax-summary.md)
