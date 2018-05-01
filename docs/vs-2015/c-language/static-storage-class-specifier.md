---
title: "static Storage-Class Specifier | Microsoft Docs"
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
  - "static variables, specifier"
  - "storage classes, static"
  - "static storage class specifiers"
ms.assetid: 9bce361e-919b-46b9-8148-40d7ab0eb024
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# static Storage-Class Specifier
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [static Storage-Class Specifier](https://docs.microsoft.com/cpp/c-language/static-storage-class-specifier).  
  
A variable declared at the internal level with the **static** storage-class specifier has a global lifetime but is visible only within the block in which it is declared. For constant strings, using **static** is useful because it alleviates the overhead of frequent initialization in often-called functions.  
  
## Remarks  
 If you do not explicitly initialize a **static** variable, it is initialized to 0 by default. Inside a function, **static** causes storage to be allocated and serves as a definition. Internal static variables provide private, permanent storage visible to only a single function.  
  
## See Also  
 [Static](../misc/static-cpp.md)





