---
description: "Learn more about the setlocale pragma directive in Microsoft C/C++"
title: "setlocale pragma"
ms.date: 01/22/2021
f1_keywords: ["setlocale_CPP", "vc-pragma.setlocale"]
helpviewer_keywords: ["pragma, setlocale", "setlocale pragma"]
no-loc: ["pragma"]
---
# `setlocale` pragma

Defines the *locale*, the country/region and language to use when translating wide-character constants and string literals.

## Syntax

> **`#pragma setlocale( "`** [ *locale-string* ] **`" )`**

## Remarks

Because the algorithm for converting multibyte characters to wide characters may vary by locale, or the compilation may take place in a different locale from where an executable file will be run, this pragma provides a way to specify the target locale at compile time. It guarantees wide-character strings are stored in the correct format.

The default *locale-string* is the empty string, specified by `#pragma setlocale( "" )`.

The **`"C"`** locale maps each character in the string to its value as a **`wchar_t`**. Other valid values for `setlocale` are the entries found in the [Language strings](../c-runtime-library/language-strings.md) list. For example, you could specify:

```cpp
#pragma setlocale("dutch")
```

The ability to specify a language string depends on the code page and language ID support on your computer.

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
