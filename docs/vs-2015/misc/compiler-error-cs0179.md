---
title: "Compiler Error CS0179 | Microsoft Docs"
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
  - "CS0179"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0179"
ms.assetid: bef000ca-64d7-4809-b2a0-de6927b04b0d
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0179
'member' cannot be extern and declare a body  
  
 When a class member is marked [extern](http://msdn.microsoft.com/library/9c3f02c4-51b8-4d80-9cb2-f2b6e1ae15c7), it means that the member's definition is located in another file. Therefore, a class member marked as **extern** cannot be defined in the class. Either remove the `extern` keyword or delete the definition. For more information, see [Methods](http://msdn.microsoft.com/library/cc738f07-e8cd-4683-9585-9f40c0667c37).  
  
 The following sample generates CS0179:  
  
```  
// CS0179.cs  
public class MyClass  
{  
   public extern int ExternMethod(int aa)   // CS0179  
   {  
      return 0;  
   }  
   // try the following line instead  
   // public extern int ExternMethod(int aa);  
  
   public static void Main()  
   {  
   }  
}  
```