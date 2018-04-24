---
title: "Dependency &#39;dependency1&#39; of dependency &#39; dependency2&#39; is not an assembly | Microsoft Docs"
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
  - "vs.tasklisterror.notcomplusassembly2"
ms.assetid: e3b96601-458e-40de-81ea-ddcae9b42996
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Dependency &#39;dependency1&#39; of dependency &#39; dependency2&#39; is not an assembly
The project system has determined that a particular dependency (dependency1) of an assembly (dependency2) is not a .NET assembly.  
  
 **To correct this error**  
  
-   Reinstall [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] (if the assembly came with [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] or the .NET Framework).  
  
     \- or -  
  
-   Reinstall the appropriate third-party control.  
  
     This error will not prevent the project from building. However, a run-time error is possible.  
  
## See Also  
 [Troubleshooting Broken References](http://msdn.microsoft.com/library/00a9ade9-652e-40de-8ada-85f63cd183ee)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](http://msdn.microsoft.com/en-us/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/en-us/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)