---
title: "SECTIONS (C-C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SECTIONS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SECTIONS .def file statement"
ms.assetid: 7b974366-9ef5-4e57-bbcc-73a1df6f8857
caps.latest.revision: 9
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
# SECTIONS (C/C++)
Introduces a section of one or more `definitions` that are access specifiers on sections in your project's output file.  
  
```  
SECTIONS  
definitions  
```  
  
## Remarks  
 Each definition must be on a separate line. The `SECTIONS` keyword can be on the same line as the first definition or on a preceding line. The .def file can contain one or more `SECTIONS` statements.  
  
 This `SECTIONS` statement sets attributes for one or more sections in the image file, and can be used to override the default attributes for each type of section.  
  
 The format for `definitions` is:  
  
 `.section_name specifier`  
  
 where `.section_name` is the name of a section in your program image and `specifier`is one or more of the following access modifiers:  
  
|Modifier|Description|  
|--------------|-----------------|  
|`EXECUTE`|The section is executable|  
|`READ`|Allows read operations on data|  
|`SHARED`|Shares the section among all processes that load the image|  
|`WRITE`|Allows write operations on data|  
  
 Separate specifier names with a space. For example:  
  
```  
SECTIONS  
.rdata READ WRITE  
```  
  
 `SECTIONS` marks the beginning of a list of section `definitions`. Each `definition` must be on a separate line. The `SECTIONS` keyword can be on the same line as the first `definition` or on a preceding line. The .def file can contain one or more `SECTIONS` statements. The `SEGMENTS` keyword is supported as a synonym for `SECTIONS`.  
  
 Older versions of Visual C++ supported:  
  
```  
section [CLASS 'classname'] specifier  
```  
  
 The `CLASS` keyword is supported for compatibility, but is ignored.  
  
 An equivalent way to specify section attributes is with the [/SECTION](../../build/reference/section-specify-section-attributes.md) option.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)