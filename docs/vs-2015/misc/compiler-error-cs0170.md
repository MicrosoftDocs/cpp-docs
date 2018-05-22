---
title: "Compiler Error CS0170 | Microsoft Docs"
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
  - "CS0170"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0170"
ms.assetid: ba881e38-2abf-4a5f-b9e6-28d26a5bd235
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0170
Use of possibly unassigned field 'field'  
  
 A field in a structure was used without first being initialized. To solve this problem, first determine which field was uninitialized and then initialize it before you try to access it. For more information about initializing structs, see [Structs](http://msdn.microsoft.com/library/b7cf4ff2-0eb7-4e5c-93d5-b2196b4f5d89) and [Using Structs](http://msdn.microsoft.com/library/cea4a459-9eb9-442b-8d08-490e0797ba38).  
  
 The following sample generates CS0170:  
  
```  
// CS0170.cs  
public struct error  
{  
   public int i;  
}  
  
public class MyClass  
{  
   public static void Main()  
   {  
      error e;  
      // uncomment the next line to resolve this error  
      // e.i = 0;  
      System.Console.WriteLine( e.i );   // CS0170 because   
                                         //e.i was never assigned  
   }  
}  
```