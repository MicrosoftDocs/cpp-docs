---
title: "Compiler Error C2458 | Microsoft Docs"
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
  - "C2458"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2458"
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2458
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2458](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2458).  
  
  
identifier' : redefinition within definition  
  
 A class, structure, union, or enumeration is redefined in its own declaration.  
  
 The following sample generates C2458:  
  
```  
// C2458.cpp  
class C {  
   enum i { C };   // C2458  
};  
```

