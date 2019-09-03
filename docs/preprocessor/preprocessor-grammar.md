---
title: "Preprocessor grammar"
ms.date: "08/29/2019"
helpviewer_keywords: ["preprocessor", "grammar, preprocessor", "preprocessor, grammar"]
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
---
# Preprocessor grammar

*control-line*:\
&nbsp;&nbsp;&nbsp;&nbsp;**#define** *identifier* *token-string*<sub>opt</sub>\
&nbsp;&nbsp;&nbsp;&nbsp;**#define** *identifier* **(**&#x2800;*identifier*&#x200B;<sub>opt</sub> **,** ... **,** *identifier*&#x200B;<sub>opt</sub>&#x2800;**)** *token-string*<sub>opt</sub>\
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **"**_path-spec_**"**\
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **\<**_path-spec_**>**\
&nbsp;&nbsp;&nbsp;&nbsp;**#line** *digit-sequence*  **"**_filename_**"**&#x200B;<sub>opt</sub>\
&nbsp;&nbsp;&nbsp;&nbsp;**#undef** *identifier*\
&nbsp;&nbsp;&nbsp;&nbsp;**#error** *token-string*\
&nbsp;&nbsp;&nbsp;&nbsp;**#pragma** *token-string*

*constant-expression*:\
&nbsp;&nbsp;&nbsp;&nbsp;**defined(**&#x2800;*identifier*&#x2800;**)**\
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

[Grammar summary (C/C++)](../preprocessor/grammar-summary-c-cpp.md)
