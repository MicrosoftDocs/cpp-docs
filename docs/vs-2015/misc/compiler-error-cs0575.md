---
title: "Compiler Error CS0575 | Microsoft Docs"
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
  - "CS0575"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0575"
ms.assetid: e8f20960-94a6-41d0-807c-d49ad198ccf6
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0575
Only class types can contain destructors  
  
 A [struct](http://msdn.microsoft.com/library/ff3dd9b7-dc93-4720-8855-ef5558f65c7c) cannot contain a destructor.  
  
 The following sample generates CS0575:  
  
```  
// CS0575.cs  
namespace x  
{  
   public struct iii  
   {  
      ~iii()   // CS0575  
      {  
      }  
  
      public static void Main()  
      {  
      }  
   }  
}  
```