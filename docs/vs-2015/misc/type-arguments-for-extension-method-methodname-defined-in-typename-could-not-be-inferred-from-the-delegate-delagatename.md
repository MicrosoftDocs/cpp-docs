---
title: "Type arguments for extension method &#39;&lt;methodName&gt;&#39; defined in &#39;&lt;typeName&gt;&#39; could not be inferred from the delegate &#39;&lt;delagateName&gt;&#39; | Microsoft Docs"
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
  - "bc36581"
  - "vbc36581"
helpviewer_keywords: 
  - "BC36581"
ms.assetid: 2bb9ca8d-7293-40e9-9285-e20b8254b3af
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type arguments for extension method &#39;&lt;methodName&gt;&#39; defined in &#39;&lt;typeName&gt;&#39; could not be inferred from the delegate &#39;&lt;delagateName&gt;&#39;
An assignment statement uses `AddressOf` to assign the address of a generic extension method to a delegate, but it does not supply any type arguments to the extension method.  
  
 Normally, when you invoke a generic method, you supply a type argument for each type parameter that the generic method defines. If you do not supply any type arguments, the compiler attempts to infer the types to be passed to the type parameters. If the context does not provide enough information for the compiler to infer the types, an error is generated.  
  
 **Error ID:** BC36581  
  
### To correct this error  
  
-   In the `AddressOf` expression, specify the type arguments for the extension method.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [AddressOf Operator](http://msdn.microsoft.com/library/8105a59d-60d8-4ab5-b221-5899cdfacbf4)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Extension Methods](http://msdn.microsoft.com/library/b8020aae-374d-46a9-bcb7-8cc2390b93b6)