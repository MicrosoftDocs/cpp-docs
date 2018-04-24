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
 [Extension Methods](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)