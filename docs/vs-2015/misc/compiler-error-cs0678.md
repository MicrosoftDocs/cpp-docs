---
title: "Compiler Error CS0678 | Microsoft Docs"
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
  - "CS0678"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0678"
ms.assetid: ca389fc9-da78-4e16-b68c-782f90b17c83
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0678
'variable': a field can not be both volatile and readonly  
  
 Use of the [volatile](http://msdn.microsoft.com/library/78089bc7-7b38-4cfd-9e49-87ac036af009) and [readonly](http://msdn.microsoft.com/library/2f8081f6-0de2-4903-898d-99696c48d2f4) keywords is mutually exclusive.  
  
 The following sample generates CS0678:  
  
```  
// CS0678.cs  
using System;  
  
class TestClass  
{  
   private readonly volatile int i;   // CS0678  
   // try the following line instead  
   // private volatile int i;  
  
   public static void Main()  
   {  
   }  
}  
```