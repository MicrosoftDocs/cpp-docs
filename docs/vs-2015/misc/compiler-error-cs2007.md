---
title: "Compiler Error CS2007 | Microsoft Docs"
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
  - "CS2007"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2007"
ms.assetid: 9be20e8e-2424-4435-9371-778fb12823c0
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS2007
Unrecognized command-line option: 'option'  
  
 The compiler was passed a string that was not a [compiler option](../Topic/C%23%20Compiler%20Options.md), even though it began with a forward slash (/).  
  
 The following sample generates CS2007:  
  
```  
// CS2007.cs  
// compile with: /recur  
// CS2007 expected  
class x  
{  
   public static void Main() {}  
}  
```