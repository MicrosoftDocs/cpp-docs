---
title: "MSBuild Error MSB3256 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB3256"
ms.assetid: 809ccd0a-78cd-4bf5-83a8-2fb51815ea27
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3256
**MSB3256: No assemblies were read in from the redist lists. A TargetFramework subset exclusion list could not be generated.**  
  
 A list of redistributable items (redist list) could not be found.  
  
 To generate a list of assemblies to exclude from the .NET Framework subset, two files are required: a "redist list" named FrameworkList.xml, which contains the names of redistributable items in the .NET Framework, and a "subset list" named client.xml, which contains the names of items in the .NET Framework. Because the subset definition requires both lists, if the redist list is missing, then the .NET Framework subset cannot be targeted.  
  
 The [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)] is a subset of the full [!INCLUDE[net_v35_short](../includes/net-v35-short-md.md)] run-time library. For more information about the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)], see [.NET Framework Client Profile](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
### To correct this error  
  
-   Either provide a valid redist list named FrameworkList.xml, or target the full [!INCLUDE[net_v35_short](../includes/net-v35-short-md.md)] redistributable library. For information about how to target the full [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)], see [How to: Target a Version of the .NET Framework](../Topic/How%20to:%20Target%20a%20Version%20of%20the%20.NET%20Framework.md).  
  
## See Also  
 [Target Framework and Target Platform](../Topic/MSBuild%20Target%20Framework%20and%20Target%20Platform.md)   
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)