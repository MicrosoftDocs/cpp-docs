---
title: "Compiler Error CS0127 | Microsoft Docs"
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
  - "CS0127"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0127"
ms.assetid: b20333bf-badf-4f96-a3ee-bd35f4f7e807
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0127
Since 'function' returns void, a return keyword must not be followed by an object expression  
  
 A method with a [void](http://msdn.microsoft.com/library/0d2d8a95-fe20-4fbd-bf5d-c1e54bce71d4) return type cannot return a value. For more information, see [Methods](http://msdn.microsoft.com/library/cc738f07-e8cd-4683-9585-9f40c0667c37).  
  
 The following sample generates CS0127:  
  
```  
// CS0127.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public int hiddenMember2  
      {  
         get  
         {  
            return 0;  
         }  
         set   // CS0127, set has an implicit void return type  
         {  
            return 0;   // remove return statement to resolve this CS0127  
         }  
      }  
  
      public static void Main()  
      {  
      }  
   }  
}  
```