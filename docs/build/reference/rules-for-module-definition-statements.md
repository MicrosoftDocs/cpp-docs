---
title: "Rules for Module-Definition Statements | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".def"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "module definition files, statement syntax"
  - "module definition files"
ms.assetid: f65cd3a7-65d7-4d06-939f-a8b1ecd50f2d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
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
# Rules for Module-Definition Statements
The following syntax rules apply to all statements in a .def file. Other rules that apply to specific statements are described with each statement.  
  
-   Statements, attribute keywords, and user-specified identifiers are case sensitive.  
  
-   Long file names containing spaces or semicolons (;) must be enclosed in quotation marks (").  
  
-   Use one or more spaces, tabs, or newline characters to separate a statement keyword from its arguments and to separate statements from each other. A colon (:) or equal sign (=) that designates an argument is surrounded by zero or more spaces, tabs, or newline characters.  
  
-   A **NAME** or **LIBRARY** statement, if used, must precede all other statements.  
  
-   The **SECTIONS** and **EXPORTS** statements can appear more than once in the .def file. Each statement can take multiple specifications, which must be separated by one or more spaces, tabs, or newline characters. The statement keyword must appear once before the first specification and can be repeated before each additional specification.  
  
-   Many statements have an equivalent LINK command-line option. See the description of the corresponding LINK option for additional details.  
  
-   Comments in the .def file are designated by a semicolon (;) at the beginning of each comment line. A comment cannot share a line with a statement, but it can appear between specifications in a multiline statement. (**SECTIONS** and **EXPORTS** are multiline statements.)  
  
-   Numeric arguments are specified in base 10 or hexadecimal.  
  
-   If a string argument matches a [reserved word](../../build/reference/reserved-words.md), it must be enclosed in double quotation marks (").  
  
## See Also  
 [Module-Definition (.Def) Files](../../build/reference/module-definition-dot-def-files.md)   
 [Frequently Asked Questions on Building](http://msdn.microsoft.com/en-us/56a3bb8f-0181-4989-bab4-a07ba950ab08)