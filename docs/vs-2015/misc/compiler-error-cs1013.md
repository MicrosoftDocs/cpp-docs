---
title: "Compiler Error CS1013 | Microsoft Docs"
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
  - "CS1013"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1013"
ms.assetid: e5b1d24d-e558-4f7c-b2b1-3a644710005d
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1013
Invalid number  
  
 The compiler detected a malformed number. For more information on integral types, see the [Integral Types Table](http://msdn.microsoft.com/library/62e86126-46ff-40b0-9028-e61d7558268c).  
  
## Example  
 The following sample generates CS1013:  
  
```  
// CS1013.cs  
class Sample  
{  
    static void Main()  
    {  
        int i = 0x;   // CS1013  
    }  
}  
```