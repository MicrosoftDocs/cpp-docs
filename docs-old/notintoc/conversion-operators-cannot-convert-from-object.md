---
title: "Conversion operators cannot convert from Object"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc33032"
  - "vbc33032"
helpviewer_keywords: 
  - "BC33032"
ms.assetid: 877f626f-7aa1-41d8-b7ca-eb4337d012d1
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
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
# Conversion operators cannot convert from Object
A conversion operator is declared with a parameter of the [Object Data Type](../Topic/Object%20Data%20Type.md).  
  
 At compile time, [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] considers a predefined conversion to exist from any reference type to any type in its inheritance hierarchy, that is, any type from which it derives or which derives from it. `Object` is the universal data type in the [!INCLUDE[dnprdnshort](../ide/includes/dnprdnshort_md.md)], so every type derives from `Object`.  
  
 Because the compiler considers this conversion to be already defined, it does not allow you to redefine it.  
  
 **Error ID:** BC33032  
  
### To correct this error  
  
-   Remove this operator definition entirely. It is already predefined.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Object as the Universal Data Type (Visual Basic)](assetId:///5315bf21-2b22-45ab-98cd-5631dffbcb2f)