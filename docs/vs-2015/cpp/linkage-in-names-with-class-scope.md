---
title: "Linkage in Names with Class Scope | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scope [C++], linkage rules"
  - "linkage [C++], scope linkage rules"
  - "names [C++], scope linkage rules"
  - "classes [C++], scope"
  - "external linkage, scope linkage rules"
  - "class names [C++], linkage"
  - "classes [C++], names"
  - "scope [C++], class names"
  - "class scope [C++], linkage in names with"
ms.assetid: 45275ff3-6e94-4967-82c8-ba540ef4da28
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Linkage in Names with Class Scope
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Linkage in Names with Class Scope](https://docs.microsoft.com/cpp/cpp/linkage-in-names-with-class-scope).  
  
The following linkage rules apply to names with class scope:  
  
-   Static class members have external linkage.  
  
-   Class member functions have external linkage.  
  
-   Enumerators and `typedef` names have no linkage.  
  
 **Microsoft Specific**  
  
-   Functions declared as `friend` functions must have external linkage. Declaring a static function as a `friend` generates an error.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Program and Linkage](../cpp/program-and-linkage-cpp.md)





