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
  
 For more information about the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)], see [.NET Framework Client Profile](http://msdn.microsoft.com/library/f0219919-1f02-4588-8704-327a62fd91f1).  
  
### To correct this error  
  
-   Either remove the specified assembly reference from your project, or target the full [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)] instead of the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)] subset library. For information about how to target the full [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)], see [How to: Target a Version of the .NET Framework](http://msdn.microsoft.com/library/dea62d25-3d1b-492e-a6cc-b5154489800a).  
  
## See Also  
 [Target Framework and Target Platform](http://msdn.microsoft.com/library/df6517c5-edd6-4cc4-97ad-b3cdfc78e799)   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)