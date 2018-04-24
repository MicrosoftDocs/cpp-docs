---
title: "Too few type arguments to &#39;&lt;genericMethodName&gt;&#39; | Microsoft Docs"
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
  - "bc32042"
  - "vbc32042"
helpviewer_keywords: 
  - "BC32042"
ms.assetid: e887b068-4e84-4cb4-9649-94fe162a821e
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Too few type arguments to &#39;&lt;genericMethodName&gt;&#39;
A generic method has been invoked with fewer type arguments than there are type parameters.  
  
 When you invoke a generic method, you must supply one type argument for each type parameter defined by that method.  
  
 **Error ID:** BC32042  
  
### To correct this error  
  
-   Add type arguments to your type argument list so that there is one for each type parameter on the generic method you are invoking.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)