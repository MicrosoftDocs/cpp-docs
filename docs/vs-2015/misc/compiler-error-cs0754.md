---
title: "Compiler Error CS0754 | Microsoft Docs"
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
  - "CS0754"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0754"
ms.assetid: c83e04b5-6ab5-45c2-805e-0ba4f041d506
caps.latest.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0754
A partial method may not explicitly implement an interface method.  
  
 A partial method cannot be declared as an explicit implementation of a method defined in an interface.  
  
### To correct this error  
  
1.  Remove the explicit interface qualification from the method declaration.  
  
## Example  
 The following code generates CS0754:  
  
```  
// cs0754.cs  
using System;  
  
    public interface IF  
    {  
        void Part();  
    }  
  
    public partial class C : IF  
    {  
        partial void IF.Part(); //CS0754  
        public static int Main()  
        {  
            return 1;  
        }  
    }  
```  
  
## See Also  
 [Explicit Interface Implementation](http://msdn.microsoft.com/library/181c901f-0d4c-4f29-97fc-895079617bf2)   
 [Partial Classes and Methods](http://msdn.microsoft.com/library/804cecb7-62db-4f97-a99f-60975bd59fa1)