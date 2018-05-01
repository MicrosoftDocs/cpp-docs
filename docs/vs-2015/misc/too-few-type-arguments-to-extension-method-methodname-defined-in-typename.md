---
title: "Too few type arguments to extension method &#39;&lt;methodname&gt;&#39; defined in &#39;&lt;typename&gt;&#39; | Microsoft Docs"
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
  - "vbc36590"
  - "bc36590"
helpviewer_keywords: 
  - "BC36590"
ms.assetid: 8a9dd2d3-d8af-4ef5-8427-eb6e83d16230
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Too few type arguments to extension method &#39;&lt;methodname&gt;&#39; defined in &#39;&lt;typename&gt;&#39;
A generic extension method has been invoked with fewer type arguments than there are type parameters in the method definition.  
  
 When you invoke a generic method, you must supply one type argument for each type parameter defined by that method.  
  
 **Error ID:** BC36590  
  
### To correct this error  
  
-   Add type arguments to your type argument list so that there is one for each type parameter of the extension method that you are invoking.  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/b8020aae-374d-46a9-bcb7-8cc2390b93b6)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)