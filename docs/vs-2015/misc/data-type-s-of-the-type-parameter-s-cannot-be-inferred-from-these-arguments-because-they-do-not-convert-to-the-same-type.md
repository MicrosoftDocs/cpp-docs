---
title: "Data type(s) of the type parameter(s) cannot be inferred from these arguments because they do not convert to the same type | Microsoft Docs"
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
  - "vbc36659"
  - "bc36659"
  - "vbc36656"
  - "bc36656"
helpviewer_keywords: 
  - "BC36659"
  - "BC36656"
ms.assetid: 0aa809da-3b44-4d78-b3c5-0a148bdf7ce8
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Data type(s) of the type parameter(s) cannot be inferred from these arguments because they do not convert to the same type
Data type(s) of the type parameter(s) cannot be inferred from these arguments because they do not convert to the same type. Specifying the data type(s) explicitly might correct this error.  
  
 This error occurs when overload resolution has failed. It occurs as a subordinate message that states why a particular overload candidate has been eliminated. The error explains that the compiler cannot use type inference to find data types for the type parameters that are compatible with the arguments.  
  
> [!NOTE]
>  When specifying arguments is not an option (for example, for query operators in query expressions), the error message appears without the second sentence.  
  
 For more information and examples, see [Data type(s) of the type parameter(s) in method '\<methodname>' cannot be inferred from these arguments because they do not convert to the same type](../misc/data-type-s-of-the-type-parameter-s-in-method-methodname-cannot-be-inferred-from-these-arguments-because-they-do-not-convert-to-the-same-type.md).  
  
 **Error ID:** BC36659 and BC36656  
  
## See Also  
 [Relaxed Delegate Conversion](http://msdn.microsoft.com/library/64f371d0-5416-4f65-b23b-adcbf556e81c)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)   
 [Overload Resolution](http://msdn.microsoft.com/library/766115d1-4352-45fb-859f-6063e0de0ec0)