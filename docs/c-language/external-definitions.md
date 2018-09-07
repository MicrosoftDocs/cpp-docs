---
title: "External Definitions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["external definitions", "external linkage, variable declarations"]
ms.assetid: 41e37bfc-b360-43b1-9972-28af2d365b20
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# External Definitions

*translation-unit*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*external-declaration* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*translation-unit* *external-declaration*  
  
*external-declaration*: /\* Allowed only at external (file) scope \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*function-definition*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration*

*function-definition*: /\* Declarator here is the function declarator \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

## See Also

[Phrase Structure Grammar](../c-language/phrase-structure-grammar.md)