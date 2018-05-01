---
title: "Generic type &#39;&lt;generictypename&gt;&#39; cannot be imported more than once | Microsoft Docs"
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
  - "BC32086"
  - "vbc32086"
helpviewer_keywords: 
  - "BC32086"
ms.assetid: d93bae4b-3224-4a6e-a072-8ce231084519
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Generic type &#39;&lt;generictypename&gt;&#39; cannot be imported more than once
An [Imports Statement (.NET Namespace and Type)](http://msdn.microsoft.com/library/7062f8aa-d890-4232-9eed-92836e13fb6e) specifies a generic type that has already been imported with different type parameterization.  
  
 You can declare multiple constructed types from a generic type, because you do not redefine the generic type by declaring a constructed type. However, if you import a generic type more than once, that is the equivalent of multiple definitions.  
  
 **Error ID:** BC32086  
  
### To correct this error  
  
1.  If the source file containing this `Imports` statement also contains another `Imports` statement specifying the same generic type, remove one of them.  
  
2.  If you need to import the same generic type with different type parameterizations, use multiple source files.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)