---
title: "Compiler Error CS0138"
ms.custom: ""
ms.date: "10/25/2016"
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
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS0138
A using namespace directive can only be applied to namespaces; 'type' is a type not a namespace  
  
 A [using](../Topic/using%20\(C%23%20Reference\).md) directive can only take the name of a namespace as a parameter. For more information, see [Namespaces](../Topic/Namespaces%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0138:  
  
```  
// CS0138.cs  
using System.Object;   // CS0138  
```