---
description: "Learn more about: setlocale pragma"
title: "setlocale pragma"
ms.date: "08/29/2019"
f1_keywords: ["setlocale_CPP", "vc-pragma.setlocale"]
helpviewer_keywords: ["pragmas, setlocale", "setlocale pragma"]
ms.assetid: e60b43d9-fbdf-4c4e-ac85-805523a13b86
---
# setlocale pragma

Defines the *locale*, the country, region, and language to use when translating wide-character constants and string literals.

## Syntax

> **#pragma setlocale( "** [ *locale-string* ] **" )**

## Remarks

Because the algorithm for converting multibyte characters to wide characters may vary by locale, or the compilation may take place in a different locale from where an executable file will be run, this pragma provides a way to specify the target locale at compile time. It guarantees wide-character strings are stored in the correct format.

The default *locale-string* is "".

The "C" locale maps each character in the string to its value as a **`wchar_t`**. Other valid values for `setlocale` are the entries found in the [Language Strings](../c-runtime-library/language-strings.md) list. For example, you could specify:

```cpp
#pragma setlocale("dutch")
```

The ability to specify a language string depends on the code page and language ID support on your computer.

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
