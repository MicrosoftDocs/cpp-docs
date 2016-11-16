---
title: "Byte Indices | Microsoft Docs"
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
helpviewer_keywords: 
  - "MBCS [C++], byte indices"
  - "byte indices [C++]"
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
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
# Byte Indices
Use the following tips:  
  
-   Working with a bytewise index into a string presents problems similar to those posed by pointer manipulation. Consider this example, which scans a string for a backslash character:  
  
    ```  
    while ( rgch[ i ] != '\\' )  
        i++;  
    ```  
  
     This might index a trail byte, not a lead byte, and thus it might not point to a `character`.  
  
-   Use the [_mbclen](../c-runtime-library/reference/mbclen-mblen-mblen-l.md) function to solve the preceding problem:  
  
    ```  
    while ( rgch[ i ] != '\\' )  
        i += _mbclen ( rgch + i );  
    ```  
  
     This correctly indexes to a lead byte, hence to a `character`. The `_mbclen` function determines the size of a character (1 or 2 bytes).  
  
## See Also  
 [MBCS Programming Tips](../text/mbcs-programming-tips.md)   
 [Last Character in a String](../text/last-character-in-a-string.md)