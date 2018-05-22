---
title: "Compiler Warning C4693 | Microsoft Docs"
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
  - "C4693"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4693"
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning C4693
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning C4693](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-c4693).  
  
  
class': a sealed abstract class cannot have any instance members 'Test'  
  
 If a type is marked [sealed](../../windows/sealed-cpp-component-extensions.md) and [abstract](../../windows/abstract-cpp-component-extensions.md), it can only have static members.  
  
## Example  
 The following sample generates C4693.  
  
```  
// C4693.cpp  
// compile with: /clr /c  
public ref class Public_Ref_Class sealed abstract {  
public:  
   void Test() {}   // C4693  
   static void Test2() {}   // OK  
};  
```

