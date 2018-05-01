---
title: "Compiler Warning (level 1) C4806 | Microsoft Docs"
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
  - "C4806"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4806"
ms.assetid: 79eb74cd-b925-4b5b-84e1-8ae6f33e38b3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4806
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4806](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4806).  
  
  
operation' : unsafe operation: no value of type 'type' promoted to type 'type' can equal the given constant  
  
 This message warns against code such as `b == 3`, where `b` has type `bool`. The promotion rules cause `bool` to be promoted to `int`. This is legal, but it can never be **true**. The following sample generates C4806:  
  
```  
// C4806.cpp  
// compile with: /W1  
int main()  
{  
   bool b = true;  
   // try..  
   // int b = true;  
  
   if (b == 3)   // C4806  
   {  
      b = false;  
   }  
}  
```

