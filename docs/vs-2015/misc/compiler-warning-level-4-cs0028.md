---
title: "Compiler Warning (level 4) CS0028 | Microsoft Docs"
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
  - "CS0028"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0028"
ms.assetid: 47df919f-01fa-45ae-a4b7-912445e679e2
caps.latest.revision: 15
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 4) CS0028
'function declaration' has the wrong signature to be an entry point  
  
 The method declaration for `Main` was invalid: it was declared with an invalid signature. `Main` must be declared as static and it must return either [int](http://msdn.microsoft.com/library/212447b4-5d2a-41aa-88ab-84fe710bdb52) or [void](http://msdn.microsoft.com/library/0d2d8a95-fe20-4fbd-bf5d-c1e54bce71d4). For more information, see [Main() and Command-Line Arguments](http://msdn.microsoft.com/library/73a17231-cf96-44ea-aa8a-54807c6fb1f4).  
  
 The following sample generates CS0028:  
  
```  
// CS0028.cs  
// compile with: /W:4 /warnaserror  
public class a  
{  
    public static double Main(int i)   // CS0028  
    // Try the following line instead:  
    // public static void Main()  
    {  
    }  
}  
```