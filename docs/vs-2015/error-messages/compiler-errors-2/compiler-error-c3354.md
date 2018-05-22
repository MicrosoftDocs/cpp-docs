---
title: "Compiler Error C3354 | Microsoft Docs"
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
  - "C3354"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3354"
ms.assetid: 185de401-231e-4999-a149-172ee4c69d84
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3354
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3354](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3354).  
  
  
function' : the function used to create a delegate cannot have return type 'type'  
  
 The following types are invalid as return types for a [delegate](../../misc/delegate.md):  
  
-   Pointer to function  
  
-   Pointer to member  
  
-   Pointer to member function  
  
-   Reference to function  
  
-   Reference to member function  
  
 The following sample generates C3354:  
  
```  
// C3354_2.cpp  
// compile with: /clr /c  
using namespace System;  
typedef void ( *VoidPfn )();  
  
delegate VoidPfn func(); // C3354  
// try the following line instead  
// delegate  void func();  
```  
  
 The following sample generates C3354:  
  
```  
// C3354.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
using namespace System;  
  
typedef void (*VoidPfn)();  
  
__delegate VoidPfn func();   // C3354  
// try the following line instead  
// __delegate void func();  
```

