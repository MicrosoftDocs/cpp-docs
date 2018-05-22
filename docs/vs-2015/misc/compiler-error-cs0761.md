---
title: "Compiler Error CS0761 | Microsoft Docs"
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
  - "CS0761"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0761"
ms.assetid: b16ac1df-0ddc-44d2-89f1-8d9c32af87ad
caps.latest.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0761
Partial method declarations of 'method\<T>' have inconsistent type parameter constraints.  
  
 If a partial method has an implementation, the generic type constraint must be identical to the constraint defined on the method signature.  
  
### To correct this error  
  
1.  Make the generic type constraints identical on each part of the partial method.  
  
## Example  
 The following code generates CS0761:  
  
```  
// cs0761.cs  
using System;  
  
public partial class C  
{  
    partial void Part<T>() where T : class;  
    partial void Part<T>() where T : struct // CS0761  
    {  
    }  
  
    public static int Main()  
    {  
        return 1;  
    }  
}  
  
```  
  
## See Also  
 [Partial Classes and Methods](http://msdn.microsoft.com/library/804cecb7-62db-4f97-a99f-60975bd59fa1)   
 [Constraints on Type Parameters](http://msdn.microsoft.com/library/141b003e-1ddb-4e1c-bcb2-e1c3870e6a51)