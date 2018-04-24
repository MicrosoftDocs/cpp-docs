---
title: "Compiler Error CS0023 | Microsoft Docs"
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
  - "CS0023"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0023"
ms.assetid: 7a30073c-99de-41fa-ac6d-4a0dfbb76de9
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0023
Operator 'operator' cannot be applied to operand of type 'type'  
  
 An attempt was made to apply an operator to a variable whose type was not designed to work with the operator. For more information, see [Types](http://msdn.microsoft.com/library/f782d7cc-035e-4500-b1b1-36a9881130ad) and [C# Operators](http://msdn.microsoft.com/library/0301e31f-22ad-49af-ac3c-d5eae7f0ac43).  
  
 The following sample generates CS0023:  
  
```  
// CS0023.cs  
namespace x  
{  
   public class a  
   {  
      public static void Main()  
      {  
         string s = "hello";  
         s = -s;   // CS0023, minus operator not allowed on strings  
      }  
   }  
}  
```