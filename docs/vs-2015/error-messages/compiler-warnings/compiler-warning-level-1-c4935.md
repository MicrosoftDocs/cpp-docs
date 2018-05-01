---
title: "Compiler Warning (level 1) C4935 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4935"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4935"
ms.assetid: a36c56d3-571a-44dd-bb0f-bcc6b020e134
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4935
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4935](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4935).  
  
  
assembly access specifier modified from 'access'  
  
 The assembly visibility of a type was modified. The compiler uses the last specifier that it encounters. For example, the assembly visibility of a forward declaration may be different from the assembly visibility of the class definition.  
  
 C4935 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C4935:  
  
```  
// C4935.cpp  
// compile with: /clr:oldSyntax /W1 /c  
public __gc public class X {   // C4935  
   int i;  
};  
```

