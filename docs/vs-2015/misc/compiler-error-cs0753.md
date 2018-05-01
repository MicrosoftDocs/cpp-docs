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
  
 The [partial](http://msdn.microsoft.com/library/27320743-a22e-4c7b-b0b3-53afe3607334) modifier can only be used with classes, structs, interfaces, and methods.  
  
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
 [Partial Classes and Methods](http://msdn.microsoft.com/library/804cecb7-62db-4f97-a99f-60975bd59fa1)