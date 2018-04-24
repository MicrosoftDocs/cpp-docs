---
title: "Compiler Error CS0522 | Microsoft Docs"
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
  - "CS0522"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0522"
ms.assetid: f749f21e-92ee-495c-9b53-179ce9342d05
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0522
'constructor' : structs cannot call base class constructors  
  
 A [struct](http://msdn.microsoft.com/library/ff3dd9b7-dc93-4720-8855-ef5558f65c7c) cannot call a base class constructor; remove the call to the base class constructor.  
  
 The following sample generates CS0522:  
  
```  
// CS0522.cs  
public class clx  
{  
   public clx(int i)  
   {  
   }  
  
   public static void Main()  
   {  
   }  
}  
  
public struct cly  
{  
   public cly(int i):base(0)   // CS0522  
   // try the following line instead  
   // public cly(int i)  
   {  
   }  
}  
```