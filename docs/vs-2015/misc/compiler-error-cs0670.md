---
title: "Compiler Error CS0670 | Microsoft Docs"
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
  - "CS0670"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0670"
ms.assetid: 59379171-284f-4d55-8741-af6a97879abc
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0670
Field cannot have void type  
  
 A field was declared to be of type [void](http://msdn.microsoft.com/library/0d2d8a95-fe20-4fbd-bf5d-c1e54bce71d4).  
  
 The following sample generates CS0670:  
  
```  
// CS0670.cs  
class C  
{  
   void f;   // CS0670  
   // try the following line instead  
   // public int f;  
  
   public static void Main()  
   {  
      C myc = new C();  
      myc.f = 0;  
   }  
}  
```