---
title: "Compiler Error CS1106 | Microsoft Docs"
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
  - "CS1106"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1106"
ms.assetid: 3585600a-6b2c-47aa-a418-ef049f07c107
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1106
Extension methods must be defined in a non generic static class.  
  
 Extension methods must be defined as static methods in a non-generic static class.  
  
## Example  
 The following example generates CS1106 because the class `Extensions` is not defined as `static`:  
  
```  
// cs1106.cs  
public class Extensions // CS1106  
{  
    public  static void Test<T>(this System.String s) {}  
}  
```  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/175ce3ff-9bbf-4e64-8421-faeb81a0bb51)   
 [static](http://msdn.microsoft.com/library/5509e215-2183-4da3-bab4-6b7e607a4fdf)