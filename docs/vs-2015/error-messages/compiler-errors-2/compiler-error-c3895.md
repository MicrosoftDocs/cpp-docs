---
title: "Compiler Error C3895 | Microsoft Docs"
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
  - "C3895"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3895"
ms.assetid: 771b9fe5-d6d4-4297-bf57-e2f857722155
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3895
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3895](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3895).  
  
  
var' : type data members cannot be 'volatile'  
  
 Certain kinds of data members, for example [literal](../../windows/literal-cpp-component-extensions.md) or [initonly](../../dotnet/initonly-cpp-cli.md), cannot be [volatile](../../cpp/volatile-cpp.md).  
  
 The following sample generates C3895:  
  
```  
// C3895.cpp  
// compile with: /clr  
ref struct Y1 {  
   initonly  
   volatile int data_var2;   // C3895  
};  
```

