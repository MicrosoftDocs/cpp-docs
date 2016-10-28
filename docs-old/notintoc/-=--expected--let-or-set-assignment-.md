---
title: "&#39;=&#39; expected (Let or Set assignment)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc32020"
  - "vbc32020"
helpviewer_keywords: 
  - "BC32020"
ms.assetid: 1b12f082-e502-4524-9326-b9b372670243
caps.latest.revision: 12
ms.author: "billchi"
manager: "douge"
---
# &#39;=&#39; expected (Let or Set assignment)
A `Let` or `Set` assignment statement does not include an equal sign (`=`).  
  
 The `Let` and `Set` assignment statements are not supported in the current version of Visual Basic. The compiler can determine the type of assignment from the data type of the programming element that is to receive the value. A *value type* assignment replaces the `Let` statement, and a *reference type* assignment replaces the former `Set` statement.  
  
 The [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md) is used in property definitions and has no relation to the `Set` assignment statement.  
  
 **Error ID:** BC32020  
  
### To correct this error  
  
-   Use a standard assignment statement, including an equal sign (`=`) and a value to be assigned to the variable or property.  
  
## See Also  
 [Programming Element Support Changes Summary](assetId:///0483590a-6309-449c-a2fa-effa26a03b95)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)   
 [NotInBuild:Assignment Statements](assetId:///eb4f91e9-fbbf-45ca-b21d-e8ae069de4f9)