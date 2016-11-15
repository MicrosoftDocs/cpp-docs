---
title: "Linkage in Names with File Scope | Microsoft Docs"
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
  - "scope [C++], linkage rules"
  - "linkage [C++], scope linkage rules"
  - "names [C++], scope linkage rules"
  - "static modifier, file scope"
  - "static names and file scope"
  - "file scope [C++]"
  - "declarations [C++], external"
  - "external linkage, scope linkage rules"
  - "static variables, external declarations"
ms.assetid: 38d3fa5e-1861-466e-a590-84b86f7b184e
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
# Linkage in Names with File Scope
The following linkage rules apply to names (other than `typedef` and enumerator names) with file scope:  
  
-   If a name is explicitly declared as **static**, it has internal linkage and identifies a program element inside its own translation unit.  
  
-   Enumerator names and `typedef` names have no linkage.  
  
-   All other names with file scope have external linkage.  
  
 **Microsoft Specific**  
  
-   If a function name with file scope is explicitly declared as **inline**, it has external linkage if it is instantiated or its address is referenced. Therefore, it is possible for a function with file scope to have either internal or external linkage.  
  
 **END Microsoft Specific**  
  
 A class has internal linkage if it:  
  
-   Uses no C++ functionality (for example, member-access control, member functions, constructors, destructors, and so on).  
  
-   Is not used in the declaration of another name that has external linkage. This constraint means that objects of class type that are passed to functions with external linkage cause the class to have external linkage.  
  
## See Also  
 [Program and Linkage](../cpp/program-and-linkage-cpp.md)