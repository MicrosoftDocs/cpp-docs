---
title: "Compiler Error CS0527"
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
  - "CS0527"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0527"
ms.assetid: 1acd244b-c55b-424f-b038-a130d65b8685
caps.latest.revision: 8
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
# Compiler Error CS0527
Type 'type' in interface list is not an interface  
  
 It is possible for a [struct](../Topic/struct%20\(C%23%20Reference\).md) or [interface](../Topic/interface%20\(C%23%20Reference\).md) to inherit from another interface but not from any other type.  
  
 The following sample generates CS0527:  
  
```  
// CS0527.cs  
// compile with: /target:library  
public struct clx : int {}   // CS0527 int not an interface  
```