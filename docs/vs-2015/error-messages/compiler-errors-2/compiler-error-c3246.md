---
title: "Compiler Error C3246 | Microsoft Docs"
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
  - "C3246"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3246"
ms.assetid: ad85224a-e540-479b-a5eb-a3bc3964c30b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3246
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3246](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3246).  
  
  
class' : cannot inherit from 'type' as it has been declared as 'sealed'  
  
 A class that is marked as [sealed](../../misc/sealed.md) cannot be the base class for any other classes.  
  
 The following sample generates C3246:  
  
```  
// C3246_2.cpp  
// compile with: /clr /LD  
ref class X sealed {};  
  
ref class Y : public X {}; // C3246  
```  
  
 The following sample generates C3246:  
  
```  
// C3246.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
__sealed __gc class X {};  
  
__gc class Y : public X {}; // C3246  
```

