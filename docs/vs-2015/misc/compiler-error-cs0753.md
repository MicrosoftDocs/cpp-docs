---
title: "Compiler Error CS0753 | Microsoft Docs"
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
  - "CS0753"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0753"
ms.assetid: 287dd9da-da74-4290-9fa1-21ef1a8150fe
caps.latest.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0753
Only methods, classes, structs, or interfaces may be partial.  
  
 The [partial](../Topic/partial%20\(Type\)%20\(C%23%20Reference\).md) modifier can only be used with classes, structs, interfaces, and methods.  
  
### To correct this error  
  
1.  Remove the `partial` modifier from the variable or language construct.  
  
## Example  
 The following code generates CS0753:  
  
```  
// cs0753.cs  
using System;  
  
    public partial class C  
    {  
        partial int num; // CS0753  
        public static int Main()  
        {  
            return 1;  
        }  
    }  
```  
  
## See Also  
 [Partial Classes and Methods](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)