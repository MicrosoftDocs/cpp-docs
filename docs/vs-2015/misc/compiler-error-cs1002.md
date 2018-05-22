---
title: "Compiler Error CS1002 | Microsoft Docs"
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
  - "CS1002"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1002"
ms.assetid: 659b7abf-9311-40c9-9594-5372464c6148
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1002
; expected  
  
 The compiler detected a missing semicolon. A semicolon in required at the end of every statement in C#. A statement may span more than one line.  
  
 The following sample generates CS1002:  
  
```  
// CS1002.cs  
namespace x  
{  
   abstract public class clx  
   {  
      int i   // CS1002, missing semicolon  
  
      public static int Main()  
      {  
         return 0;  
      }  
   }  
}  
```  
  
## See Also  
 [Statements](http://msdn.microsoft.com/library/901bcde7-87de-4e15-833c-f9cfd40c8ce3)