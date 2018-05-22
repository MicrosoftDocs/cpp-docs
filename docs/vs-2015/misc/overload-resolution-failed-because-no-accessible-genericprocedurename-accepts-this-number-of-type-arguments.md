---
title: "Overload resolution failed because no accessible &#39;&lt;genericprocedurename&gt;&#39; accepts this number of type arguments | Microsoft Docs"
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
  - "bc32087"
  - "vbc32087"
helpviewer_keywords: 
  - "BC32087"
ms.assetid: a3eaafd3-80f6-4b7d-9b75-47b043fe17b5
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Overload resolution failed because no accessible &#39;&lt;genericprocedurename&gt;&#39; accepts this number of type arguments
A call to an overloaded generic procedure cannot be resolved because the compiler cannot access any overloaded version with the appropriate number of type parameters.  
  
 When you call a generic procedure, you must supply one type argument for each type parameter. Alternatively, you can supply no type arguments at all and let the compiler attempt to do *type inference*. For more information, see "Type Inference" in [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5).  
  
 **Error ID:** BC32087  
  
### To correct this error  
  
1.  Ensure that the version you intend to call is accessible by the calling code. See [Access Levels in Visual Basic](http://msdn.microsoft.com/library/6e06c1ab-fd78-47f0-83a8-1152780b5e1a).  
  
2.  Add or remove type arguments from your calling code so that the type argument list matches the type parameter list of the version you intend to call.  
  
     -or-  
  
     Remove all type arguments from your calling code and let the compiler attempt to do type inference. Be aware that type inference can fail if there are conflicts or ambiguities.  
  
## See Also  
 [Overloaded Properties and Methods](http://msdn.microsoft.com/library/b686fb97-e7d7-4001-afaa-6650cba08f0d)   
 [Overload Resolution](http://msdn.microsoft.com/library/766115d1-4352-45fb-859f-6063e0de0ec0)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)