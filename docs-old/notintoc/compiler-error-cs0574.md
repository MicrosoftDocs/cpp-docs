---
title: "Compiler Error CS0574"
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
  - "CS0574"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0574"
ms.assetid: 43684abe-982c-45ae-9d0b-4fe031671fc8
caps.latest.revision: 6
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
# Compiler Error CS0574
Name of destructor must match name of class  
  
 The name of a destructor must be the class name preceded by a tilde (~).  
  
 The following sample generates CS0574:  
  
```  
// CS0574.cs  
namespace x  
{  
   public class iii  
   {  
      ~iiii()   // CS0574  
      {  
      }  
  
      public static void Main()  
      {  
      }  
   }  
}  
```