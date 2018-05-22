---
title: "Compiler Error C3195 | Microsoft Docs"
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
  - "C3195"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3195"
ms.assetid: 97e4f681-812b-49e8-ba57-24b7817e3cd8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3195
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3195](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3195).  
  
  
operator' : is reserved and cannot be used as a member of a ref class or value type. CLR or WinRToperators must be defined using the 'operator' keyword  
  
 The compiler detected an operator definition using the Managed Extensions for C++ syntax.  
  
 Either use the new C++ syntax or use the **/clr:oldSyntax** compiler option to enable the Managed Extensions for C++ syntax.  
  
 The following sample generates C3195 and shows how to fix it:  
  
```  
// C3195.cpp  
// compile with: /clr /LD  
#using <mscorlib.dll>  
value struct V {  
   static V op_Addition(V v, int i);   // C3195  
   static V operator +(V v, char c);   // OK for new C++ syntax   
};  
```

