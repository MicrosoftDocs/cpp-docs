---
title: "Compiler Error CS0526"
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
  - "CS0526"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0526"
ms.assetid: befc46b4-28ea-40d3-89ac-132b92455772
caps.latest.revision: 7
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
# Compiler Error CS0526
Interfaces cannot contain constructors  
  
 Constructors cannot be defined for [interfaces](../Topic/interface%20\(C%23%20Reference\).md). A method is considered a constructor if it has the same name as the class and no return type.  
  
 The following sample generates CS0526:  
  
```  
// CS0526.cs  
namespace x  
{  
   public interface clx  
   {  
      public clx()   // CS0526  
      {  
      }  
   }  
  
   public class cly  
   {  
      public static void Main()  
      {  
      }  
   }  
}  
```