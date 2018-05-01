---
title: "Too few type arguments | Microsoft Docs"
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
  - "vbc36578"
  - "bc36578"
helpviewer_keywords: 
  - "BC36578"
ms.assetid: 881b3009-0c9e-4676-b172-c6aabd14ed14
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Too few type arguments
A generic method has been invoked with fewer type arguments than there are type parameters.  
  
 When you invoke a generic method, you must supply one type argument for each type parameter defined by that method.  
  
 **Error ID:** BC36578  
  
### To correct this error  
  
-   Add type arguments to your type argument list so that there is one for each type parameter of the generic method that you are invoking.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)