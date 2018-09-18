---
title: "Summary of String Literals | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
ms.assetid: d2693900-f4e2-4820-b7de-085d51827aee
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Summary of String Literals

*string-literal*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**'** *s-char-sequence*<sub>opt</sub> **'**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**L'** *s-char-sequence*sub>opt</sub> **'**

*s-char-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*s-char*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*s-char-sequence* *s-char*

*s-char*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;any member of the source character set except the double-quotation mark ("), backslash (\\), or newline character escape-sequence

## See Also

[Lexical Grammar](../c-language/lexical-grammar.md)