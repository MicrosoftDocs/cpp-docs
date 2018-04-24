---
title: "Compiler Error CS0138 | Microsoft Docs"
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
  - "CS0138"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0138"
ms.assetid: 970545f8-5ee5-428e-921a-3aa29f68d16d
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0138
A using namespace directive can only be applied to namespaces; 'type' is a type not a namespace  
  
 A [using](http://msdn.microsoft.com/library/124e1a63-2a4b-4132-b269-3b6d8d3ef72d) directive can only take the name of a namespace as a parameter. For more information, see [Namespaces](http://msdn.microsoft.com/library/b1c4ab46-3fad-4ffa-9deb-dd50a2d8c65a).  
  
 The following sample generates CS0138:  
  
```  
// CS0138.cs  
using System.Object;   // CS0138  
```