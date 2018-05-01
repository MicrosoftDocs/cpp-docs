---
title: "&#39;Throw&#39; statement cannot omit operand outside a &#39;Catch&#39; statement or inside a &#39;Finally&#39; statement | Microsoft Docs"
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
  - "vbc30666"
  - "bc30666"
helpviewer_keywords: 
  - "BC30666"
ms.assetid: a208a6ea-0e36-4bf1-8984-4de1a0e38a2a
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Throw&#39; statement cannot omit operand outside a &#39;Catch&#39; statement or inside a &#39;Finally&#39; statement
`Throw` statements outside of `Catch` statement must supply the name of an exception object.  
  
 **Error ID:** BC30666  
  
### To correct this error  
  
1.  Specify the name of an exception object derived from `System.Exception`.  
  
2.  Restructure your code so that the `Throw` statement is inside a `Catch` block.  
  
## See Also  
 [Throw Statement](http://msdn.microsoft.com/library/a6e07406-5c8a-4498-87a2-8339f3651d62)   
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [Exception Class in Visual Basic](http://msdn.microsoft.com/en-us/9aac396f-34ca-4afb-8e6c-e523cb690ba9)   
 [Exception and Error Handling in Visual Basic](http://msdn.microsoft.com/en-us/3e351e73-cf23-40ab-8b60-05794160529e)