---
title: "Compiler Error CS0123 | Microsoft Docs"
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
  - "CS0123"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0123"
ms.assetid: 57be2c58-6d87-40af-9376-cd7f91023044
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0123
No overload for 'method' matches delegate 'delegate'  
  
 An attempt to create a delegate failed because the correct signature was not used. Instances of a delegate must be declared with the same signature as the delegate declaration.  
  
 You can resolve this error by adjusting either the method or delegate signature. For more information, see [Delegates](http://msdn.microsoft.com/library/97de039b-c76b-4b9c-a27d-8c1e1c8d93da).  
  
 The following sample generates CS0123.  
  
```  
// CS0123.cs  
delegate void D();  
delegate void D2(int i);  
  
public class C  
{  
   public static void f(int i) {}  
  
   public static void Main()  
   {  
      D d = new D(f);   // CS0123  
      D2 d2 = new D2(f);   // OK  
   }  
}  
```