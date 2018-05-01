---
title: "Compiler Warning (level 1) C4674 | Microsoft Docs"
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
  - "C4674"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4674"
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4674
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4674](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4674).  
  
  
method' should be declared 'static' and have exactly one parameter  
  
 The signature of a conversion operator was not correct. The method is not considered a user-defined conversion.  
  
 When using the new syntax (**/clr**), see [User-Defined Operators (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md) and [User-Defined Conversions (C++/CLI)](../../dotnet/user-defined-conversions-cpp-cli.md) for information on defining operators.  
  
## Example  
 The following sample generates C4674.  
  
```  
// C4674.cpp  
// compile with: /clr /WX /W1 /LD  
ref class G {  
   int op_Implicit(int i) {   // C4674  
      return 0;  
   }  
};  
```  
  
## Example  
 The following sample generates C4674.  
  
```  
// C4674_b.cpp  
// compile with: /clr:oldSyntax /W1 /LD  
__gc class G {  
   int op_Implicit(int i) {   // C4674  
   // try the following line instead  
   // static int op_Implicit(int i) {  
      return 0;  
   }  
};  
```

