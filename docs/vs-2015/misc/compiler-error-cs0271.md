---
title: "Compiler Error CS0271 | Microsoft Docs"
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
  - "CS0271"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0271"
ms.assetid: eadc9fb5-7770-4ec4-94f6-3c7cf37eec06
caps.latest.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0271
The property or indexer 'property/indexer' cannot be used in this context because the get accessor is inaccessible  
  
 This error occurs when you try to access an inaccessible `get` accessor. To resolve this error, increase the accessibility of the accessor, or change the calling location. For more information, see [Accessor Accessibility](http://msdn.microsoft.com/library/6e655798-e112-4301-a680-6310a6e012e1) and [Properties](http://msdn.microsoft.com/library/e295a8a2-b357-4ee7-a12e-385a44146fa8).  
  
 The following example generates CS0271:  
  
```  
// CS0271.cs  
public class MyClass  
{  
   public int Property  
   {  
      private get { return 0; }  
      set { }  
   }  
  
   public int Property2  
   {  
      get { return 0; }  
      set { }  
   }  
}  
  
public class Test  
{  
   public static void Main(string[] args)   
   {  
      MyClass c = new MyClass();  
      int a = c.Property;   // CS0271  
      int b = c.Property2;   // OK  
   }  
}  
```