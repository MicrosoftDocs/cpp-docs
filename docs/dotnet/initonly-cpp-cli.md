---
title: "initonly (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
f1_keywords: ["initonly_cpp", "initonly"]
dev_langs: ["C++"]
helpviewer_keywords: ["initonly attribute [C++]"]
ms.assetid: f745d7fa-dc08-46f1-9b97-0977be58a008
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# initonly (C++/CLI)
**initonly** is a context-sensitive keyword that indicates that variable assignment can occur only as part of the declaration or in a static constructor in the same class.  
  
 The following example shows how to use `initionly`:  
  
```  
// mcpp_initonly.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   initonly  
   static int staticConst1;  
  
   initonly  
   static int staticConst2 = 0;  
  
   static Y1() {  
      staticConst1 = 0;  
   }  
};  
```  
  
## See Also  
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)