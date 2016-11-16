---
title: "Initializing Strings | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "character arrays, initializing"
  - "strings [C++], initializing"
  - "initializing arrays, strings"
ms.assetid: 0ab8079d-d0d3-48f9-afd1-36a7bb439b29
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
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
# Initializing Strings
You can initialize an array of characters (or wide characters) with a string literal (or wide string literal). For example:  
  
```  
char code[ ] = "abc";  
```  
  
 initializes `code` as a four-element array of characters. The fourth element is the null character, which terminates all string literals.  
  
 An identifier list can only be as long as the number of identifiers to be initialized. If you specify an array size that is shorter than the string, the extra characters are ignored. For example, the following declaration initializes `code` as a three-element character array:  
  
```  
char code[3] = "abcd";  
```  
  
 Only the first three characters of the initializer are assigned to `code`. The character `d` and the string-terminating null character are discarded. Note that this creates an unterminated string (that is, one without a 0 value to mark its end) and generates a diagnostic message indicating this condition.  
  
 The declaration  
  
```  
char s[] = "abc", t[3] = "abc";  
```  
  
 is identical to  
  
```  
char s[]  = {'a', 'b', 'c', '\0'},   
     t[3] = {'a', 'b', 'c' };  
```  
  
 If the string is shorter than the specified array size, the remaining elements of the array are initialized to 0.  
  
 **Microsoft Specific**  
  
 In Microsoft C, string literals can be up to 2048 bytes in length.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Initialization](../c-language/initialization.md)