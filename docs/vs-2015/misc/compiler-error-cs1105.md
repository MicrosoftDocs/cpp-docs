---
title: "Compiler Error CS1105 | Microsoft Docs"
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
  - "CS1105"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1105"
ms.assetid: fcbd91ad-a76a-4b22-868d-16824fa96f85
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1105
Extension methods must be static.  
  
 Extension methods must be declared as static methods in a non-generic static class.  
  
## Example  
 The following example generates CS1105 because `Test` is not static:  
  
```  
// cs1105.cs  
// Compile with: /target:library  
public class Extensions  
{  
  
    // Single type parameter.  
        public void Test<T>(this System.String s) {} //CS1105  
  
}  
```  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/175ce3ff-9bbf-4e64-8421-faeb81a0bb51)   
 [static](http://msdn.microsoft.com/library/5509e215-2183-4da3-bab4-6b7e607a4fdf)