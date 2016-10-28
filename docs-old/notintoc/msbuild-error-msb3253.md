---
title: "MSBuild Error MSB3253"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "MSB3253"
ms.assetid: d4b5eb5b-703b-4b80-aa5d-6c70ff9fe84d
caps.latest.revision: 11
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
# MSBuild Error MSB3253
**MSB3254: The assembly \<name> referenced in the project depends on \<name2> which is not contained in the .NET Framework Client Profile.**  
  
 One of the assemblies, or dependent assemblies, referenced in the project depends on another assembly that is not contained in the [!INCLUDE[net_client_v35_long](../notintoc/includes/net_client_v35_long_md.md)].  
  
 This message typically occurs when a project references a third-party control or DLL that itself references an external assembly. For example, a project uses a control that in turn uses functionality that is contained in the full [!INCLUDE[dnprdnshort](../ide/includes/dnprdnshort_md.md)]. If the application is re-targeted to [!INCLUDE[net_client_v35_long](../notintoc/includes/net_client_v35_long_md.md)] and is installed on a system that does not have [!INCLUDE[net_v35_long](../notintoc/includes/net_v35_long_md.md)], the application may not work correctly if it tries to access functionality that is not contained in the [!INCLUDE[net_client_v35_long](../notintoc/includes/net_client_v35_long_md.md)] subset.  
  
 This "error" message is actually only a warning; the application will still compile. However, it may fail later if the control or DLL refers to functionality that is located in a missing assembly.  
  
 The [!INCLUDE[net_client_v35_long](../notintoc/includes/net_client_v35_long_md.md)] is a subset of the full [!INCLUDE[dnprdnshort](../ide/includes/dnprdnshort_md.md)] 3.5 run-time library. For more information about the [!INCLUDE[net_client_v35_long](../notintoc/includes/net_client_v35_long_md.md)], see [.NET Framework Client Profile](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
### To correct this error  
  
-   Either remove the specified assembly reference from the project, or target the full [!INCLUDE[dnprdnshort](../ide/includes/dnprdnshort_md.md)] instead of the [!INCLUDE[net_client_v35_long](../notintoc/includes/net_client_v35_long_md.md)] subset library. For information about how to target the full [!INCLUDE[dnprdnshort](../ide/includes/dnprdnshort_md.md)], see [How to: Target a Version of the .NET Framework](../Topic/How%20to:%20Target%20a%20Version%20of%20the%20.NET%20Framework.md).  
  
## See Also  
 [Target Framework and Target Platform](../Topic/MSBuild%20Target%20Framework%20and%20Target%20Platform.md)   
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)