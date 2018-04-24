---
title: "Character Types | Microsoft Docs"
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
helpviewer_keywords: 
  - "character data types [C]"
  - "types [C], character"
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Character Types
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Character Types](https://docs.microsoft.com/cpp/c-language/character-types).  
  
An integer character constant not preceded by the letter **L** has type `int`. The value of an integer character constant containing a single character is the numerical value of the character interpreted as an integer. For example, the numerical value of the character `a` is 97 in decimal and 61 in hexadecimal.  
  
 Syntactically, a "wide-character constant" is a character constant prefixed by the letter **L**. A wide-character constant has type `wchar_t`, an integer type defined in the STDDEF.H header file. For example:  
  
```  
char    schar =  'x';   /* A character constant          */  
wchar_t wchar = L'x';   /* A wide-character constant for   
                            the same character           */  
```  
  
 Wide-character constants are 16 bits wide and specify members of the extended execution character set. They allow you to express characters in alphabets that are too large to be represented by type `char`. See [Multibyte and Wide Characters](../c-language/multibyte-and-wide-characters.md) for more information about wide characters.  
  
## See Also  
 [C Character Constants](../c-language/c-character-constants.md)





