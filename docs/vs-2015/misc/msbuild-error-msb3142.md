---
title: "MSBuild Error MSB3142 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.CopyError"
helpviewer_keywords: 
  - "MSB3142"
ms.assetid: acca7437-6c72-446c-a6b5-a1c051b6855f
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3142
**MSB3142: An error occurred trying to copy '\<file>' to '\<folder>': '\<error>'**  
  
 This error is generated when copying setup.bin to the build output directory. Possible causes for this error could be:  
  
-   You do not have permission to copy to the output directory.  
  
-   The disk is full.  
  
 These are the same potential reasons that file.copy or directory.createdirectory fail.  
  
## See Also  
 [Product and Package Schema Reference](http://msdn.microsoft.com/library/5a74878f-b896-4cca-b968-98d00fe78fb0)