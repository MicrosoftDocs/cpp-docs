---
title: "Compiler Error C3150 | Microsoft Docs"
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
  - "C3150"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3150"
ms.assetid: c1ff28f5-52fe-4fd4-81d0-2e0ad8548631
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3150
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3150](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3150).  
  
  
element' : 'attribute' can only be applied to a class, interface, array or pointer  
  
 [__gc](../../misc/gc.md) can only be used on a class, interface, or array.  
  
 C3150 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3150:  
  
```  
// C3150.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc void f()   // C3150; function cannot be managed  
{  
}  
```

