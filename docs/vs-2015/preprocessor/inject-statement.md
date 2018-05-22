---
title: "inject_statement | Microsoft Docs"
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
  - "inject_statement"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "inject_statement attribute"
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# inject_statement
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [inject_statement](https://docs.microsoft.com/cpp/preprocessor/inject-statement).  
  
**C++ Specific**  
  
 Inserts its argument as source text into the type-library header.  
  
## Syntax  
  
```  
inject_statement("source_text")  
```  
  
#### Parameters  
 `source_text`  
 Source text to be inserted into the type library header file.  
  
## Remarks  
 The text is placed at the beginning of the namespace declaration that wraps the type-library contents in the header file.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)



