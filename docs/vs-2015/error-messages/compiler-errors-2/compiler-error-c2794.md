---
title: "Compiler Error C2794 | Microsoft Docs"
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
  - "C2794"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2794"
ms.assetid: d508191c-9044-4c6a-9119-4bca668c0b93
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2794
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2794](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2794).  
  
  
function' : is not a member of any direct or indirect base class of 'class'  
  
 You tried to use [super](../../cpp/super.md) to call a nonexistent member function.  
  
 The following sample generates C2794  
  
```  
// C2794.cpp  
struct B {  
   void mf();  
};  
  
struct D : B {  
   void mf() {  
      __super::f();  // C2794  
   }  
};  
```

