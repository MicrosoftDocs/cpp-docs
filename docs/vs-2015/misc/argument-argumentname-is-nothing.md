---
title: "Argument &#39;&lt;argumentname&gt;&#39; is Nothing | Microsoft Docs"
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
  - "vbrArgument_InvalidNullValue1"
ms.assetid: abbde904-c191-4911-8822-c9dd2f81d616
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Argument &#39;&lt;argumentname&gt;&#39; is Nothing
An expression contains a null argument.  
  
### To correct this error  
  
1.  Check the spelling of arguments in the expression. A misspelled variable name can implicitly create a numeric variable that is initialized to zero.  
  
2.  Check previous operations on variables in the expression, especially those passed into the procedure as arguments from other procedures.  
  
## See Also  
 [Passing Arguments by Value and by Reference](http://msdn.microsoft.com/library/fd8a9de6-7178-44d5-a9bf-458d4ad907c2)   
 [Parameter Passing Mechanism for Visual Basic 6.0 Users](http://msdn.microsoft.com/en-us/0fa2b0dc-aa1c-4797-bbd6-aa13c611cab2)