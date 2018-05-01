---
title: "MSBuild Error MSB2005 | Microsoft Docs"
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
  - "MSBuild.NoRootProjectElement"
helpviewer_keywords: 
  - "MSB2005"
ms.assetid: 62db2963-3811-4a92-8f4d-ff9145cb53ef
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB2005
**Element \<{0}> cannot contain attributes.**  
  
 The element specified in the message cannot contain attributes.  
  
### To correct this error  
  
-   Delete the attributes from the specified element.  
  
-   Check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in which it was created, save it, and then attempt to convert it again.  
  
## See Also  
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)