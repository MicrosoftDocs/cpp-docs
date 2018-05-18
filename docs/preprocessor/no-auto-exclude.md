---
title: "no_auto_exclude | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["no_auto_exclude"]
dev_langs: ["C++"]
helpviewer_keywords: ["no_auto_exclude attribute"]
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# no_auto_exclude
**C++ Specific**  
  
 Disables automatic exclusion.  
  
## Syntax  
  
```  
no_auto_exclude  
```  
  
## Remarks  
 Type libraries may include definitions of items defined in system headers or other type libraries. `#import` attempts to avoid multiple definition errors by automatically excluding such items. When this is done, [Compiler Warning (level 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) will be issued for each item to be excluded. You can disable this automatic exclusion by using this attribute.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)