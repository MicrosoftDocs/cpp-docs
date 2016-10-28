---
title: "Compiler Error CS1106"
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
  - "CS1106"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1106"
ms.assetid: 3585600a-6b2c-47aa-a418-ef049f07c107
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
 [Extension Methods](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [static](../Topic/static%20\(C%23%20Reference\).md)