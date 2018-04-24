---
title: "Compiler Error CS1014 | Microsoft Docs"
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
  - "CS1014"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1014"
ms.assetid: 60c1e9af-5a0d-4ae0-a2e6-881b0d1535e9
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1014
A get or set accessor expected  
  
 A method declaration was found in a property declaration. You can only declare `get` and `set` methods in a property.  
  
 For more information on properties, see [Using Properties](../Topic/Using%20Properties%20\(C%23%20Programming%20Guide\).md).  
  
## Example  
 The following sample generates CS1014.  
  
```  
// CS1014.cs  
// compile with: /target:library  
class Sample  
{  
   public int TestProperty  
   {  
      get  
      {  
         return 0;  
      }  
      int z;   // CS1014  not get or set  
   }  
}  
```