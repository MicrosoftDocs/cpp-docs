---
title: "Preprocessor grammar summary (C/C++)"
description: "Defines and describes the Microsoft C/C++ compiler (MSVC) preprocessor grammar syntax."
ms.date: 01/22/2021
helpviewer_keywords: ["grammar", "preprocessor, grammar"]
---
# Preprocessor grammar summary (C/C++)

This article describes the formal grammar of the C and C++ preprocessor. It covers the syntax of preprocessing directives and operators. For more information, see [Preprocessor](../preprocessor/preprocessor.md) and [Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md).

## <a name="definitions"></a> Definitions for the grammar summary

Terminals are endpoints in a syntax definition. No other resolution is possible. Terminals include the set of reserved words and user-defined identifiers.

Nonterminals are placeholders in the syntax. Most are defined elsewhere in this syntax summary. Definitions can be recursive. The following nonterminals are defined in the [Lexical conventions](../cpp/lexical-conventions.md) section of the *C++ Language Reference*:

*`constant`*, *`constant-expression`*, *`identifier`*, *`keyword`*, *`operator`*, *`punctuator`*

An optional component is indicated by the subscripted <sub>opt</sub>. For example, the following syntax indicates an optional expression enclosed in curly braces:

**`{`** *`expression`*<sub>opt</sub> **`}`**

## <a name="conventions"></a> Document conventions

The conventions use different font attributes for different components of the syntax. The symbols and fonts are as follows:

| Attribute | Description |
|---------------|-----------------|
| *`nonterminal`* | Italic type indicates nonterminals. |
| **`#include`** | Terminals in bold type are literal reserved words and symbols that must be entered as shown. Characters in this context are always case sensitive. |
| <sub>opt</sub> | Nonterminals followed by <sub>opt</sub> are always optional.|
| default typeface | Characters in the set described or listed in this typeface can be used as terminals in statements. |

A colon (**`:`**) following a nonterminal introduces its definition. Alternative definitions are listed on separate lines.

In code syntax blocks, these symbols in the default typeface have a special meaning:

| Symbol | Description |
|---|---|
| \[ ] | Square brackets surround an optional element. |
| { \| } | Curly braces surround alternative elements, separated by vertical bars. |
| ... | Indicates the previous element pattern can be repeated. |

In code syntax blocks, commas (`,`), periods (`.`), semi-colons (`;`), colons (`:`), parentheses (`( )`), double-quotes (`"`), and single-quotes (`'`) are literals.

## <a name="grammar"></a> Preprocessor grammar

*`control-line`*:\
&emsp;**`#define`** *`identifier`* *`token-string`*<sub>opt</sub>\
&emsp;**`#define`** *`identifier`* **`(`** *`identifier`*<sub>opt</sub> **`,`** ... **`,`** *`identifier`*<sub>opt</sub> **`)`** *`token-string`*<sub>opt</sub>\
&emsp;**`#include`** **`"`**_`path-spec`_**`"`**\
&emsp;**`#include`** **`<`**_`path-spec`_**`>`**\
&emsp;**`#line`** *`digit-sequence`* **`"`**_`filename`_**`"`**<sub>opt</sub>\
&emsp;**`#undef`** *`identifier`*\
&emsp;**`#error`** *`token-string`*\
&emsp;**`#pragma`** *`token-string`*

*`constant-expression`*:\
&emsp;**`defined(`** *`identifier`* **`)`**\
&emsp;**`defined`** *`identifier`*\
&emsp;any other constant expression

*`conditional`*:\
&emsp;*`if-part`* *`elif-parts`*<sub>opt</sub> *`else-part`*<sub>opt</sub> *`endif-line`*

*`if-part`*:\
&emsp;*`if-line`* *`text`*

*`if-line`*:\
&emsp;**`#if`** *`constant-expression`*\
&emsp;**`#ifdef`** *`identifier`*\
&emsp;**`#ifndef`** *`identifier`*

*`elif-parts`*:\
&emsp;*`elif-line`* *`text`*\
&emsp;*`elif-parts`* *`elif-line`* *`text`*

*`elif-line`*:\
&emsp;**`#elif`** *`constant-expression`*

*`else-part`*:\
&emsp;*`else-line`* *`text`*

*`else-line`*:\
&emsp;**`#else`**

*`endif-line`*:\
&emsp;**`#endif`**

*`digit-sequence`*:\
&emsp;*`digit`*\
&emsp;*`digit-sequence`* *`digit`*

*`digit`*: one of\
&emsp;**`0` `1` `2` `3` `4` `5` `6` `7` `8` `9`**

*`token-string`*:\
&emsp;String of *`token`*

*`token`*:\
&emsp;*`keyword`*\
&emsp;*`identifier`*\
&emsp;*`constant`*\
&emsp;*`operator`*\
&emsp;*`punctuator`*

*`filename`*:\
&emsp;Legal operating system filename

*`path-spec`*:\
&emsp;Legal file path

*`text`*:\
&emsp;Any sequence of text

> [!NOTE]
> The following nonterminals are expanded in the [Lexical conventions](../cpp/lexical-conventions.md) section of the *C++ Language Reference*: *`constant`*, *`constant-expression`*, *`identifier`*, *`keyword`*, *`operator`*, and *`punctuator`*.

## See also

[C/C++ preprocessor reference](../preprocessor/c-cpp-preprocessor-reference.md)
