---
title: "Compiler Error CS1103 | Microsoft Docs"
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
  - "CS1103"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1103"
ms.assetid: 513a26ea-9d66-4dc3-b3e6-d709c3089b1a
caps.latest.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1103
The first parameter of an extension method cannot be of type 'type'.  
  
 The first parameter of an extension method cannot be a pointer type.  
  
## Example  
 The following example generates CS1103:  
  
```  
// cs1103.cs  
public static class Extensions  
{  
    public unsafe static char* Test(this char* charP) { return charP; } // CS1103  
}   
```  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/175ce3ff-9bbf-4e64-8421-faeb81a0bb51)   
 [unsafe](http://msdn.microsoft.com/library/7e818009-1c6e-4b9e-b769-3728a01586a0)