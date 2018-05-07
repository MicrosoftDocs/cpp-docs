---
title: "include() | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["include()"]
dev_langs: ["C++"]
helpviewer_keywords: ["include() attribute"]
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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