---
title: "Implicit conversion from &#39;&lt;typename1&gt;&#39; to &#39;&lt;typename2&gt;&#39; | Microsoft Docs"
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
  - "vbc42016"
  - "BC42016"
helpviewer_keywords: 
  - "BC42016"
ms.assetid: 7dabaab0-8258-4c17-927f-28e61f50bd3a
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Implicit conversion from &#39;&lt;typename1&gt;&#39; to &#39;&lt;typename2&gt;&#39;
An expression or an assignment statement takes a value of one data type and converts it to another type. Because no conversion keyword is used, the conversion is *implicit*.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42016  
  
### To correct this error  
  
-   If possible, use values of the same data type, so [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] does not need to do any conversion.  
  
-   Use `CType` or one of the other conversion keywords so that the conversion is *explicit*.  
  
## See Also  
 [Implicit and Explicit Conversions](http://msdn.microsoft.com/library/77de1659-af8a-492c-967e-e7ef60ccce66)   
 [Type Conversion Functions](http://msdn.microsoft.com/library/d9d8d165-f967-44ff-a6cd-598e4740a99e)