---
title: "Type argument &#39;&lt;typeargumentname&gt;&#39; does not inherit from or implement the constraint type &#39;&lt;typeparametername&gt;&#39; | Microsoft Docs"
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
  - "bc32044"
  - "vbc32044"
helpviewer_keywords: 
  - "BC32044"
ms.assetid: be91f648-c07d-4991-8ed1-28b1327619c4
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type argument &#39;&lt;typeargumentname&gt;&#39; does not inherit from or implement the constraint type &#39;&lt;typeparametername&gt;&#39;
A type argument supplied to a generic type does not satisfy the inheritance or implementation constraint on its corresponding type parameter.  
  
 A constraint list imposes requirements on the type argument passed to the type parameter. The possible requirements include the following:  
  
-   The type argument must implement one or more interfaces  
  
-   The type argument must inherit from at most one class  
  
 You can combine the preceding requirements for a single type parameter. [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] cannot construct the type unless the code supplies type arguments that satisfy every constraint on every type parameter defined on the generic type.  
  
 **Error ID:** BC32044  
  
### To correct this error  
  
-   Select a type argument of a type that implements every interface specified for the type parameter, and that inherits from the specified class if there is one.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [How to: Use a Generic Class](http://msdn.microsoft.com/library/242dd2a6-86c4-4ce7-83f2-f2661803f752)