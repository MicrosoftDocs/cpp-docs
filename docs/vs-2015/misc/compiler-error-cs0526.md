---
title: "Compiler Error CS0526 | Microsoft Docs"
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
  - "CS0526"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0526"
ms.assetid: befc46b4-28ea-40d3-89ac-132b92455772
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0526
Interfaces cannot contain constructors  
  
 Constructors cannot be defined for [interfaces](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba). A method is considered a constructor if it has the same name as the class and no return type.  
  
 The following sample generates CS0526:  
  
```  
// CS0526.cs  
namespace x  
{  
   public interface clx  
   {  
      public clx()   // CS0526  
      {  
      }  
   }  
  
   public class cly  
   {  
      public static void Main()  
      {  
      }  
   }  
}  
```