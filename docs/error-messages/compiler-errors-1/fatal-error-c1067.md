---
title: "Fatal Error C1067 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1067"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1067"
ms.assetid: e2c94be6-4573-4571-aac9-73d657fe9f96
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
# Fatal Error C1067
compiler limit : 64K limit on size of a type record has been exceeded  
  
 This error could occur if a symbol has a decorated name exceeding 247 characters.  To resolve, shorten the symbol name.  
  
 When the compiler generates debug information, it emits type records to define types encountered in source code.  For example, type records include simple structures and argument lists of functions.  Some of these type records can be large lists.  
  
 There is a 64K limit on the size of any type record.  If that 64K limit is exceeded then this error will occur.  
  
 C1067 can also occur if there are many symbols with long names or if a class, struct, or union has too many members.