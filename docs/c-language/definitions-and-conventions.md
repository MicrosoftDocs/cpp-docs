---
title: "Definitions and Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "nonterminals definition"
ms.assetid: f9b3cf5f-6a7c-4a10-9b18-9d4a43efdaeb
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Definitions and Conventions
Terminals are endpoints in a syntax definition. No other resolution is possible. Terminals include the set of reserved words and user-defined identifiers.  
  
 Nonterminals are placeholders in the syntax and are defined elsewhere in this syntax summary. Definitions can be recursive.  
  
 An optional component is indicated by the subscripted opt. For example,  
  
```  
  
{  
expression <SUB>opt</SUB> }  
```  
  
 indicates an optional expression enclosed in braces.  
  
 The syntax conventions use different font attributes for different components of the syntax. The symbols and fonts are as follows:  
  
|Attribute|Description|  
|---------------|-----------------|  
|*nonterminal*|Italic type indicates nonterminals.|  
|**const**|Terminals in bold type are literal reserved words and symbols that must be entered as shown. Characters in this context are always case sensitive.|  
|opt|Nonterminals followed by opt are always optional.|  
|default typeface|Characters in the set described or listed in this typeface can be used as terminals in C statements.|  
  
 A colon (**:**) following a nonterminal introduces its definition. Alternative definitions are listed on separate lines, except when prefaced with the words "one of."  
  
## See Also  
 [C Language Syntax Summary](../c-language/c-language-syntax-summary.md)