---
title: "Compiler Error CS1655 | Microsoft Docs"
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
  - "CS1655"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1655"
ms.assetid: 041e9daa-c026-494f-b086-0db9a23c969b
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1655
Cannot pass fields of 'variable' as a ref or out argument because it is a 'readonly variable type'  
  
 This error occurs if you are attempting to pass a member of a [foreach](http://msdn.microsoft.com/library/5a9c5ddc-5fd3-457a-9bb6-9abffcd874ec) variable, a [using](http://msdn.microsoft.com/library/afc355e6-f0b9-4240-94dd-0d93f17d9fc3) variable, or a [fixed](http://msdn.microsoft.com/library/7ea6db08-ad49-4a7a-b934-d8c4acad1c3a) variable to a function as a ref or out argument. Because these variables are considered read-only in these contexts, this is not allowed.  
  
 The following sample generates CS1655:  
  
```  
// CS1655.cs  
struct S   
{  
   public int i;  
}  
  
class CMain  
{  
  static void f(ref int iref)  
  {  
  }  
  
  public static void Main()  
  {  
     S[] sa = new S[10];  
     foreach(S s in sa)  
     {  
        CMain.f(ref s.i);  // CS1655  
     }  
  }  
}  
```