---
title: "Compiler Error C2898 | Microsoft Docs"
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
  - "C2898"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2898"
ms.assetid: 68466e11-2541-4f6b-b772-13a642f30dfb
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2898
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2898](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2898).  
  
  
declaration' : member function templates cannot be virtual  
  
 The following sample generates C2898:  
  
```  
// C2898.cpp  
// compile with: /c  
class X {  
public:  
   template<typename T> virtual void f(T t) {}   // C2898  
};  
```

