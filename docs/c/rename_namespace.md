---
title: "rename_namespace"
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
  - "rename_namespace"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "rename_namespace attribute"
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
caps.latest.revision: 4
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
# rename_namespace
**C++ Specific**  
  
 Renames the namespace that contains the contents of the type library.  
  
## Syntax  
  
```  
rename_namespace("NewName")  
```  
  
#### Parameters  
 `NewName`  
 The new name of the namespace.  
  
## Remarks  
 It takes a single argument, *NewName*, which specifies the new name for the namespace.  
  
 To remove the namespace, use the [no_namespace](../c/no_namespace.md) attribute instead.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../c/sharpimport-attributes--c---.md)   
 [#import Directive](../c/sharpimport-directive--c---.md)