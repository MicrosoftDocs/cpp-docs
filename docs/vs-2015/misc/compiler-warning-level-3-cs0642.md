---
title: "Compiler Warning (level 3) CS0642 | Microsoft Docs"
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
  - "CS0642"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0642"
ms.assetid: e2df58c0-9b7e-4e50-8e31-e0134955f62c
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 3) CS0642
Possible mistaken empty statement  
  
 A semicolon after a conditional statement may cause your code to execute differently than intended.  
  
 You can use **/nowarn** compiler option or `#pragmas warning` to disable this warning; see [/nowarn (C# Compiler Options)](http://msdn.microsoft.com/library/6dcbc5e8-ae67-4566-9df3-f63cfdd9c4e4) or [#pragma warning](http://msdn.microsoft.com/library/723493d5-9753-4cec-babb-54e2b8eb36b6) for more information.  
  
 The following sample generates CS0642:  
  
```  
// CS0642.cs  
// compile with: /W:3  
class MyClass  
{  
   public static void Main()  
   {  
      int i;  
  
      for (i = 0; i < 10; i += 1);   // CS0642 semicolon intentional?  
      {  
         System.Console.WriteLine (i);  
      }  
   }  
}  
```