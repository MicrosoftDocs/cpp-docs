---
title: "MSBuild Error MSB3161 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.CircularDependency"
helpviewer_keywords: 
  - "MSB3161"
ms.assetid: 2871d071-7c3a-4103-8b14-6ee56564a7f7
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3161
**MSB3161: A circular dependency was detected between the following built packages: '\<package>'**  
  
 This warning is generated when there is a circular dependency in the graph of the bootstrapper package dependencies (for example: A→B→C→A). In such cases the bootstrapper cannot determine which package to install first.  
  
### To correct this error  
  
-   Remove the circular dependency, either by changing the dependencies described in the bootstrapper package files or by not installing one of the interdependent packages.  
  
## See Also  
 [Product and Package Schema Reference](http://msdn.microsoft.com/library/5a74878f-b896-4cca-b968-98d00fe78fb0)   
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)