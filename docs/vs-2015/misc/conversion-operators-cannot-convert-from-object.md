---
title: "Conversion operators cannot convert from Object | Microsoft Docs"
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
  - "bc33032"
  - "vbc33032"
helpviewer_keywords: 
  - "BC33032"
ms.assetid: 877f626f-7aa1-41d8-b7ca-eb4337d012d1
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conversion operators cannot convert from Object
A conversion operator is declared with a parameter of the [Object Data Type](http://msdn.microsoft.com/library/61ea4a7c-3b3d-48d4-adc4-eacfa91779b2).  
  
 At compile time, [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] considers a predefined conversion to exist from any reference type to any type in its inheritance hierarchy, that is, any type from which it derives or which derives from it. `Object` is the universal data type in the [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)], so every type derives from `Object`.  
  
 Because the compiler considers this conversion to be already defined, it does not allow you to redefine it.  
  
 **Error ID:** BC33032  
  
### To correct this error  
  
-   Remove this operator definition entirely. It is already predefined.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)   
 [Object as the Universal Data Type (Visual Basic)](http://msdn.microsoft.com/en-us/5315bf21-2b22-45ab-98cd-5631dffbcb2f)