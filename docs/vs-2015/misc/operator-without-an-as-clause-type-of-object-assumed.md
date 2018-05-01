---
title: "Operator without an &#39;As&#39; clause; type of Object assumed | Microsoft Docs"
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
  - "vbc41005"
  - "bc41005"
helpviewer_keywords: 
  - "BC41005"
ms.assetid: 42be84ed-7aa6-4ac0-9dd4-663e90f13e09
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operator without an &#39;As&#39; clause; type of Object assumed
An operator procedure does not specify an `As` clause.  
  
 An `As` clause identifies a data type to be associated with a programming element. In an [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5), it specifies the data type of the value the operator procedure returns to the calling code. If you do not include an `As` clause in the `Operator` statement, the return data type defaults to `Object`.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC41005  
  
### To correct this error  
  
-   Include an `As` clause in the `Operator` statement to specify the return data type.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)