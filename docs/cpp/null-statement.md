---
title: "Null Statement | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "expressions [C++], null"
  - "null statement"
  - "null values, expressions"
ms.assetid: 606f5953-55f0-40c8-ae03-3ee3a819b851
caps.latest.revision: 8
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
# Null Statement
The "null statement" is an expression statement with the *expression* missing. It is useful when the syntax of the language calls for a statement but no expression evaluation. It consists of a semicolon.  
  
 Null statements are commonly used as placeholders in iteration statements or as statements on which to place labels at the end of compound statements or functions.  
  
 The following code fragment shows how to copy one string to another and incorporates the null statement:  
  
```  
// null_statement.cpp  
char *myStrCpy( char *Dest, const char *Source )  
{  
    char *DestStart = Dest;  
  
    // Assign value pointed to by Source to  
    // Dest until the end-of-string 0 is  
    // encountered.  
    while( *Dest++ = *Source++ )  
        ;   // Null statement.  
  
    return DestStart;  
}  
  
int main()  
{  
}  
```  
  
## See Also  
 [Expression Statement](../cpp/expression-statement.md)