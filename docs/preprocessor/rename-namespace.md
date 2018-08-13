---
title: "rename_namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["rename_namespace"]
dev_langs: ["C++"]
helpviewer_keywords: ["rename_namespace attribute"]
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# rename_namespace
**C++ Specific**  
  
Renames the namespace that contains the contents of the type library.  
  
## Syntax  
  
```  
rename_namespace("NewName")  
```  
  
### Parameters  
*NewName*  
The new name of the namespace.  
  
## Remarks  
 
It takes a single argument, *NewName*, which specifies the new name for the namespace.  
  
To remove the namespace, use the [no_namespace](../preprocessor/no-namespace.md) attribute instead.  
  
**END C++ Specific**  
  
## See Also  
 
[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
[#import Directive](../preprocessor/hash-import-directive-cpp.md)