---
title: "Compiler Warning (level 1) CS0197 | Microsoft Docs"
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
  - "CS0197"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0197"
ms.assetid: 2b5b1b8d-ce13-4bd7-b80a-abb80e9f79ad
caps.latest.revision: 17
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS0197
Passing 'argument' as ref or out or taking its address may cause a runtime exception because it is a field of a marshal-by-reference class  
  
 Any class that derives, directly or indirectly, from <xref:System.MarshalByRefObject> is a marshal-by-reference class. Such a class can be marshaled by reference across process and machine boundaries. Thus, instances of this class could be proxies to remote objects. You cannot pass a field of a proxy object as [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8). So, you cannot pass fields of such a class as `ref` or `out`, unless the instance is [this](http://msdn.microsoft.com/library/d4f827fe-4710-410b-89b8-867dad44b8a3), which can not be a proxy object.  
  
## Example  
 The following sample generates CS0197.  
  
```  
// CS0197.cs  
// compile with: /W:1  
class X : System.MarshalByRefObject  
{  
   public int i;  
}  
  
class M  
{  
   public int i;  
   static void AddSeventeen(ref int i)  
   {  
      i += 17;  
   }  
  
   static void Main()  
   {  
      X x = new X();  
      x.i = 12;  
      AddSeventeen(ref x.i);   // CS0197  
  
      // OK  
      M m = new M();  
      m.i = 12;  
      AddSeventeen(ref m.i);  
   }  
}  
```