---
title: "Incrementing and Decrementing Pointers"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0872b4a0-e2bd-4004-8319-070efb76f2fd
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Incrementing and Decrementing Pointers
Use the following tips:  
  
-   Point to lead bytes, not trail bytes. It is usually unsafe to have a pointer to a trail byte. It is usually safer to scan a string forward rather than in reverse.  
  
-   There are pointer increment/decrement functions and macros available that move over a whole character:  
  
    ```  
    sz1++;  
    ```  
  
     becomes:  
  
    ```  
    sz1 = _mbsinc( sz1 );  
    ```  
  
     The `_mbsinc` and `_mbsdec` functions correctly increment and decrement in `character` units, regardless of the character size.  
  
-   For decrements, you need a pointer to the head of the string, as in the following:  
  
    ```  
    sz2--;  
    ```  
  
     becomes:  
  
    ```  
    sz2 = _mbsdec( sz2Head, sz2 );  
    ```  
  
     Alternatively, your head pointer could be to a valid character in the string, such that:  
  
    ```  
    sz2Head < sz2  
    ```  
  
     You must have a pointer to a known valid lead byte.  
  
-   You might want to maintain a pointer to the previous character for faster calls to `_mbsdec`.  
  
## See Also  
 [MBCS Programming Tips](../VS_visualcpp/MBCS-Programming-Tips.md)   
 [Byte Indices](../VS_visualcpp/Byte-Indices.md)