---
title: "MSBuild Error MSB3255 | Microsoft Docs"
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
  - "MSB3255"
ms.assetid: baac844e-a662-4421-bed1-2bc98f2e1cdf
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3255
**MSB3255: Could not find any Target Framework Subset files in the Target Framework Directories or at the locations specified in the InstalledAssemblySubsetTables.**  
  
 This error occurs when a name is passed into the <xref:Microsoft.Build.Tasks.ResolveAssemblyReference.FullTargetFrameworkSubsetNames%2A> property, but a subset with that name cannot be found.  
  
 The [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)] is a subset of the full [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)] 3.5 run-time library. For more information about the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)], see [.NET Framework Client Profile](http://msdn.microsoft.com/library/f0219919-1f02-4588-8704-327a62fd91f1).  
  
 Procedures  
  
### To correct this error  
  
-   Put a copy of the subset file in the target framework folder or in one of the locations specified in <xref:Microsoft.Build.Tasks.ResolveAssemblyReference.InstalledAssemblySubsetTables%2A>.  
  
## See Also  
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)