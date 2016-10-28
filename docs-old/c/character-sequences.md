---
title: "Character Sequences"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
caps.latest.revision: 7
ms.author: "mithom"
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
# Character Sequences
**ANSI 3.8.2** The mapping of source file character sequences  
  
 Preprocessor statements use the same character set as source file statements with the exception that escape sequences are not supported.  
  
 Thus, to specify a path for an include file, use only one backslash:  
  
```  
#include "path1\path2\myfile"  
```  
  
 Within source code, two backslashes are necessary:  
  
```  
fil = fopen( "path1\\path2\\myfile", "rt" );  
```  
  
## See Also  
 [Preprocessing Directives](../c/preprocessing-directives.md)