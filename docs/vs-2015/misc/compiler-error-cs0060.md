---
title: "Compiler Error CS0060 | Microsoft Docs"
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
  - "CS0060"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0060"
ms.assetid: ae6d4fb7-5ff9-4883-82c3-f55b190f439a
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0060
Inconsistent accessibility: base class 'class1' is less accessible than class 'class2'  
  
 Class accessibility should be consistent between the base class and inherited class.  
  
 The following sample generates CS0060:  
  
```  
// CS0060.cs  
class MyClass  
// try the following line instead  
// public class MyClass  
{  
}  
  
public class MyClass2 : MyClass   // CS0060  
{  
   public static void Main()  
   {  
   }  
}  
```  
  
## See Also  
 [Access Modifiers](http://msdn.microsoft.com/library/6e81ee82-224f-4a12-9baf-a0dca2656c5b)