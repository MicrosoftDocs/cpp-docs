---
title: "Compiler Error CS0161"
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
  - "CS0161"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0161"
ms.assetid: c2731a6c-0285-4558-9e62-a7fd480ab0cf
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
# Compiler Error CS0161
'method': not all code paths return a value  
  
 A method that returns a value must have a `return` statement in all code paths. For more information, see [Methods](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0161:  
  
```  
// CS0161.cs  
public class Test  
{  
   public static int Main() // CS0161  
   {  
      int i = 10;  
      if (i < 10)  
      {  
         return i;  
      }  
      else  
      {  
         // uncomment the following line to resolve  
         // return 1;  
      }  
   }  
}  
```