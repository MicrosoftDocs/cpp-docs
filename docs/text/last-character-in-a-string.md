---
title: "Last Character in a String | Microsoft Docs"
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
  - "last character in string"
  - "MBCS [C++], last character in string"
ms.assetid: 0a180376-4e55-41e8-9c64-539c7b6d8047
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
# Last Character in a String
Use the following tips:  
  
-   Trail byte ranges overlap the ASCII character set in many cases. You can safely use bytewise scans for any control characters (less than 32).  
  
-   Consider the following line of code, which might be checking to see if the last character in a string is a backslash character:  
  
    ```  
    if ( sz[ strlen( sz ) - 1 ] == '\\' )    // Is last character a '\'?  
        // . . .  
    ```  
  
     Because `strlen` is not MBCS-aware, it returns the number of bytes, not the number of characters, in a multibyte string. Also, note that in some code pages (932, for example), '\\' (0x5c) is a valid trail byte (`sz` is a C string).  
  
     One possible solution is to rewrite the code this way:  
  
    ```  
    char *pLast;  
    pLast = _mbsrchr( sz, '\\' );    // find last occurrence of '\' in sz  
    if ( pLast && ( *_mbsinc( pLast ) == '\0' ) )  
        // . . .  
    ```  
  
     This code uses the MBCS functions `_mbsrchr` and `_mbsinc`. Because these functions are MBCS-aware, they can distinguish between a '\\' character and a trail byte '\\'. The code performs some action if the last character in the string is a null ('\0').  
  
## See Also  
 [MBCS Programming Tips](../text/mbcs-programming-tips.md)   
 [Character Assignment](../text/character-assignment.md)