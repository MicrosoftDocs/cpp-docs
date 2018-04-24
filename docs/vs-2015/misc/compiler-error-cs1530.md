---
title: "Compiler Error CS1530 | Microsoft Docs"
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
  - "CS1530"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1530"
ms.assetid: 3844b5ef-e0ec-42df-9267-72689020f128
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1530
Keyword 'new' is not allowed on elements defined in a namespace  
  
 It is not necessary to specify the [new](http://msdn.microsoft.com/library/e4136516-f058-45a8-84e5-da00a5cf9b6a) keyword on any construct that is in a [namespace](http://msdn.microsoft.com/library/0a788423-9110-42e0-97d9-bda41ca4870f).  
  
 The following sample generates CS1530:  
  
```  
// CS1530.cs  
namespace a  
{  
   new class i   // CS1530  
   {  
   }  
  
   // try the following instead  
   class ii  
   {  
      public static void Main()  
      {  
      }  
   }  
}  
```