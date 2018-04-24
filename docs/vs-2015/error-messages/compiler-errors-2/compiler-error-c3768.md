---
title: "Compiler Error C3768 | Microsoft Docs"
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
  - "C3768"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3768"
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3768
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3768](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3768).  
  
  
cannot take the address of a virtual vararg function in pure managed code  
  
 When compiling with `/clr:pure`, you cannot take the address of a virtual `vararg` function.  
  
 The following sample generates C3768:  
  
```  
// C3768.cpp  
// compile with: /clr:pure  
struct A  
{  
   virtual void f(...);  
};  
  
int main()  
{  
   &(A::f);   // C3768  
}  
```

