---
title: "Compiler Error C3619 | Microsoft Docs"
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
  - "C3619"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3619"
ms.assetid: 76ae80d0-9fbe-4297-a1ef-b1503377fdcf
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3619
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3619](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3619).  
  
  
a template cannot be declared within a managed or WinRT type  
  
 Class templates are not allowed in a managed or WinRT class or interface.  
  
 C3619 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3619:  
  
```  
// C3619.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class X {  
   template<typename T> class Y {   // C3619  
   };  
};  
```

