---
title: "auto_rename"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "auto_rename"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "auto_rename attribute"
ms.assetid: 1075f3ab-f6fc-4e04-8e22-ebe02695a567
caps.latest.revision: 5
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
# auto_rename
**C++ Specific**  
  
 Renames C++ reserved words by appending two underscores (__) to the variable name to resolve potential name conflicts.  
  
## Syntax  
  
```  
auto_rename  
```  
  
## Remarks  
 This attribute is used when importing a type library that uses one or more C++ reserved words (keywords or macros) as variable names.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../c/sharpimport-attributes--c---.md)   
 [#import Directive](../c/sharpimport-directive--c---.md)