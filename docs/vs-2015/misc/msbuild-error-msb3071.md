---
title: "MSBuild Error MSB3071 | Microsoft Docs"
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
  - "MSBuild.Exec.AllDriveLettersMappedError"
helpviewer_keywords: 
  - "MSB3071"
ms.assetid: 8afbc6ec-e399-4f06-a30b-f33c87642ef7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3071
**All drive letters from A: to Z: are currently in use. Since the working directory "'\<path>'" is a UNC path, The "Exec" task needs a free drive letter to map the UNC path to. Disconnect from one or more shared resources to free up drive letters, or specify a local working directory before attempting this command again.**  
  
 All drive letters from A: through Z: are currently in use. Because the specified working directory is a UNC path, the `Exec` task needs a free drive letter to which to map the UNC path to.  
  
### To correct this error  
  
-   Disconnect from one or more shared resources to free drive letters  
  
-   Specify a local working directory before attempting this command again.  
  
## See Also  
 [Exec Task](http://msdn.microsoft.com/library/c9b7525a-b1c9-40fc-8bce-77a5b8f960d8)