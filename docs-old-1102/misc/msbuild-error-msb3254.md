---
title: "MSBuild Error MSB3254"
ms.custom: ""
ms.date: "10/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB3254"
ms.assetid: cb9636b2-d9b3-466d-959c-14c7c8017a78
caps.latest.revision: 11
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
# MSBuild Error MSB3254
**MSB3254: The file \<name> will be ignored because it cannot be read. This file was either passed in to InstalledAssemblySubsetTables or was found by searching the \<name> folder in the TargetFrameworkDirectories.**  
  
 This error occurs when the [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] XML file, client.xml, cannot be read. The file is unreadable because of corruption, locking, or some other problem.  
  
 The [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] is a subset of the full [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] 3.5 run-time library. For more information about the [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], see [.NET Framework Client Profile](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
 Procedures  
  
### To correct this error  
  
-   Ensure that you have full permissions and full access to the file, or reinstall the [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] redistributable run-time library to replace the corrupted file.  
  
## See Also  
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)