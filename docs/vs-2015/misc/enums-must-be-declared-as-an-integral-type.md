---
title: "Enums must be declared as an integral type | Microsoft Docs"
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
  - "bc30650"
  - "vbc30650"
helpviewer_keywords: 
  - "BC30650"
ms.assetid: 566aa501-d283-4c1f-b494-3bc5fbe80e04
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Enums must be declared as an integral type
The only valid types you can use in enumerations are `SByte`, `Byte`, `Short`, `UShort`, `Integer`, `UInteger`, `Long`, and `ULong`. No other data types can be used.  
  
 **Error ID:** BC30650  
  
### To correct this error  
  
-   Specify a data type of `SByte`, `Byte`, `Short`, `UShort`, `Integer`, `UInteger`, `Long`, or `ULong`.  
  
## See Also  
 [Data Types](http://msdn.microsoft.com/library/e975cdb6-64d8-4a4a-ae27-f3b3ed198ae0)   
 [Enum Statement](http://msdn.microsoft.com/library/a45e51f1-65ff-48e1-bf32-79130f137377)