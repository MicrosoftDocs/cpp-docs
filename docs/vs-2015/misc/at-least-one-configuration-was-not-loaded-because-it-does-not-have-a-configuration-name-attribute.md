---
title: "At least one configuration was not loaded because it does not have a configuration name attribute | Microsoft Docs"
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
  - "vs.tasklisterror.projfile_nameless_config"
ms.assetid: 711f7253-308b-44e0-b8bc-ca5c16536a2c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# At least one configuration was not loaded because it does not have a configuration name attribute
Each `<Config>` section in a .csproj or .vbproj file must have a Name attribute that defines a unique name for that configuration. This diagnostic indicates that the Name attribute is missing. If the Name attribute on a Configuration is missing, then that configuration will not be loaded into the project.  
  
 This error is most likely caused by editing the project file by hand.  
  
 **To correct this error**  
  
-   Insert a a configuration name right after the `<Config>` line in the project file.  
  
    ```  
    Name = "someconfigname"  
    ```  
  
     A typical configuration name is `Debug` or `Release`.  
  
## See Also  
 [Project Files](../ide/project-files.md)   
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)