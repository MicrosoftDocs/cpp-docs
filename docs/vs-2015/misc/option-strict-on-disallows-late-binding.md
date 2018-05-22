---
title: "Option Strict On disallows late binding | Microsoft Docs"
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
  - "bc30574"
  - "vbc30574"
helpviewer_keywords: 
  - "BC30574"
ms.assetid: 9da4b826-2e12-4a5d-9e17-762b0b68fc9b
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On disallows late binding
[!INCLUDE[vbprvb](../includes/vbprvb-md.md)] allows implicit conversions of any data type to any other data type. However, data loss can occur if the value of one data type is converted to a data type with less precision or a smaller capacity. `Option Strict On` ensures compile-time notification of these types of conversions so they may be avoided. You cannot use `Option Strict On` with late binding.  

 **Error ID:** BC30574  
  
### To correct this error  
  
-   Modify the object declaration to use an explicit type.  
  
 \- or -  
  
-   Modify the late-bound expression to specify an explicit type.  
  
 \- or -  
  
-   Let the compiler infer a specific type.  
  
 \- or -  
  
-   Turn `Option Strict` off by removing the word `On` after it or by explicitly specifying `Off`.  
  
## See Also  
 [Type Conversion Functions](http://msdn.microsoft.com/library/d9d8d165-f967-44ff-a6cd-598e4740a99e)   
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)