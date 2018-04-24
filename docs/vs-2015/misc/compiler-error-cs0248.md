---
title: "Compiler Error CS0248 | Microsoft Docs"
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
  - "CS0248"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0248"
ms.assetid: a7ddfd26-a836-47b8-b432-53876e06da31
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0248
Cannot create an array with a negative size  
  
 An array size was specified with a negative number. For more information, see [Arrays](http://msdn.microsoft.com/library/bb79bdde-e570-4c30-adb0-1dd5759ae041).  
  
## Example  
 The following sample generates CS0248:  
  
```  
// CS0248.cs  
class MyClass  
{  
    public static void Main()  
    {  
        int[] myArray = new int[-3] {1,2,3};   // CS0248, pass a nonnegative number  
    }  
}  
```