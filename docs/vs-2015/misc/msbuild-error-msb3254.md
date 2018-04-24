---
title: "MSBuild Error MSB3254 | Microsoft Docs"
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
  - "MSB3254"
ms.assetid: cb9636b2-d9b3-466d-959c-14c7c8017a78
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3254
**MSB3254: The file \<name> will be ignored because it cannot be read. This file was either passed in to InstalledAssemblySubsetTables or was found by searching the \<name> folder in the TargetFrameworkDirectories.**  
  
 This error occurs when the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)] XML file, client.xml, cannot be read. The file is unreadable because of corruption, locking, or some other problem.  
  
 The [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)] is a subset of the full [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)] 3.5 run-time library. For more information about the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)], see [.NET Framework Client Profile](http://msdn.microsoft.com/library/f0219919-1f02-4588-8704-327a62fd91f1).  
  
 Procedures  
  
### To correct this error  
  
-   Ensure that you have full permissions and full access to the file, or reinstall the [!INCLUDE[net_client_v35_long](../includes/net-client-v35-long-md.md)] redistributable run-time library to replace the corrupted file.  
  
## See Also  
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)