---
title: "Compiler Error CS1028 | Microsoft Docs"
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
  - "CS1028"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1028"
ms.assetid: 9df07db3-256f-45e9-8323-26539c55a1d8
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1028
Unexpected preprocessor directive  
  
 A [preprocessor directive](http://msdn.microsoft.com/library/f2406090-b244-4f7e-ab72-3698fefed724) was found but not expected.  
  
 For example, a `#endif` was found with no preceding `#if`.  
  
 The following sample generates CS1028:  
  
```  
// CS1028.cs  
#endif   // CS1028, no matching #if  
namespace x  
{  
   public class clx  
   {  
      public static void Main()  
      {  
      }  
   }  
}  
```