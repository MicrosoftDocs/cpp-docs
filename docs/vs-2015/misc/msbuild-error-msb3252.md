---
title: "MSBuild Error MSB3252 | Microsoft Docs"
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
  - "MSB3252"
helpviewer_keywords: 
  - "MSB3252"
ms.assetid: 4e6982b8-84b3-4d21-94e1-05cc10bf1393
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3252
**MSB3252: The project has a reference to assembly \<name>. This assembly is not part of the .NET Framework Client Profile.  By not having this reference there may be compile or runtime errors.**  
  
 A call was made to a member in an assembly, or dependent assembly, that is not part of the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)]. Therefore, the call cannot be resolved and the application cannot be compiled.  
  
 For more information about the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)], see [.NET Framework Client Profile](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
### To correct this error  
  
-   Either remove the specified assembly reference from your project, or target the full [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)] instead of the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)] subset library. For information about how to target the full [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)], see [How to: Target a Version of the .NET Framework](../Topic/How%20to:%20Target%20a%20Version%20of%20the%20.NET%20Framework.md).  
  
## See Also  
 [Target Framework and Target Platform](../Topic/MSBuild%20Target%20Framework%20and%20Target%20Platform.md)   
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)