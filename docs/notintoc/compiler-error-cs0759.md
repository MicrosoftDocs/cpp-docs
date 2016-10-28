---
title: "Compiler Error CS0759"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS0759"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0759"
ms.assetid: 96f0e178-adbf-4327-8934-ac282c428184
caps.latest.revision: 4
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error CS0759
No defining declaration found for implementing declaration of partial method 'method'.  
  
 A partial method must have a defining declaration that defines the signature (name, return type and parameters) of the method. The implementation or method body is optional.  
  
### To correct this error  
  
1.  Provide a defining declaration for the partial method in the other part of a partial class or struct.  
  
## Example  
 The following example generates CS0759:  
  
```  
// cs0759.cs  
using System;  
  
    public partial class C  
    {  
        partial void Part() // CS0759  
        {  
        }  
  
        public static int Main()  
        {  
            return 1;  
        }  
    }  
```  
  
## See Also  
 [Partial Classes and Methods](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)