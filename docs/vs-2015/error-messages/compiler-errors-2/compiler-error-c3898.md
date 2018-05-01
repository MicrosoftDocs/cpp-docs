---
title: "Compiler Error C3898 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3898"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3898"
ms.assetid: d9a90df6-87e4-4fe7-ab01-c226ee86bf10
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3898
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3898](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3898).  
  
  
var' : type data members can only be members of managed types  
  
 An [initonly](../../dotnet/initonly-cpp-cli.md) data member was declared in a native class.  An `initonly` data member can only be declared in a CLR class.  
  
 The following sample generates C3898:  
  
```  
// C3898.cpp  
// compile with: /clr  
struct Y1 {  
   initonly  
   static int data_var = 9;   // C3898  
};  
```  
  
 Possible resolution:  
  
```  
// C3898b.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   initonly  
   static int data_var = 9;  
};  
```

