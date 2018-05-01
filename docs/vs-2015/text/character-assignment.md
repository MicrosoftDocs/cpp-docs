---
title: "Character Assignment | Microsoft Docs"
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
helpviewer_keywords: 
  - "characters [C++], assignments"
  - "MBCS [C++], character assignments"
ms.assetid: dcc329cd-92df-4e20-817d-364be62ff28f
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Character Assignment
[!INCLUDE[blank_token](../includes/blank-token.md)]

Consider the following example, in which the `while` loop scans a string, copying all characters except 'X' into another string:  
  
```  
while( *sz2 )  
{  
    if( *sz2 != 'X' )  
        *sz1++ = *sz2++;  
    else  
        sz2++;  
}  
```  
  
 The code copies the byte at `sz2` to the location pointed to by `sz1`, then increments `sz1` to receive the next byte. But if the next character in `sz2` is a double-byte character, the assignment to `sz1` copies only the first byte. The following code uses a portable function to copy the character safely and another to increment `sz1` and `sz2` correctly:  
  
```  
while( *sz2 )  
{  
    if( *sz2 != 'X' )  
    {  
        _mbscpy_s( sz1, 1, sz2 );  
        sz1 = _mbsinc( sz1 );  
        sz2 = _mbsinc( sz2 );  
    }  
    else  
        sz2 = _mbsinc( sz2 );  
}  
```  
  
## See Also  
 [MBCS Programming Tips](../text/mbcs-programming-tips.md)   
 [Character Comparison](../text/character-comparison.md)