---
title: "Compiler Error CS0216"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0216"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0216"
ms.assetid: afb3dd29-3eff-4b62-8267-eb726c2bcee4
caps.latest.revision: 8
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS0216
The operator 'operator' requires a matching operator 'missing_operator' to also be defined  
  
 A user-defined [true](../Topic/true%20\(C%23%20Reference\).md) operator requires a user-defined [false](../Topic/false%20\(C%23%20Reference\).md) operator, and vice versa. For more information, see [Operators](../Topic/Operators%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0216:  
  
```  
// CS0216.cs  
class MyClass  
{  
   public static bool operator true (MyClass MyInt)   // CS0216  
   {  
      return true;  
   }  
  
   // to resolve, uncomment the following operator definition  
   /*  
   public static bool operator false (MyClass MyInt)  
   {  
      return true;  
   }  
   */  
  
   public static void Main()  
   {  
   }  
}  
```