---
title: "Compiler Error CS0763 | Microsoft Docs"
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
  - "CS0763"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0763"
ms.assetid: 940870ba-1250-4365-acaa-7f968ee96c5b
caps.latest.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0763
Both partial method declarations must be static or neither may be static.  
  
 A partial method declaration cannot have one part static and the other part not static.  
  
### To correct this error  
  
1.  Make both parts either static or non-static.  
  
## Example  
 The following code generates CS0763:  
  
```  
// cs0763.cs  
using System;  
  
    public partial class C  
    {  
        static partial void Part();  
        partial void Part() // CS0763  
        {  
        }  
  
        public static int Main()  
        {  
            return 1;  
        }  
  
    }  
```  
  
## See Also  
 [Partial Classes and Methods](http://msdn.microsoft.com/library/804cecb7-62db-4f97-a99f-60975bd59fa1)   
 [static](http://msdn.microsoft.com/library/5509e215-2183-4da3-bab4-6b7e607a4fdf)