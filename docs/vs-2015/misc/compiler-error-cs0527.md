---
title: "Compiler Error CS0527 | Microsoft Docs"
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
  - "CS0527"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0527"
ms.assetid: 1acd244b-c55b-424f-b038-a130d65b8685
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0527
Type 'type' in interface list is not an interface  
  
 It is possible for a [struct](http://msdn.microsoft.com/library/ff3dd9b7-dc93-4720-8855-ef5558f65c7c) or [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba) to inherit from another interface but not from any other type.  
  
 The following sample generates CS0527:  
  
```  
// CS0527.cs  
// compile with: /target:library  
public struct clx : int {}   // CS0527 int not an interface  
```