---
title: "rename_namespace | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# rename_namespace
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [rename_namespace](https://docs.microsoft.com/cpp/preprocessor/rename-namespace).  
  
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



