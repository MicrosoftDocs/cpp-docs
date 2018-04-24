---
title: "Compiler Error CS0551 | Microsoft Docs"
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
  - "CS0551"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0551"
ms.assetid: fb456ecf-dff3-4e39-b9b3-de23d81dadea
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0551
Explicit interface implementation 'implementation' is missing accessor 'accessor'  
  
 A class that explicitly implements an interface's property must implement all the accessors that the interface defines.  
  
 For more information, see [Using Properties](http://msdn.microsoft.com/library/f7f67b05-0983-4cdb-96af-1855d24c967c).  
  
## Example  
 The following sample generates CS0551.  
  
```  
// CS0551.cs  
// compile with: /target:library  
interface ii  
{  
   int i  
   {  
      get;  
      set;  
   }  
}  
  
public class a : ii  
{  
   int ii.i { set {} }   // CS0551  
  
   // OK  
   int ii.i      
   {  
      set {}  
      get { return 0; }  
   }  
}  
```