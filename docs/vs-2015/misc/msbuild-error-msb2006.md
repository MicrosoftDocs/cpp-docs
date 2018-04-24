---
title: "MSBuild Error MSB2006 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.UnrecognizedElement"
helpviewer_keywords: 
  - "MSB2006"
ms.assetid: 89dc1b89-1621-46bc-9fe6-6d98cbcbebc8
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB2006
**The project file does not contain the root element \<{0}>.**  
  
 The root element name is not spelled correctly or is not recognized by [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)].  
  
### To correct this error  
  
-   Check the spelling of the element name.  
  
-   Check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in which it was created, save it, and then attempt to convert it again.  
  
## See Also  
 [Project File Schema Reference](http://msdn.microsoft.com/library/d9a68146-1f43-4621-ac78-2c8c3f400936)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)