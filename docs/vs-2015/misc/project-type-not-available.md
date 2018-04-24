---
title: "Project Type Not Available | Microsoft Docs"
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
  - "vs.projecttypenotavailable"
helpviewer_keywords: 
  - "Project Type Not Available error"
ms.assetid: a579fe75-efa2-4dd0-b5d7-ae106d3aedbd
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Project Type Not Available
This dialog box appears with the error "The project \<project> cannot be opened because its project type \<project type> is not supported by this version of the application."  
  
## Workaround  
  
-   This dialog box appears because a product or product version required to open the specified file was not found. It is common for this error to occur when attempting to open a project file that cannot be opened with the installed version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)]. For example, attempting to open a [!INCLUDE[csprcs](../includes/csprcs-md.md)] project file with [!INCLUDE[vbprvbxprlong](../includes/vbprvbxprlong-md.md)] will open this dialog box.  
  
#### To work around this error  
  
-   Install the correct version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)].  
  
## See Also  
 [Porting, Migrating, and Upgrading Visual Studio Projects](http://msdn.microsoft.com/library/bee759bd-6ff5-4c2e-913a-ea7d3c906c29)   
 [Project Properties Reference](http://msdn.microsoft.com/library/eec49aec-5474-48a7-889d-709045b9a475)