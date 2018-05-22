---
title: "&#39;NotOverridable&#39; cannot be specified on methods that do not override another method | Microsoft Docs"
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
  - "vbc31088"
  - "bc31088"
helpviewer_keywords: 
  - "BC31088"
ms.assetid: 0241197c-51fa-48b8-9a2a-4205d25641d3
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;NotOverridable&#39; cannot be specified on methods that do not override another method
Properties and methods are `NotOverridable` by default. The `NotOverridable` modifier can only be used on methods that override another property or method.  
  
 **Error ID:** BC31088  
  
### To correct this error  
  
-   Remove the `NotOverridable` modifier from properties and methods that do not override another member.  
  
## See Also  
 [Overrides](http://msdn.microsoft.com/library/9f5e6144-ce10-465e-842b-1a8f8760af90)   
 [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042)   
 [NotOverridable](http://msdn.microsoft.com/library/66ec6984-f5f5-4857-b362-6a3907aaf9e0)   
 [Overridable](http://msdn.microsoft.com/library/612581e7-8a4c-4a5d-beff-3402fffa6f35)