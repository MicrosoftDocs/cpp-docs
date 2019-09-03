---
title: "Document conventions"
ms.date: "08/29/2019"
helpviewer_keywords: ["preprocessor", "preprocessor, conventions"]
ms.assetid: 469ce448-dc6c-4d0e-ba2b-e2e7a10155e1
---
# Document conventions

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

## See also

[Grammar summary (C/C++)](../preprocessor/grammar-summary-c-cpp.md)
