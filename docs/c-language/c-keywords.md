---
title: "C Keywords"
description: "Keywords in Standard C and Microsoft C compiler extensions."
ms.date: "12/8/2020"
helpviewer_keywords: ["keywords [C]", "redefining keywords", "Microsoft-specific keywords"]
---
# C Keywords

*Keywords* are words that have special meaning to the C compiler. In translation phases 7 and 8, an identifier can't have the same spelling and case as a C keyword. For more information, see [translation phases](../preprocessor/phases-of-translation.md) in the *Preprocessor Reference*. For more information on identifiers, see [Identifiers](../c-language/c-identifiers.md).

## Standard C keywords

The C language uses the following keywords:

:::row:::
    :::column:::
        **`auto`**\
        **`break`**\
        **`case`**\
        **`char`**\
        **`const`**\
        **`continue`**\
        **`default`**\
        **`do`**\
        **`double`**\
        **`else`**\
        **`enum`**
    :::column-end:::
    :::column:::
        **`extern`**\
        **`float`**\
        **`for`**\
        **`goto`**\
        **`if`**\
        **`inline`** <sup>1, a</sup>\
        **`int`**\
        **`long`**\
        **`register`**\
        **`restrict`** <sup>1, a</sup>\
        **`return`**
    :::column-end:::
    :::column:::
        **`short`**\
        **`signed`**\
        **`sizeof`**\
        **`static`**\
        **`struct`**\
        **`switch`**\
        **`typedef`**\
        **`union`**\
        **`unsigned`**\
        **`void`**\
        **`volatile`**
    :::column-end:::
    :::column:::
        **`while`**\
        **[`_Alignas`](alignment-c.md#alignas-and-_alignas-c11)** <sup>2, a</sup>\
        **[`_Alignof`](alignment-c.md#alignof-and-_alignof-c11)** <sup>2, a</sup>\
        **`_Atomic`** <sup>2, b</sup>\
        **`_Bool`** <sup>1, a</sup>\
        **`_Complex`** <sup>1, b</sup>\
        **[`_Generic`](generic_selection.md)** <sup>2, a</sup>\
        **`_Imaginary`** <sup>1, b</sup>\
        **`_Noreturn`** <sup>2, a</sup>\
        **`_Static_assert`** <sup>2, a</sup>\
        **`_Thread_local`** <sup>2, b</sup>
    :::column-end:::
:::row-end:::

<sup>1</sup>  Keywords introduced in ISO C99.

<sup>2</sup>   Keywords introduced in ISO C11.

<sup>a</sup>  Starting in Visual Studio 2019 version 16.8, these keywords are supported in code compiled as C when the **`/std:c11`** or **`/std:c17`** compiler options are specified.

<sup>b</sup>  Starting in Visual Studio 2019 version 16.8, these keywords are recognized but not supported by the compiler in code compiled as C when the **`/std:c11`** or **`/std:c17`** compiler options are specified.

You can't redefine keywords. However, you can specify text to replace keywords before compilation by using C [preprocessor directives](../preprocessor/preprocessor-directives.md).

## Microsoft-specific C keywords

The ANSI and ISO C standards allow identifiers with two leading underscores to be reserved for compiler implementations. The Microsoft convention is to precede Microsoft-specific keyword names with double underscores. These words can't be used as identifier names. For a description of the rules for naming identifiers, including the use of double underscores, see [Identifiers](../c-language/c-identifiers.md).

The following keywords and special identifiers are recognized by the Microsoft C compiler:

:::row:::
    :::column:::
        **`__asm`**<sup>5</sup>\
        **`__based`**<sup>3, 5</sup>\
        **`__cdecl`**<sup>5</sup>\
        **`__declspec`**<sup>5</sup>\
        **`__except`**<sup>5</sup>\
        **`__fastcall`**\
        **`__finally`**<sup>5</sup>
    :::column-end:::
    :::column:::
        **`__inline`**<sup>5</sup>\
        **`__int16`**<sup>5</sup>\
        **`__int32`**<sup>5</sup>\
        **`__int64`**<sup>5</sup>\
        **`__int8`**<sup>5</sup>\
        **`__leave`**<sup>5</sup>\
        **`__restrict`**
    :::column-end:::
    :::column:::
        **`__stdcall`**<sup>5</sup>\
        **`__try`**<sup>5</sup>\
        **`dllexport`**<sup>4</sup>\
        **`dllimport`**<sup>4</sup>\
        **`naked`**<sup>4</sup>\
        **`static_assert`**<sup>6</sup>\
        **`thread`**<sup>4</sup>
    :::column-end:::
:::row-end:::

<sup>3</sup> The **`__based`** keyword has limited uses for 32-bit and 64-bit target compilations.

<sup>4</sup> These are special identifiers when used with **`__declspec`**; their use in other contexts is unrestricted.

<sup>5</sup> For compatibility with previous versions, these keywords are available both with two leading underscores and a single leading underscore when Microsoft extensions are enabled.

<sup>6</sup> If you don't include <assert.h>, the Microsoft Visual C compiler maps **`static_assert`** to the C11 **`_Static_assert`** keyword.

Microsoft extensions are enabled by default. To assist in creating portable code, you can disable Microsoft extensions by specifying the [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) option during compilation. When you use this option, some Microsoft-specific keywords are disabled.

When Microsoft extensions are enabled, you can use the keywords listed above in your programs. For standards compliance, most of these keywords are prefaced by a double underscore. The four exceptions, **`dllexport`**, **`dllimport`**, **`naked`**, and **`thread`**, are used only with **`__declspec`** and don't require a leading double underscore. For backward compatibility, single-underscore versions of the rest of the keywords are supported.

## See also

[Elements of C](../c-language/elements-of-c.md)
