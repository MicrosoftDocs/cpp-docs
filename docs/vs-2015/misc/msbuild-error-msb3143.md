---
title: "MSBuild Error MSB3143 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.CopyPackageError"
helpviewer_keywords: 
  - "MSB3143"
ms.assetid: b4278c8c-31df-4b4f-9ef9-7b9327e8ee77
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3143
**MSB3143: An error occurred trying to copy '\<file>' for item '\<package>': '\<error>'**  
  
 This error occurs when bootstrapper packages are copied to the build output directory. Possible causes for this error could be:  
  
-   You do not have permission to copy to the build output directory.  
  
-   The disk is full.  
  
 These are the same potential reasons that file.copy or directory.createdirectory fail.  
  
## See Also  
 [Product and Package Schema Reference](http://msdn.microsoft.com/library/5a74878f-b896-4cca-b968-98d00fe78fb0)   
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)