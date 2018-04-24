---
title: "Compiler Error CS0017 | Microsoft Docs"
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
  - "CS0017"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0017"
ms.assetid: 5e2a3eb3-6f6e-485d-8293-ceabea4d6905
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0017
Program 'output file name' has more than one entry point defined. Compile with /main to specify the type that contains the entry point.  
  
 A program can only have one [Main](http://msdn.microsoft.com/library/73a17231-cf96-44ea-aa8a-54807c6fb1f4) method.  
  
 To resolve this error, you can either delete all Main methods in your code, except one, or you can use the [/main](http://msdn.microsoft.com/library/975cf4d5-36ac-4530-826c-4aad0c7f2049) compiler option to specify which Main method you want to use.  
  
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