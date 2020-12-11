---
description: "Learn more about: Definitions and Conventions"
title: "Definitions and Conventions"
ms.date: "11/04/2016"
helpviewer_keywords: ["nonterminals definition"]
ms.assetid: f9b3cf5f-6a7c-4a10-9b18-9d4a43efdaeb
---
# Definitions and Conventions

Terminals are endpoints in a syntax definition. No other resolution is possible. Terminals include the set of reserved words and user-defined identifiers.

Nonterminals are placeholders in the syntax and are defined elsewhere in this syntax summary. Definitions can be recursive.

An optional component is indicated by the subscripted <sub>opt</sub>. For example,

> **{** *expression*<sub>opt</sub> **}**

indicates an optional expression enclosed in braces.

The syntax conventions use different font attributes for different components of the syntax. The symbols and fonts are as follows:

|Attribute|Description|
|---------------|-----------------|
|*nonterminal*|Italic type indicates nonterminals.|
|**`const`**|Terminals in bold type are literal reserved words and symbols that must be entered as shown. Characters in this context are always case sensitive.|
|<sub>opt</sub>|Nonterminals followed by <sub>opt</sub> are always optional.|
|default typeface|Characters in the set described or listed in this typeface can be used as terminals in C statements.|

A colon (**:**) following a nonterminal introduces its definition. Alternative definitions are listed on separate lines, except when prefaced with the words "one of."

## See also

[C Language Syntax Summary](../c-language/c-language-syntax-summary.md)
