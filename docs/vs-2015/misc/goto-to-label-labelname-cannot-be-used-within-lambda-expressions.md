---
title: "GoTo to label &#39;&lt;labelname&gt;&#39; cannot be used within lambda expressions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36597"
  - "bc36597"
helpviewer_keywords: 
  - "BC36597"
ms.assetid: 83e11202-a889-45c8-9159-d22b99679c0c
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# GoTo to label &#39;&lt;labelname&gt;&#39; cannot be used within lambda expressions
The body of a lambda expression must be an expression that calculates and returns a single value. No statements are permitted, including `GoTo` statements.  
  
 **Error ID:** BC36597  
  
## See Also  
 [Lambda Expressions](http://msdn.microsoft.com/library/137064b0-3928-4bfa-ba71-c3f9cbd951e2)   
 [GoTo Statement](http://msdn.microsoft.com/library/313274c2-8ab3-4b9c-9ba3-0fd6798e4f6d)