---
title: "Compiler Error C2802 | Microsoft Docs"
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
  - "C2802"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2802"
ms.assetid: 08b68c0e-9382-40ac-8949-39a7a2749e05
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2802
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2802](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2802).  
  
  
static member 'operator operator' has no formal parameters  
  
 An operator declared by a `static` member function must have at least one parameter.  
  
 The following sample generates C2802:  
  
```  
// C2802.cpp  
// compile with: /clr /c  
ref class A {  
   static operator+ ();   // C2802  
   static operator+ (A^, A^);   // OK  
};  
```

