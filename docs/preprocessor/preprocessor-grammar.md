---
title: "Preprocessor Grammar"
ms.date: "09/04/2018"
helpviewer_keywords: ["preprocessor", "grammar, preprocessor", "preprocessor, grammar"]
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
---
# Preprocessor Grammar

*control-line*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#define** *identifier* *token-string*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#define** <em>identifier</em>**(** *identifier*<sub>opt</sub> **,** ... **,** *identifier*<sub>opt</sub> **)** *token-string*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **"** *path-spec* **"**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **\<** *path-spec* **>**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#line** *digit-sequence*  **"** *filename* **"**<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#undef** *identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#error** *token-string*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#pragma** *token-string*

*constant-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**defined(** *identifier* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**defined** *identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;any other constant expression

*conditional* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*if-part* *elif-parts*<sub>opt</sub> *else-part*<sub>opt</sub> *endif-line*

*if-part* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*if-line* *text*

*if-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#if** *constant-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#ifdef** *identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#ifndef** *identifier*

*elif-parts* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elif-line* *text*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elif-parts* *elif-line* *text*

*elif-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#elif** *constant-expression*

*else-part* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*else-line* *text*

*else-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#else**

*endif-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#endif**

*digit-sequence* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *digit*

*digit* : one of<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**

*token-string* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;String of tokens

*token* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*keyword*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*constant*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*operator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*punctuator*

*filename* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Legal operating system filename

*path-spec* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Legal file path

*text* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Any sequence of text

> [!NOTE]
> The following nonterminals are expanded in the [Lexical Conventions](../cpp/lexical-conventions.md) section of the *C++ Language Reference*: *constant*, *constant-expression*, *identifier*, *keyword*, *operator*, and *punctuator*.

## See Also

[Grammar Summary (C/C++)](../preprocessor/grammar-summary-c-cpp.md)