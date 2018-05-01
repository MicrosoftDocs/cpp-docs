---
title: "Statement cannot appear within an interface body (Visual Basic Error) | Microsoft Docs"
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
  - "bc30604"
  - "vbc30604"
helpviewer_keywords: 
  - "BC30604"
ms.assetid: ce4759fe-5e49-43ad-8405-a3f46ed0a36f
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Statement cannot appear within an interface body (Visual Basic Error)
An unexpected language construct was encountered. It is assumed that an `End Interface` construct is missing and that any source code after this point is outside the interface.  
  
 **Error ID:** BC30604  
  
### To correct this error  
  
1.  Verify the syntax of the code used inside the interface definition.  
  
2.  Make sure that the interface definition ends with an `End Interface` construct.  
  
## See Also  
 [Interfaces](http://msdn.microsoft.com/library/61b06674-12c9-430b-be68-cc67ecee1f5b)   
 [Interface Statement](http://msdn.microsoft.com/library/8997af73-bda3-4f79-bd41-ca396b610260)