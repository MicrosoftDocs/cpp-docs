---
title: "Compiler Warning (level 3) CS0642"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS0642"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0642"
ms.assetid: e2df58c0-9b7e-4e50-8e31-e0134955f62c
caps.latest.revision: 7
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning (level 3) CS0642
Possible mistaken empty statement  
  
 A semicolon after a conditional statement may cause your code to execute differently than intended.  
  
 You can use **/nowarn** compiler option or `#pragmas warning` to disable this warning; see [/nowarn (C# Compiler Options)](../Topic/-nowarn%20\(C%23%20Compiler%20Options\).md) or [#pragma warning](../Topic/%23pragma%20warning%20\(C%23%20Reference\).md) for more information.  
  
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