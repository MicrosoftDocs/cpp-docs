---
title: "Unused local variable: &#39;&lt;localvariablename&gt;&#39; | Microsoft Docs"
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
  - "vbc42024"
  - "BC42024"
helpviewer_keywords: 
  - "BC42024"
ms.assetid: 749b1315-0f85-4f7e-b68b-8cc4346c502b
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Unused local variable: &#39;&lt;localvariablename&gt;&#39;
A local variable in a procedure is declared but never used.  
  
 One possibility is that there is a spelling mistake among the local variables in the procedure. If this variable is in fact used in another statement but spelled differently, it will appear to the compiler as two different variables.  
  
 By default, this message is a warning. For more information about hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42024  
  
### To correct this error  
  
1.  Check for spelling mistakes among the local variables within the procedure. Notice that casing does not make a difference. The names `ABC` and `abc` are considered to refer to the same variable.  
  
2.  If there is no spelling mistake, either remove the declaration of this variable or use it in another statement in the procedure.  
  
## See Also  
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)   
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)