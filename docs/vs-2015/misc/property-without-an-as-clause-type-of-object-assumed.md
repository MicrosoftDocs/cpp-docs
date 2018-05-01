---
title: "Property without an &#39;As&#39; clause; type of Object assumed | Microsoft Docs"
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
  - "BC42022"
  - "vbc42022"
helpviewer_keywords: 
  - "BC42022"
ms.assetid: 3379692b-8278-4488-878a-0afb76e554b1
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Property without an &#39;As&#39; clause; type of Object assumed
A property declaration does not specify an `As` clause.  
  
 An `As` clause identifies a data type to be associated with a programming element. In a [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38), it specifies the data type of the value that the property's `Get` procedure returns to the calling code. If you do not include an `As` clause in the `Property` statement, the property's data type defaults to `Object`.  
  
 By default, this message is a warning. For more information about hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42022  
  
### To correct this error  
  
-   Include an `As` clause in the `Property` statement to specify the property's data type.  
  
## See Also  
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)   
 [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38)   
 [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94)