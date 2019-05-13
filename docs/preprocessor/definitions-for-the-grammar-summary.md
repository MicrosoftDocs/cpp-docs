---
title: "Definitions for the Grammar Summary"
ms.date: "11/04/2016"
helpviewer_keywords: ["preprocessor, definitions", "preprocessor"]
ms.assetid: cc752dc8-6f4e-4347-a556-e0d9ef4c46bd
---
# Definitions for the Grammar Summary

Terminals are endpoints in a syntax definition. No other resolution is possible. Terminals include the set of reserved words and user-defined identifiers.

Nonterminals are placeholders in the syntax. Most are defined elsewhere in this syntax summary. Definitions can be recursive. The following nonterminals are defined in the [Lexical Conventions](../cpp/lexical-conventions.md) section of the *C++ Language Reference*:

`constant`, *constant-expression*, *identifier*, *keyword*, `operator`, `punctuator`

An optional component is indicated by the subscripted <sub>opt</sub>. For example, the following indicates an optional expression enclosed in curly braces:

**{** *expression*<sub>opt</sub> **}**

## See also

[Grammar Summary (C/C++)](../preprocessor/grammar-summary-c-cpp.md)