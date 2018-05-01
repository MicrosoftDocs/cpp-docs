---
title: "Inappropriate use of &lt;keyword&gt; keyword in a module | Microsoft Docs"
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
  - "vbc42028"
  - "BC42028"
helpviewer_keywords: 
  - "BC42028"
ms.assetid: a9bc1e9d-ba2c-4a71-b147-0fb66f670316
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Inappropriate use of &lt;keyword&gt; keyword in a module
Modules do not have instances, support inheritance, or implement interfaces. Therefore, the following keywords do not apply to a module declaration:  
  
-   [MustInherit](http://msdn.microsoft.com/library/b8f05185-90e3-4dd7-adc2-90d852fab5b4)  
  
-   [NotInheritable](http://msdn.microsoft.com/library/5c4da7c9-9562-4653-a947-1972e992f9f9)  
  
-   [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042)  
  
-   [Private](http://msdn.microsoft.com/library/aba74a2e-5824-4613-bf63-b9ec7787f4e6)  
  
-   [Protected](http://msdn.microsoft.com/library/74ad3d56-309f-49d2-b60c-1d0157d010e8)  
  
-   [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6)  
  
-   [Shared](http://msdn.microsoft.com/library/2bf7cf2c-b0dd-485e-8749-b5d674dab4cd)  
  
-   [Static](http://msdn.microsoft.com/library/19013910-4658-47b6-a22e-1744b527979e)  
  
 The only keywords supported in a [Module Statement](http://msdn.microsoft.com/library/a1243afc-14a5-45df-95d5-51118aeac362) are [Public](http://msdn.microsoft.com/library/284c9e1b-ed23-499b-9bc9-ad87c11485a5) and [Friend](http://msdn.microsoft.com/library/b664605e-1c79-4728-b996-aa59c50846bc).  
  
 In addition, you cannot use the [Implements](http://msdn.microsoft.com/library/5252cdf9-964d-4fc6-af0f-0449b7126b5a) statement or the [Inherits Statement](http://msdn.microsoft.com/library/9e6fe042-9af3-4341-8093-fc3537770cf2) in the statement block of the module.  
  
 By default, this message is a warning. For more information about how to hide warnings or treat warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42028  
  
### To correct this error  
  
-   If you intend this programming element to be a module, use only the `Public` or `Friend` keyword in its declaration. By default, a module uses to `Friend` if you do not specify its access level.  
  
-   If you intend to create instances of this programming element, declare it as a class. You can then use the keywords that apply to a class declaration.  
  
## See Also  
 [Class Statement](http://msdn.microsoft.com/library/f2664f38-eb5a-4d4b-a374-1d041521fb6c)