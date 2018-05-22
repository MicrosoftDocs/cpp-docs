---
title: "Compiler Error CS0196 | Microsoft Docs"
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
  - "CS0196"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0196"
ms.assetid: d361484e-73b8-439a-99c7-714e61d73755
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0196
A pointer must be indexed by only one value  
  
 A pointer cannot have multiple indices. For more information, see [Pointer types](http://msdn.microsoft.com/library/3319faf9-336d-4148-9af2-1da2579cdd1e)  
  
 The following sample generates CS0196:  
  
```  
// CS0196.cs  
public class MyClass  
{  
   public static void Main ()  
   {  
      int *i = null;  
      int j = 0;  
      j = i[1,2];   // CS0196  
      // try the following line instead  
      // j = i[1];  
   }  
}  
```