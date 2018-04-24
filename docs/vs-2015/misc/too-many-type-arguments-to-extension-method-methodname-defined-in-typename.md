---
title: "Too many type arguments to extension method &#39;&lt;methodName&gt;&#39; defined in &#39;&lt;typeName&gt;&#39; | Microsoft Docs"
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
  - "bc36591"
  - "vbc36591"
helpviewer_keywords: 
  - "BC36591"
ms.assetid: 504c9b1f-f511-4198-8970-136d1a1bdafe
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Too many type arguments to extension method &#39;&lt;methodName&gt;&#39; defined in &#39;&lt;typeName&gt;&#39;
A generic extension method has been invoked with more type arguments than there are type parameters.  
  
 When you invoke a generic method, you must supply one type argument for each type parameter defined by that method.  
  
 **Error ID:** BC36591  
  
### To correct this error  
  
-   Remove type arguments from your type argument list so that there is one for each type parameter defined by the generic method that you are invoking.  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/b8020aae-374d-46a9-bcb7-8cc2390b93b6)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)