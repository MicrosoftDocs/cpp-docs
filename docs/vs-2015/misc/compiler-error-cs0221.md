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
  
 An assignment operation that would result in a data loss was detected by [checked](http://msdn.microsoft.com/library/718a1194-988d-48a3-b089-d6ee8bd1608d), which is on by default. Either correct the assignment or use [unchecked](http://msdn.microsoft.com/library/0c021f7c-923f-4b3d-a58f-55336f5ac27e) to resolve this error. For more information, see [Checked and Unchecked](http://msdn.microsoft.com/library/a84bc877-2c7f-4396-8735-1ce97c42f35e).  
  
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