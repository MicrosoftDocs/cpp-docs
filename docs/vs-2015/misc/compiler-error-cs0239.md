---
title: "Compiler Error CS0239 | Microsoft Docs"
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
  - "CS0239"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0239"
ms.assetid: 2e07bbc2-03a9-44b2-b321-477ca95fff8c
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0239
'member' : cannot override inherited member 'inherited member' because it is sealed  
  
 A member cannot [override](http://msdn.microsoft.com/library/dd1907a8-acf8-46d3-80b9-c2ca4febada8) a [sealed](http://msdn.microsoft.com/library/8e4ed5d3-10be-47db-9488-0da2008e6f3f) inherited member. For more information, see [Checked and Unchecked](http://msdn.microsoft.com/library/a84bc877-2c7f-4396-8735-1ce97c42f35e).  
  
 The following sample generates CS0239:  
  
```  
// CS0239.cs  
abstract class MyClass  
{  
   public abstract void f();  
}  
  
class MyClass2 : MyClass  
{  
   public static void Main()  
   {  
   }  
  
   public override sealed void f()  
   {  
   }  
}  
  
class MyClass3 : MyClass2  
{  
   public override void f()   // CS0239  
   // Try the following definition instead:  
   // public new void f()  
   {  
   }  
}  
```