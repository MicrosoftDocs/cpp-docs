---
title: "Option Strict On disallows late binding"
ms.custom: ""
ms.date: "2015-07-20"
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
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Option Strict On disallows late binding
[!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] allows implicit conversions of any data type to any other data type. However, data loss can occur if the value of one data type is converted to a data type with less precision or a smaller capacity. `Option Strict On` ensures compile-time notification of these types of conversions so they may be avoided. You cannot use `Option Strict On` with late binding.  

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
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)   
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)