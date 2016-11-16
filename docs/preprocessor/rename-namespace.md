---
title: "rename_namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
author: "corob-msft"
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
  
 To remove the namespace, use the [no_namespace](../preprocessor/no-namespace.md) attribute instead.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)