---
title: "Compiler Error CS0017"
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
  - "CS0017"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0017"
ms.assetid: 5e2a3eb3-6f6e-485d-8293-ceabea4d6905
caps.latest.revision: 10
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
# Compiler Error CS0017
Program 'output file name' has more than one entry point defined. Compile with /main to specify the type that contains the entry point.  
  
 A program can only have one [Main](../Topic/Main\(\)%20and%20Command-Line%20Arguments%20\(C%23%20Programming%20Guide\).md) method.  
  
 To resolve this error, you can either delete all Main methods in your code, except one, or you can use the [/main](../Topic/-main%20\(C%23%20Compiler%20Options\).md) compiler option to specify which Main method you want to use.  
  
 The following sample generates CS0017:  
  
```  
// CS0017.cs  
// compile with: /target:exe  
public class clx  
{  
   static public void Main()  
   {  
   }  
}  
  
public class cly  
{  
   public static void Main()   // CS0017, delete one Main or use /main  
   {  
   }  
}  
```