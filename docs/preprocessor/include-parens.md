---
title: "include() | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "include()"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "include() attribute"
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
caps.latest.revision: 5
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
# include()
**C++ Specific**  
  
 Disables automatic exclusion.  
  
## Syntax  
  
```  
include("Name1"[,"Name2", ...])  
```  
  
#### Parameters  
 `Name1`  
 First item to be forcibly included.  
  
 `Name2`  
 Second item to be forcibly included (if necessary).  
  
## Remarks  
 Type libraries may include definitions of items defined in system headers or other type libraries. `#import` attempts to avoid multiple definition errors by automatically excluding such items. If items have been excluded, as indicated by [Compiler Warning (level 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md), and they should not have been, this attribute can be used to disable the automatic exclusion. This attribute can take any number of arguments, each being the name of the type-library item to be included.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)