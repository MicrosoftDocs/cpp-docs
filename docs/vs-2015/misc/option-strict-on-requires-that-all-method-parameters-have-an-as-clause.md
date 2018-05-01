---
title: "Option Strict On requires that all method parameters have an &#39;As&#39; clause | Microsoft Docs"
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
  - "vbc30211"
  - "bc30211"
helpviewer_keywords: 
  - "BC30211"
ms.assetid: 855795ce-8499-4525-a1de-cbb8ba364cd7
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On requires that all method parameters have an &#39;As&#39; clause
A method contains a parameter without an `As` clause. When `Option Strict` is on, every variable, property, procedure argument, and function return must be declared with an `As` clause to specify its data type; for example, `Sub GetData(ByVal filter As String)`.  
  
 **Error ID:** BC30211  
  
### To correct this error  
  
-   Check to see whether the `As` keyword is misspelled.  
  
-   Supply an `As` clause for the declared variable, or turn `Option Strict` off.  
  
## See Also  
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)   
 [Sub Statement](http://msdn.microsoft.com/library/e347d700-d06c-405b-b302-e9b1edb57dfc)   
 [Function Statement](http://msdn.microsoft.com/library/a4497077-0f46-4ede-a27f-9e8670df52b9)