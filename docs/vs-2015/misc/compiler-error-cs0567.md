---
title: "Compiler Error CS0567 | Microsoft Docs"
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
  - "CS0567"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0567"
ms.assetid: 90aefbf9-d216-4eb4-96d4-44926fa23b1e
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0567
Interfaces cannot contain operators  
  
 Operators are not permitted in [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba) definitions.  
  
 The following sample generates CS0567:  
  
```  
// CS0567.cs  
interface IA  
{  
   int operator +(int aa, int bb);   // CS0567  
}  
  
class Sample  
{  
   public static void Main()   
   {  
   }  
}  
```