---
title: "raw_dispinterfaces | Microsoft Docs"
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
  - "raw_dispinterfaces"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "raw_dispinterfaces attribute"
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# raw_dispinterfaces
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [raw_dispinterfaces](https://docs.microsoft.com/cpp/preprocessor/raw-dispinterfaces).  
  
**C++ Specific**  
  
 Tells the compiler to generate low-level wrapper functions for dispinterface methods and properties that call **IDispatch::Invoke** and return the `HRESULT` error code.  
  
## Syntax  
  
```  
raw_dispinterfaces  
```  
  
## Remarks  
 If this attribute is not specified, only high-level wrappers are generated, which throw C++ exceptions in case of failure.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)



