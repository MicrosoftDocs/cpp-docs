---
title: "Compiler Error CS0037 | Microsoft Docs"
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
  - "CS0037"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0037"
ms.assetid: 1d34a71e-10a0-4fa8-9b94-343e69428c61
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0037
Cannot convert null to 'type' because it is a non-nullable value type  
  
 The compiler cannot assign null to a value type; null can only be assigned to a [reference type](http://msdn.microsoft.com/library/801cf030-6e2d-4a0d-9daf-1431b0c31f47) or to a Nullable type. [struct](http://msdn.microsoft.com/library/ff3dd9b7-dc93-4720-8855-ef5558f65c7c) is a value type. For more information, see [Nullable Types](http://msdn.microsoft.com/library/e473cb01-28ca-42be-9cea-f717055d72c6).  
  
 The following sample generates CS0037:  
  
```  
// CS0037.cs  
public struct s  
{  
}  
  
class a  
{  
   public static void Main()  
   {  
      int i = null;   // CS0037  
      s ss = null;    // CS0037  
   }  
}  
```