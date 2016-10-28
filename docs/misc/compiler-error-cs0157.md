---
title: "Compiler Error CS0157"
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
  - "CS0157"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0157"
ms.assetid: a5d9d506-81f8-47dd-85b6-85f8170bcbef
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
# Compiler Error CS0157
Control cannot leave the body of a finally clause  
  
 All of the statements in a [finally](../Topic/try-catch-finally%20\(C%23%20Reference\).md) clause must execute. For more information, see [Exception Handling Statements](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) and [Exceptions and Exception Handling](../Topic/Exceptions%20and%20Exception%20Handling%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0157:  
  
```  
// CS0157.cs  
using System;  
namespace MyNamespace  
{  
   public class MyClass2 : Exception  
   {  
   }  
  
   public class MyClass  
   {  
      public static void Main()  
      {  
         try  
         {  
         }  
  
         finally  
         {  
            return;   // CS0157, cannot leave finally clause  
         }  
      }  
   }  
}  
```