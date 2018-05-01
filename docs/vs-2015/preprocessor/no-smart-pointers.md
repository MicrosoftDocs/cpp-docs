---
title: "no_smart_pointers | Microsoft Docs"
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
  - "no_search_pointers"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_smart_pointers attribute"
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# no_smart_pointers
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [no_smart_pointers](https://docs.microsoft.com/cpp/preprocessor/no-smart-pointers).  
  
**C++ Specific**  
  
 Suppresses the creation of smart pointers for all interfaces in the type library.  
  
## Syntax  
  
```  
no_smart_pointers  
```  
  
## Remarks  
 By default, when you use `#import`, you get a smart pointer declaration for all interfaces in the type library. These smart pointers are of type [_com_ptr_t Class](../cpp/com-ptr-t-class.md).  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)



