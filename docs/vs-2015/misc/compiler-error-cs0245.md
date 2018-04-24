---
title: "Compiler Error CS0245 | Microsoft Docs"
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
  - "CS0245"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0245"
ms.assetid: 3f2beb2f-a510-4568-9d11-bb1f65066acd
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0245
Destructors and object.Finalize cannot be called directly. Consider calling IDisposable.Dispose if available.  
  
 For more information, see [Programming Essentials for Garbage Collection](http://msdn.microsoft.com/library/22b6cb97-0c80-4eeb-a2cf-5ed7655e37f9) and [Destructors](http://msdn.microsoft.com/library/1ae6e46d-a4b1-4a49-abe5-b97f53d9e049).  
  
 The following sample generates CS0245:  
  
```  
// CS0245.cs  
using System;  
using System.Collections;  
  
class MyClass // : IDisposable  
{  
   /*  
   public void Dispose()  
   {  
      // cleanup code goes here  
   }  
   */  
  
   void m()  
   {  
      this.Finalize();   // CS0245  
      // this.Dispose();  
   }  
  
   public static void Main()  
   {  
   }  
}  
```