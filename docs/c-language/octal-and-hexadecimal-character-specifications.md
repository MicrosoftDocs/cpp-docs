---
description: "Learn more about: Octal and Hexadecimal Character Specifications"
title: "Octal and Hexadecimal Character Specifications"
ms.date: "11/04/2016"
helpviewer_keywords: ["octal characters", "hexadecimal characters"]
ms.assetid: 9264f3ec-46b8-41a5-b21a-8f7ed0a11871
---
# Octal and Hexadecimal Character Specifications

The sequence **\\**<em>ooo</em> means you can specify any character in the ASCII character set as a three-digit octal character code. The numerical value of the octal integer specifies the value of the desired character or wide character.

Similarly, the sequence **\x**<em>hhh</em> allows you to specify any ASCII character as a hexadecimal character code. For example, you can give the ASCII backspace character as the normal C escape sequence (**\b**), or you can code it as **\010** (octal) or **\x008** (hexadecimal).

You can use only the digits 0 through 7 in an octal escape sequence. Octal escape sequences can never be longer than three digits and are terminated by the first character that is not an octal digit. Although you do not need to use all three digits, you must use at least one. For example, the octal representation is **\10** for the ASCII backspace character and **\101** for the letter A, as given in an ASCII chart.

Similarly, you must use at least one digit for a hexadecimal escape sequence, but you can omit the second and third digits. Therefore you could specify the hexadecimal escape sequence for the backspace character as either **\x8**, **\x08**, or **\x008**.

The value of the octal or hexadecimal escape sequence must be in the range of representable values for type **`unsigned char`** for a character constant and type **`wchar_t`** for a wide-character constant. See [Multibyte and Wide Characters](../c-language/multibyte-and-wide-characters.md) for information on wide-character constants.

Unlike octal escape constants, the number of hexadecimal digits in an escape sequence is unlimited. A hexadecimal escape sequence terminates at the first character that is not a hexadecimal digit. Because hexadecimal digits include the letters **a** through **f**, care must be exercised to make sure the escape sequence terminates at the intended digit. To avoid confusion, you can place octal or hexadecimal character definitions in a macro definition:

```
#define Bell '\x07'
```

For hexadecimal values, you can break the string to show the correct value clearly:

```
"\xabc"    /* one character  */
"\xab" "c" /* two characters */
```

## See also

[C Character Constants](../c-language/c-character-constants.md)
