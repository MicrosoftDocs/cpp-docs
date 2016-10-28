---
title: "Project Type Not Available"
ms.custom: ""
ms.date: "10/20/2016"
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
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Project Type Not Available
This dialog box appears with the error "The project \<project> cannot be opened because its project type \<project type> is not supported by this version of the application."  
  
## Workaround  
  
-   This dialog box appears because a product or product version required to open the specified file was not found. It is common for this error to occur when attempting to open a project file that cannot be opened with the installed version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. For example, attempting to open a [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] project file with [!INCLUDE[vbprvbxprlong](../misc/includes/vbprvbxprlong_md.md)] will open this dialog box.  
  
#### To work around this error  
  
-   Install the correct version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## See Also  
 [Porting, Migrating, and Upgrading Visual Studio Projects](../Topic/Porting,%20Migrating,%20and%20Upgrading%20Visual%20Studio%20Projects.md)   
 [Project Properties Reference](../Topic/Project%20Properties%20Reference.md)