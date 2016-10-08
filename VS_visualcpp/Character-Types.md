---
title: "Character Types"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
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
# Character Types
An integer character constant not preceded by the letter **L** has type `int`. The value of an integer character constant containing a single character is the numerical value of the character interpreted as an integer. For example, the numerical value of the character `a` is 97 in decimal and 61 in hexadecimal.  
  
 Syntactically, a "wide-character constant" is a character constant prefixed by the letter **L**. A wide-character constant has type `wchar_t`, an integer type defined in the STDDEF.H header file. For example:  
  
```  
char    schar =  'x';   /* A character constant          */  
wchar_t wchar = L'x';   /* A wide-character constant for   
                            the same character           */  
```  
  
 Wide-character constants are 16 bits wide and specify members of the extended execution character set. They allow you to express characters in alphabets that are too large to be represented by type `char`. See [Multibyte and Wide Characters](../VS_visualcpp/Multibyte-and-Wide-Characters.md) for more information about wide characters.  
  
## See Also  
 [C Character Constants](../VS_visualcpp/C-Character-Constants.md)