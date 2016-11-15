---
title: "Resolving ambiguous declarations (C++) | Microsoft Docs"
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
ms.assetid: 3d773ee7-bbea-47de-80c2-cb0a9d4ec0b9
caps.latest.revision: 6
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
# Resolving ambiguous declarations (C++)
To perform explicit conversions from one type to another, you must use casts, specifying the desired type name. Some type casts result in syntactic ambiguity. The following function-style type cast is ambiguous:  
  
```  
char *aName( String( s ) );  
```  
  
 It is unclear whether it is a function declaration or an object declaration with a function-style cast as the initializer: It could declare a function returning type **char \*** that takes one argument of type `String`, or it could declare the object `aName` and initialize it with the value of `s` cast to type `String`.  
  
 If a declaration can be considered a valid function declaration, it is treated as such. Only if it cannot possibly be a function declaration — that is, if it would be syntactically incorrect — is a statement examined to see if it is a function-style type cast. Therefore, the compiler considers the statement to be a declaration of a function and ignores the parentheses around the identifier `s`. On the other hand, the statements:  
  
```  
char *aName( (String)s );  
```  
  
 and  
  
```  
char *aName = String( s );  
```  
  
 are clearly declarations of objects, and a user-defined conversion from type `String` to type **char \*** is invoked to perform the initialization of `aName`.  
  
## See Also  
 [C++ Abstract Declarators](http://msdn.microsoft.com/en-us/e7e18c18-0cad-4450-942b-d27e1d4dd088)