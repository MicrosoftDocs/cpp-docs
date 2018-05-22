---
title: "Option Strict On requires all variable declarations to have an &#39;As&#39; clause | Microsoft Docs"
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
  - "bc30209"
  - "vbc30209"
helpviewer_keywords: 
  - "BC30209"
ms.assetid: 69c2e32a-86aa-4075-a142-440605a7063a
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On requires all variable declarations to have an &#39;As&#39; clause
A declaration contains a declared variable without an `As` clause. When `Option Strict` is `On`, every variable, property, procedure argument, and function return must be declared with an `As` clause to specify its data type; for example, `Dim MyNum As Short`.  
  
 **Error ID:** BC30209  
  
### To correct this error  
  
1.  Check to see if the `As` keyword is misspelled.  
  
2.  Supply an `As` clause for the declared variable, or turn `Option Strict Off`.  
  
## See Also  
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)   
 [Variable Declaration](http://msdn.microsoft.com/library/d8f10226-92b1-480f-9f53-df377b2d7e15)