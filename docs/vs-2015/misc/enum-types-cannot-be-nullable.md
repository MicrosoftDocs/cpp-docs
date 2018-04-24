---
title: "Enum types cannot be nullable | Microsoft Docs"
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
  - "vbc32129"
  - "bc32129"
helpviewer_keywords: 
  - "BC32129"
ms.assetid: 9e0fe5c9-72c7-4905-b177-d00cc3469ea9
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Enum types cannot be nullable
The underlying type that is used to declare an enumeration cannot be nullable. For example, the following code causes this error:  
  
```vb  
'' Not valid.  
' Enum exampleEnum As Integer?  
'     Member declarations.  
' End Enum  
```  
  
 **Error ID:** BC32129  
  
### To correct this error  
  
-   Do not use a nullable underlying type in an `Enum` declaration.  
  
## See Also  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)   
 [Enum Statement](../Topic/Enum%20Statement%20\(Visual%20Basic\).md)