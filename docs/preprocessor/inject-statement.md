---
title: "inject_statement | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["inject_statement"]
dev_langs: ["C++"]
helpviewer_keywords: ["inject_statement attribute"]
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# inject_statement
**C++ Specific**  
  
Inserts its argument as source text into the type-library header.  
  
## Syntax  
  
```  
inject_statement("source_text")  
```  
  
### Parameters  
*source_text*  
Source text to be inserted into the type library header file.  
  
## Remarks  
 
The text is placed at the beginning of the namespace declaration that wraps the type-library contents in the header file.  
  
**END C++ Specific**  
  
## See Also  
 
[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
[#import Directive](../preprocessor/hash-import-directive-cpp.md)