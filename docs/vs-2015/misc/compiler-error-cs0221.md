---
title: "Compiler Error CS0221 | Microsoft Docs"
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
  - "CS0221"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0221"
ms.assetid: 97170b49-54f1-4dac-a865-2f9cc6bf55b1
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0221
Constant value 'value' cannot be converted to a 'type' (use 'unchecked' syntax to override)  
  
 An assignment operation that would result in a data loss was detected by [checked](../Topic/checked%20\(C%23%20Reference\).md), which is on by default. Either correct the assignment or use [unchecked](../Topic/unchecked%20\(C%23%20Reference\).md) to resolve this error. For more information, see [Checked and Unchecked](../Topic/Checked%20and%20Unchecked%20\(C%23%20Reference\).md).  
  
 The following sample generates CS0221:  
  
```  
// CS0221.cs  
public class MyClass  
{  
   public static void Main()  
   {  
      // unchecked  
      // {  
         int a = (int)0xFFFFFFFF;   // CS0221  
         a++;  
      // }  
   }  
}  
```