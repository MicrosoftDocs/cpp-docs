---
title: "NAME (C-C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "name"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NAME .def file statement"
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
caps.latest.revision: 7
ms.author: "corob"
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
# NAME (C/C++)
Specifies a name for the main output file.  
  
```  
NAME [application][BASE=address]  
```  
  
## Remarks  
 An equivalent way to specify an output file name is with the [/OUT](../buildref/-out--output-file-name-.md) linker option, and an equivalent way to set the base address is with the [/BASE](../buildref/-base--base-address-.md) linker option. If both are specified, /OUT overrides **NAME**.  
  
 If you build a DLL, NAME will only affect the DLL name.  
  
## See Also  
 [Rules for Module-Definition Statements](../buildref/rules-for-module-definition-statements.md)