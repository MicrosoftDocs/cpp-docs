---
title: "auto_rename | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["auto_rename"]
dev_langs: ["C++"]
helpviewer_keywords: ["auto_rename attribute"]
ms.assetid: 1075f3ab-f6fc-4e04-8e22-ebe02695a567
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# auto_rename
**C++ Specific**  
  
 Renames C++ reserved words by appending two underscores (__) to the variable name to resolve potential name conflicts.  
  
## Syntax  
  
```  
auto_rename  
```  
  
## Remarks  
 This attribute is used when importing a type library that uses one or more C++ reserved words (keywords or macros) as variable names.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)