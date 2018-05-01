---
title: "no_dual_interfaces | Microsoft Docs"
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
  - "no_dual_interfaces"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_dual_interfaces attribute"
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# no_dual_interfaces
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [no_dual_interfaces](https://docs.microsoft.com/cpp/preprocessor/no-dual-interfaces).  
  
**C++ Specific**  
  
 Changes the way the compiler generates wrapper functions for dual interface methods.  
  
## Syntax  
  
```  
no_dual_interfaces  
```  
  
## Remarks  
 Normally, the wrapper will call the method through the virtual function table for the interface. With `no_dual_interfaces`, the wrapper instead calls **IDispatch::Invoke** to invoke the method.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)



