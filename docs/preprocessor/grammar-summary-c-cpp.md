---
title: "Preprocessor grammar summary (C/C++)"
description: "Defines and describes the Microsoft C/C++ compiler (MSVC) preprocessor grammar syntax."
ms.date: "08/29/2019"
helpviewer_keywords: ["grammar", "preprocessor, grammar"]
ms.assetid: 0acb6e9b-364c-4ef8-ace4-7be980521121
---
# Preprocessor grammar summary (C/C++)

This article describes the formal grammar of the C and C++ preprocessor. It covers the syntax of preprocessing directives and operators. For more information, see [Preprocessor](../preprocessor/preprocessor.md) and [Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md).

## <a name="definitions"></a> Definitions for the grammar summary

Terminals are endpoints in a syntax definition. No other resolution is possible. Terminals include the set of reserved words and user-defined identifiers.

Nonterminals are placeholders in the syntax. Most are defined elsewhere in this syntax summary. Definitions can be recursive. The following nonterminals are defined in the [Lexical Conventions](../cpp/lexical-conventions.md) section of the *C++ Language Reference*:

*constant*, *constant-expression*, *identifier*, *keyword*, *operator*, *punctuator*

An optional component is indicated by the subscripted <sub>opt</sub>. For example, the following syntax indicates an optional expression enclosed in curly braces:

**{** *expression*<sub>opt</sub> **}**

## <a name="conventions"></a> Document conventions

The conventions use different font attributes for different components of the syntax. The symbols and fonts are as follows:

| Attribute | Description |
|---------------|-----------------|
| *nonterminal* | Italic type indicates nonterminals. |
| **#include** | Terminals in bold type are literal reserved words and symbols that must be entered as shown. Characters in this context are always case sensitive. |
| <sub>opt</sub> | Nonterminals followed by <sub>opt</sub> are always optional.|
| default typeface | Characters in the set described or listed in this typeface can be used as terminals in statements. |

A colon (**:**) following a nonterminal introduces its definition. Alternative definitions are listed on separate lines.

In code syntax blocks, these symbols in the default typeface have a special meaning:

| Symbol | Description |
|---|---|
| \[ ] | Square brackets surround an optional element. |
| { \| } | Curly braces surround alternative elements, separated by vertical bars. |
| ... | Indicates the previous element pattern can be repeated. |

In code syntax blocks, commas (`,`), periods (`.`), semi-colons (`;`), colons (`:`), parentheses (`( )`), double-quotes (`"`), and single-quotes (`'`) are literals.

## <a name="grammar"></a> Preprocessor grammar

*control-line*:\
&nbsp;&nbsp;&nbsp;&nbsp;**#define** *identifier* *token-string*<sub>opt</sub>\
&nbsp;&nbsp;&nbsp;&nbsp;**#define** *identifier* **(** *identifier*<sub>opt</sub> **,** ... **,** *identifier*<sub>opt</sub> **)** *token-string*<sub>opt</sub>\
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **"**_path-spec_**"**\
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **\<**_path-spec_**>**\
&nbsp;&nbsp;&nbsp;&nbsp;**#line** *digit-sequence* **"**_filename_**"**<sub>opt</sub>\
&nbsp;&nbsp;&nbsp;&nbsp;**#undef** *identifier*\
&nbsp;&nbsp;&nbsp;&nbsp;**#error** *token-string*\
&nbsp;&nbsp;&nbsp;&nbsp;**#pragma** *token-string*

*constant-expression*:\
&nbsp;&nbsp;&nbsp;&nbsp;**defined(** *identifier* **)**\
&nbsp;&nbsp;&nbsp;&nbsp;**defined** *identifier*\
&nbsp;&nbsp;&nbsp;&nbsp;any other constant expression

*conditional*:\
&nbsp;&nbsp;&nbsp;&nbsp;*if-part* *elif-parts*<sub>opt</sub> *else-part*<sub>opt</sub> *endif-line*

*if-part*:\
&nbsp;&nbsp;&nbsp;&nbsp;*if-line* *text*

*if-line*:\
&nbsp;&nbsp;&nbsp;&nbsp;**#if** *constant-expression*\
&nbsp;&nbsp;&nbsp;&nbsp;**#ifdef** *identifier*\
&nbsp;&nbsp;&nbsp;&nbsp;**#ifndef** *identifier*

*elif-parts*:\
&nbsp;&nbsp;&nbsp;&nbsp;*elif-line* *text*\
&nbsp;&nbsp;&nbsp;&nbsp;*elif-parts* *elif-line* *text*

*elif-line*:\
&nbsp;&nbsp;&nbsp;&nbsp;**#elif** *constant-expression*

*else-part*:\
&nbsp;&nbsp;&nbsp;&nbsp;*else-line* *text*

*else-line*:\
&nbsp;&nbsp;&nbsp;&nbsp;**#else**

*endif-line*:\
&nbsp;&nbsp;&nbsp;&nbsp;**#endif**

*digit-sequence*:\
&nbsp;&nbsp;&nbsp;&nbsp;*digit*\
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *digit*

*digit*: one of\
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**

*token-string*:\
&nbsp;&nbsp;&nbsp;&nbsp;String of tokens

*token*:\
&nbsp;&nbsp;&nbsp;&nbsp;*keyword*\
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*\
&nbsp;&nbsp;&nbsp;&nbsp;*constant*\
&nbsp;&nbsp;&nbsp;&nbsp;*operator*\
&nbsp;&nbsp;&nbsp;&nbsp;*punctuator*

*filename*:\
&nbsp;&nbsp;&nbsp;&nbsp;Legal operating system filename

*path-spec*:\
&nbsp;&nbsp;&nbsp;&nbsp;Legal file path

*text*:\
&nbsp;&nbsp;&nbsp;&nbsp;Any sequence of text

> [!NOTE]
> The following nonterminals are expanded in the [Lexical conventions](../cpp/lexical-conventions.md) section of the *C++ Language Reference*: *constant*, *constant-expression*, *identifier*, *keyword*, *operator*, and *punctuator*.

## See also

[C/C++ preprocessor reference](../preprocessor/c-cpp-preprocessor-reference.md)
