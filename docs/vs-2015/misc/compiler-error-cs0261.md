---
title: "Compiler Error CS0261 | Microsoft Docs"
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
  - "CS0261"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0261"
ms.assetid: c2af7b31-4a48-457a-8d9b-0956dd0d46f9
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0261
Partial declarations of 'type' must be all classes, all structs, or all interfaces  
  
 This error occurs if a partial type is declared as a different type of construct in various places. For more information, see [Partial Classes and Methods](http://msdn.microsoft.com/library/804cecb7-62db-4f97-a99f-60975bd59fa1).  
  
 The following sample generates CS0261:  
  
```  
// CS0261.cs  
partial class A  // CS0261 – A declared as a class here, but as a struct below  
{  
}  
  
partial struct A  
{  
}  
```