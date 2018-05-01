---
title: "Character Sequences | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Character Sequences
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Character Sequences](https://docs.microsoft.com/cpp/c-language/character-sequences).  
  
ANSI 3.8.2** The mapping of source file character sequences  
  
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
 [Preprocessing Directives](../c-language/preprocessing-directives.md)





